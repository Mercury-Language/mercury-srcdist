/*
** Automatically generated from `snapshots.m'
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


/* :- module snapshots. */
/* :- implementation. */

/*
INIT mercury__snapshots__init
ENDINIT
*/

#include "snapshots.mih"


#include "demangle.mih"
#include "globals.mih"
#include "options.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
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

#line 358 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
#line 358 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 357 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
#line 357 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 357 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 336 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
#line 336 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 336 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 336 "snapshots.m"
  MR_Word * snapshots__AddrOfGroups_39);

#line 550 "snapshots.m"
static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
#line 550 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 550 "snapshots.m"
  MR_Word snapshots__List_6,
#line 550 "snapshots.m"
  MR_Word * snapshots__AddrOfUpto_23,
#line 550 "snapshots.m"
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

#line 550 "snapshots.m"
static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
#line 550 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 550 "snapshots.m"
  MR_Word snapshots__List_6,
#line 550 "snapshots.m"
  MR_Word * snapshots__Upto_7,
#line 550 "snapshots.m"
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

#line 540 "snapshots.m"
static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void);

#line 536 "snapshots.m"
static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
#line 536 "snapshots.m"
  MR_Integer snapshots__N_4,
#line 536 "snapshots.m"
  MR_Integer snapshots__Total_5);

#line 527 "snapshots.m"
static void MR_CALL 
snapshots__sum_counts_5_p_0(
#line 527 "snapshots.m"
  MR_Word snapshots__Site_6,
#line 527 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 527 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 527 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 527 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

#line 521 "snapshots.m"
static void MR_CALL 
snapshots__sum_groups_5_p_0(
#line 521 "snapshots.m"
  MR_Word snapshots__Group_6,
#line 521 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 521 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 521 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 521 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

#line 513 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_words_3_p_0(
#line 513 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 513 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 513 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 505 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_type_3_p_0(
#line 505 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 505 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 505 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 497 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
#line 497 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 497 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 497 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 490 "snapshots.m"
static void MR_CALL 
snapshots__group_by_words_3_p_0(
#line 490 "snapshots.m"
  MR_Word snapshots__GroupA_4,
#line 490 "snapshots.m"
  MR_Word snapshots__GroupB_5,
#line 490 "snapshots.m"
  MR_Word * snapshots__Result_6);

#line 453 "snapshots.m"
static void MR_CALL 
snapshots__output_site_7_p_0(
#line 453 "snapshots.m"
  MR_Word snapshots__MajorAxis_8,
#line 453 "snapshots.m"
  MR_Integer snapshots__TotalCells_9,
#line 453 "snapshots.m"
  MR_Integer snapshots__TotalWords_10,
#line 453 "snapshots.m"
  MR_Word snapshots__Single_11,
#line 453 "snapshots.m"
  MR_Word snapshots__AllocCounts_12);

#line 447 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0_1(
#line 447 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 447 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 447 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 447 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 406 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0(
#line 406 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 406 "snapshots.m"
  MR_Integer snapshots__TotalCells_10,
#line 406 "snapshots.m"
  MR_Integer snapshots__TotalWords_11,
#line 406 "snapshots.m"
  MR_Word snapshots__Group_12,
#line 406 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
#line 406 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29);

#line 389 "snapshots.m"
static void MR_CALL 
snapshots__output_column_names_3_p_0(
#line 389 "snapshots.m"
  MR_Word snapshots__Options_4);

#line 386 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
#line 386 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 386 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 386 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 376 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
#line 376 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 376 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 376 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 371 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0(
#line 371 "snapshots.m"
  MR_Word snapshots__Options_5,
#line 371 "snapshots.m"
  MR_Word snapshots__Grouped_6);

#line 358 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_2(
#line 358 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5);

#line 357 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_1(
#line 357 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 357 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 336 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0(
#line 336 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 336 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 336 "snapshots.m"
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

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
#line 334 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 334 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 334 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 334 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 330 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
#line 330 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 330 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 330 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 330 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3);

#line 327 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
#line 327 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 327 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 327 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 327 "snapshots.m"
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
#include "string.mh"
#include "time.mh"



#line 1076 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1] = {
  (MR_Integer) 0
};

#line 1081 "snapshots.c"
static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0 = {
  (MR_String) "alloc_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1088 "snapshots.c"
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

#line 1105 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1114 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_0_0[5] = {
  (MR_String) "alloc_proc",
  (MR_String) "alloc_type",
  (MR_String) "alloc_file_name",
  (MR_String) "alloc_line_number",
  (MR_String) "alloc_words"
};

#line 1123 "snapshots.c"
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

#line 1138 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

#line 1143 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_0_0
  }
};

#line 1152 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

#line 1157 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1] = {
  (MR_Integer) 0
};

#line 1162 "snapshots.c"
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

#line 1179 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1186 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3] = {
  (MR_String) "asc_alloc_site",
  (MR_String) "asc_num_cells",
  (MR_String) "asc_num_words"
};

#line 1193 "snapshots.c"
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

#line 1208 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

#line 1213 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0
  }
};

#line 1222 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

#line 1227 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1] = {
  (MR_Integer) 0
};

#line 1232 "snapshots.c"
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

#line 1249 "snapshots.c"
static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_id_0,
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0
  }
};

#line 1258 "snapshots.c"
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

#line 1275 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0
  }
};

#line 1283 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0
};

#line 1291 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4] = {
  (MR_String) "g_total_cells",
  (MR_String) "g_total_words",
  (MR_String) "g_representative",
  (MR_String) "g_details"
};

#line 1299 "snapshots.c"
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

#line 1314 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

#line 1319 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_group_0_0
  }
};

#line 1328 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

#line 1333 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1] = {
  (MR_Integer) 0
};

#line 1338 "snapshots.c"
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

#line 1355 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0 = {
  (MR_String) "major_axis_proc",
  (MR_Integer) 0
};

#line 1361 "snapshots.c"
static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1 = {
  (MR_String) "major_axis_type",
  (MR_Integer) 1
};

#line 1367 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_value_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

#line 1373 "snapshots.c"
static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_name_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

#line 1379 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_major_axis_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1385 "snapshots.c"
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

#line 1402 "snapshots.c"
static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1410 "snapshots.c"
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

#line 1427 "snapshots.c"
static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_major_axis_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1435 "snapshots.c"
static const MR_ConstString snapshots__snapshots__field_names_snapshot_options_0_0[4] = {
  (MR_String) "major_axis",
  (MR_String) "brief",
  (MR_String) "recalc_words",
  (MR_String) "include_runtime"
};

#line 1443 "snapshots.c"
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

#line 1467 "snapshots.c"
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

#line 1482 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

#line 1487 "snapshots.c"
static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_snapshot_options_0_0
  }
};

#line 1496 "snapshots.c"
static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

#line 1501 "snapshots.c"
static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1] = {
  (MR_Integer) 0
};

#line 1506 "snapshots.c"
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

