/*
** Automatically generated from `snapshots.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module snapshots. */
/* :- implementation. */

/*
INIT mercury__snapshots__init
ENDINIT
*/

#include "snapshots.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "demangle.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "globals.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 74 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1];

#line 77 "snapshots.c"
static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0;

#line 80 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5];

#line 83 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_0_0[5];

#line 86 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_0_0;

#line 89 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1];

#line 92 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1];

#line 95 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1];

#line 98 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1];

#line 101 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3];

#line 104 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3];

#line 107 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0;

#line 110 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1];

#line 113 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1];

#line 116 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1];

#line 119 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1];

#line 122 "snapshots.c"
static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0;

#line 125 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0;

#line 128 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4];

#line 131 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4];

#line 134 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_group_0_0;

#line 137 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1];

#line 140 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1];

#line 143 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1];

#line 146 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1];

#line 149 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0;

#line 152 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1;

#line 155 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_value_ordered_major_axis_0[2];

#line 158 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_name_ordered_major_axis_0[2];

#line 161 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_major_axis_0[2];

#line 164 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0;

#line 167 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4];

#line 170 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_snapshot_options_0_0[4];

#line 173 "snapshots.c"
static const MR_DuArgLocn snapshots__snapshots__field_locns_snapshot_options_0_0[4];

#line 176 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_snapshot_options_0_0;

#line 179 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1];

#line 182 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1];

#line 185 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1];

#line 188 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1];

#line 191 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
#line 194 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 196 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 199 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
#line 202 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 204 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 206 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 209 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
#line 212 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 214 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 217 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
#line 220 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 222 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 224 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 227 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
#line 230 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 232 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 235 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
#line 238 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 240 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 242 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 245 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
#line 248 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 250 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 253 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
#line 256 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 258 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 260 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 263 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
#line 266 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 268 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 271 "snapshots.c"
static void MR_CALL 
snapshots____Compare____group_0_0_10001(
#line 274 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 276 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 278 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 281 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
#line 284 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 286 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 289 "snapshots.c"
static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
#line 292 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 294 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 296 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 299 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
#line 302 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 304 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 307 "snapshots.c"
static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
#line 310 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 312 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 314 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 317 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
#line 320 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 322 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2);

#line 325 "snapshots.c"
static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
#line 328 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 330 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 332 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3);

#line 356 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
#line 356 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 355 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
#line 355 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 355 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
#line 334 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 334 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 334 "snapshots.m"
  MR_Word * snapshots__AddrOfGroups_39);

#line 548 "snapshots.m"
static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
#line 548 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 548 "snapshots.m"
  MR_Word snapshots__List_6,
#line 548 "snapshots.m"
  MR_Word * snapshots__AddrOfUpto_23,
#line 548 "snapshots.m"
  MR_Word * snapshots__After_8);

#line 243 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
#line 243 "snapshots.m"
  MR_Word snapshots__Stream_8,
#line 243 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 243 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_10,
#line 243 "snapshots.m"
  MR_Word snapshots__SizeMap_11,
#line 243 "snapshots.m"
  MR_Word * snapshots__AddrOfAllocCounts_32);

#line 548 "snapshots.m"
static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
#line 548 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 548 "snapshots.m"
  MR_Word snapshots__List_6,
#line 548 "snapshots.m"
  MR_Word * snapshots__Upto_7,
#line 548 "snapshots.m"
  MR_Word * snapshots__After_8);

#line 86 "snapshots.m"
static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
#line 86 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 86 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 84 "snapshots.m"
static void MR_CALL 
snapshots____Compare____size_map_0_0(
#line 84 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 84 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 94 "snapshots.m"
static void MR_CALL 
snapshots____Compare____major_axis_0_0(
#line 94 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 94 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_1,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 71 "snapshots.m"
static void MR_CALL 
snapshots____Compare____group_0_0(
#line 71 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 71 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 43 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
#line 43 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 43 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 60 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
#line 60 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 60 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 48 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
#line 48 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 48 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 45 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
#line 45 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3);

#line 45 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2);

#line 538 "snapshots.m"
static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void);

#line 534 "snapshots.m"
static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
#line 534 "snapshots.m"
  MR_Integer snapshots__N_4,
#line 534 "snapshots.m"
  MR_Integer snapshots__Total_5);

#line 525 "snapshots.m"
static void MR_CALL 
snapshots__sum_counts_5_p_0(
#line 525 "snapshots.m"
  MR_Word snapshots__Site_6,
#line 525 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 525 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 525 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 525 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

#line 519 "snapshots.m"
static void MR_CALL 
snapshots__sum_groups_5_p_0(
#line 519 "snapshots.m"
  MR_Word snapshots__Group_6,
#line 519 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 519 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 519 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 519 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

#line 511 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_words_3_p_0(
#line 511 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 511 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 511 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 503 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_type_3_p_0(
#line 503 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 503 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 503 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 495 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
#line 495 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 495 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 495 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 488 "snapshots.m"
static void MR_CALL 
snapshots__group_by_words_3_p_0(
#line 488 "snapshots.m"
  MR_Word snapshots__GroupA_4,
#line 488 "snapshots.m"
  MR_Word snapshots__GroupB_5,
#line 488 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 451 "snapshots.m"
static void MR_CALL 
snapshots__output_site_7_p_0(
#line 451 "snapshots.m"
  MR_Word snapshots__MajorAxis_8,
#line 451 "snapshots.m"
  MR_Integer snapshots__TotalCells_9,
#line 451 "snapshots.m"
  MR_Integer snapshots__TotalWords_10,
#line 451 "snapshots.m"
  MR_Word snapshots__Single_11,
#line 451 "snapshots.m"
  MR_Word snapshots__AllocCounts_12);

#line 445 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0_1(
#line 445 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 445 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 445 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 445 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 404 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0(
#line 404 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 404 "snapshots.m"
  MR_Integer snapshots__TotalCells_10,
#line 404 "snapshots.m"
  MR_Integer snapshots__TotalWords_11,
#line 404 "snapshots.m"
  MR_Word snapshots__Group_12,
#line 404 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
#line 404 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29);

#line 387 "snapshots.m"
static void MR_CALL 
snapshots__output_column_names_3_p_0(
#line 387 "snapshots.m"
  MR_Word snapshots__Options_4);

#line 384 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
#line 384 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 384 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 384 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 374 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
#line 374 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 374 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 374 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 369 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0(
#line 369 "snapshots.m"
  MR_Word snapshots__Options_5,
#line 369 "snapshots.m"
  MR_Word snapshots__Grouped_6);

#line 356 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_2(
#line 356 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 355 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_1(
#line 355 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 355 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0(
#line 334 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 334 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 334 "snapshots.m"
  MR_Word * snapshots__Groups_6);

#line 273 "snapshots.m"
static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
#line 273 "snapshots.m"
  MR_Word snapshots__Options_6,
#line 273 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_7,
#line 273 "snapshots.m"
  MR_Word snapshots__SizeMap_8,
#line 273 "snapshots.m"
  MR_String snapshots__Line_9,
#line 273 "snapshots.m"
  MR_Word * snapshots__Counts_10);

#line 243 "snapshots.m"
static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
#line 243 "snapshots.m"
  MR_Word snapshots__Stream_8,
#line 243 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 243 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_10,
#line 243 "snapshots.m"
  MR_Word snapshots__SizeMap_11,
#line 243 "snapshots.m"
  MR_Word * snapshots__AllocCounts_12);

#line 332 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
#line 332 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 332 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 332 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 332 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 328 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
#line 328 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 328 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 328 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 328 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 325 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
#line 325 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 325 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 325 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 325 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 212 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
#line 212 "snapshots.m"
  MR_Word snapshots__Stream_7,
#line 212 "snapshots.m"
  MR_Word snapshots__Options_8,
#line 212 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_9,
#line 212 "snapshots.m"
  MR_Word snapshots__SizeMap_10);

#line 174 "snapshots.m"
static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
#line 174 "snapshots.m"
  MR_Word snapshots__Stream_6,
#line 174 "snapshots.m"
  MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_0_12,
#line 174 "snapshots.m"
  MR_Word * snapshots__STATE_VARIABLE_AllocSiteMap_13);

#line 167 "snapshots.m"
static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
#line 167 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 167 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 167 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_2);

#line 139 "snapshots.m"
static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
#line 139 "snapshots.m"
  MR_Word snapshots__Stream_6,
#line 139 "snapshots.m"
  MR_Word * snapshots__AllocSiteMap_7,
#line 139 "snapshots.m"
  MR_Word * snapshots__SizeMap_8);


static /* final */ const MR_Box snapshots_scalar_common_1[10][3];

static /* final */ const MR_Box snapshots_scalar_common_2[2][2];

static /* final */ const MR_Box snapshots_scalar_common_3[2][5];

static /* final */ const MR_Box snapshots_scalar_common_4[2][6];

static /* final */ const MR_Box snapshots_scalar_common_5[1][1];

static /* final */ const MR_Box snapshots_scalar_common_6[2][8];

static /* final */ const MR_Box snapshots_scalar_common_7[1][11];

static /* final */ const MR_Box snapshots_scalar_common_8[1][10];




static /* final */ const MR_Box snapshots_scalar_common_1[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_id_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&snapshots_scalar_common_3[1])),
    ((MR_Box) (snapshots__parse_alloc_site_decls_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[0])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[0])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[1])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[1])),
    ((MR_Box) (snapshots__output_snapshot_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[0])),
    ((MR_Box) (snapshots__LCMCpr_make_groups_1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__LCMCpr_make_groups_1_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "(unknown)")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_snapshot_options_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_major_axis_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "array.mh"
#include "array.mh"



#line 1083 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1] = {
  (MR_Integer) 0
};

#line 1088 "snapshots.c"
static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0 = {
  (MR_String) "alloc_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1095 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (snapshots____Unify____alloc_id_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_id_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_id",
  {     &snapshots__snapshots__notag_functor_desc_alloc_id_0 },
  {     &snapshots__snapshots__notag_functor_desc_alloc_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_alloc_id_0
};

#line 1112 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1121 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_0_0[5] = {
  (MR_String) "alloc_proc",
  (MR_String) "alloc_type",
  (MR_String) "alloc_file_name",
  (MR_String) "alloc_line_number",
  (MR_String) "alloc_words"
};

#line 1130 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_0_0 = {
  (MR_String) "alloc_site",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_alloc_site_0_0,
  snapshots__snapshots__field_names_alloc_site_0_0,
  NULL,
  NULL
};

#line 1145 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

#line 1150 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_0_0
  }
};

#line 1159 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

#line 1164 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1] = {
  (MR_Integer) 0
};

#line 1169 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____alloc_site_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site",
  {     snapshots__snapshots__du_name_ordered_alloc_site_0 },
  {     snapshots__snapshots__du_ptag_ordered_alloc_site_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_alloc_site_0
};

#line 1186 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1193 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3] = {
  (MR_String) "asc_alloc_site",
  (MR_String) "asc_num_cells",
  (MR_String) "asc_num_words"
};

#line 1200 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0 = {
  (MR_String) "alloc_site_counts",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_alloc_site_counts_0_0,
  snapshots__snapshots__field_names_alloc_site_counts_0_0,
  NULL,
  NULL
};

#line 1215 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

#line 1220 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0
  }
};

#line 1229 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

#line 1234 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1] = {
  (MR_Integer) 0
};

#line 1239 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____alloc_site_counts_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_counts_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site_counts",
  {     snapshots__snapshots__du_name_ordered_alloc_site_counts_0 },
  {     snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_alloc_site_counts_0
};

#line 1256 "snapshots.c"
static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_id_0,
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0
  }
};

#line 1265 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (snapshots____Unify____alloc_site_map_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_map_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1282 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0
  }
};

#line 1290 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0
};

#line 1298 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4] = {
  (MR_String) "g_total_cells",
  (MR_String) "g_total_words",
  (MR_String) "g_representative",
  (MR_String) "g_details"
};

#line 1306 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_group_0_0 = {
  (MR_String) "group",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_group_0_0,
  snapshots__snapshots__field_names_group_0_0,
  NULL,
  NULL
};

#line 1321 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

#line 1326 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_group_0_0
  }
};

#line 1335 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

#line 1340 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1] = {
  (MR_Integer) 0
};

#line 1345 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____group_0_0_10001)),
  ((MR_Box) (snapshots____Compare____group_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "group",
  {     snapshots__snapshots__du_name_ordered_group_0 },
  {     snapshots__snapshots__du_ptag_ordered_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_group_0
};

#line 1362 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0 = {
  (MR_String) "major_axis_proc",
  (MR_Integer) 0
};

#line 1368 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1 = {
  (MR_String) "major_axis_type",
  (MR_Integer) 1
};

#line 1374 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_value_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

#line 1380 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_name_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

#line 1386 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_major_axis_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1392 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_major_axis_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (snapshots____Unify____major_axis_0_0_10001)),
  ((MR_Box) (snapshots____Compare____major_axis_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "major_axis",
  {     snapshots__snapshots__enum_name_ordered_major_axis_0 },
  {     snapshots__snapshots__enum_value_ordered_major_axis_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_major_axis_0
};

#line 1409 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1417 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (snapshots____Unify____size_map_0_0_10001)),
  ((MR_Box) (snapshots____Compare____size_map_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "size_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &snapshots__list__ti_list_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1434 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_major_axis_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1442 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_snapshot_options_0_0[4] = {
  (MR_String) "major_axis",
  (MR_String) "brief",
  (MR_String) "recalc_words",
  (MR_String) "include_runtime"
};

#line 1450 "snapshots.c"
static const MR_DuArgLocn snapshots__snapshots__field_locns_snapshot_options_0_0[4] = {
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
  }
};

#line 1474 "snapshots.c"
static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_snapshot_options_0_0 = {
  (MR_String) "snapshot_options",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_snapshot_options_0_0,
  snapshots__snapshots__field_names_snapshot_options_0_0,
  snapshots__snapshots__field_locns_snapshot_options_0_0,
  NULL
};

#line 1489 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

#line 1494 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_snapshot_options_0_0
  }
};

#line 1503 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

#line 1508 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1] = {
  (MR_Integer) 0
};