#line 1523 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
#line 1526 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1528 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1530 "snapshots.c"
{
#line 1532 "snapshots.c"
  {
#line 1534 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1537 "snapshots.c"
    {
#line 1539 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_id_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1542 "snapshots.c"
    return snapshots__succeeded;
#line 1544 "snapshots.c"
  }
#line 1546 "snapshots.c"
}

#line 1549 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
#line 1552 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1554 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1556 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1558 "snapshots.c"
{
#line 1560 "snapshots.c"
  {
#line 1562 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1565 "snapshots.c"
    {
#line 1567 "snapshots.c"
      snapshots____Compare____alloc_id_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1570 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1572 "snapshots.c"
  }
#line 1574 "snapshots.c"
}

#line 1577 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
#line 1580 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1582 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1584 "snapshots.c"
{
#line 1586 "snapshots.c"
  {
#line 1588 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1591 "snapshots.c"
    {
#line 1593 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1596 "snapshots.c"
    return snapshots__succeeded;
#line 1598 "snapshots.c"
  }
#line 1600 "snapshots.c"
}

#line 1603 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
#line 1606 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1608 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1610 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1612 "snapshots.c"
{
#line 1614 "snapshots.c"
  {
#line 1616 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1619 "snapshots.c"
    {
#line 1621 "snapshots.c"
      snapshots____Compare____alloc_site_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1624 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1626 "snapshots.c"
  }
#line 1628 "snapshots.c"
}

#line 1631 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
#line 1634 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1636 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1638 "snapshots.c"
{
#line 1640 "snapshots.c"
  {
#line 1642 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1645 "snapshots.c"
    {
#line 1647 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_counts_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1650 "snapshots.c"
    return snapshots__succeeded;
#line 1652 "snapshots.c"
  }
#line 1654 "snapshots.c"
}

#line 1657 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
#line 1660 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1662 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1664 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1666 "snapshots.c"
{
#line 1668 "snapshots.c"
  {
#line 1670 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1673 "snapshots.c"
    {
#line 1675 "snapshots.c"
      snapshots____Compare____alloc_site_counts_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1678 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1680 "snapshots.c"
  }
#line 1682 "snapshots.c"
}

#line 1685 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
#line 1688 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1690 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1692 "snapshots.c"
{
#line 1694 "snapshots.c"
  {
#line 1696 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1699 "snapshots.c"
    {
#line 1701 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____alloc_site_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1704 "snapshots.c"
    return snapshots__succeeded;
#line 1706 "snapshots.c"
  }
#line 1708 "snapshots.c"
}

#line 1711 "snapshots.c"
static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
#line 1714 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1716 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1718 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1720 "snapshots.c"
{
#line 1722 "snapshots.c"
  {
#line 1724 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1727 "snapshots.c"
    {
#line 1729 "snapshots.c"
      snapshots____Compare____alloc_site_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1732 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1734 "snapshots.c"
  }
#line 1736 "snapshots.c"
}

#line 1739 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
#line 1742 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1744 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1746 "snapshots.c"
{
#line 1748 "snapshots.c"
  {
#line 1750 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1753 "snapshots.c"
    {
#line 1755 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____group_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1758 "snapshots.c"
    return snapshots__succeeded;
#line 1760 "snapshots.c"
  }
#line 1762 "snapshots.c"
}

#line 1765 "snapshots.c"
static void MR_CALL 
snapshots____Compare____group_0_0_10001(
#line 1768 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1770 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1772 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1774 "snapshots.c"
{
#line 1776 "snapshots.c"
  {
#line 1778 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1781 "snapshots.c"
    {
#line 1783 "snapshots.c"
      snapshots____Compare____group_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1786 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1788 "snapshots.c"
  }
#line 1790 "snapshots.c"
}

#line 1793 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
#line 1796 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1798 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1800 "snapshots.c"
{
#line 1802 "snapshots.c"
  {
#line 1804 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1807 "snapshots.c"
    {
#line 1809 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____major_axis_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1812 "snapshots.c"
    return snapshots__succeeded;
#line 1814 "snapshots.c"
  }
#line 1816 "snapshots.c"
}

#line 1819 "snapshots.c"
static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
#line 1822 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1824 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1826 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1828 "snapshots.c"
{
#line 1830 "snapshots.c"
  {
#line 1832 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1835 "snapshots.c"
    {
#line 1837 "snapshots.c"
      snapshots____Compare____major_axis_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1840 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1842 "snapshots.c"
  }
#line 1844 "snapshots.c"
}

#line 1847 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
#line 1850 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1852 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1854 "snapshots.c"
{
#line 1856 "snapshots.c"
  {
#line 1858 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1861 "snapshots.c"
    {
#line 1863 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____size_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1866 "snapshots.c"
    return snapshots__succeeded;
#line 1868 "snapshots.c"
  }
#line 1870 "snapshots.c"
}

#line 1873 "snapshots.c"
static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
#line 1876 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1878 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1880 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1882 "snapshots.c"
{
#line 1884 "snapshots.c"
  {
#line 1886 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1889 "snapshots.c"
    {
#line 1891 "snapshots.c"
      snapshots____Compare____size_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1894 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1896 "snapshots.c"
  }
#line 1898 "snapshots.c"
}

#line 1901 "snapshots.c"
static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
#line 1904 "snapshots.c"
  MR_Box snapshots__wrapper_arg_1,
#line 1906 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2)
#line 1908 "snapshots.c"
{
#line 1910 "snapshots.c"
  {
#line 1912 "snapshots.c"
    MR_bool snapshots__succeeded;

#line 1915 "snapshots.c"
    {
#line 1917 "snapshots.c"
      snapshots__succeeded = snapshots____Unify____snapshot_options_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
#line 1920 "snapshots.c"
    return snapshots__succeeded;
#line 1922 "snapshots.c"
  }
#line 1924 "snapshots.c"
}

#line 1927 "snapshots.c"
static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
#line 1930 "snapshots.c"
  MR_Box * snapshots__wrapper_arg_1,
#line 1932 "snapshots.c"
  MR_Box snapshots__wrapper_arg_2,
#line 1934 "snapshots.c"
  MR_Box snapshots__wrapper_arg_3)
#line 1936 "snapshots.c"
{
#line 1938 "snapshots.c"
  {
#line 1940 "snapshots.c"
    MR_Word snapshots__conv0_HeadVar__1_1;

#line 1943 "snapshots.c"
    {
#line 1945 "snapshots.c"
      snapshots____Compare____snapshot_options_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
#line 1948 "snapshots.c"
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
#line 1950 "snapshots.c"
  }
#line 1952 "snapshots.c"
}

#line 358 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
#line 358 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 358 "snapshots.m"
{
#line 358 "snapshots.m"
  {
#line 358 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 358 "snapshots.m"
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
#line 358 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

#line 358 "snapshots.m"
    {
#line 358 "snapshots.m"
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
#line 358 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
#line 358 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
#line 358 "snapshots.m"
  }
#line 358 "snapshots.m"
}

#line 357 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
#line 357 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 357 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 357 "snapshots.m"
{
#line 357 "snapshots.m"
  {
#line 357 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 357 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 357 "snapshots.m"
    {
#line 357 "snapshots.m"
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 357 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 357 "snapshots.m"
  }
#line 357 "snapshots.m"
}

#line 336 "snapshots.m"
static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
#line 336 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 336 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 336 "snapshots.m"
  MR_Word * snapshots__AddrOfGroups_39)
#line 336 "snapshots.m"
{
#line 341 "snapshots.m"
  while (MR_TRUE)
#line 341 "snapshots.m"
    {
#line 341 "snapshots.m"
      /* tailcall optimized into a loop */
#line 341 "snapshots.m"
      {
#line 341 "snapshots.m"
        MR_bool snapshots__succeeded;

#line 341 "snapshots.m"
        if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "snapshots.m"
          {
#line 2053 "snapshots.c"
            *snapshots__AddrOfGroups_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "snapshots.m"
          }
#line 341 "snapshots.m"
        else
#line 344 "snapshots.m"
          {
#line 344 "snapshots.m"
            MR_Word snapshots__TypeCtorInfo_17_28;
#line 344 "snapshots.m"
            MR_Word snapshots__TypeCtorInfo_26_37;
#line 344 "snapshots.m"
            MR_Word snapshots__First_9;
#line 344 "snapshots.m"
            MR_Word snapshots__Rest_10;
#line 344 "snapshots.m"
            MR_Word snapshots__FirstGroup_11;
#line 344 "snapshots.m"
            MR_Word snapshots__SortedCounts0_16;
#line 344 "snapshots.m"
            MR_Word snapshots__SortedCounts_17;
#line 344 "snapshots.m"
            MR_Integer snapshots__TotalCells_18;
#line 344 "snapshots.m"
            MR_Integer snapshots__TotalWords_19;
#line 344 "snapshots.m"
            MR_Word snapshots__FirstSite_20;
#line 344 "snapshots.m"
            MR_Word snapshots__V_25_25;
#line 358 "snapshots.m"
            MR_Box snapshots__conv4_TotalCells_18;
#line 358 "snapshots.m"
            MR_Box snapshots__conv3_TotalWords_19;
#line 359 "snapshots.m"
            MR_Box snapshots__conv5_V_25_25;
#line 359 "snapshots.m"
            MR_Integer snapshots__V_26_26;
#line 359 "snapshots.m"
            MR_Integer snapshots__V_27_27;
#line 347 "snapshots.m"
            MR_Word * snapshots__AddrRestGroups_38;
#line 347 "snapshots.m"
            MR_Word snapshots__Groups_40;

#line 345 "snapshots.m"
            {
#line 345 "snapshots.m"
              snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
            }
#line 2103 "snapshots.c"
            snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
#line 356 "snapshots.m"
            {
#line 356 "snapshots.m"
              mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
            }
#line 357 "snapshots.m"
            {
#line 357 "snapshots.m"
              mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[8], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
            }
#line 2115 "snapshots.c"
            snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 358 "snapshots.m"
            {
#line 358 "snapshots.m"
              mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[9], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
            }
#line 358 "snapshots.m"
            snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
#line 358 "snapshots.m"
            snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
#line 359 "snapshots.m"
            {
#line 359 "snapshots.m"
              snapshots__conv5_V_25_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
            }
#line 359 "snapshots.m"
            snapshots__V_25_25 = ((MR_Word) snapshots__conv5_V_25_25);
#line 359 "snapshots.m"
            snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 0)));
#line 359 "snapshots.m"
            snapshots__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 1)));
#line 359 "snapshots.m"
            snapshots__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 2)));
#line 360 "snapshots.m"
            {
#line 360 "snapshots.m"
              snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 360 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
#line 360 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
#line 360 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
#line 360 "snapshots.m"
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
#line 360 "snapshots.m"
            }
#line 348 "snapshots.m"
            {
#line 348 "snapshots.m"
              snapshots__Groups_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "snapshots.m"
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 0) = ((MR_Box) (snapshots__FirstGroup_11));
#line 348 "snapshots.m"
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 1) = NULL;
#line 348 "snapshots.m"
            }
#line 348 "snapshots.m"
            snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Groups_40, (MR_Integer) 1));
#line 2165 "snapshots.c"
            *snapshots__AddrOfGroups_39 = snapshots__Groups_40;
#line 347 "snapshots.m"
            /* direct tailcall eliminated */
#line 347 "snapshots.m"
            {
#line 347 "snapshots.m"
              MR_Word snapshots__Counts__tmp_copy_5 = snapshots__Rest_10;
#line 347 "snapshots.m"
              MR_Word * snapshots__AddrOfGroups__tmp_copy_39 = snapshots__AddrRestGroups_38;

#line 347 "snapshots.m"
              snapshots__AddrOfGroups_39 = snapshots__AddrOfGroups__tmp_copy_39;
#line 347 "snapshots.m"
              snapshots__Counts_5 = snapshots__Counts__tmp_copy_5;
#line 347 "snapshots.m"
            }
#line 347 "snapshots.m"
            continue;
#line 344 "snapshots.m"
          }
#line 341 "snapshots.m"
      }
#line 341 "snapshots.m"
      break;
#line 341 "snapshots.m"
    }
#line 336 "snapshots.m"
}

#line 550 "snapshots.m"
static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
#line 550 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 550 "snapshots.m"
  MR_Word snapshots__List_6,
#line 550 "snapshots.m"
  MR_Word * snapshots__AddrOfUpto_23,
#line 550 "snapshots.m"
  MR_Word * snapshots__After_8)
#line 550 "snapshots.m"
{
#line 558 "snapshots.m"
  while (MR_TRUE)
#line 558 "snapshots.m"
    {
#line 558 "snapshots.m"
      /* tailcall optimized into a loop */
#line 558 "snapshots.m"
      {
#line 558 "snapshots.m"
        MR_bool snapshots__succeeded;

#line 558 "snapshots.m"
        if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "snapshots.m"
          {
#line 2223 "snapshots.c"
            *snapshots__AddrOfUpto_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "snapshots.m"
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "snapshots.m"
          }
#line 558 "snapshots.m"
        else
#line 558 "snapshots.m"
          {
#line 558 "snapshots.m"
            MR_Word snapshots__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
#line 558 "snapshots.m"
            MR_Box snapshots__V_21_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

#line 558 "snapshots.m"
            if ((snapshots__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "snapshots.m"
              {
#line 2242 "snapshots.c"
                *snapshots__AddrOfUpto_23 = snapshots__List_6;
#line 561 "snapshots.m"
                *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "snapshots.m"
              }
#line 558 "snapshots.m"
            else
#line 563 "snapshots.m"
              {
#line 563 "snapshots.m"
                MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 0));
#line 563 "snapshots.m"
                MR_Word snapshots__Cmp_13;
#line 563 "snapshots.m"
                MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 1)));
#line 564 "snapshots.m"
                void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
#line 564 "snapshots.m"
                MR_Box snapshots__conv1_Cmp_13;

#line 564 "snapshots.m"
                {
#line 564 "snapshots.m"
                  snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__V_21_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
                }
#line 564 "snapshots.m"
                snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
#line 569 "snapshots.m"
#line 569 "snapshots.m"
                switch (snapshots__Cmp_13) {
#line 569 "snapshots.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 569 "snapshots.m"
                  case (MR_Integer) 1:
#line 569 "snapshots.m"
                  case (MR_Integer) 2:
#line 572 "snapshots.m"
                    {
#line 572 "snapshots.m"
                      MR_Word snapshots__Upto_25;

#line 573 "snapshots.m"
                      {
#line 573 "snapshots.m"
                        snapshots__Upto_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "snapshots.m"
                        MR_hl_field(MR_mktag(1), snapshots__Upto_25, 0) = snapshots__V_21_21;
#line 573 "snapshots.m"
                        MR_hl_field(MR_mktag(1), snapshots__Upto_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "snapshots.m"
                      }
#line 2294 "snapshots.c"
                      *snapshots__AddrOfUpto_23 = snapshots__Upto_25;
#line 574 "snapshots.m"
                      *snapshots__After_8 = snapshots__V_20_20;
#line 572 "snapshots.m"
                    }
#line 569 "snapshots.m"
                    break;
#line 569 "snapshots.m"
                  case (MR_Integer) 0:
#line 567 "snapshots.m"
                    {
#line 567 "snapshots.m"
                      MR_Word * snapshots__AddrUpto0_22;
#line 567 "snapshots.m"
                      MR_Word snapshots__Upto_26;

#line 568 "snapshots.m"
                      {
#line 568 "snapshots.m"
                        snapshots__Upto_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "snapshots.m"
                        MR_hl_field(MR_mktag(1), snapshots__Upto_26, 0) = snapshots__V_21_21;
#line 568 "snapshots.m"
                        MR_hl_field(MR_mktag(1), snapshots__Upto_26, 1) = NULL;
#line 568 "snapshots.m"
                      }
#line 568 "snapshots.m"
                      snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Upto_26, (MR_Integer) 1));
#line 2323 "snapshots.c"
                      *snapshots__AddrOfUpto_23 = snapshots__Upto_26;
#line 567 "snapshots.m"
                      /* direct tailcall eliminated */
#line 567 "snapshots.m"
                      {
#line 567 "snapshots.m"
                        MR_Word snapshots__List__tmp_copy_6 = snapshots__V_20_20;
#line 567 "snapshots.m"
                        MR_Word * snapshots__AddrOfUpto__tmp_copy_23 = snapshots__AddrUpto0_22;

#line 567 "snapshots.m"
                        snapshots__AddrOfUpto_23 = snapshots__AddrOfUpto__tmp_copy_23;
#line 567 "snapshots.m"
                        snapshots__List_6 = snapshots__List__tmp_copy_6;
#line 567 "snapshots.m"
                      }
#line 567 "snapshots.m"
                      continue;
#line 567 "snapshots.m"
                    }
#line 569 "snapshots.m"
                    break;
#line 569 "snapshots.m"
                }
#line 563 "snapshots.m"
              }
#line 558 "snapshots.m"
          }
#line 558 "snapshots.m"
      }
#line 558 "snapshots.m"
      break;
#line 558 "snapshots.m"
    }
#line 550 "snapshots.m"
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
#line 265 "snapshots.m"
        switch (MR_tag((MR_Word) snapshots__LineRes_14)) {
#line 265 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 265 "snapshots.m"
          case (MR_Integer) 0:
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
            break;
#line 265 "snapshots.m"
          case (MR_Integer) 1:
#line 250 "snapshots.m"
            {
#line 250 "snapshots.m"
              MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

#line 252 "snapshots.m"
              {
#line 252 "snapshots.m"
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
              }
#line 251 "snapshots.m"
              if (snapshots__succeeded)
#line 254 "snapshots.m"
                {
#line 2430 "snapshots.c"
                  *snapshots__AddrOfAllocCounts_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "snapshots.m"
                }
#line 251 "snapshots.m"
              else
#line 255 "snapshots.m"
                {
#line 255 "snapshots.m"
                  MR_Word snapshots__Counts_16;

#line 256 "snapshots.m"
                  {
#line 256 "snapshots.m"
                    snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                  }
#line 255 "snapshots.m"
                  if (snapshots__succeeded)
#line 258 "snapshots.m"
                    {
#line 258 "snapshots.m"
                      MR_Word * snapshots__AddrRestCounts_31;
#line 258 "snapshots.m"
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
#line 2467 "snapshots.c"
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
#line 258 "snapshots.m"
                    }
#line 255 "snapshots.m"
                  else
#line 262 "snapshots.m"
                    {
#line 262 "snapshots.m"
                      /* direct tailcall eliminated */
#line 262 "snapshots.m"
                      continue;
#line 262 "snapshots.m"
                    }
#line 255 "snapshots.m"
                }
#line 250 "snapshots.m"
            }
#line 265 "snapshots.m"
            break;
#line 265 "snapshots.m"
          case (MR_Integer) 2:
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
            break;
#line 265 "snapshots.m"
        }
#line 247 "snapshots.m"
      }
#line 247 "snapshots.m"
      break;
#line 247 "snapshots.m"
    }
#line 243 "snapshots.m"
}

#line 550 "snapshots.m"
static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
#line 550 "snapshots.m"
  MR_Word snapshots__Compare_5,
#line 550 "snapshots.m"
  MR_Word snapshots__List_6,
#line 550 "snapshots.m"
  MR_Word * snapshots__Upto_7,
#line 550 "snapshots.m"
  MR_Word * snapshots__After_8)
#line 550 "snapshots.m"
{
#line 558 "snapshots.m"
  {
#line 558 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 558 "snapshots.m"
    if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "snapshots.m"
      {
#line 556 "snapshots.m"
        *snapshots__Upto_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "snapshots.m"
        *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "snapshots.m"
      }
#line 558 "snapshots.m"
    else
#line 558 "snapshots.m"
      {
#line 558 "snapshots.m"
        MR_Word snapshots__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
#line 558 "snapshots.m"
        MR_Box snapshots__V_21_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

#line 558 "snapshots.m"
        if ((snapshots__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "snapshots.m"
          {
#line 560 "snapshots.m"
            *snapshots__Upto_7 = snapshots__List_6;
#line 561 "snapshots.m"
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "snapshots.m"
          }
#line 558 "snapshots.m"
        else
#line 563 "snapshots.m"
          {
#line 563 "snapshots.m"
            MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 0));
#line 563 "snapshots.m"
            MR_Word snapshots__Cmp_13;
#line 563 "snapshots.m"
            MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__V_20_20, (MR_Integer) 1)));
#line 564 "snapshots.m"
            void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
#line 564 "snapshots.m"
            MR_Box snapshots__conv1_Cmp_13;

#line 564 "snapshots.m"
            {
#line 564 "snapshots.m"
              snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__V_21_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
            }
#line 564 "snapshots.m"
            snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
#line 569 "snapshots.m"
#line 569 "snapshots.m"
            switch (snapshots__Cmp_13) {
#line 569 "snapshots.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 569 "snapshots.m"
              case (MR_Integer) 1:
#line 569 "snapshots.m"
              case (MR_Integer) 2:
#line 572 "snapshots.m"
                {
#line 573 "snapshots.m"
                  {
#line 573 "snapshots.m"
                    MR_Word base;
#line 573 "snapshots.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "snapshots.m"
                    *snapshots__Upto_7 = base;
#line 573 "snapshots.m"
                    MR_hl_field(MR_mktag(1), base, 0) = snapshots__V_21_21;
#line 573 "snapshots.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "snapshots.m"
                  }
#line 574 "snapshots.m"
                  *snapshots__After_8 = snapshots__V_20_20;
#line 572 "snapshots.m"
                }
#line 569 "snapshots.m"
                break;
#line 569 "snapshots.m"
              case (MR_Integer) 0:
#line 567 "snapshots.m"
                {
#line 567 "snapshots.m"
                  MR_Word * snapshots__AddrUpto0_22;

#line 568 "snapshots.m"
                  {
#line 568 "snapshots.m"
                    MR_Word base;
#line 568 "snapshots.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "snapshots.m"
                    *snapshots__Upto_7 = base;
#line 568 "snapshots.m"
                    MR_hl_field(MR_mktag(1), base, 0) = snapshots__V_21_21;
#line 568 "snapshots.m"
                    MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 568 "snapshots.m"
                  }
#line 568 "snapshots.m"
                  snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Upto_7, (MR_Integer) 1));
#line 567 "snapshots.m"
                  {
#line 567 "snapshots.m"
                    snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(snapshots__Compare_5, snapshots__V_20_20, snapshots__AddrUpto0_22, snapshots__After_8);
                  }
#line 567 "snapshots.m"
                }
#line 569 "snapshots.m"
                break;
#line 569 "snapshots.m"
            }
#line 563 "snapshots.m"
          }
#line 558 "snapshots.m"
      }
#line 558 "snapshots.m"
  }
#line 550 "snapshots.m"
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
#line 2703 "snapshots.c"
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
#line 2737 "snapshots.c"
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
#line 2761 "snapshots.c"
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
#line 2785 "snapshots.c"
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

#line 2865 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_7_7);
#line 86 "snapshots.m"
        if (snapshots__succeeded)
#line 86 "snapshots.m"
          {
#line 2871 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_8_8);
#line 86 "snapshots.m"
            if (snapshots__succeeded)
#line 86 "snapshots.m"
              {
#line 2877 "snapshots.c"
                snapshots__succeeded = (snapshots__V_5_5 == snapshots__V_9_9);
#line 86 "snapshots.m"
                if (snapshots__succeeded)
#line 2881 "snapshots.c"
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
      snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_2[1], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
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
#line 2995 "snapshots.c"
  {
#line 2997 "snapshots.c"
    MR_bool snapshots__succeeded = (snapshots__HeadVar__2_1 == snapshots__HeadVar__2_2);

#line 3000 "snapshots.c"
    return snapshots__succeeded;
#line 3002 "snapshots.c"
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
#line 3031 "snapshots.c"
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
#line 3061 "snapshots.c"
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
#line 3081 "snapshots.c"
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
#line 3101 "snapshots.c"
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

#line 3178 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_7_7);
#line 71 "snapshots.m"
        if (snapshots__succeeded)
#line 71 "snapshots.m"
          {
#line 3184 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_8_8);
#line 71 "snapshots.m"
            if (snapshots__succeeded)
#line 71 "snapshots.m"
              {
#line 3190 "snapshots.c"
                {
#line 3192 "snapshots.c"
                  snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__V_5_5, snapshots__V_9_9);
                }
#line 71 "snapshots.m"
                if (snapshots__succeeded)
#line 71 "snapshots.m"
                  {
#line 3199 "snapshots.c"
                    snapshots__TypeInfo_13_13 = (MR_Word) &snapshots_scalar_common_2[0];
#line 3201 "snapshots.c"
                    {
#line 3203 "snapshots.c"
                      snapshots__succeeded = mercury__builtin__unify_2_p_0(snapshots__TypeInfo_13_13, ((MR_Box) (snapshots__V_6_6)), ((MR_Box) (snapshots__V_10_10)));
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
      snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_1[0], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
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
#line 3305 "snapshots.c"
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
#line 3331 "snapshots.c"
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
#line 3351 "snapshots.c"
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

#line 3416 "snapshots.c"
        {
#line 3418 "snapshots.c"
          snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__V_3_3, snapshots__V_6_6);
        }
#line 60 "snapshots.m"
        if (snapshots__succeeded)
#line 60 "snapshots.m"
          {
#line 3425 "snapshots.c"
            snapshots__succeeded = (snapshots__V_4_4 == snapshots__V_7_7);
#line 60 "snapshots.m"
            if (snapshots__succeeded)
#line 3429 "snapshots.c"
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
#line 3466 "snapshots.c"
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
#line 3500 "snapshots.c"
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
#line 3520 "snapshots.c"
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
#line 3540 "snapshots.c"
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
#line 3560 "snapshots.c"
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

#line 3637 "snapshots.c"
        snapshots__succeeded = (strcmp(snapshots__V_3_3, snapshots__V_8_8) == 0);
#line 48 "snapshots.m"
        if (snapshots__succeeded)
#line 48 "snapshots.m"
          {
#line 3643 "snapshots.c"
            snapshots__succeeded = (strcmp(snapshots__V_4_4, snapshots__V_9_9) == 0);
#line 48 "snapshots.m"
            if (snapshots__succeeded)
#line 48 "snapshots.m"
              {
#line 3649 "snapshots.c"
                snapshots__succeeded = (strcmp(snapshots__V_5_5, snapshots__V_10_10) == 0);
#line 48 "snapshots.m"
                if (snapshots__succeeded)
#line 48 "snapshots.m"
                  {
#line 3655 "snapshots.c"
                    snapshots__succeeded = (snapshots__V_6_6 == snapshots__V_11_11);
#line 48 "snapshots.m"
                    if (snapshots__succeeded)
#line 3659 "snapshots.c"
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
#line 3700 "snapshots.c"
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

#line 3756 "snapshots.c"
        snapshots__succeeded = (snapshots__V_3_3 == snapshots__V_4_4);
#line 45 "snapshots.m"
      }
#line 45 "snapshots.m"
    return snapshots__succeeded;
#line 45 "snapshots.m"
  }
#line 45 "snapshots.m"
}

#line 540 "snapshots.m"
static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void)
#line 540 "snapshots.m"
{
#line 542 "snapshots.m"
  {
#line 542 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 542 "snapshots.m"
    return (MR_Float) 0.10000000000000001;
#line 542 "snapshots.m"
  }
#line 540 "snapshots.m"
}

#line 536 "snapshots.m"
static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
#line 536 "snapshots.m"
  MR_Integer snapshots__N_4,
#line 536 "snapshots.m"
  MR_Integer snapshots__Total_5)
#line 536 "snapshots.m"
{
#line 538 "snapshots.m"
  {
#line 538 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 538 "snapshots.m"
    MR_Float snapshots__HeadVar__3_3;
#line 538 "snapshots.m"
    MR_Float snapshots__V_6_6;
#line 538 "snapshots.m"
    MR_Float snapshots__V_8_8;
#line 538 "snapshots.m"
    MR_Float snapshots__V_9_9;

#line 538 "snapshots.m"
    {
#line 538 "snapshots.m"
      snapshots__V_8_8 = mercury__float__float_1_f_0(snapshots__N_4);
    }
#line 538 "snapshots.m"
    snapshots__V_6_6 = (((MR_Float) 100.00000000000000) * snapshots__V_8_8);
#line 538 "snapshots.m"
    {
#line 538 "snapshots.m"
      snapshots__V_9_9 = mercury__float__float_1_f_0(snapshots__Total_5);
    }
#line 538 "snapshots.m"
    {
#line 538 "snapshots.m"
      snapshots__HeadVar__3_3 = mercury__float__f_slash_2_f_0(snapshots__V_6_6, snapshots__V_9_9);
    }
#line 538 "snapshots.m"
    return snapshots__HeadVar__3_3;
#line 538 "snapshots.m"
  }
#line 536 "snapshots.m"
}

#line 527 "snapshots.m"
static void MR_CALL 
snapshots__sum_counts_5_p_0(
#line 527 "snapshots.m"
  MR_Word snapshots__Site_6,
#line 527 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 527 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 527 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 527 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
#line 527 "snapshots.m"
{
#line 530 "snapshots.m"
  {
#line 530 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 530 "snapshots.m"
    MR_Integer snapshots__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 1)));
#line 530 "snapshots.m"
    MR_Integer snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 2)));
#line 531 "snapshots.m"
    MR_Word snapshots__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 0)));