#line 1513 "snapshots.c"
const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_snapshot_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____snapshot_options_0_0_10001)),
  ((MR_Box) (snapshots____Compare____snapshot_options_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "snapshot_options",
  {     snapshots__snapshots__du_name_ordered_snapshot_options_0 },
  {     snapshots__snapshots__du_ptag_ordered_snapshot_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  snapshots__snapshots__functor_number_map_snapshot_options_0
};

#line 1530 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
#line 1533 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1535 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1537 "snapshots.c"
{
#line 1539 "snapshots.c"
  {
#line 1541 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1544 "snapshots.c"
    {
#line 1546 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_id_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1549 "snapshots.c"
    return snapshots__succeeded;
#line 1551 "snapshots.c"
  }
#line 1553 "snapshots.c"
}

#line 1556 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
#line 1559 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1561 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1563 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1565 "snapshots.c"
{
#line 1567 "snapshots.c"
  {
#line 1569 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1572 "snapshots.c"
    {
#line 1574 "snapshots.c"
      snapshots____Compare____alloc_id_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1577 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1579 "snapshots.c"
  }
#line 1581 "snapshots.c"
}

#line 1584 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
#line 1587 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1589 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1591 "snapshots.c"
{
#line 1593 "snapshots.c"
  {
#line 1595 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1598 "snapshots.c"
    {
#line 1600 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1603 "snapshots.c"
    return snapshots__succeeded;
#line 1605 "snapshots.c"
  }
#line 1607 "snapshots.c"
}

#line 1610 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
#line 1613 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1615 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1617 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1619 "snapshots.c"
{
#line 1621 "snapshots.c"
  {
#line 1623 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1626 "snapshots.c"
    {
#line 1628 "snapshots.c"
      snapshots____Compare____alloc_site_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1631 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1633 "snapshots.c"
  }
#line 1635 "snapshots.c"
}

#line 1638 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
#line 1641 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1643 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1645 "snapshots.c"
{
#line 1647 "snapshots.c"
  {
#line 1649 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1652 "snapshots.c"
    {
#line 1654 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_counts_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1657 "snapshots.c"
    return snapshots__succeeded;
#line 1659 "snapshots.c"
  }
#line 1661 "snapshots.c"
}

#line 1664 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
#line 1667 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1669 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1671 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1673 "snapshots.c"
{
#line 1675 "snapshots.c"
  {
#line 1677 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1680 "snapshots.c"
    {
#line 1682 "snapshots.c"
      snapshots____Compare____alloc_site_counts_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1685 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1687 "snapshots.c"
  }
#line 1689 "snapshots.c"
}

#line 1692 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
#line 1695 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1697 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1699 "snapshots.c"
{
#line 1701 "snapshots.c"
  {
#line 1703 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1706 "snapshots.c"
    {
#line 1708 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1711 "snapshots.c"
    return snapshots__succeeded;
#line 1713 "snapshots.c"
  }
#line 1715 "snapshots.c"
}

#line 1718 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
#line 1721 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1723 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1725 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1727 "snapshots.c"
{
#line 1729 "snapshots.c"
  {
#line 1731 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1734 "snapshots.c"
    {
#line 1736 "snapshots.c"
      snapshots____Compare____alloc_site_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1739 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1741 "snapshots.c"
  }
#line 1743 "snapshots.c"
}

#line 1746 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
#line 1749 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1751 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1753 "snapshots.c"
{
#line 1755 "snapshots.c"
  {
#line 1757 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1760 "snapshots.c"
    {
#line 1762 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____group_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1765 "snapshots.c"
    return snapshots__succeeded;
#line 1767 "snapshots.c"
  }
#line 1769 "snapshots.c"
}

#line 1772 "snapshots.c"
static void MR_CALL 
snapshots____Compare____group_0_0_10001(
#line 1775 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1777 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1779 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1781 "snapshots.c"
{
#line 1783 "snapshots.c"
  {
#line 1785 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1788 "snapshots.c"
    {
#line 1790 "snapshots.c"
      snapshots____Compare____group_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1793 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1795 "snapshots.c"
  }
#line 1797 "snapshots.c"
}

#line 1800 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
#line 1803 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1805 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1807 "snapshots.c"
{
#line 1809 "snapshots.c"
  {
#line 1811 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1814 "snapshots.c"
    {
#line 1816 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____major_axis_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1819 "snapshots.c"
    return snapshots__succeeded;
#line 1821 "snapshots.c"
  }
#line 1823 "snapshots.c"
}

#line 1826 "snapshots.c"
static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
#line 1829 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1831 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1833 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1835 "snapshots.c"
{
#line 1837 "snapshots.c"
  {
#line 1839 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1842 "snapshots.c"
    {
#line 1844 "snapshots.c"
      snapshots____Compare____major_axis_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1847 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1849 "snapshots.c"
  }
#line 1851 "snapshots.c"
}

#line 1854 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
#line 1857 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1859 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1861 "snapshots.c"
{
#line 1863 "snapshots.c"
  {
#line 1865 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1868 "snapshots.c"
    {
#line 1870 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____size_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1873 "snapshots.c"
    return snapshots__succeeded;
#line 1875 "snapshots.c"
  }
#line 1877 "snapshots.c"
}

#line 1880 "snapshots.c"
static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
#line 1883 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1885 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1887 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1889 "snapshots.c"
{
#line 1891 "snapshots.c"
  {
#line 1893 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1896 "snapshots.c"
    {
#line 1898 "snapshots.c"
      snapshots____Compare____size_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1901 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1903 "snapshots.c"
  }
#line 1905 "snapshots.c"
}

#line 1908 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
#line 1911 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1913 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1915 "snapshots.c"
{
#line 1917 "snapshots.c"
  {
#line 1919 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1922 "snapshots.c"
    {
#line 1924 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____snapshot_options_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1927 "snapshots.c"
    return snapshots__succeeded;
#line 1929 "snapshots.c"
  }
#line 1931 "snapshots.c"
}

#line 1934 "snapshots.c"
static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
#line 1937 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1939 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1941 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1943 "snapshots.c"
{
#line 1945 "snapshots.c"
  {
#line 1947 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1950 "snapshots.c"
    {
#line 1952 "snapshots.c"
      snapshots____Compare____snapshot_options_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1955 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1957 "snapshots.c"
  }
#line 1959 "snapshots.c"
}

#line 356 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
#line 356 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 356 "snapshots.m"
{
#line 356 "snapshots.m"
  {
#line 356 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 356 "snapshots.m"
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
#line 356 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

#line 356 "snapshots.m"
    {
#line 356 "snapshots.m"
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
#line 356 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
#line 356 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
#line 356 "snapshots.m"
  }
#line 356 "snapshots.m"
}

#line 355 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
#line 355 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 355 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 355 "snapshots.m"
{
#line 355 "snapshots.m"
  {
#line 355 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 355 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 355 "snapshots.m"
    {
#line 355 "snapshots.m"
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 355 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 355 "snapshots.m"
  }
#line 355 "snapshots.m"
}

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
#line 334 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 334 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 334 "snapshots.m"
  MR_Word * snapshots__AddrOfGroups_39)
#line 334 "snapshots.m"
{
#line 339 "snapshots.m"
  while (MR_TRUE)
#line 339 "snapshots.m"
    {
#line 339 "snapshots.m"
      /* tailcall optimized into a loop */
#line 339 "snapshots.m"
      {
#line 339 "snapshots.m"
        MR_bool snapshots__succeeded;

#line 339 "snapshots.m"
        if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "snapshots.m"
          {
#line 2060 "snapshots.c"
            *snapshots__AddrOfGroups_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "snapshots.m"
          }
#line 339 "snapshots.m"
        else
#line 342 "snapshots.m"
          {
#line 342 "snapshots.m"
            MR_Word snapshots__TypeCtorInfo_17_28;
#line 342 "snapshots.m"
            MR_Word snapshots__TypeCtorInfo_26_37;
#line 342 "snapshots.m"
            MR_Word snapshots__First_9;
#line 342 "snapshots.m"
            MR_Word snapshots__Rest_10;
#line 342 "snapshots.m"
            MR_Word snapshots__FirstGroup_11;
#line 342 "snapshots.m"
            MR_Word snapshots__SortedCounts0_16;
#line 342 "snapshots.m"
            MR_Word snapshots__SortedCounts_17;
#line 342 "snapshots.m"
            MR_Integer snapshots__TotalCells_18;
#line 342 "snapshots.m"
            MR_Integer snapshots__TotalWords_19;
#line 342 "snapshots.m"
            MR_Word snapshots__FirstSite_20;
#line 342 "snapshots.m"
            MR_Word snapshots__V_25_25;
#line 342 "snapshots.m"
            MR_Word * snapshots__AddrRestGroups_38;
#line 342 "snapshots.m"
            MR_Word snapshots__Groups_40;
#line 356 "snapshots.m"
            MR_Box snapshots__conv4_TotalCells_18;
#line 356 "snapshots.m"
            MR_Box snapshots__conv3_TotalWords_19;
#line 357 "snapshots.m"
            MR_Box snapshots__conv5_V_25_25;
#line 357 "snapshots.m"
            MR_Integer snapshots__V_26_26;
#line 357 "snapshots.m"
            MR_Integer snapshots__V_27_27;

#line 343 "snapshots.m"
            {
#line 343 "snapshots.m"
              snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
            }
#line 2110 "snapshots.c"
            snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
#line 354 "snapshots.m"
            {
#line 354 "snapshots.m"
              mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
            }
#line 355 "snapshots.m"
            {
#line 355 "snapshots.m"
              mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[8], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
            }
#line 2122 "snapshots.c"
            snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 356 "snapshots.m"
            {
#line 356 "snapshots.m"
              mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[9], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
            }
#line 356 "snapshots.m"
            snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
#line 356 "snapshots.m"
            snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
#line 357 "snapshots.m"
            {
#line 357 "snapshots.m"
              snapshots__conv5_V_25_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
            }
#line 357 "snapshots.m"
            snapshots__V_25_25 = ((MR_Word) snapshots__conv5_V_25_25);
#line 357 "snapshots.m"
            snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 0)));
#line 357 "snapshots.m"
            snapshots__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 1)));
#line 357 "snapshots.m"
            snapshots__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 2)));
#line 358 "snapshots.m"
            {
#line 358 "snapshots.m"
              snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
#line 358 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
#line 358 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
#line 358 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
#line 358 "snapshots.m"
            }
#line 346 "snapshots.m"
            {
#line 346 "snapshots.m"
              snapshots__Groups_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "snapshots.m"
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 0) = ((MR_Box) (snapshots__FirstGroup_11));
#line 346 "snapshots.m"
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 1) = NULL;
#line 346 "snapshots.m"
            }
#line 346 "snapshots.m"
            snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Groups_40, (MR_Integer) 1));
#line 2172 "snapshots.c"
            *snapshots__AddrOfGroups_39 = snapshots__Groups_40;
#line 345 "snapshots.m"
            /* direct tailcall eliminated */
#line 345 "snapshots.m"
            {
#line 345 "snapshots.m"
              MR_Word snapshots__Counts__tmp_copy_5 = snapshots__Rest_10;
#line 345 "snapshots.m"
              MR_Word * snapshots__AddrOfGroups__tmp_copy_39 = snapshots__AddrRestGroups_38;

#line 345 "snapshots.m"
              snapshots__AddrOfGroups_39 = snapshots__AddrOfGroups__tmp_copy_39;
#line 345 "snapshots.m"
              snapshots__Counts_5 = snapshots__Counts__tmp_copy_5;
#line 345 "snapshots.m"
            }
#line 345 "snapshots.m"
            continue;
#line 342 "snapshots.m"
          }
#line 339 "snapshots.m"
      }
#line 339 "snapshots.m"
      break;
#line 339 "snapshots.m"
    }
#line 334 "snapshots.m"
}

#line 548 "snapshots.m"
static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
#line 548 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 548 "snapshots.m"
  MR_Word snapshots__List_6,
#line 548 "snapshots.m"
  MR_Word * snapshots__AddrOfUpto_23,
#line 548 "snapshots.m"
  MR_Word * snapshots__After_8)
#line 548 "snapshots.m"
{
#line 556 "snapshots.m"
  while (MR_TRUE)
#line 556 "snapshots.m"
    {
#line 556 "snapshots.m"
      /* tailcall optimized into a loop */
#line 556 "snapshots.m"
      {
#line 556 "snapshots.m"
        MR_bool snapshots__succeeded;

#line 556 "snapshots.m"
        if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 553 "snapshots.m"
          {
#line 2230 "snapshots.c"
            *snapshots__AddrOfUpto_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "snapshots.m"
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 553 "snapshots.m"
          }
#line 556 "snapshots.m"
        else
#line 556 "snapshots.m"
          {
#line 556 "snapshots.m"
            MR_Word snapshots__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
#line 556 "snapshots.m"
            MR_Box snapshots__V_21_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

#line 556 "snapshots.m"
            if ((snapshots__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "snapshots.m"
              {
#line 2249 "snapshots.c"
                *snapshots__AddrOfUpto_23 = snapshots__List_6;
#line 559 "snapshots.m"
                *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "snapshots.m"
              }
#line 556 "snapshots.m"
            else
#line 561 "snapshots.m"
              {
#line 561 "snapshots.m"
                MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 0));
#line 561 "snapshots.m"
                MR_Word snapshots__Cmp_13;
#line 561 "snapshots.m"
                MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 1)));
#line 562 "snapshots.m"
                void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
#line 562 "snapshots.m"
                MR_Box snapshots__conv1_Cmp_13;

#line 562 "snapshots.m"
                {
#line 562 "snapshots.m"
                  snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__V_21_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
                }
#line 562 "snapshots.m"
                snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
#line 567 "snapshots.m"
                if ((snapshots__Cmp_13 == (MR_Integer) 0))
#line 564 "snapshots.m"
                  {
#line 564 "snapshots.m"
                    MR_Word * snapshots__AddrUpto0_22;
#line 564 "snapshots.m"
                    MR_Word snapshots__Upto_26;

#line 566 "snapshots.m"
                    {
#line 566 "snapshots.m"
                      snapshots__Upto_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__Upto_26, 0) = snapshots__V_21_21;
#line 566 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__Upto_26, 1) = NULL;
#line 566 "snapshots.m"
                    }
#line 566 "snapshots.m"
                    snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Upto_26, (MR_Integer) 1));
#line 2298 "snapshots.c"
                    *snapshots__AddrOfUpto_23 = snapshots__Upto_26;
#line 565 "snapshots.m"
                    /* direct tailcall eliminated */
#line 565 "snapshots.m"
                    {
#line 565 "snapshots.m"
                      MR_Word snapshots__List__tmp_copy_6 = snapshots__V_20_20;
#line 565 "snapshots.m"
                      MR_Word * snapshots__AddrOfUpto__tmp_copy_23 = snapshots__AddrUpto0_22;

#line 565 "snapshots.m"
                      snapshots__AddrOfUpto_23 = snapshots__AddrOfUpto__tmp_copy_23;
#line 565 "snapshots.m"
                      snapshots__List_6 = snapshots__List__tmp_copy_6;
#line 565 "snapshots.m"
                    }
#line 565 "snapshots.m"
                    continue;
#line 564 "snapshots.m"
                  }
#line 567 "snapshots.m"
                else
#line 570 "snapshots.m"
                  {
#line 570 "snapshots.m"
                    MR_Word snapshots__Upto_25;

#line 571 "snapshots.m"
                    {
#line 571 "snapshots.m"
                      snapshots__Upto_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__Upto_25, 0) = snapshots__V_21_21;
#line 571 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__Upto_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "snapshots.m"
                    }
#line 2336 "snapshots.c"
                    *snapshots__AddrOfUpto_23 = snapshots__Upto_25;
#line 572 "snapshots.m"
                    *snapshots__After_8 = snapshots__V_20_20;
#line 570 "snapshots.m"
                  }
#line 561 "snapshots.m"
              }
#line 556 "snapshots.m"
          }
#line 556 "snapshots.m"
      }
#line 556 "snapshots.m"
      break;
#line 556 "snapshots.m"
    }
#line 548 "snapshots.m"
}

#line 243 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
#line 243 "snapshots.m"
  MR_Word snapshots__Stream_8,
#line 243 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 243 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_10,
#line 243 "snapshots.m"
  MR_Word snapshots__SizeMap_11,
#line 243 "snapshots.m"
  MR_Word * snapshots__AddrOfAllocCounts_32)
#line 243 "snapshots.m"
{
#line 247 "snapshots.m"
  while (MR_TRUE)
#line 247 "snapshots.m"
    {
#line 247 "snapshots.m"
      /* tailcall optimized into a loop */
#line 247 "snapshots.m"
      {
#line 247 "snapshots.m"
        MR_bool snapshots__succeeded;
#line 247 "snapshots.m"
        MR_Word snapshots__LineRes_14;

#line 248 "snapshots.m"
        {
#line 248 "snapshots.m"
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_8, &snapshots__LineRes_14);
        }
#line 265 "snapshots.m"
        if ((snapshots__LineRes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "snapshots.m"
          {
#line 267 "snapshots.m"
            {
#line 267 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", (MR_String) "format error");
#line 267 "snapshots.m"
              return;
            }
#line 266 "snapshots.m"
          }
#line 265 "snapshots.m"
        else
#line 265 "snapshots.m"
        if (((MR_tag((MR_Word) snapshots__LineRes_14)) == (MR_mktag((MR_Integer) 2))))
#line 269 "snapshots.m"
          {
#line 269 "snapshots.m"
            MR_Word snapshots__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_14, (MR_Integer) 0)));
#line 269 "snapshots.m"
            MR_String snapshots__V_24_24;

#line 270 "snapshots.m"
            {
#line 270 "snapshots.m"
              snapshots__V_24_24 = mercury__io__error_message_1_f_0(snapshots__Error_18);
            }
#line 270 "snapshots.m"
            {
#line 270 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", snapshots__V_24_24);
#line 270 "snapshots.m"
              return;
            }
#line 269 "snapshots.m"
          }
#line 265 "snapshots.m"
        else
#line 250 "snapshots.m"
          {
#line 250 "snapshots.m"
            MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

#line 252 "snapshots.m"
            {
#line 252 "snapshots.m"
              snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
            }
#line 255 "snapshots.m"
            if (snapshots__succeeded)
#line 254 "snapshots.m"
              {
#line 2442 "snapshots.c"
                *snapshots__AddrOfAllocCounts_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "snapshots.m"
              }
#line 255 "snapshots.m"
            else
#line 261 "snapshots.m"
              {
#line 261 "snapshots.m"
                MR_Word snapshots__Counts_16;

#line 256 "snapshots.m"
                {
#line 256 "snapshots.m"
                  snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                }
#line 261 "snapshots.m"
                if (snapshots__succeeded)
#line 259 "snapshots.m"
                  {
#line 259 "snapshots.m"
                    MR_Word * snapshots__AddrRestCounts_31;
#line 259 "snapshots.m"
                    MR_Word snapshots__AllocCounts_33;

#line 260 "snapshots.m"
                    {
#line 260 "snapshots.m"
                      snapshots__AllocCounts_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, 0) = ((MR_Box) (snapshots__Counts_16));
#line 260 "snapshots.m"
                      MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, 1) = NULL;
#line 260 "snapshots.m"
                    }
#line 260 "snapshots.m"
                    snapshots__AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, (MR_Integer) 1));
#line 2479 "snapshots.c"
                    *snapshots__AddrOfAllocCounts_32 = snapshots__AllocCounts_33;
#line 258 "snapshots.m"
                    /* direct tailcall eliminated */
#line 258 "snapshots.m"
                    {
#line 258 "snapshots.m"
                      MR_Word * snapshots__AddrOfAllocCounts__tmp_copy_32 = snapshots__AddrRestCounts_31;

#line 258 "snapshots.m"
                      snapshots__AddrOfAllocCounts_32 = snapshots__AddrOfAllocCounts__tmp_copy_32;
#line 258 "snapshots.m"
                    }
#line 258 "snapshots.m"
                    continue;
#line 259 "snapshots.m"
                  }
#line 261 "snapshots.m"
                else
#line 262 "snapshots.m"
                  {
#line 262 "snapshots.m"
                    /* direct tailcall eliminated */
#line 262 "snapshots.m"
                    continue;
#line 262 "snapshots.m"
                  }
#line 261 "snapshots.m"
              }
#line 250 "snapshots.m"
          }
#line 247 "snapshots.m"
      }
#line 247 "snapshots.m"
      break;
#line 247 "snapshots.m"
    }
#line 243 "snapshots.m"
}

#line 548 "snapshots.m"
static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
#line 548 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 548 "snapshots.m"
  MR_Word snapshots__List_6,
#line 548 "snapshots.m"
  MR_Word * snapshots__Upto_7,
#line 548 "snapshots.m"
  MR_Word * snapshots__After_8)
#line 548 "snapshots.m"
{
#line 556 "snapshots.m"
  {
#line 556 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 556 "snapshots.m"
    if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 553 "snapshots.m"
      {
#line 554 "snapshots.m"
        *snapshots__Upto_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "snapshots.m"
        *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 553 "snapshots.m"
      }
#line 556 "snapshots.m"
    else
#line 556 "snapshots.m"
      {
#line 556 "snapshots.m"
        MR_Word snapshots__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
#line 556 "snapshots.m"
        MR_Box snapshots__V_21_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

#line 556 "snapshots.m"
        if ((snapshots__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "snapshots.m"
          {
#line 558 "snapshots.m"
            *snapshots__Upto_7 = snapshots__List_6;
#line 559 "snapshots.m"
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "snapshots.m"
          }
#line 556 "snapshots.m"
        else
#line 561 "snapshots.m"
          {
#line 561 "snapshots.m"
            MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 0));
#line 561 "snapshots.m"
            MR_Word snapshots__Cmp_13;
#line 561 "snapshots.m"
            MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 1)));
#line 562 "snapshots.m"
            void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
#line 562 "snapshots.m"
            MR_Box snapshots__conv1_Cmp_13;

#line 562 "snapshots.m"
            {
#line 562 "snapshots.m"
              snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__V_21_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
            }
#line 562 "snapshots.m"
            snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
#line 567 "snapshots.m"
            if ((snapshots__Cmp_13 == (MR_Integer) 0))
#line 564 "snapshots.m"
              {
#line 564 "snapshots.m"
                MR_Word * snapshots__AddrUpto0_22;

#line 566 "snapshots.m"
                {
#line 566 "snapshots.m"
                  MR_Word base;
#line 566 "snapshots.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "snapshots.m"
                  *snapshots__Upto_7 = base;
#line 566 "snapshots.m"
                  MR_hl_field(MR_mktag(1), base, 0) = snapshots__V_21_21;
#line 566 "snapshots.m"
                  MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 566 "snapshots.m"
                }
#line 566 "snapshots.m"
                snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Upto_7, (MR_Integer) 1));
#line 565 "snapshots.m"
                {
#line 565 "snapshots.m"
                  snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(snapshots__Compare_5, snapshots__V_20_20, snapshots__AddrUpto0_22, snapshots__After_8);
#line 565 "snapshots.m"
                  return;
                }
#line 564 "snapshots.m"
              }
#line 567 "snapshots.m"
            else
#line 570 "snapshots.m"
              {
#line 571 "snapshots.m"
                {
#line 571 "snapshots.m"
                  MR_Word base;
#line 571 "snapshots.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "snapshots.m"
                  *snapshots__Upto_7 = base;
#line 571 "snapshots.m"
                  MR_hl_field(MR_mktag(1), base, 0) = snapshots__V_21_21;
#line 571 "snapshots.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "snapshots.m"
                }
#line 572 "snapshots.m"
                *snapshots__After_8 = snapshots__V_20_20;
#line 570 "snapshots.m"
              }
#line 561 "snapshots.m"
          }
#line 556 "snapshots.m"
      }
#line 556 "snapshots.m"
  }
#line 548 "snapshots.m"
}