#line 531 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__V_14_14);
#line 532 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__V_18_18);
#line 530 "snapshots.m"
  }
#line 527 "snapshots.m"
}

#line 521 "snapshots.m"
static void MR_CALL 
snapshots__sum_groups_5_p_0(
#line 521 "snapshots.m"
  MR_Word snapshots__Group_6,
#line 521 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
#line 521 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
#line 521 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
#line 521 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
#line 521 "snapshots.m"
{
#line 523 "snapshots.m"
  {
#line 523 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 523 "snapshots.m"
    MR_Integer snapshots__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 0)));
#line 523 "snapshots.m"
    MR_Integer snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 1)));
#line 524 "snapshots.m"
    MR_Word snapshots__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 2)));
#line 524 "snapshots.m"
    MR_Word snapshots__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 3)));

#line 524 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__V_14_14);
#line 525 "snapshots.m"
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__V_17_17);
#line 523 "snapshots.m"
  }
#line 521 "snapshots.m"
}

#line 513 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_words_3_p_0(
#line 513 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 513 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 513 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 513 "snapshots.m"
{
#line 516 "snapshots.m"
  {
#line 516 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 516 "snapshots.m"
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 516 "snapshots.m"
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 517 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 517 "snapshots.m"
    MR_Integer snapshots__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 518 "snapshots.m"
    MR_Word snapshots__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 518 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));

#line 519 "snapshots.m"
    {
#line 519 "snapshots.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
#line 516 "snapshots.m"
  }
#line 513 "snapshots.m"
}

#line 505 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_type_3_p_0(
#line 505 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 505 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 505 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 505 "snapshots.m"
{
#line 508 "snapshots.m"
  {
#line 508 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 508 "snapshots.m"
    MR_String snapshots__A_7;
#line 508 "snapshots.m"
    MR_String snapshots__B_8;
#line 508 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 508 "snapshots.m"
    MR_Word snapshots__V_10_10;
#line 509 "snapshots.m"
    MR_Integer snapshots__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 509 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 509 "snapshots.m"
    MR_String snapshots__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 0)));
#line 509 "snapshots.m"
    MR_String snapshots__V_14_14;
#line 509 "snapshots.m"
    MR_Integer snapshots__V_15_15;
#line 509 "snapshots.m"
    MR_Integer snapshots__V_16_16;
#line 510 "snapshots.m"
    MR_Integer snapshots__V_17_17;
#line 510 "snapshots.m"
    MR_Integer snapshots__V_18_18;
#line 510 "snapshots.m"
    MR_String snapshots__V_19_19;
#line 510 "snapshots.m"
    MR_String snapshots__V_20_20;
#line 510 "snapshots.m"
    MR_Integer snapshots__V_21_21;
#line 510 "snapshots.m"
    MR_Integer snapshots__V_22_22;

#line 509 "snapshots.m"
    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 1)));
#line 509 "snapshots.m"
    snapshots__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 2)));
#line 509 "snapshots.m"
    snapshots__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 3)));
#line 509 "snapshots.m"
    snapshots__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 4)));
#line 510 "snapshots.m"
    snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 510 "snapshots.m"
    snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
#line 510 "snapshots.m"
    snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 510 "snapshots.m"
    snapshots__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 0)));
#line 510 "snapshots.m"
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 1)));
#line 510 "snapshots.m"
    snapshots__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 2)));
#line 510 "snapshots.m"
    snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 3)));
#line 510 "snapshots.m"
    snapshots__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 4)));
#line 511 "snapshots.m"
    {
#line 511 "snapshots.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
#line 508 "snapshots.m"
  }
#line 505 "snapshots.m"
}

#line 497 "snapshots.m"
static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
#line 497 "snapshots.m"
  MR_Word snapshots__CountsA_4,
#line 497 "snapshots.m"
  MR_Word snapshots__CountsB_5,
#line 497 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 497 "snapshots.m"
{
#line 500 "snapshots.m"
  {
#line 500 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 500 "snapshots.m"
    MR_String snapshots__A_7;
#line 500 "snapshots.m"
    MR_String snapshots__B_8;
#line 500 "snapshots.m"
    MR_Word snapshots__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
#line 500 "snapshots.m"
    MR_Word snapshots__V_10_10;
#line 501 "snapshots.m"
    MR_Integer snapshots__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
#line 501 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
#line 501 "snapshots.m"
    MR_String snapshots__V_13_13;
#line 501 "snapshots.m"
    MR_String snapshots__V_14_14;
#line 501 "snapshots.m"
    MR_Integer snapshots__V_15_15;
#line 501 "snapshots.m"
    MR_Integer snapshots__V_16_16;
#line 502 "snapshots.m"
    MR_Integer snapshots__V_17_17;
#line 502 "snapshots.m"
    MR_Integer snapshots__V_18_18;
#line 502 "snapshots.m"
    MR_String snapshots__V_19_19;
#line 502 "snapshots.m"
    MR_String snapshots__V_20_20;
#line 502 "snapshots.m"
    MR_Integer snapshots__V_21_21;
#line 502 "snapshots.m"
    MR_Integer snapshots__V_22_22;

#line 501 "snapshots.m"
    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 0)));
#line 501 "snapshots.m"
    snapshots__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 1)));
#line 501 "snapshots.m"
    snapshots__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 2)));
#line 501 "snapshots.m"
    snapshots__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 3)));
#line 501 "snapshots.m"
    snapshots__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_9_9, (MR_Integer) 4)));
#line 502 "snapshots.m"
    snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
#line 502 "snapshots.m"
    snapshots__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
#line 502 "snapshots.m"
    snapshots__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
#line 502 "snapshots.m"
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 0)));
#line 502 "snapshots.m"
    snapshots__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 1)));
#line 502 "snapshots.m"
    snapshots__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 2)));
#line 502 "snapshots.m"
    snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 3)));
#line 502 "snapshots.m"
    snapshots__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_10_10, (MR_Integer) 4)));
#line 503 "snapshots.m"
    {
#line 503 "snapshots.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
#line 500 "snapshots.m"
  }
#line 497 "snapshots.m"
}

#line 490 "snapshots.m"
static void MR_CALL 
snapshots__group_by_words_3_p_0(
#line 490 "snapshots.m"
  MR_Word snapshots__GroupA_4,
#line 490 "snapshots.m"
  MR_Word snapshots__GroupB_5,
#line 490 "snapshots.m"
  MR_Word * snapshots__Result_6)
#line 490 "snapshots.m"
{
#line 492 "snapshots.m"
  {
#line 492 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 492 "snapshots.m"
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 1)));
#line 492 "snapshots.m"
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 1)));
#line 493 "snapshots.m"
    MR_Integer snapshots__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 0)));
#line 493 "snapshots.m"
    MR_Word snapshots__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 2)));
#line 493 "snapshots.m"
    MR_Word snapshots__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 3)));
#line 494 "snapshots.m"
    MR_Integer snapshots__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 0)));
#line 494 "snapshots.m"
    MR_Word snapshots__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 2)));
#line 494 "snapshots.m"
    MR_Word snapshots__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 3)));

#line 495 "snapshots.m"
    {
#line 495 "snapshots.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
#line 492 "snapshots.m"
  }
#line 490 "snapshots.m"
}

#line 453 "snapshots.m"
static void MR_CALL 
snapshots__output_site_7_p_0(
#line 453 "snapshots.m"
  MR_Word snapshots__MajorAxis_8,
#line 453 "snapshots.m"
  MR_Integer snapshots__TotalCells_9,
#line 453 "snapshots.m"
  MR_Integer snapshots__TotalWords_10,
#line 453 "snapshots.m"
  MR_Word snapshots__Single_11,
#line 453 "snapshots.m"
  MR_Word snapshots__AllocCounts_12)
#line 453 "snapshots.m"
{
#line 456 "snapshots.m"
  {
#line 456 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 456 "snapshots.m"
    MR_Word snapshots__AllocSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 0)));
#line 456 "snapshots.m"
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 1)));
#line 456 "snapshots.m"
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 2)));
#line 456 "snapshots.m"
    MR_String snapshots__Proc_17 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 0)));
#line 456 "snapshots.m"
    MR_String snapshots__Type_18 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 1)));
#line 456 "snapshots.m"
    MR_String snapshots__File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 2)));
#line 456 "snapshots.m"
    MR_Integer snapshots__LineNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 3)));
#line 456 "snapshots.m"
    MR_Float snapshots__CellsPercent_22;
#line 456 "snapshots.m"
    MR_Float snapshots__WordsPercent_23;
#line 456 "snapshots.m"
    MR_String snapshots__RightLabel_24;
#line 458 "snapshots.m"
    MR_Integer snapshots__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 4)));

#line 459 "snapshots.m"
    {
#line 459 "snapshots.m"
      snapshots__CellsPercent_22 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_9);
    }
#line 460 "snapshots.m"
    {
#line 460 "snapshots.m"
      snapshots__WordsPercent_23 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_10);
    }
#line 464 "snapshots.m"
#line 464 "snapshots.m"
    switch (snapshots__MajorAxis_8) {
#line 464 "snapshots.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 464 "snapshots.m"
      case (MR_Integer) 0:
#line 463 "snapshots.m"
        snapshots__RightLabel_24 = snapshots__Type_18;
#line 464 "snapshots.m"
        break;
#line 464 "snapshots.m"
      case (MR_Integer) 1:
#line 466 "snapshots.m"
        snapshots__RightLabel_24 = snapshots__Proc_17;
#line 464 "snapshots.m"
        break;
#line 464 "snapshots.m"
    }
#line 472 "snapshots.m"
#line 472 "snapshots.m"
    switch (snapshots__Single_11) {
#line 472 "snapshots.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 472 "snapshots.m"
      case (MR_Integer) 0:
#line 474 "snapshots.m"
        {
#line 475 "snapshots.m"
          MR_Float snapshots__V_27_27;
#line 475 "snapshots.m"
          MR_Float snapshots__V_28_28;

#line 475 "snapshots.m"
          {
#line 475 "snapshots.m"
            snapshots__V_27_27 = snapshots__min_percentage_major_0_f_0();
          }
#line 475 "snapshots.m"
          snapshots__succeeded = (snapshots__CellsPercent_22 <= snapshots__V_27_27);
#line 475 "snapshots.m"
          if (snapshots__succeeded)
#line 475 "snapshots.m"
            {
#line 476 "snapshots.m"
              {
#line 476 "snapshots.m"
                snapshots__V_28_28 = snapshots__min_percentage_major_0_f_0();
              }
#line 476 "snapshots.m"
              snapshots__succeeded = (snapshots__WordsPercent_23 <= snapshots__V_28_28);
#line 475 "snapshots.m"
            }
#line 474 "snapshots.m"
          if (snapshots__succeeded)
#line 474 "snapshots.m"
            {
#line 474 "snapshots.m"
            }
#line 474 "snapshots.m"
          else
#line 480 "snapshots.m"
            {
#line 480 "snapshots.m"
              MR_String snapshots__V_106_106;
#line 480 "snapshots.m"
              MR_Word snapshots__V_112_112;
#line 480 "snapshots.m"
              MR_String snapshots__V_117_117;
#line 480 "snapshots.m"
              MR_String snapshots__V_130_130;
#line 480 "snapshots.m"
              MR_String snapshots__V_141_141;
#line 480 "snapshots.m"
              MR_String snapshots__V_154_154;
#line 480 "snapshots.m"
              MR_String snapshots__V_165_165;
#line 480 "snapshots.m"
              MR_String snapshots__V_175_175;
#line 480 "snapshots.m"
              MR_String snapshots__V_185_185;

#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
#line 4287 "snapshots.c"
              snapshots__V_112_112 = (MR_Word) &snapshots_scalar_common_5[0];
#line 481 "snapshots.m"
              {
#line 481 "snapshots.m"
                mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__V_106_106);
              }
#line 481 "snapshots.m"
              {
#line 481 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_106_106);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
#line 481 "snapshots.m"
              {
#line 481 "snapshots.m"
                mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_22, &snapshots__V_117_117);
              }
#line 481 "snapshots.m"
              {
#line 481 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_117_117);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__V_130_130);
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_130_130);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_23, &snapshots__V_141_141);
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_141_141);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) "%  ");
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_112_112, (MR_Integer) 5, (MR_String) "", &snapshots__V_154_154);
              }