#line 86 "snapshots.m"
static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
#line 86 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 86 "snapshots.m"
{
#line 86 "snapshots.m"
  {
#line 86 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 86 "snapshots.m"
    MR_Integer snapshots__CastX_15 = (MR_Integer) snapshots__HeadVar__2_2;
#line 86 "snapshots.m"
    MR_Integer snapshots__CastY_16 = (MR_Integer) snapshots__HeadVar__3_3;

#line 86 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_15 == snapshots__CastY_16);
#line 86 "snapshots.m"
    if (snapshots__succeeded)
#line 2675 "snapshots.c"
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "snapshots.m"
    else
#line 86 "snapshots.m"
      {
#line 86 "snapshots.m"
        MR_Word snapshots__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_12_12;
#line 86 "snapshots.m"
        MR_Integer snapshots__V_21_21 = (MR_Integer) snapshots__V_4_4;
#line 86 "snapshots.m"
        MR_Integer snapshots__V_22_22 = (MR_Integer) snapshots__V_8_8;

#line 86 "snapshots.m"
        {
#line 86 "snapshots.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_12_12, snapshots__V_21_21, snapshots__V_22_22);
        }
#line 2709 "snapshots.c"
        snapshots__succeeded = (snapshots__V_12_12 == (MR_Integer) 0);
#line 86 "snapshots.m"
        snapshots__succeeded = !(snapshots__succeeded);
#line 86 "snapshots.m"
        if (snapshots__succeeded)
#line 86 "snapshots.m"
          *snapshots__HeadVar__1_1 = snapshots__V_12_12;
#line 86 "snapshots.m"
        else
#line 86 "snapshots.m"
          {
#line 86 "snapshots.m"
            MR_Word snapshots__V_13_13;
#line 86 "snapshots.m"
            MR_Integer snapshots__V_23_23 = (MR_Integer) snapshots__V_5_5;
#line 86 "snapshots.m"
            MR_Integer snapshots__V_24_24 = (MR_Integer) snapshots__V_9_9;

#line 86 "snapshots.m"
            {
#line 86 "snapshots.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_13_13, snapshots__V_23_23, snapshots__V_24_24);
            }
#line 2733 "snapshots.c"
            snapshots__succeeded = (snapshots__V_13_13 == (MR_Integer) 0);
#line 86 "snapshots.m"
            snapshots__succeeded = !(snapshots__succeeded);
#line 86 "snapshots.m"
            if (snapshots__succeeded)
#line 86 "snapshots.m"
              *snapshots__HeadVar__1_1 = snapshots__V_13_13;
#line 86 "snapshots.m"
            else
#line 86 "snapshots.m"
              {
#line 86 "snapshots.m"
                MR_Word snapshots__V_14_14;
#line 86 "snapshots.m"
                MR_Integer snapshots__V_25_25 = (MR_Integer) snapshots__V_6_6;
#line 86 "snapshots.m"
                MR_Integer snapshots__V_26_26 = (MR_Integer) snapshots__V_10_10;

#line 86 "snapshots.m"
                {
#line 86 "snapshots.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_14_14, snapshots__V_25_25, snapshots__V_26_26);
                }
#line 2757 "snapshots.c"
                snapshots__succeeded = (snapshots__V_14_14 == (MR_Integer) 0);
#line 86 "snapshots.m"
                snapshots__succeeded = !(snapshots__succeeded);
#line 86 "snapshots.m"
                if (snapshots__succeeded)
#line 86 "snapshots.m"
                  *snapshots__HeadVar__1_1 = snapshots__V_14_14;
#line 86 "snapshots.m"
                else
#line 86 "snapshots.m"
                  {
#line 86 "snapshots.m"
                    MR_Integer snapshots__V_27_27 = (MR_Integer) snapshots__V_7_7;
#line 86 "snapshots.m"
                    MR_Integer snapshots__V_28_28 = (MR_Integer) snapshots__V_11_11;

#line 86 "snapshots.m"
                    {
#line 86 "snapshots.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__V_27_27, snapshots__V_28_28);
#line 86 "snapshots.m"
                      return;
                    }
#line 86 "snapshots.m"
                  }
#line 86 "snapshots.m"
              }
#line 86 "snapshots.m"
          }
#line 86 "snapshots.m"
      }
#line 86 "snapshots.m"
  }
#line 86 "snapshots.m"
}

#line 86 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 86 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 86 "snapshots.m"
{
#line 86 "snapshots.m"
  {
#line 86 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 86 "snapshots.m"
    MR_Integer snapshots__CastX_11 = (MR_Integer) snapshots__HeadVar__1_1;
#line 86 "snapshots.m"
    MR_Integer snapshots__CastY_12 = (MR_Integer) snapshots__HeadVar__2_2;

#line 86 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_11 == snapshots__CastY_12);
#line 86 "snapshots.m"
    if (snapshots__succeeded)
#line 86 "snapshots.m"
      snapshots__succeeded = MR_TRUE;
#line 86 "snapshots.m"
    else
#line 86 "snapshots.m"
      {
#line 86 "snapshots.m"
        MR_Word snapshots__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 86 "snapshots.m"
        MR_Word snapshots__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 2839 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_7_7);
#line 86 "snapshots.m"
        if (snapshots__succeeded)
#line 86 "snapshots.m"
          {
#line 2845 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_8_8);
#line 86 "snapshots.m"
            if (snapshots__succeeded)
#line 86 "snapshots.m"
              {
#line 2851 "snapshots.c"
                snapshots__succeeded = (snapshots__V_5_5 == snapshots__V_9_9);
#line 86 "snapshots.m"
                if (snapshots__succeeded)
#line 2855 "snapshots.c"
                  snapshots__succeeded = (snapshots__V_6_6 == snapshots__V_10_10);
#line 86 "snapshots.m"
              }
#line 86 "snapshots.m"
          }
#line 86 "snapshots.m"
      }
#line 86 "snapshots.m"
    return snapshots__succeeded;
#line 86 "snapshots.m"
  }
#line 86 "snapshots.m"
}

#line 84 "snapshots.m"
static void MR_CALL 
snapshots____Compare____size_map_0_0(
#line 84 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 84 "snapshots.m"
{
#line 84 "snapshots.m"
  {
#line 84 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 84 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar1_4 = snapshots__HeadVar__2_2;
#line 84 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar2_5 = snapshots__HeadVar__3_3;

#line 84 "snapshots.m"
    {
#line 84 "snapshots.m"
      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[1], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__Cast_HeadVar1_4)), ((MR_Box) (snapshots__Cast_HeadVar2_5)));
#line 84 "snapshots.m"
      return;
    }
#line 84 "snapshots.m"
  }
#line 84 "snapshots.m"
}

#line 84 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 84 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 84 "snapshots.m"
{
#line 84 "snapshots.m"
  {
#line 84 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 84 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar1_3 = snapshots__HeadVar__1_1;
#line 84 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar2_4 = snapshots__HeadVar__2_2;

#line 84 "snapshots.m"
    {
#line 84 "snapshots.m"
      return snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_2[1], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
    }
#line 84 "snapshots.m"
    return snapshots__succeeded;
#line 84 "snapshots.m"
  }
#line 84 "snapshots.m"
}

#line 94 "snapshots.m"
static void MR_CALL 
snapshots____Compare____major_axis_0_0(
#line 94 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 94 "snapshots.m"
{
#line 94 "snapshots.m"
  {
#line 94 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 94 "snapshots.m"
    MR_Integer snapshots__Cast_HeadVar1_4 = (MR_Integer) snapshots__HeadVar__2_2;
#line 94 "snapshots.m"
    MR_Integer snapshots__Cast_HeadVar2_5 = (MR_Integer) snapshots__HeadVar__3_3;

#line 94 "snapshots.m"
    {
#line 94 "snapshots.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__Cast_HeadVar1_4, snapshots__Cast_HeadVar2_5);
#line 94 "snapshots.m"
      return;
    }
#line 94 "snapshots.m"
  }
#line 94 "snapshots.m"
}

#line 94 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_1,
#line 94 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 94 "snapshots.m"
{
#line 2973 "snapshots.c"
  {
#line 2975 "snapshots.c"
    MR_bool snapshots__succeeded = (snapshots__HeadVar__2_1 == snapshots__HeadVar__2_2);

#line 2978 "snapshots.c"
    return snapshots__succeeded;
#line 2980 "snapshots.c"
  }
#line 94 "snapshots.m"
}

#line 71 "snapshots.m"
static void MR_CALL 
snapshots____Compare____group_0_0(
#line 71 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 71 "snapshots.m"
{
#line 71 "snapshots.m"
  {
#line 71 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 71 "snapshots.m"
    MR_Integer snapshots__CastX_15 = (MR_Integer) snapshots__HeadVar__2_2;
#line 71 "snapshots.m"
    MR_Integer snapshots__CastY_16 = (MR_Integer) snapshots__HeadVar__3_3;

#line 71 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_15 == snapshots__CastY_16);
#line 71 "snapshots.m"
    if (snapshots__succeeded)
#line 3009 "snapshots.c"
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "snapshots.m"
    else
#line 71 "snapshots.m"
      {
#line 71 "snapshots.m"
        MR_Integer snapshots__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 3)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_12_12;

#line 71 "snapshots.m"
        {
#line 71 "snapshots.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_12_12, snapshots__V_4_4, snapshots__V_8_8);
        }
#line 3039 "snapshots.c"
        snapshots__succeeded = (snapshots__V_12_12 == (MR_Integer) 0);
#line 71 "snapshots.m"
        snapshots__succeeded = !(snapshots__succeeded);
#line 71 "snapshots.m"
        if (snapshots__succeeded)
#line 71 "snapshots.m"
          *snapshots__HeadVar__1_1 = snapshots__V_12_12;
#line 71 "snapshots.m"
        else
#line 71 "snapshots.m"
          {
#line 71 "snapshots.m"
            MR_Word snapshots__V_13_13;

#line 71 "snapshots.m"
            {
#line 71 "snapshots.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_13_13, snapshots__V_5_5, snapshots__V_9_9);
            }
#line 3059 "snapshots.c"
            snapshots__succeeded = (snapshots__V_13_13 == (MR_Integer) 0);
#line 71 "snapshots.m"
            snapshots__succeeded = !(snapshots__succeeded);
#line 71 "snapshots.m"
            if (snapshots__succeeded)
#line 71 "snapshots.m"
              *snapshots__HeadVar__1_1 = snapshots__V_13_13;
#line 71 "snapshots.m"
            else
#line 71 "snapshots.m"
              {
#line 71 "snapshots.m"
                MR_Word snapshots__V_14_14;

#line 71 "snapshots.m"
                {
#line 71 "snapshots.m"
                  snapshots____Compare____alloc_site_0_0(&snapshots__V_14_14, snapshots__V_6_6, snapshots__V_10_10);
                }
#line 3079 "snapshots.c"
                snapshots__succeeded = (snapshots__V_14_14 == (MR_Integer) 0);
#line 71 "snapshots.m"
                snapshots__succeeded = !(snapshots__succeeded);
#line 71 "snapshots.m"
                if (snapshots__succeeded)
#line 71 "snapshots.m"
                  *snapshots__HeadVar__1_1 = snapshots__V_14_14;
#line 71 "snapshots.m"
                else
#line 71 "snapshots.m"
                  {
#line 71 "snapshots.m"
                    {
#line 71 "snapshots.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[0], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__V_7_7)), ((MR_Box) (snapshots__V_11_11)));
#line 71 "snapshots.m"
                      return;
                    }
#line 71 "snapshots.m"
                  }
#line 71 "snapshots.m"
              }
#line 71 "snapshots.m"
          }
#line 71 "snapshots.m"
      }
#line 71 "snapshots.m"
  }
#line 71 "snapshots.m"
}

#line 71 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 71 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 71 "snapshots.m"
{
#line 71 "snapshots.m"
  {
#line 71 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 71 "snapshots.m"
    MR_Integer snapshots__CastX_11 = (MR_Integer) snapshots__HeadVar__1_1;
#line 71 "snapshots.m"
    MR_Integer snapshots__CastY_12 = (MR_Integer) snapshots__HeadVar__2_2;

#line 71 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_11 == snapshots__CastY_12);
#line 71 "snapshots.m"
    if (snapshots__succeeded)
#line 71 "snapshots.m"
      snapshots__succeeded = MR_TRUE;
#line 71 "snapshots.m"
    else
#line 71 "snapshots.m"
      {
#line 71 "snapshots.m"
        MR_Word snapshots__TypeInfo_13_13;
#line 71 "snapshots.m"
        MR_Integer snapshots__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 3)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "snapshots.m"
        MR_Integer snapshots__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "snapshots.m"
        MR_Word snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));

#line 3158 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_7_7);
#line 71 "snapshots.m"
        if (snapshots__succeeded)
#line 71 "snapshots.m"
          {
#line 3164 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_8_8);
#line 71 "snapshots.m"
            if (snapshots__succeeded)
#line 71 "snapshots.m"
              {
#line 3170 "snapshots.c"
                {
#line 3172 "snapshots.c"
                  snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__V_5_5, snapshots__V_9_9);
                }
#line 71 "snapshots.m"
                if (snapshots__succeeded)
#line 71 "snapshots.m"
                  {
#line 3179 "snapshots.c"
                    snapshots__TypeInfo_13_13 = (MR_Word) &snapshots_scalar_common_2[0];
#line 3181 "snapshots.c"
                    {
#line 3183 "snapshots.c"
                      return snapshots__succeeded = mercury__builtin__unify_2_p_0(snapshots__TypeInfo_13_13, ((MR_Box) (snapshots__V_6_6)), ((MR_Box) (snapshots__V_10_10)));
                    }
#line 71 "snapshots.m"
                  }
#line 71 "snapshots.m"
              }
#line 71 "snapshots.m"
          }
#line 71 "snapshots.m"
      }
#line 71 "snapshots.m"
    return snapshots__succeeded;
#line 71 "snapshots.m"
  }
#line 71 "snapshots.m"
}

#line 43 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
#line 43 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 43 "snapshots.m"
{
#line 43 "snapshots.m"
  {
#line 43 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 43 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar1_4 = snapshots__HeadVar__2_2;
#line 43 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar2_5 = snapshots__HeadVar__3_3;

#line 43 "snapshots.m"
    {
#line 43 "snapshots.m"
      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_1[0], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__Cast_HeadVar1_4)), ((MR_Box) (snapshots__Cast_HeadVar2_5)));
#line 43 "snapshots.m"
      return;
    }
#line 43 "snapshots.m"
  }
#line 43 "snapshots.m"
}

#line 43 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 43 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 43 "snapshots.m"
{
#line 43 "snapshots.m"
  {
#line 43 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 43 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar1_3 = snapshots__HeadVar__1_1;
#line 43 "snapshots.m"
    MR_Word snapshots__Cast_HeadVar2_4 = snapshots__HeadVar__2_2;

#line 43 "snapshots.m"
    {
#line 43 "snapshots.m"
      return snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_1[0], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
    }
#line 43 "snapshots.m"
    return snapshots__succeeded;
#line 43 "snapshots.m"
  }
#line 43 "snapshots.m"
}

#line 60 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
#line 60 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 60 "snapshots.m"
{
#line 60 "snapshots.m"
  {
#line 60 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 60 "snapshots.m"
    MR_Integer snapshots__CastX_12 = (MR_Integer) snapshots__HeadVar__2_2;
#line 60 "snapshots.m"
    MR_Integer snapshots__CastY_13 = (MR_Integer) snapshots__HeadVar__3_3;

#line 60 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_12 == snapshots__CastY_13);
#line 60 "snapshots.m"
    if (snapshots__succeeded)
#line 3287 "snapshots.c"
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "snapshots.m"
    else
#line 60 "snapshots.m"
      {
#line 60 "snapshots.m"
        MR_Word snapshots__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
#line 60 "snapshots.m"
        MR_Word snapshots__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
#line 60 "snapshots.m"
        MR_Word snapshots__V_10_10;

#line 60 "snapshots.m"
        {
#line 60 "snapshots.m"
          snapshots____Compare____alloc_site_0_0(&snapshots__V_10_10, snapshots__V_4_4, snapshots__V_7_7);
        }
#line 3313 "snapshots.c"
        snapshots__succeeded = (snapshots__V_10_10 == (MR_Integer) 0);
#line 60 "snapshots.m"
        snapshots__succeeded = !(snapshots__succeeded);
#line 60 "snapshots.m"
        if (snapshots__succeeded)
#line 60 "snapshots.m"
          *snapshots__HeadVar__1_1 = snapshots__V_10_10;
#line 60 "snapshots.m"
        else
#line 60 "snapshots.m"
          {
#line 60 "snapshots.m"
            MR_Word snapshots__V_11_11;

#line 60 "snapshots.m"
            {
#line 60 "snapshots.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_11_11, snapshots__V_5_5, snapshots__V_8_8);
            }
#line 3333 "snapshots.c"
            snapshots__succeeded = (snapshots__V_11_11 == (MR_Integer) 0);
#line 60 "snapshots.m"
            snapshots__succeeded = !(snapshots__succeeded);
#line 60 "snapshots.m"
            if (snapshots__succeeded)
#line 60 "snapshots.m"
              *snapshots__HeadVar__1_1 = snapshots__V_11_11;
#line 60 "snapshots.m"
            else
#line 60 "snapshots.m"
              {
#line 60 "snapshots.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__V_6_6, snapshots__V_9_9);
#line 60 "snapshots.m"
                return;
              }
#line 60 "snapshots.m"
          }
#line 60 "snapshots.m"
      }
#line 60 "snapshots.m"
  }
#line 60 "snapshots.m"
}

#line 60 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 60 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 60 "snapshots.m"
{
#line 60 "snapshots.m"
  {
#line 60 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 60 "snapshots.m"
    MR_Integer snapshots__CastX_9 = (MR_Integer) snapshots__HeadVar__1_1;
#line 60 "snapshots.m"
    MR_Integer snapshots__CastY_10 = (MR_Integer) snapshots__HeadVar__2_2;

#line 60 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_9 == snapshots__CastY_10);
#line 60 "snapshots.m"
    if (snapshots__succeeded)
#line 60 "snapshots.m"
      snapshots__succeeded = MR_TRUE;
#line 60 "snapshots.m"
    else
#line 60 "snapshots.m"
      {
#line 60 "snapshots.m"
        MR_Word snapshots__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
#line 60 "snapshots.m"
        MR_Word snapshots__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "snapshots.m"
        MR_Integer snapshots__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));

#line 3400 "snapshots.c"
        {
#line 3402 "snapshots.c"
          snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__V_3_3, snapshots__V_6_6);
        }
#line 60 "snapshots.m"
        if (snapshots__succeeded)
#line 60 "snapshots.m"
          {
#line 3409 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_7_7);
#line 60 "snapshots.m"
            if (snapshots__succeeded)
#line 3413 "snapshots.c"
              snapshots__succeeded = (snapshots__V_5_5 == snapshots__V_8_8);
#line 60 "snapshots.m"
          }
#line 60 "snapshots.m"
      }
#line 60 "snapshots.m"
    return snapshots__succeeded;
#line 60 "snapshots.m"
  }
#line 60 "snapshots.m"
}

#line 48 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
#line 48 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 48 "snapshots.m"
{
#line 48 "snapshots.m"
  {
#line 48 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 48 "snapshots.m"
    MR_Integer snapshots__CastX_18 = (MR_Integer) snapshots__HeadVar__2_2;
#line 48 "snapshots.m"
    MR_Integer snapshots__CastY_19 = (MR_Integer) snapshots__HeadVar__3_3;

#line 48 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_18 == snapshots__CastY_19);
#line 48 "snapshots.m"
    if (snapshots__succeeded)
#line 3450 "snapshots.c"
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "snapshots.m"
    else
#line 48 "snapshots.m"
      {
#line 48 "snapshots.m"
        MR_String snapshots__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "snapshots.m"
        MR_String snapshots__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "snapshots.m"
        MR_String snapshots__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 4)));
#line 48 "snapshots.m"
        MR_String snapshots__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "snapshots.m"
        MR_String snapshots__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "snapshots.m"
        MR_String snapshots__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 3)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 4)));
#line 48 "snapshots.m"
        MR_Word snapshots__V_14_14;

#line 48 "snapshots.m"
        {
#line 48 "snapshots.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__V_14_14, snapshots__V_4_4, snapshots__V_9_9);
        }
#line 3484 "snapshots.c"
        snapshots__succeeded = (snapshots__V_14_14 == (MR_Integer) 0);