#line 482 "snapshots.m"
              {
#line 482 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_154_154);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) "  ");
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__RightLabel_24, &snapshots__V_165_165);
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_165_165);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) " (");
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__File_19, &snapshots__V_175_175);
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_175_175);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) ":");
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_112_112, snapshots__LineNum_20, &snapshots__V_185_185);
              }
#line 483 "snapshots.m"
              {
#line 483 "snapshots.m"
                mercury__io__write_string_3_p_0(snapshots__V_185_185);
              }
#line 480 "snapshots.m"
              {
#line 480 "snapshots.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
#line 480 "snapshots.m"
            }
#line 474 "snapshots.m"
        }
#line 472 "snapshots.m"
        break;
#line 472 "snapshots.m"
      case (MR_Integer) 1:
#line 469 "snapshots.m"
        {
#line 469 "snapshots.m"
          MR_String snapshots__V_64_64;
#line 469 "snapshots.m"
          MR_Word snapshots__V_70_70;
#line 469 "snapshots.m"
          MR_String snapshots__V_75_75;
#line 469 "snapshots.m"
          MR_String snapshots__V_85_85;
#line 469 "snapshots.m"
          MR_String snapshots__V_95_95;

#line 470 "snapshots.m"
          {
#line 470 "snapshots.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 4435 "snapshots.c"
          snapshots__V_70_70 = (MR_Word) &snapshots_scalar_common_5[0];
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_70_70, (MR_Integer) 38, (MR_String) "", &snapshots__V_64_64);
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__io__write_string_3_p_0(snapshots__V_64_64);
          }
#line 470 "snapshots.m"
          {
#line 470 "snapshots.m"
            mercury__io__write_string_3_p_0((MR_String) "  ");
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__RightLabel_24, &snapshots__V_75_75);
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__io__write_string_3_p_0(snapshots__V_75_75);
          }
#line 470 "snapshots.m"
          {
#line 470 "snapshots.m"
            mercury__io__write_string_3_p_0((MR_String) " (");
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__File_19, &snapshots__V_85_85);
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__io__write_string_3_p_0(snapshots__V_85_85);
          }
#line 470 "snapshots.m"
          {
#line 470 "snapshots.m"
            mercury__io__write_string_3_p_0((MR_String) ":");
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_70_70, snapshots__LineNum_20, &snapshots__V_95_95);
          }
#line 471 "snapshots.m"
          {
#line 471 "snapshots.m"
            mercury__io__write_string_3_p_0(snapshots__V_95_95);
          }
#line 470 "snapshots.m"
          {
#line 470 "snapshots.m"
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
#line 469 "snapshots.m"
        }
#line 472 "snapshots.m"
        break;
#line 472 "snapshots.m"
    }
#line 456 "snapshots.m"
  }
#line 453 "snapshots.m"
}

#line 447 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0_1(
#line 447 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 447 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 447 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 447 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 447 "snapshots.m"
{
#line 447 "snapshots.m"
  {
#line 447 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;

#line 447 "snapshots.m"
    {
#line 447 "snapshots.m"
      snapshots__output_site_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 6))), ((MR_Word) snapshots__wrapper_arg_1));
    }
#line 447 "snapshots.m"
  }
#line 447 "snapshots.m"
}

#line 406 "snapshots.m"
static void MR_CALL 
snapshots__output_group_8_p_0(
#line 406 "snapshots.m"
  MR_Word snapshots__Options_9,
#line 406 "snapshots.m"
  MR_Integer snapshots__TotalCells_10,
#line 406 "snapshots.m"
  MR_Integer snapshots__TotalWords_11,
#line 406 "snapshots.m"
  MR_Word snapshots__Group_12,
#line 406 "snapshots.m"
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
#line 406 "snapshots.m"
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29)
#line 406 "snapshots.m"
{
#line 409 "snapshots.m"
  {
#line 409 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 409 "snapshots.m"
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 0)));
#line 409 "snapshots.m"
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 1)));
#line 409 "snapshots.m"
    MR_Word snapshots__AllocSite_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 2)));
#line 409 "snapshots.m"
    MR_Word snapshots__Counts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 3)));
#line 409 "snapshots.m"
    MR_Float snapshots__CellsPercent_19;
#line 409 "snapshots.m"
    MR_Float snapshots__WordsPercent_20;
#line 409 "snapshots.m"
    MR_Float snapshots__CumulPercent_21;
#line 416 "snapshots.m"
    MR_Float snapshots__V_33_33;
#line 416 "snapshots.m"
    MR_Float snapshots__V_34_34;

#line 411 "snapshots.m"
    *snapshots__STATE_VARIABLE_CumulWords_29 = (snapshots__STATE_VARIABLE_CumulWords_0_28 + snapshots__NumWords_16);
#line 412 "snapshots.m"
    {
#line 412 "snapshots.m"
      snapshots__CellsPercent_19 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_10);
    }
#line 413 "snapshots.m"
    {
#line 413 "snapshots.m"
      snapshots__WordsPercent_20 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_11);
    }
#line 414 "snapshots.m"
    {
#line 414 "snapshots.m"
      snapshots__CumulPercent_21 = snapshots__percentage_2_f_0(*snapshots__STATE_VARIABLE_CumulWords_29, snapshots__TotalWords_11);
    }
#line 416 "snapshots.m"
    {
#line 416 "snapshots.m"
      snapshots__V_33_33 = snapshots__min_percentage_major_0_f_0();
    }
#line 416 "snapshots.m"
    snapshots__succeeded = (snapshots__CellsPercent_19 <= snapshots__V_33_33);
#line 416 "snapshots.m"
    if (snapshots__succeeded)
#line 416 "snapshots.m"
      {
#line 417 "snapshots.m"
        {
#line 417 "snapshots.m"
          snapshots__V_34_34 = snapshots__min_percentage_major_0_f_0();
        }
#line 417 "snapshots.m"
        snapshots__succeeded = (snapshots__WordsPercent_20 <= snapshots__V_34_34);
#line 416 "snapshots.m"
      }
#line 415 "snapshots.m"
    if (snapshots__succeeded)
#line 415 "snapshots.m"
      {
#line 415 "snapshots.m"
      }
#line 415 "snapshots.m"
    else
#line 421 "snapshots.m"
      {
#line 421 "snapshots.m"
        MR_Word snapshots__MajorAxis_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 421 "snapshots.m"
        MR_Word snapshots__Brief_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 421 "snapshots.m"
        MR_String snapshots__RightLabel_24;
#line 421 "snapshots.m"
        MR_Char snapshots__Star_25;
#line 421 "snapshots.m"
        MR_String snapshots__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
#line 421 "snapshots.m"
        MR_String snapshots__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
#line 421 "snapshots.m"
        MR_String snapshots__V_81_81;
#line 421 "snapshots.m"
        MR_Word snapshots__V_87_87;
#line 421 "snapshots.m"
        MR_String snapshots__V_89_89;
#line 421 "snapshots.m"
        MR_String snapshots__V_100_100;
#line 421 "snapshots.m"
        MR_String snapshots__V_113_113;
#line 421 "snapshots.m"
        MR_String snapshots__V_124_124;
#line 421 "snapshots.m"
        MR_String snapshots__V_137_137;
#line 421 "snapshots.m"
        MR_String snapshots__V_150_150;
#line 421 "snapshots.m"
        MR_Word snapshots__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 421 "snapshots.m"
        MR_Word snapshots__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 425 "snapshots.m"
        MR_Integer snapshots__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
#line 425 "snapshots.m"
        MR_Integer snapshots__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
#line 425 "snapshots.m"
        MR_String snapshots__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));

#line 426 "snapshots.m"
#line 426 "snapshots.m"
        switch (snapshots__MajorAxis_22) {
#line 426 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 426 "snapshots.m"
          case (MR_Integer) 0:
#line 425 "snapshots.m"
            snapshots__RightLabel_24 = snapshots__V_79_79;
#line 426 "snapshots.m"
            break;
#line 426 "snapshots.m"
          case (MR_Integer) 1:
#line 428 "snapshots.m"
            snapshots__RightLabel_24 = snapshots__V_78_78;
#line 426 "snapshots.m"
            break;
#line 426 "snapshots.m"
        }
#line 433 "snapshots.m"
#line 433 "snapshots.m"
        switch (snapshots__Brief_23) {
#line 433 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 433 "snapshots.m"
          case (MR_Integer) 0:
#line 434 "snapshots.m"
            snapshots__Star_25 = (MR_Char) 42;
#line 433 "snapshots.m"
            break;
#line 433 "snapshots.m"
          case (MR_Integer) 1:
#line 431 "snapshots.m"
            snapshots__Star_25 = (MR_Char) 32;
#line 433 "snapshots.m"
            break;
#line 433 "snapshots.m"
        }
#line 4700 "snapshots.c"
        snapshots__V_87_87 = (MR_Word) &snapshots_scalar_common_5[0];
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__string__format__format_char_component_nowidth_3_p_0(snapshots__V_87_87, snapshots__Star_25, &snapshots__V_81_81);
        }
#line 438 "snapshots.m"
        {
#line 438 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_81_81);
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_87_87, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__V_89_89);
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_89_89);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_19, &snapshots__V_100_100);
        }
#line 439 "snapshots.m"
        {
#line 439 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_100_100);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_87_87, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__V_113_113);
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_113_113);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_20, &snapshots__V_124_124);
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_124_124);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__V_87_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CumulPercent_21, &snapshots__V_137_137);
        }
#line 440 "snapshots.m"
        {
#line 440 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_137_137);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "%  ");
        }
#line 441 "snapshots.m"
        {
#line 441 "snapshots.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_87_87, snapshots__RightLabel_24, &snapshots__V_150_150);
        }
#line 441 "snapshots.m"
        {
#line 441 "snapshots.m"
          mercury__io__write_string_3_p_0(snapshots__V_150_150);
        }
#line 437 "snapshots.m"
        {
#line 437 "snapshots.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 444 "snapshots.m"
#line 444 "snapshots.m"
        switch (snapshots__Brief_23) {
#line 444 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 444 "snapshots.m"
          case (MR_Integer) 0:
#line 445 "snapshots.m"
            {
#line 445 "snapshots.m"
              MR_Word snapshots__Single_26;
#line 445 "snapshots.m"
              MR_Word snapshots__V_53_53;
#line 446 "snapshots.m"
              MR_Word snapshots__V_52_52;
#line 446 "snapshots.m"
              MR_Word snapshots__V_27_27;
#line 447 "snapshots.m"
              MR_Box snapshots__conv0_STATE_VARIABLE_IO_54_54;

#line 446 "snapshots.m"
              snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Counts_18)) == (MR_mktag((MR_Integer) 1)));
#line 446 "snapshots.m"
              if (snapshots__succeeded)
#line 446 "snapshots.m"
                {
#line 446 "snapshots.m"
                  snapshots__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 0)));
#line 446 "snapshots.m"
                  snapshots__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 1)));
#line 446 "snapshots.m"
                  snapshots__succeeded = (snapshots__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "snapshots.m"
                }
#line 446 "snapshots.m"
              if (snapshots__succeeded)
#line 446 "snapshots.m"
                snapshots__Single_26 = (MR_Integer) 1;