#line 48 "snapshots.m"
        snapshots__succeeded = !(snapshots__succeeded);
#line 48 "snapshots.m"
        if (snapshots__succeeded)
#line 48 "snapshots.m"
          *snapshots__HeadVar__1_1 = snapshots__V_14_14;
#line 48 "snapshots.m"
        else
#line 48 "snapshots.m"
          {
#line 48 "snapshots.m"
            MR_Word snapshots__V_15_15;

#line 48 "snapshots.m"
            {
#line 48 "snapshots.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__V_15_15, snapshots__V_5_5, snapshots__V_10_10);
            }
#line 3504 "snapshots.c"
            snapshots__succeeded = (snapshots__V_15_15 == (MR_Integer) 0);
#line 48 "snapshots.m"
            snapshots__succeeded = !(snapshots__succeeded);
#line 48 "snapshots.m"
            if (snapshots__succeeded)
#line 48 "snapshots.m"
              *snapshots__HeadVar__1_1 = snapshots__V_15_15;
#line 48 "snapshots.m"
            else
#line 48 "snapshots.m"
              {
#line 48 "snapshots.m"
                MR_Word snapshots__V_16_16;

#line 48 "snapshots.m"
                {
#line 48 "snapshots.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__V_16_16, snapshots__V_6_6, snapshots__V_11_11);
                }
#line 3524 "snapshots.c"
                snapshots__succeeded = (snapshots__V_16_16 == (MR_Integer) 0);
#line 48 "snapshots.m"
                snapshots__succeeded = !(snapshots__succeeded);
#line 48 "snapshots.m"
                if (snapshots__succeeded)
#line 48 "snapshots.m"
                  *snapshots__HeadVar__1_1 = snapshots__V_16_16;
#line 48 "snapshots.m"
                else
#line 48 "snapshots.m"
                  {
#line 48 "snapshots.m"
                    MR_Word snapshots__V_17_17;

#line 48 "snapshots.m"
                    {
#line 48 "snapshots.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__V_17_17, snapshots__V_7_7, snapshots__V_12_12);
                    }
#line 3544 "snapshots.c"
                    snapshots__succeeded = (snapshots__V_17_17 == (MR_Integer) 0);
#line 48 "snapshots.m"
                    snapshots__succeeded = !(snapshots__succeeded);
#line 48 "snapshots.m"
                    if (snapshots__succeeded)
#line 48 "snapshots.m"
                      *snapshots__HeadVar__1_1 = snapshots__V_17_17;
#line 48 "snapshots.m"
                    else
#line 48 "snapshots.m"
                      {
#line 48 "snapshots.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__V_8_8, snapshots__V_13_13);
#line 48 "snapshots.m"
                        return;
                      }
#line 48 "snapshots.m"
                  }
#line 48 "snapshots.m"
              }
#line 48 "snapshots.m"
          }
#line 48 "snapshots.m"
      }
#line 48 "snapshots.m"
  }
#line 48 "snapshots.m"
}

#line 48 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 48 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 48 "snapshots.m"
{
#line 48 "snapshots.m"
  {
#line 48 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 48 "snapshots.m"
    MR_Integer snapshots__CastX_13 = (MR_Integer) snapshots__HeadVar__1_1;
#line 48 "snapshots.m"
    MR_Integer snapshots__CastY_14 = (MR_Integer) snapshots__HeadVar__2_2;

#line 48 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_13 == snapshots__CastY_14);
#line 48 "snapshots.m"
    if (snapshots__succeeded)
#line 48 "snapshots.m"
      snapshots__succeeded = MR_TRUE;
#line 48 "snapshots.m"
    else
#line 48 "snapshots.m"
      {
#line 48 "snapshots.m"
        MR_String snapshots__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "snapshots.m"
        MR_String snapshots__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "snapshots.m"
        MR_String snapshots__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 3)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 4)));
#line 48 "snapshots.m"
        MR_String snapshots__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "snapshots.m"
        MR_String snapshots__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "snapshots.m"
        MR_String snapshots__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
#line 48 "snapshots.m"
        MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 4)));

#line 3623 "snapshots.c"
        snapshots__succeeded = (strcmp(snapshots__V_3_3, snapshots__V_8_8) == 0);
#line 48 "snapshots.m"
        if (snapshots__succeeded)
#line 48 "snapshots.m"
          {
#line 3629 "snapshots.c"
            snapshots__succeeded = (strcmp(snapshots__V_4_4, snapshots__V_9_9) == 0);
#line 48 "snapshots.m"
            if (snapshots__succeeded)
#line 48 "snapshots.m"
              {
#line 3635 "snapshots.c"
                snapshots__succeeded = (strcmp(snapshots__V_5_5, snapshots__V_10_10) == 0);
#line 48 "snapshots.m"
                if (snapshots__succeeded)
#line 48 "snapshots.m"
                  {
#line 3641 "snapshots.c"
                    snapshots__succeeded = (snapshots__V_6_6 == snapshots__V_11_11);
#line 48 "snapshots.m"
                    if (snapshots__succeeded)
#line 3645 "snapshots.c"
                      snapshots__succeeded = (snapshots__V_7_7 == snapshots__V_12_12);
#line 48 "snapshots.m"
                  }
#line 48 "snapshots.m"
              }
#line 48 "snapshots.m"
          }
#line 48 "snapshots.m"
      }
#line 48 "snapshots.m"
    return snapshots__succeeded;
#line 48 "snapshots.m"
  }
#line 48 "snapshots.m"
}

#line 45 "snapshots.m"
static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
#line 45 "snapshots.m"
  MR_Word * snapshots__HeadVar__1_1,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__3_3)
#line 45 "snapshots.m"
{
#line 45 "snapshots.m"
  {
#line 45 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 45 "snapshots.m"
    MR_Integer snapshots__CastX_6 = (MR_Integer) snapshots__HeadVar__2_2;
#line 45 "snapshots.m"
    MR_Integer snapshots__CastY_7 = (MR_Integer) snapshots__HeadVar__3_3;

#line 45 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_6 == snapshots__CastY_7);
#line 45 "snapshots.m"
    if (snapshots__succeeded)
#line 3686 "snapshots.c"
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "snapshots.m"
    else
#line 45 "snapshots.m"
      {
#line 45 "snapshots.m"
        MR_Integer snapshots__V_4_4 = (MR_Integer) snapshots__HeadVar__2_2;
#line 45 "snapshots.m"
        MR_Integer snapshots__V_5_5 = (MR_Integer) snapshots__HeadVar__3_3;

#line 45 "snapshots.m"
        {
#line 45 "snapshots.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__V_4_4, snapshots__V_5_5);
#line 45 "snapshots.m"
          return;
        }
#line 45 "snapshots.m"
      }
#line 45 "snapshots.m"
  }
#line 45 "snapshots.m"
}

#line 45 "snapshots.m"
static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__1_1,
#line 45 "snapshots.m"
  MR_Word snapshots__HeadVar__2_2)
#line 45 "snapshots.m"
{
#line 45 "snapshots.m"
  {
#line 45 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 45 "snapshots.m"
    MR_Integer snapshots__CastX_5 = (MR_Integer) snapshots__HeadVar__1_1;
#line 45 "snapshots.m"
    MR_Integer snapshots__CastY_6 = (MR_Integer) snapshots__HeadVar__2_2;

#line 45 "snapshots.m"
    snapshots__succeeded = (snapshots__CastX_5 == snapshots__CastY_6);
#line 45 "snapshots.m"
    if (snapshots__succeeded)
#line 45 "snapshots.m"
      snapshots__succeeded = MR_TRUE;
#line 45 "snapshots.m"
    else
#line 45 "snapshots.m"
      {
#line 45 "snapshots.m"
        MR_Integer snapshots__V_3_3 = (MR_Integer) snapshots__HeadVar__1_1;
#line 45 "snapshots.m"
        MR_Integer snapshots__V_4_4 = (MR_Integer) snapshots__HeadVar__2_2;

#line 3744 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_4_4);
#line 45 "snapshots.m"
      }
#line 45 "snapshots.m"
    return snapshots__succeeded;
#line 45 "snapshots.m"
  }
#line 45 "snapshots.m"
}

#line 538 "snapshots.m"
static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void)
#line 538 "snapshots.m"
{
#line 540 "snapshots.m"
  {
#line 540 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 540 "snapshots.m"
    return (MR_Float) 0.10000000000000001;
#line 540 "snapshots.m"
  }
#line 538 "snapshots.m"
}

#line 534 "snapshots.m"
static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
#line 534 "snapshots.m"
  MR_Integer snapshots__N_4,
#line 534 "snapshots.m"
  MR_Integer snapshots__Total_5)
#line 534 "snapshots.m"
{
#line 536 "snapshots.m"
  {
#line 536 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 536 "snapshots.m"
    MR_Float snapshots__HeadVar__3_3;
#line 536 "snapshots.m"
    MR_Float snapshots__V_6_6;
#line 536 "snapshots.m"
    MR_Float snapshots__V_8_8;
#line 536 "snapshots.m"
    MR_Float snapshots__V_9_9;

#line 536 "snapshots.m"
    {
#line 536 "snapshots.m"
      snapshots__V_8_8 = mercury__float__float_1_f_0(snapshots__N_4);
    }
#line 536 "snapshots.m"
    snapshots__V_6_6 = (((MR_Float) 100.00000000000000) * snapshots__V_8_8);
#line 536 "snapshots.m"
    {
#line 536 "snapshots.m"
      snapshots__V_9_9 = mercury__float__float_1_f_0(snapshots__Total_5);
    }
#line 536 "snapshots.m"
    {
#line 536 "snapshots.m"
      return snapshots__HeadVar__3_3 = mercury__float__f_slash_2_f_0(snapshots__V_6_6, snapshots__V_9_9);
    }
#line 536 "snapshots.m"
    return snapshots__HeadVar__3_3;
#line 536 "snapshots.m"
  }
#line 534 "snapshots.m"
}

#line 525 "snapshots.m"
static void MR_CALL 
snapshots__sum_counts_5_p_0(
#line 525 "snapshots.m"
  MR_Word snapshots__Site_6,
#line 525 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 525 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 525 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 525 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
#line 525 "snapshots.m"
{
#line 528 "snapshots.m"
  {
#line 528 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 528 "snapshots.m"
    MR_Integer snapshots__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 1)));
#line 528 "snapshots.m"
    MR_Integer snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 2)));
#line 529 "snapshots.m"
    MR_Word snapshots__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 0)));

#line 529 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__V_14_14);
#line 530 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__V_18_18);
#line 528 "snapshots.m"
  }
#line 525 "snapshots.m"
}

#line 519 "snapshots.m"
static void MR_CALL 
snapshots__sum_groups_5_p_0(
#line 519 "snapshots.m"
  MR_Word snapshots__Group_6,
#line 519 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 519 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 519 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 519 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
#line 519 "snapshots.m"
{
#line 521 "snapshots.m"
  {
#line 521 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 521 "snapshots.m"
    MR_Integer snapshots__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 0)));
#line 521 "snapshots.m"
    MR_Integer snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 1)));
#line 522 "snapshots.m"
    MR_Word snapshots__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 2)));
#line 522 "snapshots.m"
    MR_Word snapshots__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 3)));

#line 522 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__V_14_14);
#line 523 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__V_17_17);
#line 521 "snapshots.m"
  }
#line 519 "snapshots.m"
}

#line 511 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_words_3_p_0(
#line 511 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 511 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 511 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 511 "snapshots.m"
{
#line 514 "snapshots.m"
  {
#line 514 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 514 "snapshots.m"
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 514 "snapshots.m"
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 515 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 515 "snapshots.m"
    MR_Integer snapshots__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 516 "snapshots.m"
    MR_Word snapshots__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 516 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));

#line 517 "snapshots.m"
    {
#line 517 "snapshots.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
#line 517 "snapshots.m"
      return;
    }
#line 514 "snapshots.m"
  }
#line 511 "snapshots.m"
}

#line 503 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_type_3_p_0(
#line 503 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 503 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 503 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 503 "snapshots.m"
{
#line 506 "snapshots.m"
  {
#line 506 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 506 "snapshots.m"
    MR_String snapshots__A_7;
#line 506 "snapshots.m"
    MR_String snapshots__B_8;
#line 506 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 506 "snapshots.m"
    MR_Word snapshots__V_10_10;
#line 507 "snapshots.m"
    MR_Integer snapshots__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 507 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 507 "snapshots.m"
    MR_String snapshots__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 0)));
#line 507 "snapshots.m"
    MR_String snapshots__V_14_14;
#line 507 "snapshots.m"
    MR_Integer snapshots__V_15_15;
#line 507 "snapshots.m"
    MR_Integer snapshots__V_16_16;
#line 508 "snapshots.m"
    MR_Integer snapshots__V_17_17;
#line 508 "snapshots.m"
    MR_Integer snapshots__V_18_18;
#line 508 "snapshots.m"
    MR_String snapshots__V_19_19;
#line 508 "snapshots.m"
    MR_String snapshots__V_20_20;
#line 508 "snapshots.m"
    MR_Integer snapshots__V_21_21;
#line 508 "snapshots.m"
    MR_Integer snapshots__V_22_22;

#line 507 "snapshots.m"
    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 1)));
#line 507 "snapshots.m"
    snapshots__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 2)));
#line 507 "snapshots.m"
    snapshots__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 3)));
#line 507 "snapshots.m"
    snapshots__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 4)));
#line 508 "snapshots.m"
    snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 508 "snapshots.m"
    snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
#line 508 "snapshots.m"
    snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 508 "snapshots.m"
    snapshots__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 0)));
#line 508 "snapshots.m"
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 1)));
#line 508 "snapshots.m"
    snapshots__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 2)));
#line 508 "snapshots.m"
    snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 3)));
#line 508 "snapshots.m"
    snapshots__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 4)));
#line 509 "snapshots.m"
    {
#line 509 "snapshots.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
#line 509 "snapshots.m"
      return;
    }
#line 506 "snapshots.m"
  }
#line 503 "snapshots.m"
}

#line 495 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
#line 495 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 495 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 495 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 495 "snapshots.m"
{
#line 498 "snapshots.m"
  {
#line 498 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 498 "snapshots.m"
    MR_String snapshots__A_7;
#line 498 "snapshots.m"
    MR_String snapshots__B_8;
#line 498 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 498 "snapshots.m"
    MR_Word snapshots__V_10_10;
#line 499 "snapshots.m"
    MR_Integer snapshots__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 499 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 499 "snapshots.m"
    MR_String snapshots__V_13_13;
#line 499 "snapshots.m"
    MR_String snapshots__V_14_14;
#line 499 "snapshots.m"
    MR_Integer snapshots__V_15_15;
#line 499 "snapshots.m"
    MR_Integer snapshots__V_16_16;
#line 500 "snapshots.m"
    MR_Integer snapshots__V_17_17;
#line 500 "snapshots.m"
    MR_Integer snapshots__V_18_18;
#line 500 "snapshots.m"
    MR_String snapshots__V_19_19;
#line 500 "snapshots.m"
    MR_String snapshots__V_20_20;
#line 500 "snapshots.m"
    MR_Integer snapshots__V_21_21;
#line 500 "snapshots.m"
    MR_Integer snapshots__V_22_22;

#line 499 "snapshots.m"
    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 0)));
#line 499 "snapshots.m"
    snapshots__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 1)));
#line 499 "snapshots.m"
    snapshots__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 2)));
#line 499 "snapshots.m"
    snapshots__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 3)));
#line 499 "snapshots.m"
    snapshots__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 4)));
#line 500 "snapshots.m"
    snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 500 "snapshots.m"
    snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
#line 500 "snapshots.m"
    snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 500 "snapshots.m"
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 0)));
#line 500 "snapshots.m"
    snapshots__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 1)));
#line 500 "snapshots.m"
    snapshots__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 2)));
#line 500 "snapshots.m"
    snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 3)));
#line 500 "snapshots.m"
    snapshots__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 4)));
#line 501 "snapshots.m"
    {
#line 501 "snapshots.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
#line 501 "snapshots.m"
      return;
    }
#line 498 "snapshots.m"
  }
#line 495 "snapshots.m"
}

#line 488 "snapshots.m"
static void MR_CALL 
snapshots__group_by_words_3_p_0(
#line 488 "snapshots.m"
  MR_Word snapshots__GroupA_4,
#line 488 "snapshots.m"
  MR_Word snapshots__GroupB_5,
#line 488 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 488 "snapshots.m"
{
#line 490 "snapshots.m"
  {
#line 490 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 490 "snapshots.m"
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 1)));
#line 490 "snapshots.m"
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 1)));
#line 491 "snapshots.m"
    MR_Integer snapshots__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 0)));
#line 491 "snapshots.m"
    MR_Word snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 2)));
#line 491 "snapshots.m"
    MR_Word snapshots__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 3)));
#line 492 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 0)));
#line 492 "snapshots.m"
    MR_Word snapshots__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 2)));
#line 492 "snapshots.m"
    MR_Word snapshots__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 3)));

#line 493 "snapshots.m"
    {
#line 493 "snapshots.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
#line 493 "snapshots.m"
      return;
    }
#line 490 "snapshots.m"
  }
#line 488 "snapshots.m"
}

#line 451 "snapshots.m"
static void MR_CALL 
snapshots__output_site_7_p_0(
#line 451 "snapshots.m"
  MR_Word snapshots__MajorAxis_8,
#line 451 "snapshots.m"
  MR_Integer snapshots__TotalCells_9,
#line 451 "snapshots.m"
  MR_Integer snapshots__TotalWords_10,
#line 451 "snapshots.m"
  MR_Word snapshots__Single_11,
#line 451 "snapshots.m"
  MR_Word snapshots__AllocCounts_12)
#line 451 "snapshots.m"
{
#line 454 "snapshots.m"
  {
#line 454 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 454 "snapshots.m"
    MR_Word snapshots__AllocSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 0)));
#line 454 "snapshots.m"
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 1)));
#line 454 "snapshots.m"
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 2)));
#line 454 "snapshots.m"
    MR_String snapshots__Proc_17 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 0)));
#line 454 "snapshots.m"
    MR_String snapshots__Type_18 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 1)));
#line 454 "snapshots.m"
    MR_String snapshots__File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 2)));
#line 454 "snapshots.m"
    MR_Integer snapshots__LineNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 3)));
#line 454 "snapshots.m"
    MR_Float snapshots__CellsPercent_22;
#line 454 "snapshots.m"
    MR_Float snapshots__WordsPercent_23;
#line 454 "snapshots.m"
    MR_String snapshots__RightLabel_24;
#line 456 "snapshots.m"
    MR_Integer snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 4)));

#line 457 "snapshots.m"
    {
#line 457 "snapshots.m"
      snapshots__CellsPercent_22 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_9);
    }
#line 458 "snapshots.m"
    {
#line 458 "snapshots.m"
      snapshots__WordsPercent_23 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_10);
    }
#line 462 "snapshots.m"
    if ((snapshots__MajorAxis_8 == (MR_Integer) 0))
#line 461 "snapshots.m"
      snapshots__RightLabel_24 = snapshots__Type_18;
#line 462 "snapshots.m"
    else
#line 464 "snapshots.m"
      snapshots__RightLabel_24 = snapshots__Proc_17;
#line 470 "snapshots.m"
    if ((snapshots__Single_11 == (MR_Integer) 0))
#line 477 "snapshots.m"
      {
#line 473 "snapshots.m"
        MR_Float snapshots__V_27_27;
#line 473 "snapshots.m"
        MR_Float snapshots__V_28_28;

#line 473 "snapshots.m"
        {
#line 473 "snapshots.m"
          snapshots__V_27_27 = snapshots__min_percentage_major_0_f_0();
        }
#line 473 "snapshots.m"
        snapshots__succeeded = (snapshots__CellsPercent_22 <= snapshots__V_27_27);
#line 473 "snapshots.m"
        if (snapshots__succeeded)
#line 473 "snapshots.m"
          {
#line 474 "snapshots.m"
            {
#line 474 "snapshots.m"
              snapshots__V_28_28 = snapshots__min_percentage_major_0_f_0();
            }
#line 474 "snapshots.m"
            snapshots__succeeded = (snapshots__WordsPercent_23 <= snapshots__V_28_28);
#line 473 "snapshots.m"
          }
#line 477 "snapshots.m"
        if (snapshots__succeeded)
#line 477 "snapshots.m"
          {
#line 477 "snapshots.m"
          }
#line 477 "snapshots.m"
        else
#line 478 "snapshots.m"
          {
#line 478 "snapshots.m"
            MR_String snapshots__V_106_106;
#line 478 "snapshots.m"
            MR_Word snapshots__V_112_112;
#line 478 "snapshots.m"
            MR_String snapshots__V_117_117;
#line 478 "snapshots.m"
            MR_String snapshots__V_130_130;
#line 478 "snapshots.m"
            MR_String snapshots__V_141_141;
#line 478 "snapshots.m"
            MR_String snapshots__V_154_154;
#line 478 "snapshots.m"
            MR_String snapshots__V_165_165;
#line 478 "snapshots.m"
            MR_String snapshots__V_175_175;
#line 478 "snapshots.m"
            MR_String snapshots__V_185_185;

#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 4267 "snapshots.c"
            snapshots__V_112_112 = (MR_Word) &snapshots_scalar_common_5[0];
#line 479 "snapshots.m"
            {
#line 479 "snapshots.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__V_106_106);
            }
#line 479 "snapshots.m"
            {
#line 479 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_106_106);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
#line 479 "snapshots.m"
            {
#line 479 "snapshots.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_22, &snapshots__V_117_117);
            }
#line 479 "snapshots.m"
            {
#line 479 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_117_117);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__V_130_130);
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_130_130);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_23, &snapshots__V_141_141);
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_141_141);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) "%  ");
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_String) "", &snapshots__V_154_154);
            }
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_154_154);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__RightLabel_24, &snapshots__V_165_165);
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_165_165);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) " (");
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__File_19, &snapshots__V_175_175);
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_175_175);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) ":");
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__LineNum_20, &snapshots__V_185_185);
            }
#line 481 "snapshots.m"
            {
#line 481 "snapshots.m"
              mercury__io__write_string_3_p_0(snapshots__V_185_185);
            }
#line 478 "snapshots.m"
            {
#line 478 "snapshots.m"
              mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 478 "snapshots.m"
              return;
            }
#line 478 "snapshots.m"
          }
#line 477 "snapshots.m"
      }
#line 470 "snapshots.m"
    else
#line 467 "snapshots.m"
      {
#line 467 "snapshots.m"
        MR_String snapshots__V_64_64;
#line 467 "snapshots.m"
        MR_Word snapshots__V_70_70;
#line 467 "snapshots.m"
        MR_String snapshots__V_75_75;
#line 467 "snapshots.m"
        MR_String snapshots__V_85_85;
#line 467 "snapshots.m"
        MR_String snapshots__V_95_95;

#line 468 "snapshots.m"
        {
#line 468 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 4415 "snapshots.c"
        snapshots__V_70_70 = (MR_Word) &snapshots_scalar_common_5[0];
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_70_70, (MR_Integer) 38, (MR_String) "", &snapshots__V_64_64);
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_64_64);
        }
#line 468 "snapshots.m"
        {
#line 468 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "  ");
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__RightLabel_24, &snapshots__V_75_75);
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_75_75);
        }
#line 468 "snapshots.m"
        {
#line 468 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__File_19, &snapshots__V_85_85);
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_85_85);
        }
#line 468 "snapshots.m"
        {
#line 468 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) ":");
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__LineNum_20, &snapshots__V_95_95);
        }
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_95_95);
        }
#line 468 "snapshots.m"
        {
#line 468 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 468 "snapshots.m"
          return;
        }
#line 467 "snapshots.m"
      }
#line 454 "snapshots.m"
  }
#line 451 "snapshots.m"
}

#line 445 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0_1(
#line 445 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 445 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 445 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 445 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 445 "snapshots.m"
{
#line 445 "snapshots.m"
  {
#line 445 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;

#line 445 "snapshots.m"
    {
#line 445 "snapshots.m"
      snapshots__output_site_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 6))), ((MR_Word) snapshots__wrapper_arg_1));
#line 445 "snapshots.m"
      return;
    }
#line 445 "snapshots.m"
  }
#line 445 "snapshots.m"
}

#line 404 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0(
#line 404 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 404 "snapshots.m"
  MR_Integer snapshots__TotalCells_10,
#line 404 "snapshots.m"
  MR_Integer snapshots__TotalWords_11,
#line 404 "snapshots.m"
  MR_Word snapshots__Group_12,
#line 404 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
#line 404 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29)
#line 404 "snapshots.m"
{
#line 407 "snapshots.m"
  {
#line 407 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 407 "snapshots.m"
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 0)));
#line 407 "snapshots.m"
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 1)));
#line 407 "snapshots.m"
    MR_Word snapshots__AllocSite_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 2)));
#line 407 "snapshots.m"
    MR_Word snapshots__Counts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 3)));
#line 407 "snapshots.m"
    MR_Float snapshots__CellsPercent_19;
#line 407 "snapshots.m"
    MR_Float snapshots__WordsPercent_20;
#line 407 "snapshots.m"
    MR_Float snapshots__CumulPercent_21;
#line 414 "snapshots.m"
    MR_Float snapshots__V_33_33;
#line 414 "snapshots.m"
    MR_Float snapshots__V_34_34;

#line 409 "snapshots.m"
    *snapshots__STATE_VARIABLE_CumulWords_29 = (snapshots__STATE_VARIABLE_CumulWords_0_28 + snapshots__NumWords_16);
#line 410 "snapshots.m"
    {
#line 410 "snapshots.m"
      snapshots__CellsPercent_19 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_10);
    }
#line 411 "snapshots.m"
    {
#line 411 "snapshots.m"
      snapshots__WordsPercent_20 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_11);
    }
#line 412 "snapshots.m"
    {
#line 412 "snapshots.m"
      snapshots__CumulPercent_21 = snapshots__percentage_2_f_0(*snapshots__STATE_VARIABLE_CumulWords_29, snapshots__TotalWords_11);
    }
#line 414 "snapshots.m"
    {
#line 414 "snapshots.m"
      snapshots__V_33_33 = snapshots__min_percentage_major_0_f_0();
    }
#line 414 "snapshots.m"
    snapshots__succeeded = (snapshots__CellsPercent_19 <= snapshots__V_33_33);
#line 414 "snapshots.m"
    if (snapshots__succeeded)
#line 414 "snapshots.m"
      {
#line 415 "snapshots.m"
        {
#line 415 "snapshots.m"
          snapshots__V_34_34 = snapshots__min_percentage_major_0_f_0();
        }
#line 415 "snapshots.m"
        snapshots__succeeded = (snapshots__WordsPercent_20 <= snapshots__V_34_34);
#line 414 "snapshots.m"
      }
#line 418 "snapshots.m"
    if (snapshots__succeeded)
#line 418 "snapshots.m"
      {
#line 418 "snapshots.m"
      }
#line 418 "snapshots.m"
    else
#line 419 "snapshots.m"
      {
#line 419 "snapshots.m"
        MR_Word snapshots__MajorAxis_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 419 "snapshots.m"
        MR_Word snapshots__Brief_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 419 "snapshots.m"
        MR_String snapshots__RightLabel_24;
#line 419 "snapshots.m"
        MR_Char snapshots__Star_25;
#line 419 "snapshots.m"
        MR_String snapshots__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
#line 419 "snapshots.m"
        MR_String snapshots__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
#line 419 "snapshots.m"
        MR_String snapshots__V_81_81;
#line 419 "snapshots.m"
        MR_Word snapshots__V_87_87;
#line 419 "snapshots.m"
        MR_String snapshots__V_89_89;
#line 419 "snapshots.m"
        MR_String snapshots__V_100_100;
#line 419 "snapshots.m"
        MR_String snapshots__V_113_113;
#line 419 "snapshots.m"
        MR_String snapshots__V_124_124;
#line 419 "snapshots.m"
        MR_String snapshots__V_137_137;
#line 419 "snapshots.m"
        MR_String snapshots__V_150_150;
#line 419 "snapshots.m"
        MR_Word snapshots__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 419 "snapshots.m"
        MR_Word snapshots__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 423 "snapshots.m"
        MR_Integer snapshots__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
#line 423 "snapshots.m"
        MR_Integer snapshots__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
#line 423 "snapshots.m"
        MR_String snapshots__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));

#line 424 "snapshots.m"
        if ((snapshots__MajorAxis_22 == (MR_Integer) 0))
#line 423 "snapshots.m"
          snapshots__RightLabel_24 = snapshots__V_79_79;
#line 424 "snapshots.m"
        else
#line 426 "snapshots.m"
          snapshots__RightLabel_24 = snapshots__V_78_78;
#line 431 "snapshots.m"
        if ((snapshots__Brief_23 == (MR_Integer) 0))
#line 432 "snapshots.m"
          snapshots__Star_25 = (MR_Char) 42;
#line 431 "snapshots.m"
        else
#line 429 "snapshots.m"
          snapshots__Star_25 = (MR_Char) 32;
#line 4658 "snapshots.c"
        snapshots__V_87_87 = (MR_Word) &snapshots_scalar_common_5[0];
#line 436 "snapshots.m"
        {
#line 436 "snapshots.m"
          mercury__string__format__format_char_component_nowidth_3_p_0(snapshots__V_87_87, snapshots__Star_25, &snapshots__V_81_81);
        }
#line 436 "snapshots.m"
        {
#line 436 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_81_81);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_87_87, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__V_89_89);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_89_89);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_19, &snapshots__V_100_100);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_100_100);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_87_87, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__V_113_113);
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_113_113);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_20, &snapshots__V_124_124);
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_124_124);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CumulPercent_21, &snapshots__V_137_137);
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_137_137);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "%  ");
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_87_87, snapshots__RightLabel_24, &snapshots__V_150_150);
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_150_150);
        }
#line 435 "snapshots.m"
        {
#line 435 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 442 "snapshots.m"
        if ((snapshots__Brief_23 == (MR_Integer) 0))
#line 443 "snapshots.m"
          {
#line 443 "snapshots.m"
            MR_Word snapshots__Single_26;
#line 443 "snapshots.m"
            MR_Word snapshots__V_53_53;
#line 444 "snapshots.m"
            MR_Word snapshots__V_52_52;
#line 444 "snapshots.m"
            MR_Word snapshots__V_27_27;
#line 445 "snapshots.m"
            MR_Box snapshots__conv0_STATE_VARIABLE_IO_54_54;

#line 444 "snapshots.m"
            snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Counts_18)) == (MR_mktag((MR_Integer) 1)));
#line 444 "snapshots.m"
            if (snapshots__succeeded)
#line 444 "snapshots.m"
              {
#line 444 "snapshots.m"
                snapshots__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 0)));
#line 444 "snapshots.m"
                snapshots__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 1)));
#line 444 "snapshots.m"
                snapshots__succeeded = (snapshots__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "snapshots.m"
              }
#line 444 "snapshots.m"
            if (snapshots__succeeded)
#line 444 "snapshots.m"
              snapshots__Single_26 = (MR_Integer) 1;
#line 444 "snapshots.m"
            else
#line 444 "snapshots.m"
              snapshots__Single_26 = (MR_Integer) 0;
#line 445 "snapshots.m"
            {
#line 445 "snapshots.m"
              snapshots__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 0) = ((MR_Box) (&snapshots_scalar_common_8[0]));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 1) = ((MR_Box) (snapshots__output_group_8_p_0_1));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 3) = ((MR_Box) (snapshots__MajorAxis_22));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 4) = ((MR_Box) (snapshots__TotalCells_10));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 5) = ((MR_Box) (snapshots__TotalWords_11));
#line 445 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__V_53_53, 6) = ((MR_Box) (snapshots__Single_26));
#line 445 "snapshots.m"
            }
#line 445 "snapshots.m"
            {
#line 445 "snapshots.m"
              mercury__list__foldl_4_p_2((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__V_53_53, snapshots__Counts_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv0_STATE_VARIABLE_IO_54_54);
            }
#line 447 "snapshots.m"
            {
#line 447 "snapshots.m"
              mercury__io__nl_2_p_0();
#line 447 "snapshots.m"
              return;
            }
#line 443 "snapshots.m"
          }
#line 442 "snapshots.m"
        else
#line 441 "snapshots.m"
          {
#line 441 "snapshots.m"
          }
#line 419 "snapshots.m"
      }
#line 407 "snapshots.m"
  }
#line 404 "snapshots.m"
}

#line 387 "snapshots.m"
static void MR_CALL 
snapshots__output_column_names_3_p_0(
#line 387 "snapshots.m"
  MR_Word snapshots__Options_4)
#line 387 "snapshots.m"
{
#line 389 "snapshots.m"
  {
#line 389 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 389 "snapshots.m"
    MR_Word snapshots__MajorAxis_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 389 "snapshots.m"
    MR_String snapshots__RightLabel_7;
#line 389 "snapshots.m"
    MR_String snapshots__V_30_30;
#line 389 "snapshots.m"
    MR_Word snapshots__V_36_36;
#line 389 "snapshots.m"
    MR_String snapshots__V_39_39;
#line 389 "snapshots.m"
    MR_String snapshots__V_48_48;
#line 389 "snapshots.m"
    MR_String snapshots__V_59_59;
#line 390 "snapshots.m"
    MR_Word snapshots__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 390 "snapshots.m"
    MR_Word snapshots__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 390 "snapshots.m"
    MR_Word snapshots__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 394 "snapshots.m"
    if ((snapshots__MajorAxis_6 == (MR_Integer) 0))
#line 393 "snapshots.m"
      snapshots__RightLabel_7 = (MR_String) "procedure / type (location)";
#line 394 "snapshots.m"
    else
#line 396 "snapshots.m"
      snapshots__RightLabel_7 = (MR_String) "type / procedure (location)";
#line 398 "snapshots.m"
    {
#line 398 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 4889 "snapshots.c"
    snapshots__V_36_36 = (MR_Word) &snapshots_scalar_common_5[0];
#line 399 "snapshots.m"
    {
#line 399 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 7, (MR_String) "cells", &snapshots__V_30_30);
    }
#line 399 "snapshots.m"
    {
#line 399 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_30_30);
    }
#line 400 "snapshots.m"
    {
#line 400 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 17, (MR_String) "words", &snapshots__V_39_39);
    }
#line 400 "snapshots.m"
    {
#line 400 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_39_39);
    }
#line 401 "snapshots.m"
    {
#line 401 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 14, (MR_String) "cumul", &snapshots__V_48_48);
    }
#line 401 "snapshots.m"
    {
#line 401 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_48_48);
    }
#line 398 "snapshots.m"
    {
#line 398 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
#line 402 "snapshots.m"
    {
#line 402 "snapshots.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_36_36, snapshots__RightLabel_7, &snapshots__V_59_59);
    }
#line 402 "snapshots.m"
    {
#line 402 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_59_59);
    }
#line 398 "snapshots.m"
    {
#line 398 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 398 "snapshots.m"
      return;
    }
#line 389 "snapshots.m"
  }
#line 387 "snapshots.m"
}

#line 384 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
#line 384 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 384 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 384 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 384 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 384 "snapshots.m"
{
#line 384 "snapshots.m"
  {
#line 384 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 384 "snapshots.m"
    MR_Integer snapshots__conv4_STATE_VARIABLE_CumulWords_29;

#line 384 "snapshots.m"
    {
#line 384 "snapshots.m"
      snapshots__output_group_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv4_STATE_VARIABLE_CumulWords_29);
    }
#line 384 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv4_STATE_VARIABLE_CumulWords_29));
#line 384 "snapshots.m"
  }
#line 384 "snapshots.m"
}

#line 374 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
#line 374 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 374 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 374 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 374 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 374 "snapshots.m"
{
#line 374 "snapshots.m"
  {
#line 374 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 374 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalCells_10;
#line 374 "snapshots.m"
    MR_Integer snapshots__conv0_STATE_VARIABLE_TotalWords_12;

#line 374 "snapshots.m"
    {
#line 374 "snapshots.m"
      snapshots__sum_groups_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv1_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv0_STATE_VARIABLE_TotalWords_12);
    }
#line 374 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalCells_10));
#line 374 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv0_STATE_VARIABLE_TotalWords_12));
#line 374 "snapshots.m"
  }
#line 374 "snapshots.m"
}

#line 369 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0(
#line 369 "snapshots.m"
  MR_Word snapshots__Options_5,
#line 369 "snapshots.m"
  MR_Word snapshots__Grouped_6)
#line 369 "snapshots.m"
{
#line 372 "snapshots.m"
  {
#line 372 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 372 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_43_43;
#line 372 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_44_44;
#line 372 "snapshots.m"
    MR_Integer snapshots__TotalCells_8;
#line 372 "snapshots.m"
    MR_Integer snapshots__TotalWords_9;
#line 372 "snapshots.m"
    MR_Word snapshots__Brief_10;
#line 372 "snapshots.m"
    MR_Word snapshots__V_32_32;
#line 372 "snapshots.m"
    MR_String snapshots__V_54_54;
#line 372 "snapshots.m"
    MR_Word snapshots__V_60_60;
#line 372 "snapshots.m"
    MR_String snapshots__V_63_63;
#line 372 "snapshots.m"
    MR_String snapshots__V_72_72;
#line 372 "snapshots.m"
    MR_String snapshots__V_83_83;
#line 374 "snapshots.m"
    MR_Box snapshots__conv3_TotalCells_8;
#line 374 "snapshots.m"
    MR_Box snapshots__conv2_TotalWords_9;
#line 377 "snapshots.m"
    MR_Word snapshots__V_35_35;
#line 377 "snapshots.m"
    MR_Word snapshots__V_36_36;
#line 377 "snapshots.m"
    MR_Word snapshots__V_37_37;
#line 384 "snapshots.m"
    MR_Integer snapshots___CumulWords_11;
#line 384 "snapshots.m"
    MR_Box snapshots__conv6__CumulWords_11;
#line 384 "snapshots.m"
    MR_Box snapshots__conv5_STATE_VARIABLE_IO_13;

#line 373 "snapshots.m"
    {
#line 373 "snapshots.m"
      snapshots__output_column_names_3_p_0(snapshots__Options_5);
    }
#line 5081 "snapshots.c"
    snapshots__TypeCtorInfo_43_43 = (MR_Word) &snapshots__snapshots__type_ctor_info_group_0;
#line 5083 "snapshots.c"
    snapshots__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 374 "snapshots.m"
    {
#line 374 "snapshots.m"
      mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, snapshots__TypeCtorInfo_44_44, (MR_Word) &snapshots_scalar_common_1[7], snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalCells_8, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv2_TotalWords_9);
    }
#line 374 "snapshots.m"
    snapshots__TotalCells_8 = ((MR_Integer) snapshots__conv3_TotalCells_8);
#line 374 "snapshots.m"
    snapshots__TotalWords_9 = ((MR_Integer) snapshots__conv2_TotalWords_9);
#line 375 "snapshots.m"
    {
#line 375 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 5099 "snapshots.c"
    snapshots__V_60_60 = (MR_Word) &snapshots_scalar_common_5[0];
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 7, snapshots__TotalCells_8, &snapshots__V_54_54);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_54_54);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 17, snapshots__TotalWords_9, &snapshots__V_63_63);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_63_63);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 14, (MR_String) "", &snapshots__V_72_72);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_72_72);
    }