#line 446 "snapshots.m"
              else
#line 446 "snapshots.m"
                snapshots__Single_26 = (MR_Integer) 0;
#line 447 "snapshots.m"
              {
#line 447 "snapshots.m"
                snapshots__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 0) = ((MR_Box) (&snapshots_scalar_common_8[0]));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 1) = ((MR_Box) (snapshots__output_group_8_p_0_1));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 3) = ((MR_Box) (snapshots__MajorAxis_22));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 4) = ((MR_Box) (snapshots__TotalCells_10));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 5) = ((MR_Box) (snapshots__TotalWords_11));
#line 447 "snapshots.m"
                MR_hl_field(MR_mktag(0), snapshots__V_53_53, 6) = ((MR_Box) (snapshots__Single_26));
#line 447 "snapshots.m"
              }
#line 447 "snapshots.m"
              {
#line 447 "snapshots.m"
                mercury__list__foldl_4_p_2((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__V_53_53, snapshots__Counts_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv0_STATE_VARIABLE_IO_54_54);
              }
#line 449 "snapshots.m"
              {
#line 449 "snapshots.m"
                mercury__io__nl_2_p_0();
              }
#line 445 "snapshots.m"
            }
#line 444 "snapshots.m"
            break;
#line 444 "snapshots.m"
          case (MR_Integer) 1:
#line 443 "snapshots.m"
            {
#line 443 "snapshots.m"
            }
#line 444 "snapshots.m"
            break;
#line 444 "snapshots.m"
        }
#line 421 "snapshots.m"
      }
#line 409 "snapshots.m"
  }
#line 406 "snapshots.m"
}

#line 389 "snapshots.m"
static void MR_CALL 
snapshots__output_column_names_3_p_0(
#line 389 "snapshots.m"
  MR_Word snapshots__Options_4)
#line 389 "snapshots.m"
{
#line 391 "snapshots.m"
  {
#line 391 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 391 "snapshots.m"
    MR_Word snapshots__MajorAxis_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 391 "snapshots.m"
    MR_String snapshots__RightLabel_7;
#line 391 "snapshots.m"
    MR_String snapshots__V_30_30;
#line 391 "snapshots.m"
    MR_Word snapshots__V_36_36;
#line 391 "snapshots.m"
    MR_String snapshots__V_39_39;
#line 391 "snapshots.m"
    MR_String snapshots__V_48_48;
#line 391 "snapshots.m"
    MR_String snapshots__V_59_59;
#line 392 "snapshots.m"
    MR_Word snapshots__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "snapshots.m"
    MR_Word snapshots__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 392 "snapshots.m"
    MR_Word snapshots__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 396 "snapshots.m"
#line 396 "snapshots.m"
    switch (snapshots__MajorAxis_6) {
#line 396 "snapshots.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 396 "snapshots.m"
      case (MR_Integer) 0:
#line 395 "snapshots.m"
        snapshots__RightLabel_7 = (MR_String) "procedure / type (location)";
#line 396 "snapshots.m"
        break;
#line 396 "snapshots.m"
      case (MR_Integer) 1:
#line 398 "snapshots.m"
        snapshots__RightLabel_7 = (MR_String) "type / procedure (location)";
#line 396 "snapshots.m"
        break;
#line 396 "snapshots.m"
    }
#line 400 "snapshots.m"
    {
#line 400 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 4951 "snapshots.c"
    snapshots__V_36_36 = (MR_Word) &snapshots_scalar_common_5[0];
#line 401 "snapshots.m"
    {
#line 401 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 7, (MR_String) "cells", &snapshots__V_30_30);
    }
#line 401 "snapshots.m"
    {
#line 401 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_30_30);
    }
#line 402 "snapshots.m"
    {
#line 402 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 17, (MR_String) "words", &snapshots__V_39_39);
    }
#line 402 "snapshots.m"
    {
#line 402 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_39_39);
    }
#line 403 "snapshots.m"
    {
#line 403 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_36_36, (MR_Integer) 14, (MR_String) "cumul", &snapshots__V_48_48);
    }
#line 403 "snapshots.m"
    {
#line 403 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_48_48);
    }
#line 400 "snapshots.m"
    {
#line 400 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
#line 404 "snapshots.m"
    {
#line 404 "snapshots.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_36_36, snapshots__RightLabel_7, &snapshots__V_59_59);
    }
#line 404 "snapshots.m"
    {
#line 404 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_59_59);
    }
#line 400 "snapshots.m"
    {
#line 400 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 391 "snapshots.m"
  }
#line 389 "snapshots.m"
}

#line 386 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
#line 386 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 386 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 386 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 386 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 386 "snapshots.m"
{
#line 386 "snapshots.m"
  {
#line 386 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 386 "snapshots.m"
    MR_Integer snapshots__conv4_STATE_VARIABLE_CumulWords_29;

#line 386 "snapshots.m"
    {
#line 386 "snapshots.m"
      snapshots__output_group_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv4_STATE_VARIABLE_CumulWords_29);
    }
#line 386 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv4_STATE_VARIABLE_CumulWords_29));
#line 386 "snapshots.m"
  }
#line 386 "snapshots.m"
}

#line 376 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
#line 376 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 376 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 376 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 376 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 376 "snapshots.m"
{
#line 376 "snapshots.m"
  {
#line 376 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 376 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalCells_10;
#line 376 "snapshots.m"
    MR_Integer snapshots__conv0_STATE_VARIABLE_TotalWords_12;

#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      snapshots__sum_groups_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv1_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv0_STATE_VARIABLE_TotalWords_12);
    }
#line 376 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalCells_10));
#line 376 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv0_STATE_VARIABLE_TotalWords_12));
#line 376 "snapshots.m"
  }
#line 376 "snapshots.m"
}

#line 371 "snapshots.m"
static void MR_CALL 
snapshots__output_snapshot_4_p_0(
#line 371 "snapshots.m"
  MR_Word snapshots__Options_5,
#line 371 "snapshots.m"
  MR_Word snapshots__Grouped_6)
#line 371 "snapshots.m"
{
#line 374 "snapshots.m"
  {
#line 374 "snapshots.m"
    MR_bool snapshots__succeeded;
#line 374 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_43_43;
#line 374 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_44_44;
#line 374 "snapshots.m"
    MR_Integer snapshots__TotalCells_8;
#line 374 "snapshots.m"
    MR_Integer snapshots__TotalWords_9;
#line 374 "snapshots.m"
    MR_Word snapshots__Brief_10;
#line 374 "snapshots.m"
    MR_Word snapshots__V_32_32;
#line 374 "snapshots.m"
    MR_String snapshots__V_54_54;
#line 374 "snapshots.m"
    MR_Word snapshots__V_60_60;
#line 374 "snapshots.m"
    MR_String snapshots__V_63_63;
#line 374 "snapshots.m"
    MR_String snapshots__V_72_72;
#line 374 "snapshots.m"
    MR_String snapshots__V_83_83;
#line 376 "snapshots.m"
    MR_Box snapshots__conv3_TotalCells_8;
#line 376 "snapshots.m"
    MR_Box snapshots__conv2_TotalWords_9;
#line 379 "snapshots.m"
    MR_Word snapshots__V_35_35;
#line 379 "snapshots.m"
    MR_Word snapshots__V_36_36;
#line 379 "snapshots.m"
    MR_Word snapshots__V_37_37;
#line 386 "snapshots.m"
    MR_Integer snapshots___CumulWords_11;
#line 386 "snapshots.m"
    MR_Box snapshots__conv6__CumulWords_11;
#line 386 "snapshots.m"
    MR_Box snapshots__conv5_STATE_VARIABLE_IO_13;

#line 375 "snapshots.m"
    {
#line 375 "snapshots.m"
      snapshots__output_column_names_3_p_0(snapshots__Options_5);
    }
#line 5141 "snapshots.c"
    snapshots__TypeCtorInfo_43_43 = (MR_Word) &snapshots__snapshots__type_ctor_info_group_0;
#line 5143 "snapshots.c"
    snapshots__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 376 "snapshots.m"
    {
#line 376 "snapshots.m"
      mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, snapshots__TypeCtorInfo_44_44, (MR_Word) &snapshots_scalar_common_1[7], snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalCells_8, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv2_TotalWords_9);
    }
#line 376 "snapshots.m"
    snapshots__TotalCells_8 = ((MR_Integer) snapshots__conv3_TotalCells_8);
#line 376 "snapshots.m"
    snapshots__TotalWords_9 = ((MR_Integer) snapshots__conv2_TotalWords_9);
#line 377 "snapshots.m"
    {
#line 377 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 5159 "snapshots.c"
    snapshots__V_60_60 = (MR_Word) &snapshots_scalar_common_5[0];
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 7, snapshots__TotalCells_8, &snapshots__V_54_54);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_54_54);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 17, snapshots__TotalWords_9, &snapshots__V_63_63);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_63_63);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__V_60_60, (MR_Integer) 14, (MR_String) "", &snapshots__V_72_72);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_72_72);
    }
#line 377 "snapshots.m"
    {
#line 377 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(snapshots__V_60_60, (MR_String) "total", &snapshots__V_83_83);
    }
#line 378 "snapshots.m"
    {
#line 378 "snapshots.m"
      mercury__io__write_string_3_p_0(snapshots__V_83_83);
    }
#line 377 "snapshots.m"
    {
#line 377 "snapshots.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 379 "snapshots.m"
    snapshots__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 379 "snapshots.m"
    snapshots__Brief_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 379 "snapshots.m"
    snapshots__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 379 "snapshots.m"
    snapshots__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 382 "snapshots.m"
#line 382 "snapshots.m"
    switch (snapshots__Brief_10) {
#line 382 "snapshots.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "snapshots.m"
      case (MR_Integer) 0:
#line 384 "snapshots.m"
        {
#line 384 "snapshots.m"
          mercury__io__nl_2_p_0();
        }
#line 382 "snapshots.m"
        break;
#line 382 "snapshots.m"
      case (MR_Integer) 1:
#line 381 "snapshots.m"
        {
#line 381 "snapshots.m"
        }
#line 382 "snapshots.m"
        break;
#line 382 "snapshots.m"
    }
#line 386 "snapshots.m"
    {
#line 386 "snapshots.m"
      snapshots__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 0) = ((MR_Box) (&snapshots_scalar_common_7[0]));
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 1) = ((MR_Box) (snapshots__output_snapshot_4_p_0_2));
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 3) = ((MR_Box) (snapshots__Options_5));
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 4) = ((MR_Box) (snapshots__TotalCells_8));
#line 386 "snapshots.m"
      MR_hl_field(MR_mktag(0), snapshots__V_32_32, 5) = ((MR_Box) (snapshots__TotalWords_9));
#line 386 "snapshots.m"
    }
#line 386 "snapshots.m"
    {
#line 386 "snapshots.m"
      mercury__list__foldl2_6_p_2(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__V_32_32, snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv6__CumulWords_11, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv5_STATE_VARIABLE_IO_13);
    }
#line 386 "snapshots.m"
    snapshots___CumulWords_11 = ((MR_Integer) snapshots__conv6__CumulWords_11);
#line 374 "snapshots.m"
  }
#line 371 "snapshots.m"
}

#line 358 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_2(
#line 358 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3,
#line 358 "snapshots.m"
  MR_Box snapshots__wrapper_arg_4,