#line 375 "snapshots.m"
    {
#line 375 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_60_60, (MR_String) "total", &snapshots__V_83_83);
    }
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_83_83);
    }
#line 375 "snapshots.m"
    {
#line 375 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 377 "snapshots.m"
    snapshots__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 377 "snapshots.m"
    snapshots__Brief_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 377 "snapshots.m"
    snapshots__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 377 "snapshots.m"
    snapshots__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 380 "snapshots.m"
    if ((snapshots__Brief_10 == (MR_Integer) 0))
#line 382 "snapshots.m"
      {
#line 382 "snapshots.m"
        mercury__io__nl_2_p_0();
      }
#line 380 "snapshots.m"
    else
#line 379 "snapshots.m"
      {
#line 379 "snapshots.m"
      }
#line 384 "snapshots.m"
    {
#line 384 "snapshots.m"
      snapshots__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 0) = ((MR_Box) (&snapshots_scalar_common_7[0]));
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 1) = ((MR_Box) (snapshots__output_snapshot_4_p_0_2));
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 3) = ((MR_Box) (snapshots__Options_5));
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 4) = ((MR_Box) (snapshots__TotalCells_8));
#line 384 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 5) = ((MR_Box) (snapshots__TotalWords_9));
#line 384 "snapshots.m"
    }
#line 384 "snapshots.m"
    {
#line 384 "snapshots.m"
      mercury__list__foldl2_6_p_2(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__V_32_32, snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv6__CumulWords_11, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv5_STATE_VARIABLE_IO_13);
    }
#line 384 "snapshots.m"
    snapshots___CumulWords_11 = ((MR_Integer) snapshots__conv6__CumulWords_11);
#line 372 "snapshots.m"
  }
#line 369 "snapshots.m"
}

#line 356 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_2(
#line 356 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 356 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 356 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 356 "snapshots.m"
{
#line 356 "snapshots.m"
  {
#line 356 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 356 "snapshots.m"
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
#line 356 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

#line 356 "snapshots.m"
    {
#line 356 "snapshots.m"
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
#line 356 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
#line 356 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
#line 356 "snapshots.m"
  }
#line 356 "snapshots.m"
}

#line 355 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_1(
#line 355 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 355 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 355 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 355 "snapshots.m"
{
#line 355 "snapshots.m"
  {
#line 355 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 355 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 355 "snapshots.m"
    {
#line 355 "snapshots.m"
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 355 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 355 "snapshots.m"
  }
#line 355 "snapshots.m"
}

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0(
#line 334 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 334 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 334 "snapshots.m"
  MR_Word * snapshots__Groups_6)
#line 334 "snapshots.m"
{
#line 339 "snapshots.m"
  {
#line 339 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 339 "snapshots.m"
    if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "snapshots.m"
      *snapshots__Groups_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "snapshots.m"
    else
#line 342 "snapshots.m"
      {
#line 342 "snapshots.m"
        MR_Word snapshots__TypeCtorInfo_17_28;
#line 342 "snapshots.m"
        MR_Word snapshots__TypeCtorInfo_26_37;
#line 342 "snapshots.m"
        MR_Word snapshots__First_9;
#line 342 "snapshots.m"
        MR_Word snapshots__Rest_10;
#line 342 "snapshots.m"
        MR_Word snapshots__FirstGroup_11;
#line 342 "snapshots.m"
        MR_Word snapshots__SortedCounts0_16;
#line 342 "snapshots.m"
        MR_Word snapshots__SortedCounts_17;
#line 342 "snapshots.m"
        MR_Integer snapshots__TotalCells_18;
#line 342 "snapshots.m"
        MR_Integer snapshots__TotalWords_19;
#line 342 "snapshots.m"
        MR_Word snapshots__FirstSite_20;
#line 342 "snapshots.m"
        MR_Word snapshots__V_25_25;
#line 342 "snapshots.m"
        MR_Word * snapshots__AddrRestGroups_38;
#line 356 "snapshots.m"
        MR_Box snapshots__conv4_TotalCells_18;
#line 356 "snapshots.m"
        MR_Box snapshots__conv3_TotalWords_19;
#line 357 "snapshots.m"
        MR_Box snapshots__conv5_V_25_25;
#line 357 "snapshots.m"
        MR_Integer snapshots__V_26_26;
#line 357 "snapshots.m"
        MR_Integer snapshots__V_27_27;

#line 343 "snapshots.m"
        {
#line 343 "snapshots.m"
          snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
        }
#line 5338 "snapshots.c"
        snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
#line 354 "snapshots.m"
        {
#line 354 "snapshots.m"
          mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
        }
#line 355 "snapshots.m"
        {
#line 355 "snapshots.m"
          mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[5], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
        }
#line 5350 "snapshots.c"
        snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 356 "snapshots.m"
        {
#line 356 "snapshots.m"
          mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[6], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
        }
#line 356 "snapshots.m"
        snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
#line 356 "snapshots.m"
        snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
#line 357 "snapshots.m"
        {
#line 357 "snapshots.m"
          snapshots__conv5_V_25_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
        }
#line 357 "snapshots.m"
        snapshots__V_25_25 = ((MR_Word) snapshots__conv5_V_25_25);
#line 357 "snapshots.m"
        snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 0)));
#line 357 "snapshots.m"
        snapshots__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 1)));
#line 357 "snapshots.m"
        snapshots__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 2)));
#line 358 "snapshots.m"
        {
#line 358 "snapshots.m"
          snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
#line 358 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
#line 358 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
#line 358 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
#line 358 "snapshots.m"
        }
#line 346 "snapshots.m"
        {
#line 346 "snapshots.m"
          MR_Word base;
#line 346 "snapshots.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "snapshots.m"
          *snapshots__Groups_6 = base;
#line 346 "snapshots.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (snapshots__FirstGroup_11));
#line 346 "snapshots.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 346 "snapshots.m"
        }
#line 346 "snapshots.m"
        snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Groups_6, (MR_Integer) 1));
#line 345 "snapshots.m"
        {
#line 345 "snapshots.m"
          snapshots__LCMCpr_make_groups_1_3_p_0(snapshots__Compare_4, snapshots__Rest_10, snapshots__AddrRestGroups_38);
#line 345 "snapshots.m"
          return;
        }
#line 342 "snapshots.m"
      }
#line 339 "snapshots.m"
  }
#line 334 "snapshots.m"
}

#line 273 "snapshots.m"
static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
#line 273 "snapshots.m"
  MR_Word snapshots__Options_6,
#line 273 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_7,
#line 273 "snapshots.m"
  MR_Word snapshots__SizeMap_8,
#line 273 "snapshots.m"
  MR_String snapshots__Line_9,
#line 273 "snapshots.m"
  MR_Word * snapshots__Counts_10)
#line 273 "snapshots.m"
{
#line 276 "snapshots.m"
  {
#line 276 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 276 "snapshots.m"
    MR_String snapshots__IdStr_11;
#line 276 "snapshots.m"
    MR_String snapshots__NumCellsStr_12;
#line 276 "snapshots.m"
    MR_String snapshots__NumWordsStr0_13;
#line 276 "snapshots.m"
    MR_Integer snapshots__NumCells_14;
#line 276 "snapshots.m"
    MR_Integer snapshots__NumWords0_15;
#line 276 "snapshots.m"
    MR_Word snapshots__AllocSite_17;
#line 276 "snapshots.m"
    MR_Word snapshots__RecalcSize_18;
#line 276 "snapshots.m"
    MR_Integer snapshots__NumWords_22;
#line 276 "snapshots.m"
    MR_Word snapshots__V_23_23;
#line 276 "snapshots.m"
    MR_Word snapshots__V_24_24;
#line 276 "snapshots.m"
    MR_Word snapshots__V_25_25;
#line 276 "snapshots.m"
    MR_Word snapshots__V_26_26;
#line 283 "snapshots.m"
    MR_Integer snapshots__Id_16;
#line 302 "snapshots.m"
    MR_Integer snapshots__SizeMapWords_21;
#line 296 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_55_55;
#line 296 "snapshots.m"
    MR_Integer snapshots__WordsPerCell_20;
#line 296 "snapshots.m"
    MR_Integer snapshots__V_43_43;
#line 297 "snapshots.m"
    MR_String snapshots__V_51_51;
#line 297 "snapshots.m"
    MR_String snapshots__V_52_52;
#line 297 "snapshots.m"
    MR_String snapshots__V_53_53;
#line 297 "snapshots.m"
    MR_Integer snapshots__V_54_54;
#line 299 "snapshots.m"
    MR_Box snapshots__conv1_SizeMapWords_21;

#line 277 "snapshots.m"
    {
#line 277 "snapshots.m"
      snapshots__V_23_23 = mercury__string__words_1_f_0(snapshots__Line_9);
    }
#line 277 "snapshots.m"
    snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 277 "snapshots.m"
    if (snapshots__succeeded)
#line 277 "snapshots.m"
      {
#line 277 "snapshots.m"
        snapshots__IdStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_23_23, (MR_Integer) 0)));
#line 277 "snapshots.m"
        snapshots__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_23_23, (MR_Integer) 1)));
#line 277 "snapshots.m"
        snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 277 "snapshots.m"
        if (snapshots__succeeded)
#line 277 "snapshots.m"
          {
#line 277 "snapshots.m"
            snapshots__NumCellsStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_24_24, (MR_Integer) 0)));
#line 277 "snapshots.m"
            snapshots__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_24_24, (MR_Integer) 1)));
#line 277 "snapshots.m"
            snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 277 "snapshots.m"
            if (snapshots__succeeded)
#line 277 "snapshots.m"
              {
#line 277 "snapshots.m"
                snapshots__NumWordsStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_25_25, (MR_Integer) 0)));
#line 277 "snapshots.m"
                snapshots__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_25_25, (MR_Integer) 1)));
#line 277 "snapshots.m"
                snapshots__succeeded = (snapshots__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "snapshots.m"
                if (snapshots__succeeded)
#line 276 "snapshots.m"
                  {
#line 278 "snapshots.m"
                    {
#line 278 "snapshots.m"
                      snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumCellsStr_12, &snapshots__NumCells_14);
                    }
#line 276 "snapshots.m"
                    if (snapshots__succeeded)
#line 276 "snapshots.m"
                      {
#line 279 "snapshots.m"
                        {
#line 279 "snapshots.m"
                          snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumWordsStr0_13, &snapshots__NumWords0_15);
                        }
#line 276 "snapshots.m"
                        if (snapshots__succeeded)
#line 276 "snapshots.m"
                          {
#line 280 "snapshots.m"
                            {
#line 280 "snapshots.m"
                              snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__IdStr_11, &snapshots__Id_16);
                            }
#line 283 "snapshots.m"
                            if (snapshots__succeeded)
#line 281 "snapshots.m"
                              {
#line 281 "snapshots.m"
                                MR_Word snapshots__V_27_27 = (MR_Word) snapshots__Id_16;
#line 313 "snapshots.m"
                                MR_Word snapshots__AllocSite0_79;
#line 311 "snapshots.m"
                                MR_Box snapshots__conv0_AllocSite0_79;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_45_45;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_46_46;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_47_47;

#line 311 "snapshots.m"
                                {
#line 311 "snapshots.m"
                                  snapshots__succeeded = mercury__map__search_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, snapshots__AllocSiteMap_7, ((MR_Box) (snapshots__V_27_27)), &snapshots__conv0_AllocSite0_79);
                                }
#line 311 "snapshots.m"
                                if (snapshots__succeeded)
#line 311 "snapshots.m"
                                  {
#line 311 "snapshots.m"
                                    snapshots__AllocSite0_79 = ((MR_Word) snapshots__conv0_AllocSite0_79);
#line 311 "snapshots.m"
                                    snapshots__succeeded = MR_TRUE;
#line 311 "snapshots.m"
                                  }
#line 313 "snapshots.m"
                                if (snapshots__succeeded)
#line 312 "snapshots.m"
                                  snapshots__AllocSite_17 = snapshots__AllocSite0_79;
#line 313 "snapshots.m"
                                else
#line 314 "snapshots.m"
                                  snapshots__AllocSite_17 = (MR_Word) &snapshots_scalar_common_3[0];
#line 282 "snapshots.m"
                                snapshots__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 282 "snapshots.m"
                                snapshots__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 282 "snapshots.m"
                                snapshots__RecalcSize_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 282 "snapshots.m"
                                snapshots__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 281 "snapshots.m"
                                snapshots__succeeded = MR_TRUE;
#line 281 "snapshots.m"
                              }
#line 283 "snapshots.m"
                            else
#line 289 "snapshots.m"
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "runtime") == 0))
#line 284 "snapshots.m"
                              {
#line 284 "snapshots.m"
                                MR_String snapshots__Type_19;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 284 "snapshots.m"
                                MR_String snapshots__V_40_40;
#line 284 "snapshots.m"
                                MR_String snapshots__V_41_41;
#line 284 "snapshots.m"
                                MR_Integer snapshots__V_42_42;
#line 284 "snapshots.m"
                                MR_String snapshots__V_66_66;
#line 284 "snapshots.m"
                                MR_String snapshots__V_67_67;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_68_68;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_69_69;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_70_70;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_71_71;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_72_72;
#line 284 "snapshots.m"
                                MR_Word snapshots__V_73_73;
#line 284 "snapshots.m"
                                MR_String snapshots__V_74_74;
#line 284 "snapshots.m"
                                MR_String snapshots__V_75_75;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 285 "snapshots.m"
                                MR_Word snapshots__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 285 "snapshots.m"
                                MR_Word snapshots__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 285 "snapshots.m"
                                snapshots__succeeded = (snapshots__V_35_35 == (MR_Integer) 1);
#line 284 "snapshots.m"
                                if (snapshots__succeeded)
#line 284 "snapshots.m"
                                  {
#line 5647 "snapshots.c"
                                    snapshots__V_66_66 = (MR_String) " words)";
#line 5649 "snapshots.c"
                                    snapshots__V_68_68 = (MR_Integer) 0;
#line 5651 "snapshots.c"
                                    snapshots__V_69_69 = (MR_Integer) 0;
#line 5653 "snapshots.c"
                                    snapshots__V_70_70 = (MR_Integer) 0;
#line 5655 "snapshots.c"
                                    snapshots__V_71_71 = (MR_Integer) 0;
#line 5657 "snapshots.c"
                                    snapshots__V_72_72 = (MR_Integer) 0;
#line 5659 "snapshots.c"
                                    snapshots__V_73_73 = (MR_Word) &snapshots_scalar_common_5[0];
#line 286 "snapshots.m"
                                    {
#line 286 "snapshots.m"
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_73_73, snapshots__NumWords0_15, &snapshots__V_67_67);
                                    }
#line 286 "snapshots.m"
                                    {
#line 286 "snapshots.m"
                                      snapshots__V_74_74 = mercury__string__f_43_43_2_f_0(snapshots__V_67_67, snapshots__V_66_66);
                                    }
#line 5671 "snapshots.c"
                                    snapshots__V_75_75 = (MR_String) "runtime struct (";
#line 286 "snapshots.m"
                                    {
#line 286 "snapshots.m"
                                      snapshots__Type_19 = mercury__string__f_43_43_2_f_0(snapshots__V_75_75, snapshots__V_74_74);
                                    }
#line 287 "snapshots.m"
                                    snapshots__V_40_40 = (MR_String) "unknown";
#line 287 "snapshots.m"
                                    snapshots__V_41_41 = (MR_String) "unknown";
#line 287 "snapshots.m"
                                    snapshots__V_42_42 = (MR_Integer) 0;
#line 288 "snapshots.m"
                                    snapshots__RecalcSize_18 = (MR_Integer) 0;
#line 287 "snapshots.m"
                                    {
#line 287 "snapshots.m"
                                      snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 287 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) (snapshots__V_40_40));
#line 287 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_19));
#line 287 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) (snapshots__V_41_41));
#line 287 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) (snapshots__V_42_42));
#line 287 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
#line 287 "snapshots.m"
                                    }
#line 287 "snapshots.m"
                                    snapshots__succeeded = MR_TRUE;
#line 284 "snapshots.m"
                                  }
#line 284 "snapshots.m"
                              }
#line 289 "snapshots.m"
                            else
#line 289 "snapshots.m"
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "unknown") == 0))
#line 290 "snapshots.m"
                              {
#line 290 "snapshots.m"
                                MR_String snapshots__Type_44;
#line 290 "snapshots.m"
                                MR_String snapshots__V_57_57;
#line 290 "snapshots.m"
                                MR_String snapshots__V_64_64;

#line 291 "snapshots.m"
                                {
#line 291 "snapshots.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &snapshots_scalar_common_5[0], snapshots__NumWords0_15, &snapshots__V_57_57);
                                }
#line 291 "snapshots.m"
                                {
#line 291 "snapshots.m"
                                  snapshots__V_64_64 = mercury__string__f_43_43_2_f_0(snapshots__V_57_57, (MR_String) " words)");
                                }
#line 291 "snapshots.m"
                                {
#line 291 "snapshots.m"
                                  snapshots__Type_44 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", snapshots__V_64_64);
                                }
#line 292 "snapshots.m"
                                {
#line 292 "snapshots.m"
                                  snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 292 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) ((MR_String) "unknown"));
#line 292 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_44));
#line 292 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) ((MR_String) "unknown"));
#line 292 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) ((MR_Integer) 0));
#line 292 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
#line 292 "snapshots.m"
                                }
#line 293 "snapshots.m"
                                snapshots__RecalcSize_18 = (MR_Integer) 0;
#line 290 "snapshots.m"
                                snapshots__succeeded = MR_TRUE;
#line 290 "snapshots.m"
                              }
#line 289 "snapshots.m"
                            else
#line 289 "snapshots.m"
                              snapshots__succeeded = MR_FALSE;
#line 276 "snapshots.m"
                            if (snapshots__succeeded)
#line 276 "snapshots.m"
                              {
#line 296 "snapshots.m"
                                snapshots__succeeded = (snapshots__RecalcSize_18 == (MR_Integer) 1);
#line 296 "snapshots.m"
                                if (snapshots__succeeded)
#line 296 "snapshots.m"
                                  {
#line 297 "snapshots.m"
                                    snapshots__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
#line 297 "snapshots.m"
                                    snapshots__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
#line 297 "snapshots.m"
                                    snapshots__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));
#line 297 "snapshots.m"
                                    snapshots__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
#line 297 "snapshots.m"
                                    snapshots__WordsPerCell_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
#line 298 "snapshots.m"
                                    snapshots__V_43_43 = (MR_Integer) 0;
#line 298 "snapshots.m"
                                    snapshots__succeeded = (snapshots__WordsPerCell_20 > snapshots__V_43_43);
#line 296 "snapshots.m"
                                    if (snapshots__succeeded)
#line 296 "snapshots.m"
                                      {
#line 5790 "snapshots.c"
                                        snapshots__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 299 "snapshots.m"
                                        {
#line 299 "snapshots.m"
                                          snapshots__succeeded = mercury__list__index1_3_p_0(snapshots__TypeCtorInfo_55_55, snapshots__SizeMap_8, snapshots__WordsPerCell_20, &snapshots__conv1_SizeMapWords_21);
                                        }
#line 299 "snapshots.m"
                                        if (snapshots__succeeded)
#line 299 "snapshots.m"
                                          {
#line 299 "snapshots.m"
                                            snapshots__SizeMapWords_21 = ((MR_Integer) snapshots__conv1_SizeMapWords_21);
#line 299 "snapshots.m"
                                            snapshots__succeeded = MR_TRUE;
#line 299 "snapshots.m"
                                          }
#line 296 "snapshots.m"
                                      }
#line 296 "snapshots.m"
                                  }
#line 302 "snapshots.m"
                                if (snapshots__succeeded)
#line 301 "snapshots.m"
                                  snapshots__NumWords_22 = (snapshots__NumCells_14 * snapshots__SizeMapWords_21);
#line 302 "snapshots.m"
                                else
#line 303 "snapshots.m"
                                  snapshots__NumWords_22 = snapshots__NumWords0_15;
#line 305 "snapshots.m"
                                {
#line 305 "snapshots.m"
                                  MR_Word base;
#line 305 "snapshots.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 305 "snapshots.m"
                                  *snapshots__Counts_10 = base;
#line 305 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (snapshots__AllocSite_17));
#line 305 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (snapshots__NumCells_14));
#line 305 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (snapshots__NumWords_22));
#line 305 "snapshots.m"
                                }
#line 305 "snapshots.m"
                                snapshots__succeeded = MR_TRUE;
#line 276 "snapshots.m"
                              }
#line 276 "snapshots.m"
                          }
#line 276 "snapshots.m"
                      }
#line 276 "snapshots.m"
                  }
#line 277 "snapshots.m"
              }
#line 277 "snapshots.m"
          }
#line 277 "snapshots.m"
      }
#line 276 "snapshots.m"
    return snapshots__succeeded;
#line 276 "snapshots.m"
  }
#line 273 "snapshots.m"
}

#line 243 "snapshots.m"
static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
#line 243 "snapshots.m"
  MR_Word snapshots__Stream_8,
#line 243 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 243 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_10,
#line 243 "snapshots.m"
  MR_Word snapshots__SizeMap_11,
#line 243 "snapshots.m"
  MR_Word * snapshots__AllocCounts_12)
#line 243 "snapshots.m"
{
#line 247 "snapshots.m"
  while (MR_TRUE)
#line 247 "snapshots.m"
    {
#line 247 "snapshots.m"
      /* tailcall optimized into a loop */
#line 247 "snapshots.m"
      {
#line 247 "snapshots.m"
        MR_bool snapshots__succeeded;
#line 247 "snapshots.m"
        MR_Word snapshots__LineRes_14;

#line 248 "snapshots.m"
        {
#line 248 "snapshots.m"
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_8, &snapshots__LineRes_14);
        }
#line 265 "snapshots.m"
        if ((snapshots__LineRes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "snapshots.m"
          {
#line 267 "snapshots.m"
            {
#line 267 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", (MR_String) "format error");
#line 267 "snapshots.m"
              return;
            }
#line 266 "snapshots.m"
          }
#line 265 "snapshots.m"
        else
#line 265 "snapshots.m"
        if (((MR_tag((MR_Word) snapshots__LineRes_14)) == (MR_mktag((MR_Integer) 2))))
#line 269 "snapshots.m"
          {
#line 269 "snapshots.m"
            MR_Word snapshots__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_14, (MR_Integer) 0)));
#line 269 "snapshots.m"
            MR_String snapshots__V_24_24;

#line 270 "snapshots.m"
            {
#line 270 "snapshots.m"
              snapshots__V_24_24 = mercury__io__error_message_1_f_0(snapshots__Error_18);
            }
#line 270 "snapshots.m"
            {
#line 270 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", snapshots__V_24_24);
#line 270 "snapshots.m"
              return;
            }
#line 269 "snapshots.m"
          }
#line 265 "snapshots.m"
        else
#line 250 "snapshots.m"
          {
#line 250 "snapshots.m"
            MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

#line 252 "snapshots.m"
            {
#line 252 "snapshots.m"
              snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
            }
#line 255 "snapshots.m"
            if (snapshots__succeeded)
#line 254 "snapshots.m"
              *snapshots__AllocCounts_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "snapshots.m"
            else
#line 261 "snapshots.m"
              {
#line 261 "snapshots.m"
                MR_Word snapshots__Counts_16;

#line 256 "snapshots.m"
                {
#line 256 "snapshots.m"
                  snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                }
#line 261 "snapshots.m"
                if (snapshots__succeeded)
#line 259 "snapshots.m"
                  {
#line 259 "snapshots.m"
                    MR_Word * snapshots__AddrRestCounts_31;

#line 260 "snapshots.m"
                    {
#line 260 "snapshots.m"
                      MR_Word base;
#line 260 "snapshots.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "snapshots.m"
                      *snapshots__AllocCounts_12 = base;
#line 260 "snapshots.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (snapshots__Counts_16));
#line 260 "snapshots.m"
                      MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 260 "snapshots.m"
                    }
#line 260 "snapshots.m"
                    snapshots__AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__AllocCounts_12, (MR_Integer) 1));
#line 258 "snapshots.m"
                    {
#line 258 "snapshots.m"
                      snapshots__LCMCpr_parse_snapshot_1_7_p_0(snapshots__Stream_8, snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__AddrRestCounts_31);
#line 258 "snapshots.m"
                      return;
                    }
#line 259 "snapshots.m"
                  }
#line 261 "snapshots.m"
                else
#line 262 "snapshots.m"
                  {
#line 262 "snapshots.m"
                    /* direct tailcall eliminated */
#line 262 "snapshots.m"
                    continue;
#line 262 "snapshots.m"
                  }
#line 261 "snapshots.m"
              }
#line 250 "snapshots.m"
          }
#line 247 "snapshots.m"
      }
#line 247 "snapshots.m"
      break;
#line 247 "snapshots.m"
    }
#line 243 "snapshots.m"
}

#line 332 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
#line 332 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 332 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 332 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 332 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 332 "snapshots.m"
{
#line 332 "snapshots.m"
  {
#line 332 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 332 "snapshots.m"
    MR_Word snapshots__conv2_Result_6;

#line 332 "snapshots.m"
    {
#line 332 "snapshots.m"
      snapshots__group_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv2_Result_6);
    }
#line 332 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_Result_6));
#line 332 "snapshots.m"
  }
#line 332 "snapshots.m"
}

#line 328 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
#line 328 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 328 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 328 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 328 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 328 "snapshots.m"
{
#line 328 "snapshots.m"
  {
#line 328 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 328 "snapshots.m"
    MR_Word snapshots__conv1_Result_6;

#line 328 "snapshots.m"
    {
#line 328 "snapshots.m"
      snapshots__counts_by_type_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv1_Result_6);
    }
#line 328 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_Result_6));
#line 328 "snapshots.m"
  }
#line 328 "snapshots.m"
}

#line 325 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
#line 325 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 325 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 325 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 325 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 325 "snapshots.m"
{
#line 325 "snapshots.m"
  {
#line 325 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 325 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 325 "snapshots.m"
    {
#line 325 "snapshots.m"
      snapshots__counts_by_proc_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 325 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 325 "snapshots.m"
  }
#line 325 "snapshots.m"
}

#line 212 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
#line 212 "snapshots.m"
  MR_Word snapshots__Stream_7,
#line 212 "snapshots.m"
  MR_Word snapshots__Options_8,
#line 212 "snapshots.m"
  MR_Word snapshots__AllocSiteMap_9,
#line 212 "snapshots.m"
  MR_Word snapshots__SizeMap_10)
#line 212 "snapshots.m"
{
#line 215 "snapshots.m"
  while (MR_TRUE)
#line 215 "snapshots.m"
    {
#line 215 "snapshots.m"
      /* tailcall optimized into a loop */
#line 215 "snapshots.m"
      {
#line 215 "snapshots.m"
        MR_bool snapshots__succeeded;
#line 215 "snapshots.m"
        MR_Word snapshots__LineRes_12;

#line 216 "snapshots.m"
        {
#line 216 "snapshots.m"
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_7, &snapshots__LineRes_12);
        }
#line 227 "snapshots.m"
        if ((snapshots__LineRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "snapshots.m"
          {
#line 228 "snapshots.m"
          }
#line 227 "snapshots.m"
        else
#line 227 "snapshots.m"
        if (((MR_tag((MR_Word) snapshots__LineRes_12)) == (MR_mktag((MR_Integer) 2))))
#line 230 "snapshots.m"
          {
#line 230 "snapshots.m"
            MR_Word snapshots__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_12, (MR_Integer) 0)));
#line 230 "snapshots.m"
            MR_String snapshots__V_22_22;

#line 231 "snapshots.m"
            {
#line 231 "snapshots.m"
              snapshots__V_22_22 = mercury__io__error_message_1_f_0(snapshots__Error_16);
            }
#line 231 "snapshots.m"
            {
#line 231 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.show_all_snapshots\'/6", snapshots__V_22_22);
#line 231 "snapshots.m"
              return;
            }
#line 230 "snapshots.m"
          }
#line 227 "snapshots.m"
        else
#line 218 "snapshots.m"
          {
#line 218 "snapshots.m"
            MR_String snapshots__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_12, (MR_Integer) 0)));
#line 224 "snapshots.m"
            MR_String snapshots__SnapshotName0_14;

#line 219 "snapshots.m"
            {
#line 219 "snapshots.m"
              snapshots__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "start ", snapshots__Line_13, &snapshots__SnapshotName0_14);
            }
#line 224 "snapshots.m"
            if (snapshots__succeeded)
#line 220 "snapshots.m"
              {
#line 220 "snapshots.m"
                MR_String snapshots__SnapshotName_15;
#line 220 "snapshots.m"
                MR_Word snapshots__AllocCounts_43;
#line 220 "snapshots.m"
                MR_Word snapshots__MajorAxis_44;
#line 220 "snapshots.m"
                MR_Word snapshots__Groups_45;
#line 220 "snapshots.m"
                MR_Word snapshots__Compare_54;
#line 220 "snapshots.m"
                MR_Word snapshots__SortedCounts_55;
#line 220 "snapshots.m"
                MR_Word snapshots__Groups_56;
#line 239 "snapshots.m"
                MR_Word snapshots__V_48_48;
#line 239 "snapshots.m"
                MR_Word snapshots__V_49_49;
#line 239 "snapshots.m"
                MR_Word snapshots__V_50_50;

#line 220 "snapshots.m"
                {
#line 220 "snapshots.m"
                  snapshots__SnapshotName_15 = mercury__string__chomp_1_f_0(snapshots__SnapshotName0_14);
                }
#line 365 "snapshots.m"
                {
#line 365 "snapshots.m"
                  mercury__io__write_string_3_p_0((MR_String) "------ ");
                }
#line 366 "snapshots.m"
                {
#line 366 "snapshots.m"
                  mercury__io__write_string_3_p_0(snapshots__SnapshotName_15);
                }
#line 367 "snapshots.m"
                {
#line 367 "snapshots.m"
                  mercury__io__write_string_3_p_0((MR_String) " ------\n");
                }
#line 238 "snapshots.m"
                {
#line 238 "snapshots.m"
                  snapshots__parse_snapshot_7_p_0(snapshots__Stream_7, snapshots__Options_8, snapshots__AllocSiteMap_9, snapshots__SizeMap_10, &snapshots__AllocCounts_43);
                }
#line 239 "snapshots.m"
                snapshots__MajorAxis_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 239 "snapshots.m"
                snapshots__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 239 "snapshots.m"
                snapshots__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 239 "snapshots.m"
                snapshots__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 326 "snapshots.m"
                if ((snapshots__MajorAxis_44 == (MR_Integer) 0))
#line 325 "snapshots.m"
                  snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[2];
#line 326 "snapshots.m"
                else
#line 328 "snapshots.m"
                  snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[3];
#line 330 "snapshots.m"
                {
#line 330 "snapshots.m"
                  mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, snapshots__Compare_54, snapshots__AllocCounts_43, &snapshots__SortedCounts_55);
                }
#line 331 "snapshots.m"
                {
#line 331 "snapshots.m"
                  snapshots__make_groups_3_p_0(snapshots__Compare_54, snapshots__SortedCounts_55, &snapshots__Groups_56);
                }
#line 332 "snapshots.m"
                {
#line 332 "snapshots.m"
                  mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_group_0, (MR_Word) &snapshots_scalar_common_1[4], snapshots__Groups_56, &snapshots__Groups_45);
                }
#line 241 "snapshots.m"
                {
#line 241 "snapshots.m"
                  snapshots__output_snapshot_4_p_0(snapshots__Options_8, snapshots__Groups_45);
                }
#line 223 "snapshots.m"
                /* direct tailcall eliminated */
#line 223 "snapshots.m"
                {
#line 223 "snapshots.m"
                }
#line 223 "snapshots.m"
                continue;
#line 220 "snapshots.m"
              }
#line 224 "snapshots.m"
            else
#line 224 "snapshots.m"
              {
#line 224 "snapshots.m"
              }
#line 218 "snapshots.m"
          }
#line 215 "snapshots.m"
      }
#line 215 "snapshots.m"
      break;
#line 215 "snapshots.m"
    }
#line 212 "snapshots.m"
}

#line 174 "snapshots.m"
static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
#line 174 "snapshots.m"
  MR_Word snapshots__Stream_6,
#line 174 "snapshots.m"
  MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_0_12,
#line 174 "snapshots.m"
  MR_Word * snapshots__STATE_VARIABLE_AllocSiteMap_13)
#line 174 "snapshots.m"
{
#line 177 "snapshots.m"
  while (MR_TRUE)
#line 177 "snapshots.m"
    {
#line 177 "snapshots.m"
      /* tailcall optimized into a loop */
#line 177 "snapshots.m"
      {
#line 177 "snapshots.m"
        MR_bool snapshots__succeeded;
#line 177 "snapshots.m"
        MR_Word snapshots__LineRes_9;

#line 178 "snapshots.m"
        {
#line 178 "snapshots.m"
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_6, &snapshots__LineRes_9);
        }
#line 183 "snapshots.m"
        if ((snapshots__LineRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "snapshots.m"
          *snapshots__STATE_VARIABLE_AllocSiteMap_13 = snapshots__STATE_VARIABLE_AllocSiteMap_0_12;
#line 183 "snapshots.m"
        else
#line 183 "snapshots.m"
        if (((MR_tag((MR_Word) snapshots__LineRes_9)) == (MR_mktag((MR_Integer) 2))))
#line 186 "snapshots.m"
          {
#line 186 "snapshots.m"
            MR_Word snapshots__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_9, (MR_Integer) 0)));
#line 186 "snapshots.m"
            MR_String snapshots__V_19_19;

#line 187 "snapshots.m"
            {
#line 187 "snapshots.m"
              snapshots__V_19_19 = mercury__io__error_message_1_f_0(snapshots__Error_11);
            }
#line 187 "snapshots.m"
            {
#line 187 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_lines\'/5", snapshots__V_19_19);
#line 187 "snapshots.m"
              return;
            }
#line 186 "snapshots.m"
          }
#line 183 "snapshots.m"
        else
#line 180 "snapshots.m"
          {
#line 180 "snapshots.m"
            MR_String snapshots__Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_9, (MR_Integer) 0)));
#line 180 "snapshots.m"
            MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_20_20;
#line 180 "snapshots.m"
            MR_String snapshots__Line_31;
#line 180 "snapshots.m"
            MR_Word snapshots__Words_32;
#line 206 "snapshots.m"
            MR_String snapshots__MangledProcName_34;
#line 206 "snapshots.m"
            MR_String snapshots__FileName_35;
#line 206 "snapshots.m"
            MR_String snapshots__Type_37;
#line 206 "snapshots.m"
            MR_Integer snapshots__Id_39;
#line 206 "snapshots.m"
            MR_Integer snapshots__LineNum_40;
#line 206 "snapshots.m"
            MR_Integer snapshots__NumWords_41;
#line 198 "snapshots.m"
            MR_String snapshots__IdStr_33;
#line 198 "snapshots.m"
            MR_String snapshots__LineNumStr_36;
#line 198 "snapshots.m"
            MR_String snapshots__NumWordsStr_38;
#line 198 "snapshots.m"
            MR_Word snapshots__V_45_45;
#line 198 "snapshots.m"
            MR_Word snapshots__V_46_46;
#line 198 "snapshots.m"
            MR_Word snapshots__V_47_47;
#line 198 "snapshots.m"
            MR_Word snapshots__V_48_48;
#line 198 "snapshots.m"
            MR_Word snapshots__V_49_49;
#line 198 "snapshots.m"
            MR_Word snapshots__V_50_50;

#line 194 "snapshots.m"
            {
#line 194 "snapshots.m"
              snapshots__Line_31 = mercury__string__chomp_1_f_0(snapshots__Line_10);
            }
#line 195 "snapshots.m"
            {
#line 195 "snapshots.m"
              snapshots__Words_32 = mercury__string__split_at_char_2_f_0((MR_Char) 9, snapshots__Line_31);
            }
#line 197 "snapshots.m"
            snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Words_32)) == (MR_mktag((MR_Integer) 1)));
#line 197 "snapshots.m"
            if (snapshots__succeeded)
#line 197 "snapshots.m"
              {
#line 197 "snapshots.m"
                snapshots__IdStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Words_32, (MR_Integer) 0)));
#line 197 "snapshots.m"
                snapshots__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Words_32, (MR_Integer) 1)));
#line 197 "snapshots.m"
                snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 197 "snapshots.m"
                if (snapshots__succeeded)
#line 197 "snapshots.m"
                  {
#line 197 "snapshots.m"
                    snapshots__MangledProcName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_45_45, (MR_Integer) 0)));
#line 197 "snapshots.m"
                    snapshots__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_45_45, (MR_Integer) 1)));
#line 197 "snapshots.m"
                    snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 197 "snapshots.m"
                    if (snapshots__succeeded)
#line 197 "snapshots.m"
                      {
#line 197 "snapshots.m"
                        snapshots__FileName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_46_46, (MR_Integer) 0)));
#line 197 "snapshots.m"
                        snapshots__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_46_46, (MR_Integer) 1)));
#line 197 "snapshots.m"
                        snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 197 "snapshots.m"
                        if (snapshots__succeeded)
#line 197 "snapshots.m"
                          {
#line 197 "snapshots.m"
                            snapshots__LineNumStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_47_47, (MR_Integer) 0)));
#line 197 "snapshots.m"
                            snapshots__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_47_47, (MR_Integer) 1)));
#line 197 "snapshots.m"
                            snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 197 "snapshots.m"
                            if (snapshots__succeeded)
#line 197 "snapshots.m"
                              {
#line 197 "snapshots.m"
                                snapshots__Type_37 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_48_48, (MR_Integer) 0)));
#line 197 "snapshots.m"
                                snapshots__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_48_48, (MR_Integer) 1)));
#line 198 "snapshots.m"
                                snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 198 "snapshots.m"
                                if (snapshots__succeeded)
#line 198 "snapshots.m"
                                  {
#line 198 "snapshots.m"
                                    snapshots__NumWordsStr_38 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_49_49, (MR_Integer) 0)));
#line 198 "snapshots.m"
                                    snapshots__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_49_49, (MR_Integer) 1)));