#line 358 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_5)
#line 358 "snapshots.m"
{
#line 358 "snapshots.m"
  {
#line 358 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 358 "snapshots.m"
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
#line 358 "snapshots.m"
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

#line 358 "snapshots.m"
    {
#line 358 "snapshots.m"
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
#line 358 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
#line 358 "snapshots.m"
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
#line 358 "snapshots.m"
  }
#line 358 "snapshots.m"
}

#line 357 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0_1(
#line 357 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 357 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 357 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 357 "snapshots.m"
{
#line 357 "snapshots.m"
  {
#line 357 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 357 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 357 "snapshots.m"
    {
#line 357 "snapshots.m"
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 357 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 357 "snapshots.m"
  }
#line 357 "snapshots.m"
}

#line 336 "snapshots.m"
static void MR_CALL 
snapshots__make_groups_3_p_0(
#line 336 "snapshots.m"
  MR_Word snapshots__Compare_4,
#line 336 "snapshots.m"
  MR_Word snapshots__Counts_5,
#line 336 "snapshots.m"
  MR_Word * snapshots__Groups_6)
#line 336 "snapshots.m"
{
#line 341 "snapshots.m"
  {
#line 341 "snapshots.m"
    MR_bool snapshots__succeeded;

#line 341 "snapshots.m"
    if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "snapshots.m"
      *snapshots__Groups_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "snapshots.m"
    else
#line 344 "snapshots.m"
      {
#line 344 "snapshots.m"
        MR_Word snapshots__TypeCtorInfo_17_28;
#line 344 "snapshots.m"
        MR_Word snapshots__TypeCtorInfo_26_37;
#line 344 "snapshots.m"
        MR_Word snapshots__First_9;
#line 344 "snapshots.m"
        MR_Word snapshots__Rest_10;
#line 344 "snapshots.m"
        MR_Word snapshots__FirstGroup_11;
#line 344 "snapshots.m"
        MR_Word snapshots__SortedCounts0_16;
#line 344 "snapshots.m"
        MR_Word snapshots__SortedCounts_17;
#line 344 "snapshots.m"
        MR_Integer snapshots__TotalCells_18;
#line 344 "snapshots.m"
        MR_Integer snapshots__TotalWords_19;
#line 344 "snapshots.m"
        MR_Word snapshots__FirstSite_20;
#line 344 "snapshots.m"
        MR_Word snapshots__V_25_25;
#line 358 "snapshots.m"
        MR_Box snapshots__conv4_TotalCells_18;
#line 358 "snapshots.m"
        MR_Box snapshots__conv3_TotalWords_19;
#line 359 "snapshots.m"
        MR_Box snapshots__conv5_V_25_25;
#line 359 "snapshots.m"
        MR_Integer snapshots__V_26_26;
#line 359 "snapshots.m"
        MR_Integer snapshots__V_27_27;
#line 347 "snapshots.m"
        MR_Word * snapshots__AddrRestGroups_38;

#line 345 "snapshots.m"
        {
#line 345 "snapshots.m"
          snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
        }
#line 5409 "snapshots.c"
        snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
#line 356 "snapshots.m"
        {
#line 356 "snapshots.m"
          mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
        }
#line 357 "snapshots.m"
        {
#line 357 "snapshots.m"
          mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[5], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
        }
#line 5421 "snapshots.c"
        snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 358 "snapshots.m"
        {
#line 358 "snapshots.m"
          mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[6], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
        }
#line 358 "snapshots.m"
        snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
#line 358 "snapshots.m"
        snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
#line 359 "snapshots.m"
        {
#line 359 "snapshots.m"
          snapshots__conv5_V_25_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
        }
#line 359 "snapshots.m"
        snapshots__V_25_25 = ((MR_Word) snapshots__conv5_V_25_25);
#line 359 "snapshots.m"
        snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 0)));
#line 359 "snapshots.m"
        snapshots__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 1)));
#line 359 "snapshots.m"
        snapshots__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__V_25_25, (MR_Integer) 2)));
#line 360 "snapshots.m"
        {
#line 360 "snapshots.m"
          snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 360 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
#line 360 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
#line 360 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
#line 360 "snapshots.m"
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
#line 360 "snapshots.m"
        }
#line 348 "snapshots.m"
        {
#line 348 "snapshots.m"
          MR_Word base;
#line 348 "snapshots.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "snapshots.m"
          *snapshots__Groups_6 = base;
#line 348 "snapshots.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (snapshots__FirstGroup_11));
#line 348 "snapshots.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 348 "snapshots.m"
        }
#line 348 "snapshots.m"
        snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Groups_6, (MR_Integer) 1));
#line 347 "snapshots.m"
        {
#line 347 "snapshots.m"
          snapshots__LCMCpr_make_groups_1_3_p_0(snapshots__Compare_4, snapshots__Rest_10, snapshots__AddrRestGroups_38);
        }
#line 344 "snapshots.m"
      }
#line 341 "snapshots.m"
  }
#line 336 "snapshots.m"
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
#line 280 "snapshots.m"
    MR_Integer snapshots__Id_16;
#line 297 "snapshots.m"
    MR_Integer snapshots__SizeMapWords_21;
#line 298 "snapshots.m"
    MR_Word snapshots__TypeCtorInfo_55_55;
#line 298 "snapshots.m"
    MR_Integer snapshots__WordsPerCell_20;
#line 298 "snapshots.m"
    MR_Integer snapshots__V_43_43;
#line 299 "snapshots.m"
    MR_String snapshots__V_51_51;
#line 299 "snapshots.m"
    MR_String snapshots__V_52_52;
#line 299 "snapshots.m"
    MR_String snapshots__V_53_53;
#line 299 "snapshots.m"
    MR_Integer snapshots__V_54_54;
#line 301 "snapshots.m"
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
#line 280 "snapshots.m"
                            if (snapshots__succeeded)
#line 281 "snapshots.m"
                              {
#line 281 "snapshots.m"
                                MR_Word snapshots__V_27_27 = (MR_Word) snapshots__Id_16;
#line 313 "snapshots.m"
                                MR_Word snapshots__AllocSite0_79;
#line 313 "snapshots.m"
                                MR_Box snapshots__conv0_AllocSite0_79;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_45_45;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_46_46;
#line 282 "snapshots.m"
                                MR_Word snapshots__V_47_47;

#line 313 "snapshots.m"
                                {
#line 313 "snapshots.m"
                                  snapshots__succeeded = mercury__map__search_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, snapshots__AllocSiteMap_7, ((MR_Box) (snapshots__V_27_27)), &snapshots__conv0_AllocSite0_79);
                                }
#line 313 "snapshots.m"
                                if (snapshots__succeeded)
#line 313 "snapshots.m"
                                  {
#line 313 "snapshots.m"
                                    snapshots__AllocSite0_79 = ((MR_Word) snapshots__conv0_AllocSite0_79);
#line 313 "snapshots.m"
                                    snapshots__succeeded = MR_TRUE;
#line 313 "snapshots.m"
                                  }
#line 313 "snapshots.m"
                                if (snapshots__succeeded)
#line 314 "snapshots.m"
                                  snapshots__AllocSite_17 = snapshots__AllocSite0_79;
#line 313 "snapshots.m"
                                else
#line 316 "snapshots.m"
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
#line 280 "snapshots.m"
                            else
#line 290 "snapshots.m"
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "runtime") == 0))
#line 285 "snapshots.m"
                              {
#line 285 "snapshots.m"
                                MR_String snapshots__Type_19;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 285 "snapshots.m"
                                MR_String snapshots__V_40_40;
#line 285 "snapshots.m"
                                MR_String snapshots__V_41_41;
#line 285 "snapshots.m"
                                MR_Integer snapshots__V_42_42;
#line 285 "snapshots.m"
                                MR_String snapshots__V_66_66;
#line 285 "snapshots.m"
                                MR_String snapshots__V_67_67;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_68_68;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_69_69;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_70_70;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_71_71;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_72_72;
#line 285 "snapshots.m"
                                MR_Word snapshots__V_73_73;
#line 285 "snapshots.m"
                                MR_String snapshots__V_74_74;
#line 285 "snapshots.m"
                                MR_String snapshots__V_75_75;
#line 286 "snapshots.m"
                                MR_Word snapshots__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 286 "snapshots.m"
                                MR_Word snapshots__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 286 "snapshots.m"
                                MR_Word snapshots__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 286 "snapshots.m"
                                snapshots__succeeded = (snapshots__V_35_35 == (MR_Integer) 1);
#line 285 "snapshots.m"
                                if (snapshots__succeeded)
#line 285 "snapshots.m"
                                  {
#line 5716 "snapshots.c"
                                    snapshots__V_66_66 = (MR_String) " words)";
#line 5718 "snapshots.c"
                                    snapshots__V_68_68 = (MR_Integer) 0;
#line 5720 "snapshots.c"
                                    snapshots__V_69_69 = (MR_Integer) 0;
#line 5722 "snapshots.c"
                                    snapshots__V_70_70 = (MR_Integer) 0;
#line 5724 "snapshots.c"
                                    snapshots__V_71_71 = (MR_Integer) 0;
#line 5726 "snapshots.c"
                                    snapshots__V_72_72 = (MR_Integer) 0;
#line 5728 "snapshots.c"
                                    snapshots__V_73_73 = (MR_Word) &snapshots_scalar_common_5[0];
#line 287 "snapshots.m"
                                    {
#line 287 "snapshots.m"
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__V_73_73, snapshots__NumWords0_15, &snapshots__V_67_67);
                                    }
#line 287 "snapshots.m"
                                    {
#line 287 "snapshots.m"
                                      snapshots__V_74_74 = mercury__string__f_43_43_2_f_0(snapshots__V_67_67, snapshots__V_66_66);
                                    }
#line 5740 "snapshots.c"
                                    snapshots__V_75_75 = (MR_String) "runtime struct (";
#line 287 "snapshots.m"
                                    {
#line 287 "snapshots.m"
                                      snapshots__Type_19 = mercury__string__f_43_43_2_f_0(snapshots__V_75_75, snapshots__V_74_74);
                                    }
#line 288 "snapshots.m"
                                    snapshots__V_40_40 = (MR_String) "unknown";
#line 288 "snapshots.m"
                                    snapshots__V_41_41 = (MR_String) "unknown";
#line 288 "snapshots.m"
                                    snapshots__V_42_42 = (MR_Integer) 0;
#line 289 "snapshots.m"
                                    snapshots__RecalcSize_18 = (MR_Integer) 0;
#line 288 "snapshots.m"
                                    {
#line 288 "snapshots.m"
                                      snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 288 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) (snapshots__V_40_40));
#line 288 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_19));
#line 288 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) (snapshots__V_41_41));
#line 288 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) (snapshots__V_42_42));
#line 288 "snapshots.m"
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
#line 288 "snapshots.m"
                                    }
#line 288 "snapshots.m"
                                    snapshots__succeeded = MR_TRUE;
#line 285 "snapshots.m"
                                  }
#line 285 "snapshots.m"
                              }
#line 290 "snapshots.m"
                            else
#line 290 "snapshots.m"
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "unknown") == 0))
#line 291 "snapshots.m"
                              {
#line 291 "snapshots.m"
                                MR_String snapshots__Type_44;
#line 291 "snapshots.m"
                                MR_String snapshots__V_57_57;
#line 291 "snapshots.m"
                                MR_String snapshots__V_64_64;

#line 292 "snapshots.m"
                                {
#line 292 "snapshots.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &snapshots_scalar_common_5[0], snapshots__NumWords0_15, &snapshots__V_57_57);
                                }
#line 292 "snapshots.m"
                                {
#line 292 "snapshots.m"
                                  snapshots__V_64_64 = mercury__string__f_43_43_2_f_0(snapshots__V_57_57, (MR_String) " words)");
                                }
#line 292 "snapshots.m"
                                {
#line 292 "snapshots.m"
                                  snapshots__Type_44 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", snapshots__V_64_64);
                                }
#line 293 "snapshots.m"
                                {
#line 293 "snapshots.m"
                                  snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) ((MR_String) "unknown"));
#line 293 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_44));
#line 293 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) ((MR_String) "unknown"));
#line 293 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) ((MR_Integer) 0));
#line 293 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
#line 293 "snapshots.m"
                                }
#line 294 "snapshots.m"
                                snapshots__RecalcSize_18 = (MR_Integer) 0;
#line 291 "snapshots.m"
                                snapshots__succeeded = MR_TRUE;
#line 291 "snapshots.m"
                              }
#line 290 "snapshots.m"
                            else
#line 290 "snapshots.m"
                              snapshots__succeeded = MR_FALSE;
#line 276 "snapshots.m"
                            if (snapshots__succeeded)
#line 276 "snapshots.m"
                              {
#line 298 "snapshots.m"
                                snapshots__succeeded = (snapshots__RecalcSize_18 == (MR_Integer) 1);
#line 298 "snapshots.m"
                                if (snapshots__succeeded)
#line 298 "snapshots.m"
                                  {
#line 299 "snapshots.m"
                                    snapshots__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
#line 299 "snapshots.m"
                                    snapshots__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
#line 299 "snapshots.m"
                                    snapshots__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));
#line 299 "snapshots.m"
                                    snapshots__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
#line 299 "snapshots.m"
                                    snapshots__WordsPerCell_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
#line 300 "snapshots.m"
                                    snapshots__V_43_43 = (MR_Integer) 0;
#line 300 "snapshots.m"
                                    snapshots__succeeded = (snapshots__WordsPerCell_20 > snapshots__V_43_43);
#line 298 "snapshots.m"
                                    if (snapshots__succeeded)
#line 298 "snapshots.m"
                                      {
#line 5859 "snapshots.c"
                                        snapshots__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 301 "snapshots.m"
                                        {
#line 301 "snapshots.m"
                                          snapshots__succeeded = mercury__list__index1_3_p_0(snapshots__TypeCtorInfo_55_55, snapshots__SizeMap_8, snapshots__WordsPerCell_20, &snapshots__conv1_SizeMapWords_21);
                                        }
#line 301 "snapshots.m"
                                        if (snapshots__succeeded)
#line 301 "snapshots.m"
                                          {
#line 301 "snapshots.m"
                                            snapshots__SizeMapWords_21 = ((MR_Integer) snapshots__conv1_SizeMapWords_21);
#line 301 "snapshots.m"
                                            snapshots__succeeded = MR_TRUE;
#line 301 "snapshots.m"
                                          }
#line 298 "snapshots.m"
                                      }
#line 298 "snapshots.m"
                                  }
#line 297 "snapshots.m"
                                if (snapshots__succeeded)
#line 303 "snapshots.m"
                                  snapshots__NumWords_22 = (snapshots__NumCells_14 * snapshots__SizeMapWords_21);
#line 297 "snapshots.m"
                                else
#line 305 "snapshots.m"
                                  snapshots__NumWords_22 = snapshots__NumWords0_15;
#line 307 "snapshots.m"
                                {
#line 307 "snapshots.m"
                                  MR_Word base;
#line 307 "snapshots.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "snapshots.m"
                                  *snapshots__Counts_10 = base;
#line 307 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (snapshots__AllocSite_17));
#line 307 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (snapshots__NumCells_14));
#line 307 "snapshots.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (snapshots__NumWords_22));
#line 307 "snapshots.m"
                                }
#line 307 "snapshots.m"
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
#line 265 "snapshots.m"
        switch (MR_tag((MR_Word) snapshots__LineRes_14)) {
#line 265 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 265 "snapshots.m"
          case (MR_Integer) 0:
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
            break;
#line 265 "snapshots.m"
          case (MR_Integer) 1:
#line 250 "snapshots.m"
            {
#line 250 "snapshots.m"
              MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

#line 252 "snapshots.m"
              {
#line 252 "snapshots.m"
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
              }
#line 251 "snapshots.m"
              if (snapshots__succeeded)
#line 254 "snapshots.m"
                *snapshots__AllocCounts_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "snapshots.m"
              else
#line 255 "snapshots.m"
                {
#line 255 "snapshots.m"
                  MR_Word snapshots__Counts_16;

#line 256 "snapshots.m"
                  {
#line 256 "snapshots.m"
                    snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                  }
#line 255 "snapshots.m"
                  if (snapshots__succeeded)
#line 258 "snapshots.m"
                    {
#line 258 "snapshots.m"
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
                      }
#line 258 "snapshots.m"
                    }
#line 255 "snapshots.m"
                  else
#line 262 "snapshots.m"
                    {
#line 262 "snapshots.m"
                      /* direct tailcall eliminated */
#line 262 "snapshots.m"
                      continue;
#line 262 "snapshots.m"
                    }
#line 255 "snapshots.m"
                }
#line 250 "snapshots.m"
            }
#line 265 "snapshots.m"
            break;
#line 265 "snapshots.m"
          case (MR_Integer) 2:
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
            break;
#line 265 "snapshots.m"
        }
#line 247 "snapshots.m"
      }
#line 247 "snapshots.m"
      break;
#line 247 "snapshots.m"
    }
#line 243 "snapshots.m"
}

#line 334 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
#line 334 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 334 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 334 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 334 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 334 "snapshots.m"
{
#line 334 "snapshots.m"
  {
#line 334 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 334 "snapshots.m"
    MR_Word snapshots__conv2_Result_6;

#line 334 "snapshots.m"
    {
#line 334 "snapshots.m"
      snapshots__group_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv2_Result_6);
    }
#line 334 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_Result_6));
#line 334 "snapshots.m"
  }
#line 334 "snapshots.m"
}

#line 330 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
#line 330 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 330 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 330 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 330 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 330 "snapshots.m"
{
#line 330 "snapshots.m"
  {
#line 330 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 330 "snapshots.m"
    MR_Word snapshots__conv1_Result_6;

#line 330 "snapshots.m"
    {
#line 330 "snapshots.m"
      snapshots__counts_by_type_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv1_Result_6);
    }
#line 330 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_Result_6));
#line 330 "snapshots.m"
  }
#line 330 "snapshots.m"
}

#line 327 "snapshots.m"
static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
#line 327 "snapshots.m"
  MR_Box snapshots__closure_arg,
#line 327 "snapshots.m"
  MR_Box snapshots__wrapper_arg_1,
#line 327 "snapshots.m"
  MR_Box snapshots__wrapper_arg_2,
#line 327 "snapshots.m"
  MR_Box * snapshots__wrapper_arg_3)
#line 327 "snapshots.m"
{
#line 327 "snapshots.m"
  {
#line 327 "snapshots.m"
    MR_Box snapshots__closure = snapshots__closure_arg;
#line 327 "snapshots.m"
    MR_Word snapshots__conv0_Result_6;

#line 327 "snapshots.m"
    {
#line 327 "snapshots.m"
      snapshots__counts_by_proc_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
#line 327 "snapshots.m"
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
#line 327 "snapshots.m"
  }
#line 327 "snapshots.m"
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
#line 227 "snapshots.m"
        switch (MR_tag((MR_Word) snapshots__LineRes_12)) {
#line 227 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 227 "snapshots.m"
          case (MR_Integer) 0:
#line 228 "snapshots.m"
            {
#line 228 "snapshots.m"
            }
#line 227 "snapshots.m"
            break;
#line 227 "snapshots.m"
          case (MR_Integer) 1:
#line 218 "snapshots.m"
            {
#line 218 "snapshots.m"
              MR_String snapshots__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_12, (MR_Integer) 0)));
#line 219 "snapshots.m"
              MR_String snapshots__SnapshotName0_14;

#line 219 "snapshots.m"
              {
#line 219 "snapshots.m"
                snapshots__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "start ", snapshots__Line_13, &snapshots__SnapshotName0_14);
              }
#line 219 "snapshots.m"
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
#line 367 "snapshots.m"
                  {
#line 367 "snapshots.m"
                    mercury__io__write_string_3_p_0((MR_String) "------ ");
                  }
#line 368 "snapshots.m"
                  {
#line 368 "snapshots.m"
                    mercury__io__write_string_3_p_0(snapshots__SnapshotName_15);
                  }
#line 369 "snapshots.m"
                  {
#line 369 "snapshots.m"
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
#line 328 "snapshots.m"
#line 328 "snapshots.m"
                  switch (snapshots__MajorAxis_44) {
#line 328 "snapshots.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 328 "snapshots.m"
                    case (MR_Integer) 0:
#line 327 "snapshots.m"
                      snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[2];
#line 328 "snapshots.m"
                      break;
#line 328 "snapshots.m"
                    case (MR_Integer) 1:
#line 330 "snapshots.m"
                      snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[3];
#line 328 "snapshots.m"
                      break;
#line 328 "snapshots.m"
                  }
#line 332 "snapshots.m"
                  {
#line 332 "snapshots.m"
                    mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, snapshots__Compare_54, snapshots__AllocCounts_43, &snapshots__SortedCounts_55);
                  }
#line 333 "snapshots.m"
                  {
#line 333 "snapshots.m"
                    snapshots__make_groups_3_p_0(snapshots__Compare_54, snapshots__SortedCounts_55, &snapshots__Groups_56);
                  }
#line 334 "snapshots.m"
                  {
#line 334 "snapshots.m"
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
#line 219 "snapshots.m"
              else
#line 219 "snapshots.m"
                {
#line 219 "snapshots.m"
                }
#line 218 "snapshots.m"
            }
#line 227 "snapshots.m"
            break;
#line 227 "snapshots.m"
          case (MR_Integer) 2:
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
            break;
#line 227 "snapshots.m"
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
#line 183 "snapshots.m"
        switch (MR_tag((MR_Word) snapshots__LineRes_9)) {
#line 183 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 183 "snapshots.m"
          case (MR_Integer) 0:
#line 184 "snapshots.m"
            *snapshots__STATE_VARIABLE_AllocSiteMap_13 = snapshots__STATE_VARIABLE_AllocSiteMap_0_12;
#line 183 "snapshots.m"
            break;
#line 183 "snapshots.m"
          case (MR_Integer) 1:
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
#line 196 "snapshots.m"
              MR_String snapshots__MangledProcName_34;
#line 196 "snapshots.m"
              MR_String snapshots__FileName_35;
#line 196 "snapshots.m"
              MR_String snapshots__Type_37;
#line 196 "snapshots.m"
              MR_Integer snapshots__Id_39;
#line 196 "snapshots.m"
              MR_Integer snapshots__LineNum_40;
#line 196 "snapshots.m"
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
#line 196 "snapshots.m"
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
#line 196 "snapshots.m"
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
#line 183 "snapshots.m"
            break;
#line 183 "snapshots.m"
          case (MR_Integer) 2:
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
            break;
#line 183 "snapshots.m"
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
#line 154 "snapshots.m"
        switch (MR_tag((MR_Word) snapshots__LineRes_10)) {
#line 154 "snapshots.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 154 "snapshots.m"
          case (MR_Integer) 0:
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
            break;
#line 154 "snapshots.m"
          case (MR_Integer) 1:
#line 145 "snapshots.m"
            {
#line 145 "snapshots.m"
              MR_String snapshots__Line_11 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_10, (MR_Integer) 0)));

#line 148 "snapshots.m"
              {
#line 148 "snapshots.m"
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_11, (MR_String) "size_map ");
              }
#line 148 "snapshots.m"
              if (snapshots__succeeded)
#line 149 "snapshots.m"
                {
#line 149 "snapshots.m"
                  MR_Word snapshots__V_23_23;
#line 165 "snapshots.m"
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
#line 6847 "snapshots.c"
                          snapshots__TypeCtorInfo_15_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 6849 "snapshots.c"
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
#line 165 "snapshots.m"
                  if (snapshots__succeeded)
#line 169 "snapshots.m"
                    *snapshots__SizeMap_8 = snapshots__Ints_31;
#line 165 "snapshots.m"
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
                  }
#line 149 "snapshots.m"
                }
#line 148 "snapshots.m"
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
#line 154 "snapshots.m"
            break;
#line 154 "snapshots.m"
          case (MR_Integer) 2:
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
            break;
#line 154 "snapshots.m"
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
#line 109 "snapshots.m"
    switch (snapshots__ByType_5) {
#line 109 "snapshots.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "snapshots.m"
      case (MR_Integer) 0:
#line 111 "snapshots.m"
        snapshots__MajorAxis_9 = (MR_Integer) 0;
#line 109 "snapshots.m"
        break;
#line 109 "snapshots.m"
      case (MR_Integer) 1:
#line 108 "snapshots.m"
        snapshots__MajorAxis_9 = (MR_Integer) 1;
#line 109 "snapshots.m"
        break;
#line 109 "snapshots.m"
    }
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