#line 198 "snapshots.m"
                                    snapshots__succeeded = (snapshots__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "snapshots.m"
                                    if (snapshots__succeeded)
#line 198 "snapshots.m"
                                      {
#line 199 "snapshots.m"
                                        {
#line 199 "snapshots.m"
                                          snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__IdStr_33, &snapshots__Id_39);
                                        }
#line 198 "snapshots.m"
                                        if (snapshots__succeeded)
#line 198 "snapshots.m"
                                          {
#line 200 "snapshots.m"
                                            {
#line 200 "snapshots.m"
                                              snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__LineNumStr_36, &snapshots__LineNum_40);
                                            }
#line 198 "snapshots.m"
                                            if (snapshots__succeeded)
#line 201 "snapshots.m"
                                              {
#line 201 "snapshots.m"
                                                snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumWordsStr_38, &snapshots__NumWords_41);
                                              }
#line 198 "snapshots.m"
                                          }
#line 198 "snapshots.m"
                                      }
#line 198 "snapshots.m"
                                  }
#line 197 "snapshots.m"
                              }
#line 197 "snapshots.m"
                          }
#line 197 "snapshots.m"
                      }
#line 197 "snapshots.m"
                  }
#line 197 "snapshots.m"
              }
#line 206 "snapshots.m"
            if (snapshots__succeeded)
#line 203 "snapshots.m"
              {
#line 203 "snapshots.m"
                MR_String snapshots__ProcName_42;
#line 203 "snapshots.m"
                MR_Word snapshots__AllocSite_43;
#line 203 "snapshots.m"
                MR_Word snapshots__V_51_51;

#line 203 "snapshots.m"
                {
#line 203 "snapshots.m"
                  demangle__demangle_2_p_0(snapshots__MangledProcName_34, &snapshots__ProcName_42);
                }
#line 204 "snapshots.m"
                {
#line 204 "snapshots.m"
                  snapshots__AllocSite_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 204 "snapshots.m"
                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 0) = ((MR_Box) (snapshots__ProcName_42));
#line 204 "snapshots.m"
                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 1) = ((MR_Box) (snapshots__Type_37));
#line 204 "snapshots.m"
                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 2) = ((MR_Box) (snapshots__FileName_35));
#line 204 "snapshots.m"
                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 3) = ((MR_Box) (snapshots__LineNum_40));
#line 204 "snapshots.m"
                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 4) = ((MR_Box) (snapshots__NumWords_41));
#line 204 "snapshots.m"
                }
#line 205 "snapshots.m"
                snapshots__V_51_51 = (MR_Word) snapshots__Id_39;
#line 205 "snapshots.m"
                {
#line 205 "snapshots.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, ((MR_Box) (snapshots__V_51_51)), ((MR_Box) (snapshots__AllocSite_43)), snapshots__STATE_VARIABLE_AllocSiteMap_0_12, &snapshots__STATE_VARIABLE_AllocSiteMap_20_20);
                }
#line 203 "snapshots.m"
              }
#line 206 "snapshots.m"
            else
#line 207 "snapshots.m"
              {
#line 207 "snapshots.m"
                {
#line 207 "snapshots.m"
                  mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_line\'/5", (MR_String) "format error: bad alloc site declaration");
#line 207 "snapshots.m"
                  return;
                }
#line 207 "snapshots.m"
              }
#line 182 "snapshots.m"
            /* direct tailcall eliminated */
#line 182 "snapshots.m"
            {
#line 182 "snapshots.m"
              MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_0__tmp_copy_12 = snapshots__STATE_VARIABLE_AllocSiteMap_20_20;

#line 182 "snapshots.m"
              snapshots__STATE_VARIABLE_AllocSiteMap_0_12 = snapshots__STATE_VARIABLE_AllocSiteMap_0__tmp_copy_12;
#line 182 "snapshots.m"
            }
#line 182 "snapshots.m"
            continue;
#line 180 "snapshots.m"
          }
#line 177 "snapshots.m"
      }
#line 177 "snapshots.m"
      break;
#line 177 "snapshots.m"
    }
#line 174 "snapshots.m"
}

#line 167 "snapshots.m"
static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
#line 167 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 167 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 167 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_2)
#line 167 "snapshots.m"
{
#line 167 "snapshots.m"
  {
#line 167 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 167 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 167 "snapshots.m"
    MR_Integer snapshots__conv0_HeadVar__2_2;

#line 167 "snapshots.m"
    {
#line 167 "snapshots.m"
      snapshots__succeeded = mercury__string__to_int_2_p_0(((MR_String) snapshots__wrapper_arg_1), &snapshots__conv0_HeadVar__2_2);
    }
#line 167 "snapshots.m"
    if (snapshots__succeeded)
#line 167 "snapshots.m"
      {
#line 167 "snapshots.m"
        *snapshots__wrapper_arg_2 = ((MR_Box) (snapshots__conv0_HeadVar__2_2));
#line 167 "snapshots.m"
        snapshots__succeeded = MR_TRUE;
#line 167 "snapshots.m"
      }
#line 167 "snapshots.m"
    return snapshots__succeeded;
#line 167 "snapshots.m"
  }
#line 167 "snapshots.m"
}

#line 139 "snapshots.m"
static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
#line 139 "snapshots.m"
  MR_Word snapshots__Stream_6,
#line 139 "snapshots.m"
  MR_Word * snapshots__AllocSiteMap_7,
#line 139 "snapshots.m"
  MR_Word * snapshots__SizeMap_8)
#line 139 "snapshots.m"
{
#line 142 "snapshots.m"
  while (MR_TRUE)
#line 142 "snapshots.m"
    {
#line 142 "snapshots.m"
      /* tailcall optimized into a loop */
#line 142 "snapshots.m"
      {
#line 142 "snapshots.m"
        MR_bool snapshots__succeeded;
#line 142 "snapshots.m"
        MR_Word snapshots__LineRes_10;

#line 143 "snapshots.m"
        {
#line 143 "snapshots.m"
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_6, &snapshots__LineRes_10);
        }
#line 154 "snapshots.m"
        if ((snapshots__LineRes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "snapshots.m"
          {
#line 156 "snapshots.m"
            {
#line 156 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_decls\'/5", (MR_String) "format error: cannot find declarations");
#line 156 "snapshots.m"
              return;
            }
#line 155 "snapshots.m"
          }
#line 154 "snapshots.m"
        else
#line 154 "snapshots.m"
        if (((MR_tag((MR_Word) snapshots__LineRes_10)) == (MR_mktag((MR_Integer) 2))))
#line 158 "snapshots.m"
          {
#line 158 "snapshots.m"
            MR_Word snapshots__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_10, (MR_Integer) 0)));
#line 158 "snapshots.m"
            MR_String snapshots__V_18_18;

#line 159 "snapshots.m"
            {
#line 159 "snapshots.m"
              snapshots__V_18_18 = mercury__io__error_message_1_f_0(snapshots__Error_12);
            }
#line 159 "snapshots.m"
            {
#line 159 "snapshots.m"
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_decls\'/5", snapshots__V_18_18);
#line 159 "snapshots.m"
              return;
            }
#line 158 "snapshots.m"
          }
#line 154 "snapshots.m"
        else
#line 145 "snapshots.m"
          {
#line 145 "snapshots.m"
            MR_String snapshots__Line_11 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_10, (MR_Integer) 0)));

#line 148 "snapshots.m"
            {
#line 148 "snapshots.m"
              snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_11, (MR_String) "size_map ");
            }
#line 151 "snapshots.m"
            if (snapshots__succeeded)
#line 149 "snapshots.m"
              {
#line 149 "snapshots.m"
                MR_Word snapshots__V_23_23;
#line 170 "snapshots.m"
                MR_Word snapshots__Ints_31;
#line 166 "snapshots.m"
                MR_Word snapshots__TypeCtorInfo_15_40;
#line 166 "snapshots.m"
                MR_Word snapshots__TypeCtorInfo_16_41;
#line 166 "snapshots.m"
                MR_Word snapshots__Words_30;
#line 166 "snapshots.m"
                MR_Word snapshots__V_32_32;
#line 166 "snapshots.m"
                MR_String snapshots__V_33_33;
#line 166 "snapshots.m"
                MR_Word snapshots__V_34_34;

#line 166 "snapshots.m"
                {
#line 166 "snapshots.m"
                  snapshots__V_32_32 = mercury__string__words_1_f_0(snapshots__Line_11);
                }
#line 166 "snapshots.m"
                snapshots__succeeded = ((MR_tag((MR_Word) snapshots__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 166 "snapshots.m"
                if (snapshots__succeeded)
#line 166 "snapshots.m"
                  {
#line 166 "snapshots.m"
                    snapshots__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__V_32_32, (MR_Integer) 0)));
#line 166 "snapshots.m"
                    snapshots__Words_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_32_32, (MR_Integer) 1)));
#line 166 "snapshots.m"
                    snapshots__succeeded = (strcmp(snapshots__V_33_33, (MR_String) "size_map") == 0);
#line 166 "snapshots.m"
                    if (snapshots__succeeded)
#line 166 "snapshots.m"
                      {
#line 167 "snapshots.m"
                        snapshots__V_34_34 = (MR_Word) &snapshots_scalar_common_1[1];
#line 6754 "snapshots.c"
                        snapshots__TypeCtorInfo_15_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 6756 "snapshots.c"
                        snapshots__TypeCtorInfo_16_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 167 "snapshots.m"
                        {
#line 167 "snapshots.m"
                          snapshots__succeeded = mercury__list__map_3_p_2(snapshots__TypeCtorInfo_15_40, snapshots__TypeCtorInfo_16_41, snapshots__V_34_34, snapshots__Words_30, &snapshots__Ints_31);
                        }
#line 166 "snapshots.m"
                      }
#line 166 "snapshots.m"
                  }
#line 170 "snapshots.m"
                if (snapshots__succeeded)
#line 169 "snapshots.m"
                  *snapshots__SizeMap_8 = snapshots__Ints_31;
#line 170 "snapshots.m"
                else
#line 171 "snapshots.m"
                  {
#line 171 "snapshots.m"
                    {
#line 171 "snapshots.m"
                      mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_size_map\'/2", (MR_String) "format error: bad size_map line");
#line 171 "snapshots.m"
                      return;
                    }
#line 171 "snapshots.m"
                  }
#line 150 "snapshots.m"
                {
#line 150 "snapshots.m"
                  snapshots__V_23_23 = mercury__map__init_0_f_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0);
                }
#line 150 "snapshots.m"
                {
#line 150 "snapshots.m"
                  snapshots__parse_alloc_site_lines_5_p_0(snapshots__Stream_6, snapshots__V_23_23, snapshots__AllocSiteMap_7);
#line 150 "snapshots.m"
                  return;
                }
#line 149 "snapshots.m"
              }
#line 151 "snapshots.m"
            else
#line 152 "snapshots.m"
              {
#line 152 "snapshots.m"
                /* direct tailcall eliminated */
#line 152 "snapshots.m"
                continue;
#line 152 "snapshots.m"
              }
#line 145 "snapshots.m"
          }
#line 142 "snapshots.m"
      }
#line 142 "snapshots.m"
      break;
#line 142 "snapshots.m"
    }
#line 139 "snapshots.m"
}

#line 22 "snapshots.m"
void MR_CALL 
snapshots__show_snapshots_2_p_0(void)
#line 22 "snapshots.m"
{
#line 100 "snapshots.m"
  {
#line 100 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 100 "snapshots.m"
    MR_String snapshots__SnapshotsFile_4;
#line 100 "snapshots.m"
    MR_Word snapshots__ByType_5;
#line 100 "snapshots.m"
    MR_Word snapshots__Brief_6;
#line 100 "snapshots.m"
    MR_Word snapshots__RecalcSize_7;
#line 100 "snapshots.m"
    MR_Word snapshots__InclRuntime_8;
#line 100 "snapshots.m"
    MR_Word snapshots__MajorAxis_9;
#line 100 "snapshots.m"
    MR_Word snapshots__Options_10;
#line 100 "snapshots.m"
    MR_Word snapshots__OpenDeclRes_11;
#line 100 "snapshots.m"
    MR_Word snapshots__AllocSiteMap_13;
#line 100 "snapshots.m"
    MR_Word snapshots__SizeMap_14;
#line 100 "snapshots.m"
    MR_Word snapshots__OpenRes_17;

#line 101 "snapshots.m"
    {
#line 101 "snapshots.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 14, &snapshots__SnapshotsFile_4);
    }
#line 102 "snapshots.m"
    {
#line 102 "snapshots.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 15, &snapshots__ByType_5);
    }
#line 103 "snapshots.m"
    {
#line 103 "snapshots.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 16, &snapshots__Brief_6);
    }
#line 104 "snapshots.m"
    {
#line 104 "snapshots.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 18, &snapshots__RecalcSize_7);
    }
#line 105 "snapshots.m"
    {
#line 105 "snapshots.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 17, &snapshots__InclRuntime_8);
    }
#line 109 "snapshots.m"
    if ((snapshots__ByType_5 == (MR_Integer) 0))
#line 111 "snapshots.m"
      snapshots__MajorAxis_9 = (MR_Integer) 0;
#line 109 "snapshots.m"
    else
#line 108 "snapshots.m"
      snapshots__MajorAxis_9 = (MR_Integer) 1;
#line 113 "snapshots.m"
    {
#line 113 "snapshots.m"
      snapshots__Options_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 113 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__Options_10, 0) = ((MR_Box) ((snapshots__MajorAxis_9 | ((((snapshots__Brief_6 << (MR_Integer) 1)) | ((((snapshots__RecalcSize_7 << (MR_Integer) 2)) | ((snapshots__InclRuntime_8 << (MR_Integer) 3)))))))));
#line 113 "snapshots.m"
    }
#line 114 "snapshots.m"
    {
#line 114 "snapshots.m"
      mercury__io__open_input_4_p_0(snapshots__SnapshotsFile_4, &snapshots__OpenDeclRes_11);
    }
#line 119 "snapshots.m"
    if (((MR_tag((MR_Word) snapshots__OpenDeclRes_11)) == (MR_mktag((MR_Integer) 1))))
#line 120 "snapshots.m"
      {
#line 120 "snapshots.m"
        MR_Word snapshots__DeclError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__OpenDeclRes_11, (MR_Integer) 0)));
#line 120 "snapshots.m"
        MR_String snapshots__DeclErrorStr_16;
#line 120 "snapshots.m"
        MR_String snapshots__V_35_35;
#line 120 "snapshots.m"
        MR_String snapshots__V_36_36;
#line 120 "snapshots.m"
        MR_String snapshots__V_38_38;
#line 120 "snapshots.m"
        MR_String snapshots__V_39_39;

#line 122 "snapshots.m"
        {
#line 122 "snapshots.m"
          snapshots__V_39_39 = mercury__io__error_message_1_f_0(snapshots__DeclError_15);
        }
#line 122 "snapshots.m"
        {
#line 122 "snapshots.m"
          snapshots__V_38_38 = mercury__string__f_43_43_2_f_0(snapshots__V_39_39, (MR_String) "\n");
        }
#line 122 "snapshots.m"
        {
#line 122 "snapshots.m"
          snapshots__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", snapshots__V_38_38);
        }
#line 121 "snapshots.m"
        {
#line 121 "snapshots.m"
          snapshots__V_35_35 = mercury__string__f_43_43_2_f_0(snapshots__SnapshotsFile_4, snapshots__V_36_36);
        }
#line 121 "snapshots.m"
        {
#line 121 "snapshots.m"
          snapshots__DeclErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", snapshots__V_35_35);
        }
#line 123 "snapshots.m"
        {
#line 123 "snapshots.m"
          mercury__require__error_1_p_0(snapshots__DeclErrorStr_16);
#line 123 "snapshots.m"
          return;
        }
#line 120 "snapshots.m"
      }
#line 119 "snapshots.m"
    else
#line 116 "snapshots.m"
      {
#line 116 "snapshots.m"
        MR_Word snapshots__DeclStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__OpenDeclRes_11, (MR_Integer) 0)));

#line 117 "snapshots.m"
        {
#line 117 "snapshots.m"
          snapshots__parse_alloc_site_decls_5_p_0(snapshots__DeclStream_12, &snapshots__AllocSiteMap_13, &snapshots__SizeMap_14);
        }
#line 118 "snapshots.m"
        {
#line 118 "snapshots.m"
          mercury__io__close_input_3_p_0(snapshots__DeclStream_12);
        }
#line 116 "snapshots.m"
      }
#line 125 "snapshots.m"
    {
#line 125 "snapshots.m"
      mercury__io__open_input_4_p_0(snapshots__SnapshotsFile_4, &snapshots__OpenRes_17);
    }
#line 130 "snapshots.m"
    if (((MR_tag((MR_Word) snapshots__OpenRes_17)) == (MR_mktag((MR_Integer) 1))))
#line 131 "snapshots.m"
      {
#line 131 "snapshots.m"
        MR_Word snapshots__Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__OpenRes_17, (MR_Integer) 0)));
#line 131 "snapshots.m"
        MR_String snapshots__ErrorStr_20;
#line 131 "snapshots.m"
        MR_String snapshots__V_45_45;
#line 131 "snapshots.m"
        MR_String snapshots__V_46_46;
#line 131 "snapshots.m"
        MR_String snapshots__V_48_48;
#line 131 "snapshots.m"
        MR_String snapshots__V_49_49;

#line 133 "snapshots.m"
        {
#line 133 "snapshots.m"
          snapshots__V_49_49 = mercury__io__error_message_1_f_0(snapshots__Error_19);
        }
#line 133 "snapshots.m"
        {
#line 133 "snapshots.m"
          snapshots__V_48_48 = mercury__string__f_43_43_2_f_0(snapshots__V_49_49, (MR_String) "\n");
        }
#line 133 "snapshots.m"
        {
#line 133 "snapshots.m"
          snapshots__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", snapshots__V_48_48);
        }
#line 132 "snapshots.m"
        {
#line 132 "snapshots.m"
          snapshots__V_45_45 = mercury__string__f_43_43_2_f_0(snapshots__SnapshotsFile_4, snapshots__V_46_46);
        }
#line 132 "snapshots.m"
        {
#line 132 "snapshots.m"
          snapshots__ErrorStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", snapshots__V_45_45);
        }
#line 134 "snapshots.m"
        {
#line 134 "snapshots.m"
          mercury__require__error_1_p_0(snapshots__ErrorStr_20);
#line 134 "snapshots.m"
          return;
        }
#line 131 "snapshots.m"
      }
#line 130 "snapshots.m"
    else
#line 127 "snapshots.m"
      {
#line 127 "snapshots.m"
        MR_Word snapshots__Stream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__OpenRes_17, (MR_Integer) 0)));

#line 128 "snapshots.m"
        {
#line 128 "snapshots.m"
          snapshots__show_all_snapshots_6_p_0(snapshots__Stream_18, snapshots__Options_10, snapshots__AllocSiteMap_13, snapshots__SizeMap_14);
        }
#line 129 "snapshots.m"
        {
#line 129 "snapshots.m"
          mercury__io__close_input_3_p_0(snapshots__Stream_18);
#line 129 "snapshots.m"
          return;
        }
#line 127 "snapshots.m"
      }
#line 100 "snapshots.m"
  }
#line 22 "snapshots.m"
}

void mercury__snapshots__init(void)
{
}

void mercury__snapshots__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_alloc_id_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_alloc_site_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_alloc_site_counts_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_alloc_site_map_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_group_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_major_axis_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_size_map_0);
	MR_register_type_ctor_info(&snapshots__snapshots__type_ctor_info_snapshot_options_0);
}

void mercury__snapshots__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module snapshots. */
