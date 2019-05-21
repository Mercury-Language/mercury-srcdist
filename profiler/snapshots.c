/*
** Automatically generated from `snapshots.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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




static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1];

static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0;

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5];

static const MR_ConstString snapshots__snapshots__field_names_alloc_site_0_0[5];

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_0_0;

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1];

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1];

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1];

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1];

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3];

static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3];

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0;

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1];

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1];

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1];

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1];

static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0;

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0;

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4];

static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4];

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_group_0_0;

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1];

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1];

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1];

static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1];

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0;

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1;

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_value_ordered_major_axis_0[2];

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_name_ordered_major_axis_0[2];

static const MR_Integer snapshots__snapshots__functor_number_map_major_axis_0[2];

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4];

static const MR_ConstString snapshots__snapshots__field_names_snapshot_options_0_0[4];

static const MR_DuArgLocn snapshots__snapshots__field_locns_snapshot_options_0_0[4];

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_snapshot_options_0_0;

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1];

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1];

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1];

static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1];

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____group_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____size_map_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____major_axis_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
  MR_Word snapshots__HeadVar__2_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____group_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2);

static void MR_CALL 
snapshots__sum_counts_5_p_0(
  MR_Word snapshots__Site_6,
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

static void MR_CALL 
snapshots__sum_groups_5_p_0(
  MR_Word snapshots__Group_6,
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12);

static void MR_CALL 
snapshots__counts_by_words_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6);

static void MR_CALL 
snapshots__counts_by_type_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6);

static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6);

static void MR_CALL 
snapshots__group_by_words_3_p_0(
  MR_Word snapshots__GroupA_4,
  MR_Word snapshots__GroupB_5,
  MR_Word * snapshots__Result_6);

static void MR_CALL 
snapshots__output_site_7_p_0(
  MR_Word snapshots__MajorAxis_8,
  MR_Integer snapshots__TotalCells_9,
  MR_Integer snapshots__TotalWords_10,
  MR_Word snapshots__Single_11,
  MR_Word snapshots__AllocCounts_12);

static void MR_CALL 
snapshots__output_group_8_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__output_group_8_p_0(
  MR_Word snapshots__Options_9,
  MR_Integer snapshots__TotalCells_10,
  MR_Integer snapshots__TotalWords_11,
  MR_Word snapshots__Group_12,
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29);

static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void);

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer snapshots__N_4,
  MR_Integer snapshots__Total_5);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
  MR_Word snapshots__Stream_7,
  MR_Word snapshots__Options_8,
  MR_Word snapshots__AllocSiteMap_9,
  MR_Word snapshots__SizeMap_10);

static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_4_p_0(
  MR_Word snapshots__Options_5,
  MR_Word snapshots__Grouped_6);

static void MR_CALL 
snapshots__output_column_names_3_p_0(
  MR_Word snapshots__Options_4);

static void MR_CALL 
snapshots__make_groups_3_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5);

static void MR_CALL 
snapshots__make_groups_3_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__make_groups_3_p_0(
  MR_Word snapshots__Compare_4,
  MR_Word snapshots__Counts_5,
  MR_Word * snapshots__Groups_6);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
  MR_Word snapshots__Compare_4,
  MR_Word snapshots__Counts_5,
  MR_Word * snapshots__AddrOfGroups_39);

static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word snapshots__Compare_5,
  MR_Word snapshots__List_6,
  MR_Word * snapshots__Upto_7,
  MR_Word * snapshots__After_8);

static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
  MR_Word snapshots__Compare_5,
  MR_Word snapshots__List_6,
  MR_Word * snapshots__AddrOfUpto_23,
  MR_Word * snapshots__After_8);

static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
  MR_Word snapshots__Stream_8,
  MR_Word snapshots__Options_9,
  MR_Word snapshots__AllocSiteMap_10,
  MR_Word snapshots__SizeMap_11,
  MR_Word * snapshots__AllocCounts_12);

static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
  MR_Word snapshots__Stream_8,
  MR_Word snapshots__Options_9,
  MR_Word snapshots__AllocSiteMap_10,
  MR_Word snapshots__SizeMap_11,
  MR_Word * snapshots__AddrOfAllocCounts_32);

static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
  MR_Word snapshots__Options_6,
  MR_Word snapshots__AllocSiteMap_7,
  MR_Word snapshots__SizeMap_8,
  MR_String snapshots__Line_9,
  MR_Word * snapshots__Counts_10);

static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box * snapshots__wrapper_arg_2);

static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
  MR_Word snapshots__Stream_6,
  MR_Word * snapshots__AllocSiteMap_7,
  MR_Word * snapshots__SizeMap_8);

static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
  MR_Word snapshots__Stream_6,
  MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_0_12,
  MR_Word * snapshots__STATE_VARIABLE_AllocSiteMap_13);


static /* final */ const MR_Box snapshots_scalar_common_1[10][3];

static /* final */ const MR_Box snapshots_scalar_common_2[2][2];

static /* final */ const MR_Box snapshots_scalar_common_3[2][5];

static /* final */ const MR_Box snapshots_scalar_common_4[1][1];

static /* final */ const MR_Box snapshots_scalar_common_5[2][6];

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
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__LCMCpr_make_groups_1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__LCMCpr_make_groups_1_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[1])),
    ((MR_Box) (snapshots__output_snapshot_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[1])),
    ((MR_Box) (snapshots__show_all_snapshots_6_p_0_3)),
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

static /* final */ const MR_Box snapshots_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_5[2][6] = {
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



static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0 = {
  (MR_String) "alloc_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString snapshots__snapshots__field_names_alloc_site_0_0[5] = {
  (MR_String) "alloc_proc",
  (MR_String) "alloc_type",
  (MR_String) "alloc_file_name",
  (MR_String) "alloc_line_number",
  (MR_String) "alloc_words"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_0_0
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3] = {
  (MR_String) "asc_alloc_site",
  (MR_String) "asc_num_cells",
  (MR_String) "asc_num_words"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_id_0,
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0
  }
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0
  }
};

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_alloc_site_0,
  (MR_PseudoTypeInfo) &snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0
};

static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4] = {
  (MR_String) "g_total_cells",
  (MR_String) "g_total_words",
  (MR_String) "g_representative",
  (MR_String) "g_details"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_group_0_0
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0 = {
  (MR_String) "major_axis_proc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1 = {
  (MR_String) "major_axis_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_value_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_name_ordered_major_axis_0[2] = {
  &snapshots__snapshots__enum_functor_desc_major_axis_0_0,
  &snapshots__snapshots__enum_functor_desc_major_axis_0_1
};

static const MR_Integer snapshots__snapshots__functor_number_map_major_axis_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_major_axis_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4] = {
  (MR_PseudoTypeInfo) &snapshots__snapshots__type_ctor_info_major_axis_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString snapshots__snapshots__field_names_snapshot_options_0_0[4] = {
  (MR_String) "major_axis",
  (MR_String) "brief",
  (MR_String) "recalc_words",
  (MR_String) "include_runtime"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_snapshot_options_0_0
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_snapshot_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____alloc_id_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____alloc_id_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____alloc_site_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____alloc_site_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____alloc_site_counts_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____alloc_site_counts_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____alloc_site_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____alloc_site_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____group_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____group_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____group_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____major_axis_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____major_axis_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____size_map_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____size_map_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;

    {
      snapshots__succeeded = snapshots____Unify____snapshot_options_0_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
  MR_Box * snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box snapshots__wrapper_arg_3)
{
  {
    MR_Word snapshots__conv0_HeadVar__1_1;

    {
      snapshots____Compare____snapshot_options_0_0(&snapshots__conv0_HeadVar__1_1, ((MR_Word) snapshots__wrapper_arg_2), ((MR_Word) snapshots__wrapper_arg_3));
    }
    *snapshots__wrapper_arg_1 = ((MR_Box) (snapshots__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_15 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__CastY_16 = (MR_Integer) snapshots__HeadVar__3_3;

    snapshots__succeeded = (snapshots__CastX_15 == snapshots__CastY_16);
    if (snapshots__succeeded)
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word snapshots__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word snapshots__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word snapshots__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word snapshots__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word snapshots__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word snapshots__Var_12;
        MR_Integer snapshots__Var_21 = (MR_Integer) snapshots__ArgX1_4;
        MR_Integer snapshots__Var_22 = (MR_Integer) snapshots__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_12, snapshots__Var_21, snapshots__Var_22);
        }
        snapshots__succeeded = (snapshots__Var_12 == (MR_Integer) 0);
        snapshots__succeeded = !(snapshots__succeeded);
        if (snapshots__succeeded)
          *snapshots__HeadVar__1_1 = snapshots__Var_12;
        else
          {
            MR_Word snapshots__Var_13;
            MR_Integer snapshots__Var_23 = (MR_Integer) snapshots__ArgX2_6;
            MR_Integer snapshots__Var_24 = (MR_Integer) snapshots__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_13, snapshots__Var_23, snapshots__Var_24);
            }
            snapshots__succeeded = (snapshots__Var_13 == (MR_Integer) 0);
            snapshots__succeeded = !(snapshots__succeeded);
            if (snapshots__succeeded)
              *snapshots__HeadVar__1_1 = snapshots__Var_13;
            else
              {
                MR_Word snapshots__Var_14;
                MR_Integer snapshots__Var_25 = (MR_Integer) snapshots__ArgX3_8;
                MR_Integer snapshots__Var_26 = (MR_Integer) snapshots__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_14, snapshots__Var_25, snapshots__Var_26);
                }
                snapshots__succeeded = (snapshots__Var_14 == (MR_Integer) 0);
                snapshots__succeeded = !(snapshots__succeeded);
                if (snapshots__succeeded)
                  *snapshots__HeadVar__1_1 = snapshots__Var_14;
                else
                  {
                    MR_Integer snapshots__Var_27 = (MR_Integer) snapshots__ArgX4_10;
                    MR_Integer snapshots__Var_28 = (MR_Integer) snapshots__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__Var_27, snapshots__Var_28);
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_11 = (MR_Integer) snapshots__HeadVar__1_1;
    MR_Integer snapshots__CastY_12 = (MR_Integer) snapshots__HeadVar__2_2;

    snapshots__succeeded = (snapshots__CastX_11 == snapshots__CastY_12);
    if (snapshots__succeeded)
      snapshots__succeeded = MR_TRUE;
    else
      {
        MR_Word snapshots__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word snapshots__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word snapshots__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word snapshots__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word snapshots__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word snapshots__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

        snapshots__succeeded = (snapshots__ArgX1_3 == snapshots__ArgY1_4);
        if (snapshots__succeeded)
          {
            snapshots__succeeded = (snapshots__ArgX2_5 == snapshots__ArgY2_6);
            if (snapshots__succeeded)
              {
                snapshots__succeeded = (snapshots__ArgX3_7 == snapshots__ArgY3_8);
                if (snapshots__succeeded)
                  snapshots__succeeded = (snapshots__ArgX4_9 == snapshots__ArgY4_10);
              }
          }
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____size_map_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__Cast_HeadVar1_4 = snapshots__HeadVar__2_2;
    MR_Word snapshots__Cast_HeadVar2_5 = snapshots__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[1], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__Cast_HeadVar1_4)), ((MR_Box) (snapshots__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__Cast_HeadVar1_3 = snapshots__HeadVar__1_1;
    MR_Word snapshots__Cast_HeadVar2_4 = snapshots__HeadVar__2_2;

    {
      snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_2[1], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__Cast_HeadVar1_4 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__Cast_HeadVar2_5 = (MR_Integer) snapshots__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__Cast_HeadVar1_4, snapshots__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
  MR_Word snapshots__HeadVar__2_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded = (snapshots__HeadVar__2_1 == snapshots__HeadVar__2_2);

    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____group_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_15 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__CastY_16 = (MR_Integer) snapshots__HeadVar__3_3;

    snapshots__succeeded = (snapshots__CastX_15 == snapshots__CastY_16);
    if (snapshots__succeeded)
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer snapshots__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer snapshots__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer snapshots__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer snapshots__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word snapshots__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word snapshots__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word snapshots__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word snapshots__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word snapshots__Var_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_12, snapshots__ArgX1_4, snapshots__ArgY1_5);
        }
        snapshots__succeeded = (snapshots__Var_12 == (MR_Integer) 0);
        snapshots__succeeded = !(snapshots__succeeded);
        if (snapshots__succeeded)
          *snapshots__HeadVar__1_1 = snapshots__Var_12;
        else
          {
            MR_Word snapshots__Var_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_13, snapshots__ArgX2_6, snapshots__ArgY2_7);
            }
            snapshots__succeeded = (snapshots__Var_13 == (MR_Integer) 0);
            snapshots__succeeded = !(snapshots__succeeded);
            if (snapshots__succeeded)
              *snapshots__HeadVar__1_1 = snapshots__Var_13;
            else
              {
                MR_Word snapshots__Var_14;

                {
                  snapshots____Compare____alloc_site_0_0(&snapshots__Var_14, snapshots__ArgX3_8, snapshots__ArgY3_9);
                }
                snapshots__succeeded = (snapshots__Var_14 == (MR_Integer) 0);
                snapshots__succeeded = !(snapshots__succeeded);
                if (snapshots__succeeded)
                  *snapshots__HeadVar__1_1 = snapshots__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[0], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__ArgX4_10)), ((MR_Box) (snapshots__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_11 = (MR_Integer) snapshots__HeadVar__1_1;
    MR_Integer snapshots__CastY_12 = (MR_Integer) snapshots__HeadVar__2_2;

    snapshots__succeeded = (snapshots__CastX_11 == snapshots__CastY_12);
    if (snapshots__succeeded)
      snapshots__succeeded = MR_TRUE;
    else
      {
        MR_Word snapshots__TypeInfo_13_13;
        MR_Integer snapshots__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer snapshots__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer snapshots__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer snapshots__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word snapshots__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word snapshots__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word snapshots__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word snapshots__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));

        snapshots__succeeded = (snapshots__ArgX1_3 == snapshots__ArgY1_4);
        if (snapshots__succeeded)
          {
            snapshots__succeeded = (snapshots__ArgX2_5 == snapshots__ArgY2_6);
            if (snapshots__succeeded)
              {
                {
                  snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__ArgX3_7, snapshots__ArgY3_8);
                }
                if (snapshots__succeeded)
                  {
                    snapshots__TypeInfo_13_13 = (MR_Word) &snapshots_scalar_common_2[0];
                    {
                      snapshots__succeeded = mercury__builtin__unify_2_p_0(snapshots__TypeInfo_13_13, ((MR_Box) (snapshots__ArgX4_9)), ((MR_Box) (snapshots__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__Cast_HeadVar1_4 = snapshots__HeadVar__2_2;
    MR_Word snapshots__Cast_HeadVar2_5 = snapshots__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_1[0], snapshots__HeadVar__1_1, ((MR_Box) (snapshots__Cast_HeadVar1_4)), ((MR_Box) (snapshots__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__Cast_HeadVar1_3 = snapshots__HeadVar__1_1;
    MR_Word snapshots__Cast_HeadVar2_4 = snapshots__HeadVar__2_2;

    {
      snapshots__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_1[0], ((MR_Box) (snapshots__Cast_HeadVar1_3)), ((MR_Box) (snapshots__Cast_HeadVar2_4)));
    }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_12 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__CastY_13 = (MR_Integer) snapshots__HeadVar__3_3;

    snapshots__succeeded = (snapshots__CastX_12 == snapshots__CastY_13);
    if (snapshots__succeeded)
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word snapshots__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word snapshots__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer snapshots__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer snapshots__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer snapshots__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer snapshots__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word snapshots__Var_10;

        {
          snapshots____Compare____alloc_site_0_0(&snapshots__Var_10, snapshots__ArgX1_4, snapshots__ArgY1_5);
        }
        snapshots__succeeded = (snapshots__Var_10 == (MR_Integer) 0);
        snapshots__succeeded = !(snapshots__succeeded);
        if (snapshots__succeeded)
          *snapshots__HeadVar__1_1 = snapshots__Var_10;
        else
          {
            MR_Word snapshots__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_11, snapshots__ArgX2_6, snapshots__ArgY2_7);
            }
            snapshots__succeeded = (snapshots__Var_11 == (MR_Integer) 0);
            snapshots__succeeded = !(snapshots__succeeded);
            if (snapshots__succeeded)
              *snapshots__HeadVar__1_1 = snapshots__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__ArgX3_8, snapshots__ArgY3_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_9 = (MR_Integer) snapshots__HeadVar__1_1;
    MR_Integer snapshots__CastY_10 = (MR_Integer) snapshots__HeadVar__2_2;

    snapshots__succeeded = (snapshots__CastX_9 == snapshots__CastY_10);
    if (snapshots__succeeded)
      snapshots__succeeded = MR_TRUE;
    else
      {
        MR_Word snapshots__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word snapshots__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer snapshots__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer snapshots__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer snapshots__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer snapshots__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));

        {
          snapshots__succeeded = snapshots____Unify____alloc_site_0_0(snapshots__ArgX1_3, snapshots__ArgY1_4);
        }
        if (snapshots__succeeded)
          {
            snapshots__succeeded = (snapshots__ArgX2_5 == snapshots__ArgY2_6);
            if (snapshots__succeeded)
              snapshots__succeeded = (snapshots__ArgX3_7 == snapshots__ArgY3_8);
          }
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_18 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__CastY_19 = (MR_Integer) snapshots__HeadVar__3_3;

    snapshots__succeeded = (snapshots__CastX_18 == snapshots__CastY_19);
    if (snapshots__succeeded)
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String snapshots__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_String snapshots__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 0)));
        MR_String snapshots__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_String snapshots__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 1)));
        MR_String snapshots__ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
        MR_String snapshots__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer snapshots__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer snapshots__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer snapshots__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer snapshots__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word snapshots__Var_14;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__Var_14, snapshots__ArgX1_4, snapshots__ArgY1_5);
        }
        snapshots__succeeded = (snapshots__Var_14 == (MR_Integer) 0);
        snapshots__succeeded = !(snapshots__succeeded);
        if (snapshots__succeeded)
          *snapshots__HeadVar__1_1 = snapshots__Var_14;
        else
          {
            MR_Word snapshots__Var_15;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__Var_15, snapshots__ArgX2_6, snapshots__ArgY2_7);
            }
            snapshots__succeeded = (snapshots__Var_15 == (MR_Integer) 0);
            snapshots__succeeded = !(snapshots__succeeded);
            if (snapshots__succeeded)
              *snapshots__HeadVar__1_1 = snapshots__Var_15;
            else
              {
                MR_Word snapshots__Var_16;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&snapshots__Var_16, snapshots__ArgX3_8, snapshots__ArgY3_9);
                }
                snapshots__succeeded = (snapshots__Var_16 == (MR_Integer) 0);
                snapshots__succeeded = !(snapshots__succeeded);
                if (snapshots__succeeded)
                  *snapshots__HeadVar__1_1 = snapshots__Var_16;
                else
                  {
                    MR_Word snapshots__Var_17;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&snapshots__Var_17, snapshots__ArgX4_10, snapshots__ArgY4_11);
                    }
                    snapshots__succeeded = (snapshots__Var_17 == (MR_Integer) 0);
                    snapshots__succeeded = !(snapshots__succeeded);
                    if (snapshots__succeeded)
                      *snapshots__HeadVar__1_1 = snapshots__Var_17;
                    else
                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__ArgX5_12, snapshots__ArgY5_13);
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_13 = (MR_Integer) snapshots__HeadVar__1_1;
    MR_Integer snapshots__CastY_14 = (MR_Integer) snapshots__HeadVar__2_2;

    snapshots__succeeded = (snapshots__CastX_13 == snapshots__CastY_14);
    if (snapshots__succeeded)
      snapshots__succeeded = MR_TRUE;
    else
      {
        MR_String snapshots__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 0)));
        MR_String snapshots__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 0)));
        MR_String snapshots__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 1)));
        MR_String snapshots__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 1)));
        MR_String snapshots__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 2)));
        MR_String snapshots__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer snapshots__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer snapshots__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer snapshots__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer snapshots__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__HeadVar__2_2, (MR_Integer) 4)));

        snapshots__succeeded = (strcmp(snapshots__ArgX1_3, snapshots__ArgY1_4) == 0);
        if (snapshots__succeeded)
          {
            snapshots__succeeded = (strcmp(snapshots__ArgX2_5, snapshots__ArgY2_6) == 0);
            if (snapshots__succeeded)
              {
                snapshots__succeeded = (strcmp(snapshots__ArgX3_7, snapshots__ArgY3_8) == 0);
                if (snapshots__succeeded)
                  {
                    snapshots__succeeded = (snapshots__ArgX4_9 == snapshots__ArgY4_10);
                    if (snapshots__succeeded)
                      snapshots__succeeded = (snapshots__ArgX5_11 == snapshots__ArgY5_12);
                  }
              }
          }
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
  MR_Word * snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2,
  MR_Word snapshots__HeadVar__3_3)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_6 = (MR_Integer) snapshots__HeadVar__2_2;
    MR_Integer snapshots__CastY_7 = (MR_Integer) snapshots__HeadVar__3_3;

    snapshots__succeeded = (snapshots__CastX_6 == snapshots__CastY_7);
    if (snapshots__succeeded)
      *snapshots__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer snapshots__ArgX1_4 = (MR_Integer) snapshots__HeadVar__2_2;
        MR_Integer snapshots__ArgY1_5 = (MR_Integer) snapshots__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__HeadVar__1_1, snapshots__ArgX1_4, snapshots__ArgY1_5);
        }
      }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
  MR_Word snapshots__HeadVar__1_1,
  MR_Word snapshots__HeadVar__2_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__CastX_5 = (MR_Integer) snapshots__HeadVar__1_1;
    MR_Integer snapshots__CastY_6 = (MR_Integer) snapshots__HeadVar__2_2;

    snapshots__succeeded = (snapshots__CastX_5 == snapshots__CastY_6);
    if (snapshots__succeeded)
      snapshots__succeeded = MR_TRUE;
    else
      {
        MR_Integer snapshots__ArgX1_3 = (MR_Integer) snapshots__HeadVar__1_1;
        MR_Integer snapshots__ArgY1_4 = (MR_Integer) snapshots__HeadVar__2_2;

        snapshots__succeeded = (snapshots__ArgX1_3 == snapshots__ArgY1_4);
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots__sum_counts_5_p_0(
  MR_Word snapshots__Site_6,
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 1)));
    MR_Integer snapshots__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 2)));
    MR_Word snapshots__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Site_6, (MR_Integer) 0)));

    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__Var_14);
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__Var_18);
  }
}

static void MR_CALL 
snapshots__sum_groups_5_p_0(
  MR_Word snapshots__Group_6,
  MR_Integer snapshots__STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * snapshots__STATE_VARIABLE_TotalCells_10,
  MR_Integer snapshots__STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * snapshots__STATE_VARIABLE_TotalWords_12)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 0)));
    MR_Integer snapshots__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 1)));
    MR_Word snapshots__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 2)));
    MR_Word snapshots__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_6, (MR_Integer) 3)));

    *snapshots__STATE_VARIABLE_TotalCells_10 = (snapshots__STATE_VARIABLE_TotalCells_0_9 + snapshots__Var_14);
    *snapshots__STATE_VARIABLE_TotalWords_12 = (snapshots__STATE_VARIABLE_TotalWords_0_11 + snapshots__Var_17);
  }
}

static void MR_CALL 
snapshots__counts_by_words_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
    MR_Word snapshots__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
    MR_Integer snapshots__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
    MR_Word snapshots__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
    MR_Integer snapshots__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
  }
}

static void MR_CALL 
snapshots__counts_by_type_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6)
{
  {
    MR_bool snapshots__succeeded;
    MR_String snapshots__A_7;
    MR_String snapshots__B_8;
    MR_Word snapshots__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
    MR_Word snapshots__Var_10;
    MR_Integer snapshots__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
    MR_Integer snapshots__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
    MR_String snapshots__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 0)));
    MR_String snapshots__Var_14;
    MR_Integer snapshots__Var_15;
    MR_Integer snapshots__Var_16;
    MR_Integer snapshots__Var_17;
    MR_Integer snapshots__Var_18;
    MR_String snapshots__Var_19;
    MR_String snapshots__Var_20;
    MR_Integer snapshots__Var_21;
    MR_Integer snapshots__Var_22;

    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 1)));
    snapshots__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 2)));
    snapshots__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 3)));
    snapshots__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 4)));
    snapshots__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
    snapshots__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
    snapshots__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
    snapshots__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 0)));
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 1)));
    snapshots__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 2)));
    snapshots__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 3)));
    snapshots__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 4)));
    {
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
  }
}

static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
  MR_Word snapshots__CountsA_4,
  MR_Word snapshots__CountsB_5,
  MR_Word * snapshots__Result_6)
{
  {
    MR_bool snapshots__succeeded;
    MR_String snapshots__A_7;
    MR_String snapshots__B_8;
    MR_Word snapshots__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 0)));
    MR_Word snapshots__Var_10;
    MR_Integer snapshots__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 1)));
    MR_Integer snapshots__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsA_4, (MR_Integer) 2)));
    MR_String snapshots__Var_13;
    MR_String snapshots__Var_14;
    MR_Integer snapshots__Var_15;
    MR_Integer snapshots__Var_16;
    MR_Integer snapshots__Var_17;
    MR_Integer snapshots__Var_18;
    MR_String snapshots__Var_19;
    MR_String snapshots__Var_20;
    MR_Integer snapshots__Var_21;
    MR_Integer snapshots__Var_22;

    snapshots__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 0)));
    snapshots__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 1)));
    snapshots__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 2)));
    snapshots__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 3)));
    snapshots__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_9, (MR_Integer) 4)));
    snapshots__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 0)));
    snapshots__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 1)));
    snapshots__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__CountsB_5, (MR_Integer) 2)));
    snapshots__B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 0)));
    snapshots__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 1)));
    snapshots__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 2)));
    snapshots__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 3)));
    snapshots__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_10, (MR_Integer) 4)));
    {
      mercury__private_builtin__builtin_compare_string_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
  }
}

static void MR_CALL 
snapshots__group_by_words_3_p_0(
  MR_Word snapshots__GroupA_4,
  MR_Word snapshots__GroupB_5,
  MR_Word * snapshots__Result_6)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 1)));
    MR_Integer snapshots__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 1)));
    MR_Integer snapshots__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 0)));
    MR_Word snapshots__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 2)));
    MR_Word snapshots__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupA_4, (MR_Integer) 3)));
    MR_Integer snapshots__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 0)));
    MR_Word snapshots__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 2)));
    MR_Word snapshots__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__GroupB_5, (MR_Integer) 3)));

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(snapshots__Result_6, snapshots__B_8, snapshots__A_7);
    }
  }
}

static void MR_CALL 
snapshots__output_site_7_p_0(
  MR_Word snapshots__MajorAxis_8,
  MR_Integer snapshots__TotalCells_9,
  MR_Integer snapshots__TotalWords_10,
  MR_Word snapshots__Single_11,
  MR_Word snapshots__AllocCounts_12)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__AllocSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 0)));
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 1)));
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocCounts_12, (MR_Integer) 2)));
    MR_String snapshots__Proc_17 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 0)));
    MR_String snapshots__Type_18 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 1)));
    MR_String snapshots__File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 2)));
    MR_Integer snapshots__LineNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 3)));
    MR_Float snapshots__CellsPercent_22;
    MR_Float snapshots__WordsPercent_23;
    MR_String snapshots__RightLabel_24;
    MR_Integer snapshots__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_14, (MR_Integer) 4)));

    {
      snapshots__CellsPercent_22 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_9);
    }
    {
      snapshots__WordsPercent_23 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_10);
    }
    switch (snapshots__MajorAxis_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        snapshots__RightLabel_24 = snapshots__Type_18;
        break;
      case (MR_Integer) 1:
        snapshots__RightLabel_24 = snapshots__Proc_17;
        break;
    }
    switch (snapshots__Single_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float snapshots__Var_27;
          MR_Float snapshots__Var_28;

          {
            snapshots__Var_27 = snapshots__min_percentage_major_0_f_0();
          }
          snapshots__succeeded = (snapshots__CellsPercent_22 <= snapshots__Var_27);
          if (snapshots__succeeded)
            {
              {
                snapshots__Var_28 = snapshots__min_percentage_major_0_f_0();
              }
              snapshots__succeeded = (snapshots__WordsPercent_23 <= snapshots__Var_28);
            }
          if (snapshots__succeeded)
            {
            }
          else
            {
              MR_String snapshots__Var_92;
              MR_Word snapshots__Var_98;
              MR_String snapshots__Var_103;
              MR_String snapshots__Var_116;
              MR_String snapshots__Var_127;
              MR_String snapshots__Var_140;
              MR_String snapshots__Var_157;

              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              snapshots__Var_98 = (MR_Word) &snapshots_scalar_common_4[0];
              {
                mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_98, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__Var_92);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_92);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
              {
                mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__Var_98, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_22, &snapshots__Var_103);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_103);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
              {
                mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_98, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__Var_116);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_116);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
              {
                mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__Var_98, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_23, &snapshots__Var_127);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_127);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "%  ");
              }
              {
                mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_98, (MR_Integer) 5, (MR_String) "", &snapshots__Var_140);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_140);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "  ");
              }
              {
                mercury__io__write_string_3_p_0(snapshots__RightLabel_24);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " (");
              }
              {
                mercury__io__write_string_3_p_0(snapshots__File_19);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ":");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__Var_98, snapshots__LineNum_20, &snapshots__Var_157);
              }
              {
                mercury__io__write_string_3_p_0(snapshots__Var_157);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String snapshots__Var_64;
          MR_Word snapshots__Var_70;
          MR_String snapshots__Var_81;

          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          snapshots__Var_70 = (MR_Word) &snapshots_scalar_common_4[0];
          {
            mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_70, (MR_Integer) 38, (MR_String) "", &snapshots__Var_64);
          }
          {
            mercury__io__write_string_3_p_0(snapshots__Var_64);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "  ");
          }
          {
            mercury__io__write_string_3_p_0(snapshots__RightLabel_24);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " (");
          }
          {
            mercury__io__write_string_3_p_0(snapshots__File_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ":");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__Var_70, snapshots__LineNum_20, &snapshots__Var_81);
          }
          {
            mercury__io__write_string_3_p_0(snapshots__Var_81);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
snapshots__output_group_8_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;

    {
      snapshots__output_site_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 6))), ((MR_Word) snapshots__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
snapshots__output_group_8_p_0(
  MR_Word snapshots__Options_9,
  MR_Integer snapshots__TotalCells_10,
  MR_Integer snapshots__TotalWords_11,
  MR_Word snapshots__Group_12,
  MR_Integer snapshots__STATE_VARIABLE_CumulWords_0_28,
  MR_Integer * snapshots__STATE_VARIABLE_CumulWords_29)
{
  {
    MR_bool snapshots__succeeded;
    MR_Integer snapshots__NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 0)));
    MR_Integer snapshots__NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 1)));
    MR_Word snapshots__AllocSite_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 2)));
    MR_Word snapshots__Counts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Group_12, (MR_Integer) 3)));
    MR_Float snapshots__CellsPercent_19;
    MR_Float snapshots__WordsPercent_20;
    MR_Float snapshots__CumulPercent_21;
    MR_Float snapshots__Var_33;
    MR_Float snapshots__Var_34;

    *snapshots__STATE_VARIABLE_CumulWords_29 = (snapshots__STATE_VARIABLE_CumulWords_0_28 + snapshots__NumWords_16);
    {
      snapshots__CellsPercent_19 = snapshots__percentage_2_f_0(snapshots__NumCells_15, snapshots__TotalCells_10);
    }
    {
      snapshots__WordsPercent_20 = snapshots__percentage_2_f_0(snapshots__NumWords_16, snapshots__TotalWords_11);
    }
    {
      snapshots__CumulPercent_21 = snapshots__percentage_2_f_0(*snapshots__STATE_VARIABLE_CumulWords_29, snapshots__TotalWords_11);
    }
    {
      snapshots__Var_33 = snapshots__min_percentage_major_0_f_0();
    }
    snapshots__succeeded = (snapshots__CellsPercent_19 <= snapshots__Var_33);
    if (snapshots__succeeded)
      {
        {
          snapshots__Var_34 = snapshots__min_percentage_major_0_f_0();
        }
        snapshots__succeeded = (snapshots__WordsPercent_20 <= snapshots__Var_34);
      }
    if (snapshots__succeeded)
      {
      }
    else
      {
        MR_Word snapshots__MajorAxis_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word snapshots__Brief_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_String snapshots__RightLabel_24;
        MR_Char snapshots__Star_25;
        MR_String snapshots__Var_78 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
        MR_String snapshots__Var_79 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
        MR_String snapshots__Var_81;
        MR_Word snapshots__Var_87;
        MR_String snapshots__Var_89;
        MR_String snapshots__Var_100;
        MR_String snapshots__Var_113;
        MR_String snapshots__Var_124;
        MR_String snapshots__Var_137;
        MR_Word snapshots__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word snapshots__Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Integer snapshots__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
        MR_Integer snapshots__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
        MR_String snapshots__Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));

        switch (snapshots__MajorAxis_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            snapshots__RightLabel_24 = snapshots__Var_79;
            break;
          case (MR_Integer) 1:
            snapshots__RightLabel_24 = snapshots__Var_78;
            break;
        }
        switch (snapshots__Brief_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            snapshots__Star_25 = (MR_Char) 42;
            break;
          case (MR_Integer) 1:
            snapshots__Star_25 = (MR_Char) 32;
            break;
        }
        snapshots__Var_87 = (MR_Word) &snapshots_scalar_common_4[0];
        {
          mercury__string__format__format_char_component_nowidth_3_p_0(snapshots__Var_87, snapshots__Star_25, &snapshots__Var_81);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_81);
        }
        {
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_87, (MR_Integer) 7, snapshots__NumCells_15, &snapshots__Var_89);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_89);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CellsPercent_19, &snapshots__Var_100);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_100);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
        {
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_87, (MR_Integer) 9, snapshots__NumWords_16, &snapshots__Var_113);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_113);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__WordsPercent_20, &snapshots__Var_124);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_124);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
        {
          mercury__string__format__format_float_component_width_prec_6_p_0(snapshots__Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, snapshots__CumulPercent_21, &snapshots__Var_137);
        }
        {
          mercury__io__write_string_3_p_0(snapshots__Var_137);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "%  ");
        }
        {
          mercury__io__write_string_3_p_0(snapshots__RightLabel_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        switch (snapshots__Brief_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word snapshots__Single_26;
              MR_Word snapshots__Var_53;
              MR_Word snapshots__Var_52;
              MR_Word snapshots__Var_27;
              MR_Box snapshots__conv0_STATE_VARIABLE_IO_54_54;

              snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Counts_18)) == (MR_mktag((MR_Integer) 1)));
              if (snapshots__succeeded)
                {
                  snapshots__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 0)));
                  snapshots__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Counts_18, (MR_Integer) 1)));
                  snapshots__succeeded = (snapshots__Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (snapshots__succeeded)
                snapshots__Single_26 = (MR_Integer) 1;
              else
                snapshots__Single_26 = (MR_Integer) 0;
              {
                snapshots__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 0) = ((MR_Box) (&snapshots_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 1) = ((MR_Box) (snapshots__output_group_8_p_0_1));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 3) = ((MR_Box) (snapshots__MajorAxis_22));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 4) = ((MR_Box) (snapshots__TotalCells_10));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 5) = ((MR_Box) (snapshots__TotalWords_11));
                MR_hl_field(MR_mktag(0), snapshots__Var_53, 6) = ((MR_Box) (snapshots__Single_26));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__Var_53, snapshots__Counts_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv0_STATE_VARIABLE_IO_54_54);
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
  }
}

static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void)
{
  {
    MR_bool snapshots__succeeded;

    return (MR_Float) 0.10000000000000001;
  }
}

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer snapshots__N_4,
  MR_Integer snapshots__Total_5)
{
  {
    MR_bool snapshots__succeeded;
    MR_Float snapshots__HeadVar__3_3;
    MR_Float snapshots__Var_6;
    MR_Float snapshots__Var_8;
    MR_Float snapshots__Var_9;

    {
      snapshots__Var_8 = mercury__float__float_1_f_0(snapshots__N_4);
    }
    snapshots__Var_6 = (((MR_Float) 100.00000000000000) * snapshots__Var_8);
    {
      snapshots__Var_9 = mercury__float__float_1_f_0(snapshots__Total_5);
    }
    {
      snapshots__HeadVar__3_3 = mercury__float__f_slash_2_f_0(snapshots__Var_6, snapshots__Var_9);
    }
    return snapshots__HeadVar__3_3;
  }
}

void MR_CALL 
snapshots__show_snapshots_2_p_0(void)
{
  {
    MR_bool snapshots__succeeded;
    MR_String snapshots__SnapshotsFile_4;
    MR_Word snapshots__ByType_5;
    MR_Word snapshots__Brief_6;
    MR_Word snapshots__RecalcSize_7;
    MR_Word snapshots__InclRuntime_8;
    MR_Word snapshots__MajorAxis_9;
    MR_Word snapshots__Options_10;
    MR_Word snapshots__OpenDeclRes_11;
    MR_Word snapshots__AllocSiteMap_13;
    MR_Word snapshots__SizeMap_14;
    MR_Word snapshots__OpenRes_17;

    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 14, &snapshots__SnapshotsFile_4);
    }
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 15, &snapshots__ByType_5);
    }
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 16, &snapshots__Brief_6);
    }
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 18, &snapshots__RecalcSize_7);
    }
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 17, &snapshots__InclRuntime_8);
    }
    switch (snapshots__ByType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        snapshots__MajorAxis_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        snapshots__MajorAxis_9 = (MR_Integer) 1;
        break;
    }
    {
      snapshots__Options_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), snapshots__Options_10, 0) = ((MR_Box) ((snapshots__MajorAxis_9 | ((((snapshots__Brief_6 << (MR_Integer) 1)) | ((((snapshots__RecalcSize_7 << (MR_Integer) 2)) | ((snapshots__InclRuntime_8 << (MR_Integer) 3)))))))));
    }
    {
      mercury__io__open_input_4_p_0(snapshots__SnapshotsFile_4, &snapshots__OpenDeclRes_11);
    }
    if (((MR_tag((MR_Word) snapshots__OpenDeclRes_11)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word snapshots__DeclError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__OpenDeclRes_11, (MR_Integer) 0)));
        MR_String snapshots__DeclErrorStr_16;
        MR_String snapshots__Var_35;
        MR_String snapshots__Var_36;
        MR_String snapshots__Var_38;
        MR_String snapshots__Var_39;

        {
          snapshots__Var_39 = mercury__io__error_message_1_f_0(snapshots__DeclError_15);
        }
        {
          snapshots__Var_38 = mercury__string__f_43_43_2_f_0(snapshots__Var_39, (MR_String) "\n");
        }
        {
          snapshots__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", snapshots__Var_38);
        }
        {
          snapshots__Var_35 = mercury__string__f_43_43_2_f_0(snapshots__SnapshotsFile_4, snapshots__Var_36);
        }
        {
          snapshots__DeclErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", snapshots__Var_35);
        }
        {
          mercury__require__error_1_p_0(snapshots__DeclErrorStr_16);
          return;
        }
      }
    else
      {
        MR_Word snapshots__DeclStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__OpenDeclRes_11, (MR_Integer) 0)));

        {
          snapshots__parse_alloc_site_decls_5_p_0(snapshots__DeclStream_12, &snapshots__AllocSiteMap_13, &snapshots__SizeMap_14);
        }
        {
          mercury__io__close_input_3_p_0(snapshots__DeclStream_12);
        }
      }
    {
      mercury__io__open_input_4_p_0(snapshots__SnapshotsFile_4, &snapshots__OpenRes_17);
    }
    if (((MR_tag((MR_Word) snapshots__OpenRes_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word snapshots__Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__OpenRes_17, (MR_Integer) 0)));
        MR_String snapshots__ErrorStr_20;
        MR_String snapshots__Var_45;
        MR_String snapshots__Var_46;
        MR_String snapshots__Var_48;
        MR_String snapshots__Var_49;

        {
          snapshots__Var_49 = mercury__io__error_message_1_f_0(snapshots__Error_19);
        }
        {
          snapshots__Var_48 = mercury__string__f_43_43_2_f_0(snapshots__Var_49, (MR_String) "\n");
        }
        {
          snapshots__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", snapshots__Var_48);
        }
        {
          snapshots__Var_45 = mercury__string__f_43_43_2_f_0(snapshots__SnapshotsFile_4, snapshots__Var_46);
        }
        {
          snapshots__ErrorStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", snapshots__Var_45);
        }
        {
          mercury__require__error_1_p_0(snapshots__ErrorStr_20);
          return;
        }
      }
    else
      {
        MR_Word snapshots__Stream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__OpenRes_17, (MR_Integer) 0)));

        {
          snapshots__show_all_snapshots_6_p_0(snapshots__Stream_18, snapshots__Options_10, snapshots__AllocSiteMap_13, snapshots__SizeMap_14);
        }
        {
          mercury__io__close_input_3_p_0(snapshots__Stream_18);
        }
      }
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Word snapshots__conv2_Result_6;

    {
      snapshots__group_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv2_Result_6);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Word snapshots__conv1_Result_6;

    {
      snapshots__counts_by_type_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv1_Result_6);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Word snapshots__conv0_Result_6;

    {
      snapshots__counts_by_proc_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
  MR_Word snapshots__Stream_7,
  MR_Word snapshots__Options_8,
  MR_Word snapshots__AllocSiteMap_9,
  MR_Word snapshots__SizeMap_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;
        MR_Word snapshots__LineRes_12;

        {
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_7, &snapshots__LineRes_12);
        }
        switch (MR_tag((MR_Word) snapshots__LineRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String snapshots__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_12, (MR_Integer) 0)));
              MR_String snapshots__SnapshotName0_14;

              {
                snapshots__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "start ", snapshots__Line_13, &snapshots__SnapshotName0_14);
              }
              if (snapshots__succeeded)
                {
                  MR_String snapshots__SnapshotName_15;
                  MR_Word snapshots__AllocCounts_43;
                  MR_Word snapshots__MajorAxis_44;
                  MR_Word snapshots__Groups_45;
                  MR_Word snapshots__Compare_54;
                  MR_Word snapshots__SortedCounts_55;
                  MR_Word snapshots__Groups_56;
                  MR_Word snapshots__Var_48;
                  MR_Word snapshots__Var_49;
                  MR_Word snapshots__Var_50;

                  {
                    snapshots__SnapshotName_15 = mercury__string__chomp_1_f_0(snapshots__SnapshotName0_14);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "------ ");
                  }
                  {
                    mercury__io__write_string_3_p_0(snapshots__SnapshotName_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ------\n");
                  }
                  {
                    snapshots__parse_snapshot_7_p_0(snapshots__Stream_7, snapshots__Options_8, snapshots__AllocSiteMap_9, snapshots__SizeMap_10, &snapshots__AllocCounts_43);
                  }
                  snapshots__MajorAxis_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) & (MR_Integer) 1);
                  snapshots__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  snapshots__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  snapshots__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  switch (snapshots__MajorAxis_44) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[7];
                      break;
                    case (MR_Integer) 1:
                      snapshots__Compare_54 = (MR_Word) &snapshots_scalar_common_1[8];
                      break;
                  }
                  {
                    mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, snapshots__Compare_54, snapshots__AllocCounts_43, &snapshots__SortedCounts_55);
                  }
                  {
                    snapshots__make_groups_3_p_0(snapshots__Compare_54, snapshots__SortedCounts_55, &snapshots__Groups_56);
                  }
                  {
                    mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_group_0, (MR_Word) &snapshots_scalar_common_1[9], snapshots__Groups_56, &snapshots__Groups_45);
                  }
                  {
                    snapshots__output_snapshot_4_p_0(snapshots__Options_8, snapshots__Groups_45);
                  }
                  /* direct tailcall eliminated */
                  {
                  }
                  continue;
                }
              else
                {
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word snapshots__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_12, (MR_Integer) 0)));
              MR_String snapshots__Var_22;

              {
                snapshots__Var_22 = mercury__io__error_message_1_f_0(snapshots__Error_16);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.show_all_snapshots\'/6", snapshots__Var_22);
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Integer snapshots__conv4_STATE_VARIABLE_CumulWords_29;

    {
      snapshots__output_group_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__closure, (MR_Integer) 5))), ((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv4_STATE_VARIABLE_CumulWords_29);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv4_STATE_VARIABLE_CumulWords_29));
  }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalCells_10;
    MR_Integer snapshots__conv0_STATE_VARIABLE_TotalWords_12;

    {
      snapshots__sum_groups_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv1_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv0_STATE_VARIABLE_TotalWords_12);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalCells_10));
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv0_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0(
  MR_Word snapshots__Options_5,
  MR_Word snapshots__Grouped_6)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__TypeCtorInfo_43_43;
    MR_Word snapshots__TypeCtorInfo_44_44;
    MR_Integer snapshots__TotalCells_8;
    MR_Integer snapshots__TotalWords_9;
    MR_Word snapshots__Brief_10;
    MR_Word snapshots__Var_32;
    MR_String snapshots__Var_54;
    MR_Word snapshots__Var_60;
    MR_String snapshots__Var_63;
    MR_String snapshots__Var_72;
    MR_Box snapshots__conv3_TotalCells_8;
    MR_Box snapshots__conv2_TotalWords_9;
    MR_Word snapshots__Var_35;
    MR_Word snapshots__Var_36;
    MR_Word snapshots__Var_37;
    MR_Integer snapshots___CumulWords_11;
    MR_Box snapshots__conv6__CumulWords_11;
    MR_Box snapshots__conv5_STATE_VARIABLE_IO_13;

    {
      snapshots__output_column_names_3_p_0(snapshots__Options_5);
    }
    snapshots__TypeCtorInfo_43_43 = (MR_Word) &snapshots__snapshots__type_ctor_info_group_0;
    snapshots__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, snapshots__TypeCtorInfo_44_44, (MR_Word) &snapshots_scalar_common_1[6], snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalCells_8, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv2_TotalWords_9);
    }
    snapshots__TotalCells_8 = ((MR_Integer) snapshots__conv3_TotalCells_8);
    snapshots__TotalWords_9 = ((MR_Integer) snapshots__conv2_TotalWords_9);
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    snapshots__Var_60 = (MR_Word) &snapshots_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_60, (MR_Integer) 7, snapshots__TotalCells_8, &snapshots__Var_54);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_54);
    }
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(snapshots__Var_60, (MR_Integer) 17, snapshots__TotalWords_9, &snapshots__Var_63);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_63);
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_60, (MR_Integer) 14, (MR_String) "", &snapshots__Var_72);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_72);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "total");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    snapshots__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    snapshots__Brief_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    snapshots__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    snapshots__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    switch (snapshots__Brief_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__nl_2_p_0();
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    {
      snapshots__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 0) = ((MR_Box) (&snapshots_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 1) = ((MR_Box) (snapshots__output_snapshot_4_p_0_2));
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 3) = ((MR_Box) (snapshots__Options_5));
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 4) = ((MR_Box) (snapshots__TotalCells_8));
      MR_hl_field(MR_mktag(0), snapshots__Var_32, 5) = ((MR_Box) (snapshots__TotalWords_9));
    }
    {
      mercury__list__foldl2_6_p_2(snapshots__TypeCtorInfo_43_43, snapshots__TypeCtorInfo_44_44, (MR_Word) &mercury__io__io__type_ctor_info_state_0, snapshots__Var_32, snapshots__Grouped_6, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv6__CumulWords_11, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv5_STATE_VARIABLE_IO_13);
    }
    snapshots___CumulWords_11 = ((MR_Integer) snapshots__conv6__CumulWords_11);
  }
}

static void MR_CALL 
snapshots__output_column_names_3_p_0(
  MR_Word snapshots__Options_4)
{
  {
    MR_bool snapshots__succeeded;
    MR_Word snapshots__MajorAxis_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_String snapshots__RightLabel_7;
    MR_String snapshots__Var_30;
    MR_Word snapshots__Var_36;
    MR_String snapshots__Var_39;
    MR_String snapshots__Var_48;
    MR_Word snapshots__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word snapshots__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word snapshots__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    switch (snapshots__MajorAxis_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        snapshots__RightLabel_7 = (MR_String) "procedure / type (location)";
        break;
      case (MR_Integer) 1:
        snapshots__RightLabel_7 = (MR_String) "type / procedure (location)";
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    snapshots__Var_36 = (MR_Word) &snapshots_scalar_common_4[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_36, (MR_Integer) 7, (MR_String) "cells", &snapshots__Var_30);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_30);
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_36, (MR_Integer) 17, (MR_String) "words", &snapshots__Var_39);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_39);
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(snapshots__Var_36, (MR_Integer) 14, (MR_String) "cumul", &snapshots__Var_48);
    }
    {
      mercury__io__write_string_3_p_0(snapshots__Var_48);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
    {
      mercury__io__write_string_3_p_0(snapshots__RightLabel_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

    {
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Word snapshots__conv0_Result_6;

    {
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0(
  MR_Word snapshots__Compare_4,
  MR_Word snapshots__Counts_5,
  MR_Word * snapshots__Groups_6)
{
  {
    MR_bool snapshots__succeeded;

    if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *snapshots__Groups_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word snapshots__TypeCtorInfo_17_28;
        MR_Word snapshots__TypeCtorInfo_26_37;
        MR_Word snapshots__First_9;
        MR_Word snapshots__Rest_10;
        MR_Word snapshots__FirstGroup_11;
        MR_Word snapshots__SortedCounts0_16;
        MR_Word snapshots__SortedCounts_17;
        MR_Integer snapshots__TotalCells_18;
        MR_Integer snapshots__TotalWords_19;
        MR_Word snapshots__FirstSite_20;
        MR_Word snapshots__Var_25;
        MR_Box snapshots__conv4_TotalCells_18;
        MR_Box snapshots__conv3_TotalWords_19;
        MR_Box snapshots__conv5_Var_25;
        MR_Integer snapshots__Var_26;
        MR_Integer snapshots__Var_27;
        MR_Word * snapshots__AddrRestGroups_38;

        {
          snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
        }
        snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
        {
          mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
        }
        {
          mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[4], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
        }
        snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[5], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
        }
        snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
        snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
        {
          snapshots__conv5_Var_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
        }
        snapshots__Var_25 = ((MR_Word) snapshots__conv5_Var_25);
        snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 0)));
        snapshots__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 1)));
        snapshots__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 2)));
        {
          snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
          MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *snapshots__Groups_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (snapshots__FirstGroup_11));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Groups_6, (MR_Integer) 1));
        {
          snapshots__LCMCpr_make_groups_1_3_p_0(snapshots__Compare_4, snapshots__Rest_10, snapshots__AddrRestGroups_38);
        }
      }
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3,
  MR_Box snapshots__wrapper_arg_4,
  MR_Box * snapshots__wrapper_arg_5)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Integer snapshots__conv2_STATE_VARIABLE_TotalCells_10;
    MR_Integer snapshots__conv1_STATE_VARIABLE_TotalWords_12;

    {
      snapshots__sum_counts_5_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Integer) snapshots__wrapper_arg_2), &snapshots__conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) snapshots__wrapper_arg_4), &snapshots__conv1_STATE_VARIABLE_TotalWords_12);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv2_STATE_VARIABLE_TotalCells_10));
    *snapshots__wrapper_arg_5 = ((MR_Box) (snapshots__conv1_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box snapshots__wrapper_arg_2,
  MR_Box * snapshots__wrapper_arg_3)
{
  {
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Word snapshots__conv0_Result_6;

    {
      snapshots__counts_by_words_3_p_0(((MR_Word) snapshots__wrapper_arg_1), ((MR_Word) snapshots__wrapper_arg_2), &snapshots__conv0_Result_6);
    }
    *snapshots__wrapper_arg_3 = ((MR_Box) (snapshots__conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
  MR_Word snapshots__Compare_4,
  MR_Word snapshots__Counts_5,
  MR_Word * snapshots__AddrOfGroups_39)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;

        if ((snapshots__Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *snapshots__AddrOfGroups_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word snapshots__TypeCtorInfo_17_28;
            MR_Word snapshots__TypeCtorInfo_26_37;
            MR_Word snapshots__First_9;
            MR_Word snapshots__Rest_10;
            MR_Word snapshots__FirstGroup_11;
            MR_Word snapshots__SortedCounts0_16;
            MR_Word snapshots__SortedCounts_17;
            MR_Integer snapshots__TotalCells_18;
            MR_Integer snapshots__TotalWords_19;
            MR_Word snapshots__FirstSite_20;
            MR_Word snapshots__Var_25;
            MR_Box snapshots__conv4_TotalCells_18;
            MR_Box snapshots__conv3_TotalWords_19;
            MR_Box snapshots__conv5_Var_25;
            MR_Integer snapshots__Var_26;
            MR_Integer snapshots__Var_27;
            MR_Word * snapshots__AddrRestGroups_38;
            MR_Word snapshots__Groups_40;

            {
              snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(snapshots__Compare_4, snapshots__Counts_5, &snapshots__First_9, &snapshots__Rest_10);
            }
            snapshots__TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
            {
              mercury__list__sort_2_p_0(snapshots__TypeCtorInfo_17_28, snapshots__First_9, &snapshots__SortedCounts0_16);
            }
            {
              mercury__list__sort_3_p_0(snapshots__TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[2], snapshots__SortedCounts0_16, &snapshots__SortedCounts_17);
            }
            snapshots__TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__list__foldl2_6_p_0(snapshots__TypeCtorInfo_17_28, snapshots__TypeCtorInfo_26_37, snapshots__TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[3], snapshots__SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &snapshots__conv3_TotalWords_19);
            }
            snapshots__TotalCells_18 = ((MR_Integer) snapshots__conv4_TotalCells_18);
            snapshots__TotalWords_19 = ((MR_Integer) snapshots__conv3_TotalWords_19);
            {
              snapshots__conv5_Var_25 = mercury__list__det_head_1_f_0(snapshots__TypeCtorInfo_17_28, snapshots__SortedCounts_17);
            }
            snapshots__Var_25 = ((MR_Word) snapshots__conv5_Var_25);
            snapshots__FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 0)));
            snapshots__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 1)));
            snapshots__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__Var_25, (MR_Integer) 2)));
            {
              snapshots__FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 0) = ((MR_Box) (snapshots__TotalCells_18));
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 1) = ((MR_Box) (snapshots__TotalWords_19));
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 2) = ((MR_Box) (snapshots__FirstSite_20));
              MR_hl_field(MR_mktag(0), snapshots__FirstGroup_11, 3) = ((MR_Box) (snapshots__SortedCounts_17));
            }
            {
              snapshots__Groups_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 0) = ((MR_Box) (snapshots__FirstGroup_11));
              MR_hl_field(MR_mktag(1), snapshots__Groups_40, 1) = NULL;
            }
            snapshots__AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Groups_40, (MR_Integer) 1));
            *snapshots__AddrOfGroups_39 = snapshots__Groups_40;
            /* direct tailcall eliminated */
            {
              MR_Word snapshots__next_value_of_Counts_5 = snapshots__Rest_10;
              MR_Word * snapshots__next_value_of_AddrOfGroups_39 = snapshots__AddrRestGroups_38;

              snapshots__AddrOfGroups_39 = snapshots__next_value_of_AddrOfGroups_39;
              snapshots__Counts_5 = snapshots__next_value_of_Counts_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word snapshots__Compare_5,
  MR_Word snapshots__List_6,
  MR_Word * snapshots__Upto_7,
  MR_Word * snapshots__After_8)
{
  {
    MR_bool snapshots__succeeded;

    if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *snapshots__Upto_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word snapshots__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
        MR_Box snapshots__Var_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

        if ((snapshots__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *snapshots__Upto_7 = snapshots__List_6;
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__Var_20, (MR_Integer) 0));
            MR_Word snapshots__Cmp_13;
            MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_20, (MR_Integer) 1)));
            void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
            MR_Box snapshots__conv1_Cmp_13;

            {
              snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__Var_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
            }
            snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
            switch (snapshots__Cmp_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *snapshots__Upto_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = snapshots__Var_21;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  *snapshots__After_8 = snapshots__Var_20;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * snapshots__AddrUpto0_22;

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *snapshots__Upto_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = snapshots__Var_21;
                    MR_hl_field(MR_mktag(1), base, 1) = NULL;
                  }
                  snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__Upto_7, (MR_Integer) 1));
                  {
                    snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(snapshots__Compare_5, snapshots__Var_20, snapshots__AddrUpto0_22, snapshots__After_8);
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
  MR_Word snapshots__Compare_5,
  MR_Word snapshots__List_6,
  MR_Word * snapshots__AddrOfUpto_23,
  MR_Word * snapshots__After_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;

        if ((snapshots__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *snapshots__AddrOfUpto_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word snapshots__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 1)));
            MR_Box snapshots__Var_21 = (MR_hl_field(MR_mktag(1), snapshots__List_6, (MR_Integer) 0));

            if ((snapshots__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *snapshots__AddrOfUpto_23 = snapshots__List_6;
                *snapshots__After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Box snapshots__B_11 = (MR_hl_field(MR_mktag(1), snapshots__Var_20, (MR_Integer) 0));
                MR_Word snapshots__Cmp_13;
                MR_Word snapshots__Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_20, (MR_Integer) 1)));
                void MR_CALL (* snapshots__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), snapshots__Compare_5, (MR_Integer) 1)));
                MR_Box snapshots__conv1_Cmp_13;

                {
                  snapshots__func_0(((MR_Box) snapshots__Compare_5), snapshots__Var_21, snapshots__B_11, &snapshots__conv1_Cmp_13);
                }
                snapshots__Cmp_13 = ((MR_Word) snapshots__conv1_Cmp_13);
                switch (snapshots__Cmp_13) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word snapshots__Upto_25;

                      {
                        snapshots__Upto_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), snapshots__Upto_25, 0) = snapshots__Var_21;
                        MR_hl_field(MR_mktag(1), snapshots__Upto_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      *snapshots__AddrOfUpto_23 = snapshots__Upto_25;
                      *snapshots__After_8 = snapshots__Var_20;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word * snapshots__AddrUpto0_22;
                      MR_Word snapshots__Upto_26;

                      {
                        snapshots__Upto_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), snapshots__Upto_26, 0) = snapshots__Var_21;
                        MR_hl_field(MR_mktag(1), snapshots__Upto_26, 1) = NULL;
                      }
                      snapshots__AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__Upto_26, (MR_Integer) 1));
                      *snapshots__AddrOfUpto_23 = snapshots__Upto_26;
                      /* direct tailcall eliminated */
                      {
                        MR_Word snapshots__next_value_of_List_6 = snapshots__Var_20;
                        MR_Word * snapshots__next_value_of_AddrOfUpto_23 = snapshots__AddrUpto0_22;

                        snapshots__AddrOfUpto_23 = snapshots__next_value_of_AddrOfUpto_23;
                        snapshots__List_6 = snapshots__next_value_of_List_6;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
  MR_Word snapshots__Stream_8,
  MR_Word snapshots__Options_9,
  MR_Word snapshots__AllocSiteMap_10,
  MR_Word snapshots__SizeMap_11,
  MR_Word * snapshots__AllocCounts_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;
        MR_Word snapshots__LineRes_14;

        {
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_8, &snapshots__LineRes_14);
        }
        switch (MR_tag((MR_Word) snapshots__LineRes_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", (MR_String) "format error");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

              {
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
              }
              if (snapshots__succeeded)
                *snapshots__AllocCounts_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word snapshots__Counts_16;

                  {
                    snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                  }
                  if (snapshots__succeeded)
                    {
                      MR_Word * snapshots__AddrRestCounts_31;

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *snapshots__AllocCounts_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (snapshots__Counts_16));
                        MR_hl_field(MR_mktag(1), base, 1) = NULL;
                      }
                      snapshots__AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *snapshots__AllocCounts_12, (MR_Integer) 1));
                      {
                        snapshots__LCMCpr_parse_snapshot_1_7_p_0(snapshots__Stream_8, snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__AddrRestCounts_31);
                      }
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word snapshots__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_14, (MR_Integer) 0)));
              MR_String snapshots__Var_24;

              {
                snapshots__Var_24 = mercury__io__error_message_1_f_0(snapshots__Error_18);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", snapshots__Var_24);
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
  MR_Word snapshots__Stream_8,
  MR_Word snapshots__Options_9,
  MR_Word snapshots__AllocSiteMap_10,
  MR_Word snapshots__SizeMap_11,
  MR_Word * snapshots__AddrOfAllocCounts_32)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;
        MR_Word snapshots__LineRes_14;

        {
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_8, &snapshots__LineRes_14);
        }
        switch (MR_tag((MR_Word) snapshots__LineRes_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", (MR_String) "format error");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String snapshots__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_14, (MR_Integer) 0)));

              {
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_15, (MR_String) "end ");
              }
              if (snapshots__succeeded)
                {
                  *snapshots__AddrOfAllocCounts_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word snapshots__Counts_16;

                  {
                    snapshots__succeeded = snapshots__parse_alloc_site_5_p_0(snapshots__Options_9, snapshots__AllocSiteMap_10, snapshots__SizeMap_11, snapshots__Line_15, &snapshots__Counts_16);
                  }
                  if (snapshots__succeeded)
                    {
                      MR_Word * snapshots__AddrRestCounts_31;
                      MR_Word snapshots__AllocCounts_33;

                      {
                        snapshots__AllocCounts_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, 0) = ((MR_Box) (snapshots__Counts_16));
                        MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, 1) = NULL;
                      }
                      snapshots__AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), snapshots__AllocCounts_33, (MR_Integer) 1));
                      *snapshots__AddrOfAllocCounts_32 = snapshots__AllocCounts_33;
                      /* direct tailcall eliminated */
                      {
                        MR_Word * snapshots__next_value_of_AddrOfAllocCounts_32 = snapshots__AddrRestCounts_31;

                        snapshots__AddrOfAllocCounts_32 = snapshots__next_value_of_AddrOfAllocCounts_32;
                      }
                      continue;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word snapshots__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_14, (MR_Integer) 0)));
              MR_String snapshots__Var_24;

              {
                snapshots__Var_24 = mercury__io__error_message_1_f_0(snapshots__Error_18);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", snapshots__Var_24);
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
  MR_Word snapshots__Options_6,
  MR_Word snapshots__AllocSiteMap_7,
  MR_Word snapshots__SizeMap_8,
  MR_String snapshots__Line_9,
  MR_Word * snapshots__Counts_10)
{
  {
    MR_bool snapshots__succeeded;
    MR_String snapshots__IdStr_11;
    MR_String snapshots__NumCellsStr_12;
    MR_String snapshots__NumWordsStr0_13;
    MR_Integer snapshots__NumCells_14;
    MR_Integer snapshots__NumWords0_15;
    MR_Word snapshots__AllocSite_17;
    MR_Word snapshots__RecalcSize_18;
    MR_Integer snapshots__NumWords_22;
    MR_Word snapshots__Var_23;
    MR_Word snapshots__Var_24;
    MR_Word snapshots__Var_25;
    MR_Word snapshots__Var_26;
    MR_Integer snapshots__Id_16;
    MR_Integer snapshots__SizeMapWords_21;
    MR_Word snapshots__TypeCtorInfo_55_55;
    MR_Integer snapshots__WordsPerCell_20;
    MR_Integer snapshots__Var_43;
    MR_String snapshots__Var_51;
    MR_String snapshots__Var_52;
    MR_String snapshots__Var_53;
    MR_Integer snapshots__Var_54;
    MR_Box snapshots__conv1_SizeMapWords_21;

    {
      snapshots__Var_23 = mercury__string__words_1_f_0(snapshots__Line_9);
    }
    snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_23)) == (MR_mktag((MR_Integer) 1)));
    if (snapshots__succeeded)
      {
        snapshots__IdStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_23, (MR_Integer) 0)));
        snapshots__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_23, (MR_Integer) 1)));
        snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_24)) == (MR_mktag((MR_Integer) 1)));
        if (snapshots__succeeded)
          {
            snapshots__NumCellsStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_24, (MR_Integer) 0)));
            snapshots__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_24, (MR_Integer) 1)));
            snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_25)) == (MR_mktag((MR_Integer) 1)));
            if (snapshots__succeeded)
              {
                snapshots__NumWordsStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_25, (MR_Integer) 0)));
                snapshots__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_25, (MR_Integer) 1)));
                snapshots__succeeded = (snapshots__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (snapshots__succeeded)
                  {
                    {
                      snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumCellsStr_12, &snapshots__NumCells_14);
                    }
                    if (snapshots__succeeded)
                      {
                        {
                          snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumWordsStr0_13, &snapshots__NumWords0_15);
                        }
                        if (snapshots__succeeded)
                          {
                            {
                              snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__IdStr_11, &snapshots__Id_16);
                            }
                            if (snapshots__succeeded)
                              {
                                MR_Word snapshots__Var_27 = (MR_Word) snapshots__Id_16;
                                MR_Word snapshots__AllocSite0_79;
                                MR_Box snapshots__conv0_AllocSite0_79;
                                MR_Word snapshots__Var_45;
                                MR_Word snapshots__Var_46;
                                MR_Word snapshots__Var_47;

                                {
                                  snapshots__succeeded = mercury__map__search_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, snapshots__AllocSiteMap_7, ((MR_Box) (snapshots__Var_27)), &snapshots__conv0_AllocSite0_79);
                                }
                                if (snapshots__succeeded)
                                  {
                                    snapshots__AllocSite0_79 = ((MR_Word) snapshots__conv0_AllocSite0_79);
                                    snapshots__succeeded = MR_TRUE;
                                  }
                                if (snapshots__succeeded)
                                  snapshots__AllocSite_17 = snapshots__AllocSite0_79;
                                else
                                  snapshots__AllocSite_17 = (MR_Word) &snapshots_scalar_common_3[0];
                                snapshots__Var_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
                                snapshots__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                snapshots__RecalcSize_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                snapshots__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                snapshots__succeeded = MR_TRUE;
                              }
                            else
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "runtime") == 0))
                              {
                                MR_String snapshots__Type_19;
                                MR_Word snapshots__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                MR_String snapshots__Var_40;
                                MR_String snapshots__Var_41;
                                MR_Integer snapshots__Var_42;
                                MR_String snapshots__Var_66;
                                MR_String snapshots__Var_67;
                                MR_Word snapshots__Var_68;
                                MR_Word snapshots__Var_69;
                                MR_Word snapshots__Var_70;
                                MR_Word snapshots__Var_71;
                                MR_Word snapshots__Var_72;
                                MR_Word snapshots__Var_73;
                                MR_String snapshots__Var_74;
                                MR_String snapshots__Var_75;
                                MR_Word snapshots__Var_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
                                MR_Word snapshots__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                MR_Word snapshots__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), snapshots__Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

                                snapshots__succeeded = (snapshots__Var_35 == (MR_Integer) 1);
                                if (snapshots__succeeded)
                                  {
                                    snapshots__Var_66 = (MR_String) " words)";
                                    snapshots__Var_68 = (MR_Integer) 0;
                                    snapshots__Var_69 = (MR_Integer) 0;
                                    snapshots__Var_70 = (MR_Integer) 0;
                                    snapshots__Var_71 = (MR_Integer) 0;
                                    snapshots__Var_72 = (MR_Integer) 0;
                                    snapshots__Var_73 = (MR_Word) &snapshots_scalar_common_4[0];
                                    {
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(snapshots__Var_73, snapshots__NumWords0_15, &snapshots__Var_67);
                                    }
                                    {
                                      snapshots__Var_74 = mercury__string__f_43_43_2_f_0(snapshots__Var_67, snapshots__Var_66);
                                    }
                                    snapshots__Var_75 = (MR_String) "runtime struct (";
                                    {
                                      snapshots__Type_19 = mercury__string__f_43_43_2_f_0(snapshots__Var_75, snapshots__Var_74);
                                    }
                                    snapshots__Var_40 = (MR_String) "unknown";
                                    snapshots__Var_41 = (MR_String) "unknown";
                                    snapshots__Var_42 = (MR_Integer) 0;
                                    snapshots__RecalcSize_18 = (MR_Integer) 0;
                                    {
                                      snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) (snapshots__Var_40));
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_19));
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) (snapshots__Var_41));
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) (snapshots__Var_42));
                                      MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
                                    }
                                    snapshots__succeeded = MR_TRUE;
                                  }
                              }
                            else
                            if ((strcmp(snapshots__IdStr_11, (MR_String) "unknown") == 0))
                              {
                                MR_String snapshots__Type_44;
                                MR_String snapshots__Var_57;
                                MR_String snapshots__Var_64;

                                {
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &snapshots_scalar_common_4[0], snapshots__NumWords0_15, &snapshots__Var_57);
                                }
                                {
                                  snapshots__Var_64 = mercury__string__f_43_43_2_f_0(snapshots__Var_57, (MR_String) " words)");
                                }
                                {
                                  snapshots__Type_44 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", snapshots__Var_64);
                                }
                                {
                                  snapshots__AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 0) = ((MR_Box) ((MR_String) "unknown"));
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 1) = ((MR_Box) (snapshots__Type_44));
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 2) = ((MR_Box) ((MR_String) "unknown"));
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 3) = ((MR_Box) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, 4) = ((MR_Box) (snapshots__NumWords0_15));
                                }
                                snapshots__RecalcSize_18 = (MR_Integer) 0;
                                snapshots__succeeded = MR_TRUE;
                              }
                            else
                              snapshots__succeeded = MR_FALSE;
                            if (snapshots__succeeded)
                              {
                                snapshots__succeeded = (snapshots__RecalcSize_18 == (MR_Integer) 1);
                                if (snapshots__succeeded)
                                  {
                                    snapshots__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 0)));
                                    snapshots__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 1)));
                                    snapshots__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 2)));
                                    snapshots__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 3)));
                                    snapshots__WordsPerCell_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), snapshots__AllocSite_17, (MR_Integer) 4)));
                                    snapshots__Var_43 = (MR_Integer) 0;
                                    snapshots__succeeded = (snapshots__WordsPerCell_20 > snapshots__Var_43);
                                    if (snapshots__succeeded)
                                      {
                                        snapshots__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                        {
                                          snapshots__succeeded = mercury__list__index1_3_p_0(snapshots__TypeCtorInfo_55_55, snapshots__SizeMap_8, snapshots__WordsPerCell_20, &snapshots__conv1_SizeMapWords_21);
                                        }
                                        if (snapshots__succeeded)
                                          {
                                            snapshots__SizeMapWords_21 = ((MR_Integer) snapshots__conv1_SizeMapWords_21);
                                            snapshots__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                                if (snapshots__succeeded)
                                  snapshots__NumWords_22 = (snapshots__NumCells_14 * snapshots__SizeMapWords_21);
                                else
                                  snapshots__NumWords_22 = snapshots__NumWords0_15;
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                  *snapshots__Counts_10 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (snapshots__AllocSite_17));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (snapshots__NumCells_14));
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (snapshots__NumWords_22));
                                }
                                snapshots__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return snapshots__succeeded;
  }
}

static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
  MR_Box snapshots__closure_arg,
  MR_Box snapshots__wrapper_arg_1,
  MR_Box * snapshots__wrapper_arg_2)
{
  {
    MR_bool snapshots__succeeded;
    MR_Box snapshots__closure = snapshots__closure_arg;
    MR_Integer snapshots__conv0_HeadVar__2_2;

    {
      snapshots__succeeded = mercury__string__to_int_2_p_0(((MR_String) snapshots__wrapper_arg_1), &snapshots__conv0_HeadVar__2_2);
    }
    if (snapshots__succeeded)
      {
        *snapshots__wrapper_arg_2 = ((MR_Box) (snapshots__conv0_HeadVar__2_2));
        snapshots__succeeded = MR_TRUE;
      }
    return snapshots__succeeded;
  }
}

static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
  MR_Word snapshots__Stream_6,
  MR_Word * snapshots__AllocSiteMap_7,
  MR_Word * snapshots__SizeMap_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;
        MR_Word snapshots__LineRes_10;

        {
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_6, &snapshots__LineRes_10);
        }
        switch (MR_tag((MR_Word) snapshots__LineRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_decls\'/5", (MR_String) "format error: cannot find declarations");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String snapshots__Line_11 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_10, (MR_Integer) 0)));

              {
                snapshots__succeeded = mercury__string__prefix_2_p_0(snapshots__Line_11, (MR_String) "size_map ");
              }
              if (snapshots__succeeded)
                {
                  MR_Word snapshots__Var_23;
                  MR_Word snapshots__Ints_31;
                  MR_Word snapshots__TypeCtorInfo_15_40;
                  MR_Word snapshots__TypeCtorInfo_16_41;
                  MR_Word snapshots__Words_30;
                  MR_Word snapshots__Var_32;
                  MR_String snapshots__Var_33;
                  MR_Word snapshots__Var_34;

                  {
                    snapshots__Var_32 = mercury__string__words_1_f_0(snapshots__Line_11);
                  }
                  snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_32)) == (MR_mktag((MR_Integer) 1)));
                  if (snapshots__succeeded)
                    {
                      snapshots__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_32, (MR_Integer) 0)));
                      snapshots__Words_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_32, (MR_Integer) 1)));
                      snapshots__succeeded = (strcmp(snapshots__Var_33, (MR_String) "size_map") == 0);
                      if (snapshots__succeeded)
                        {
                          snapshots__Var_34 = (MR_Word) &snapshots_scalar_common_1[1];
                          snapshots__TypeCtorInfo_15_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                          snapshots__TypeCtorInfo_16_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                          {
                            snapshots__succeeded = mercury__list__map_3_p_2(snapshots__TypeCtorInfo_15_40, snapshots__TypeCtorInfo_16_41, snapshots__Var_34, snapshots__Words_30, &snapshots__Ints_31);
                          }
                        }
                    }
                  if (snapshots__succeeded)
                    *snapshots__SizeMap_8 = snapshots__Ints_31;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_size_map\'/2", (MR_String) "format error: bad size_map line");
                        return;
                      }
                    }
                  {
                    snapshots__Var_23 = mercury__map__init_0_f_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0);
                  }
                  {
                    snapshots__parse_alloc_site_lines_5_p_0(snapshots__Stream_6, snapshots__Var_23, snapshots__AllocSiteMap_7);
                  }
                }
              else
                {
                  /* direct tailcall eliminated */
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word snapshots__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_10, (MR_Integer) 0)));
              MR_String snapshots__Var_18;

              {
                snapshots__Var_18 = mercury__io__error_message_1_f_0(snapshots__Error_12);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_decls\'/5", snapshots__Var_18);
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
  MR_Word snapshots__Stream_6,
  MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_0_12,
  MR_Word * snapshots__STATE_VARIABLE_AllocSiteMap_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool snapshots__succeeded;
        MR_Word snapshots__LineRes_9;

        {
          mercury__io__read_line_as_string_4_p_0(snapshots__Stream_6, &snapshots__LineRes_9);
        }
        switch (MR_tag((MR_Word) snapshots__LineRes_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *snapshots__STATE_VARIABLE_AllocSiteMap_13 = snapshots__STATE_VARIABLE_AllocSiteMap_0_12;
            break;
          case (MR_Integer) 1:
            {
              MR_String snapshots__Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__LineRes_9, (MR_Integer) 0)));
              MR_Word snapshots__STATE_VARIABLE_AllocSiteMap_20_20;
              MR_String snapshots__Line_31;
              MR_Word snapshots__Words_32;
              MR_String snapshots__MangledProcName_34;
              MR_String snapshots__FileName_35;
              MR_String snapshots__Type_37;
              MR_Integer snapshots__Id_39;
              MR_Integer snapshots__LineNum_40;
              MR_Integer snapshots__NumWords_41;
              MR_String snapshots__IdStr_33;
              MR_String snapshots__LineNumStr_36;
              MR_String snapshots__NumWordsStr_38;
              MR_Word snapshots__Var_45;
              MR_Word snapshots__Var_46;
              MR_Word snapshots__Var_47;
              MR_Word snapshots__Var_48;
              MR_Word snapshots__Var_49;
              MR_Word snapshots__Var_50;

              {
                snapshots__Line_31 = mercury__string__chomp_1_f_0(snapshots__Line_10);
              }
              {
                snapshots__Words_32 = mercury__string__split_at_char_2_f_0((MR_Char) 9, snapshots__Line_31);
              }
              snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Words_32)) == (MR_mktag((MR_Integer) 1)));
              if (snapshots__succeeded)
                {
                  snapshots__IdStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Words_32, (MR_Integer) 0)));
                  snapshots__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Words_32, (MR_Integer) 1)));
                  snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_45)) == (MR_mktag((MR_Integer) 1)));
                  if (snapshots__succeeded)
                    {
                      snapshots__MangledProcName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_45, (MR_Integer) 0)));
                      snapshots__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_45, (MR_Integer) 1)));
                      snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_46)) == (MR_mktag((MR_Integer) 1)));
                      if (snapshots__succeeded)
                        {
                          snapshots__FileName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_46, (MR_Integer) 0)));
                          snapshots__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_46, (MR_Integer) 1)));
                          snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_47)) == (MR_mktag((MR_Integer) 1)));
                          if (snapshots__succeeded)
                            {
                              snapshots__LineNumStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_47, (MR_Integer) 0)));
                              snapshots__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_47, (MR_Integer) 1)));
                              snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_48)) == (MR_mktag((MR_Integer) 1)));
                              if (snapshots__succeeded)
                                {
                                  snapshots__Type_37 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_48, (MR_Integer) 0)));
                                  snapshots__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_48, (MR_Integer) 1)));
                                  snapshots__succeeded = ((MR_tag((MR_Word) snapshots__Var_49)) == (MR_mktag((MR_Integer) 1)));
                                  if (snapshots__succeeded)
                                    {
                                      snapshots__NumWordsStr_38 = ((MR_String) (MR_hl_field(MR_mktag(1), snapshots__Var_49, (MR_Integer) 0)));
                                      snapshots__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), snapshots__Var_49, (MR_Integer) 1)));
                                      snapshots__succeeded = (snapshots__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (snapshots__succeeded)
                                        {
                                          {
                                            snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__IdStr_33, &snapshots__Id_39);
                                          }
                                          if (snapshots__succeeded)
                                            {
                                              {
                                                snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__LineNumStr_36, &snapshots__LineNum_40);
                                              }
                                              if (snapshots__succeeded)
                                                {
                                                  snapshots__succeeded = mercury__string__to_int_2_p_0(snapshots__NumWordsStr_38, &snapshots__NumWords_41);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (snapshots__succeeded)
                {
                  MR_String snapshots__ProcName_42;
                  MR_Word snapshots__AllocSite_43;
                  MR_Word snapshots__Var_51;

                  {
                    demangle__demangle_2_p_0(snapshots__MangledProcName_34, &snapshots__ProcName_42);
                  }
                  {
                    snapshots__AllocSite_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 0) = ((MR_Box) (snapshots__ProcName_42));
                    MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 1) = ((MR_Box) (snapshots__Type_37));
                    MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 2) = ((MR_Box) (snapshots__FileName_35));
                    MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 3) = ((MR_Box) (snapshots__LineNum_40));
                    MR_hl_field(MR_mktag(0), snapshots__AllocSite_43, 4) = ((MR_Box) (snapshots__NumWords_41));
                  }
                  snapshots__Var_51 = (MR_Word) snapshots__Id_39;
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, ((MR_Box) (snapshots__Var_51)), ((MR_Box) (snapshots__AllocSite_43)), snapshots__STATE_VARIABLE_AllocSiteMap_0_12, &snapshots__STATE_VARIABLE_AllocSiteMap_20_20);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_line\'/5", (MR_String) "format error: bad alloc site declaration");
                    return;
                  }
                }
              /* direct tailcall eliminated */
              {
                MR_Word snapshots__next_value_of_STATE_VARIABLE_AllocSiteMap_0_12 = snapshots__STATE_VARIABLE_AllocSiteMap_20_20;

                snapshots__STATE_VARIABLE_AllocSiteMap_0_12 = snapshots__next_value_of_STATE_VARIABLE_AllocSiteMap_0_12;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word snapshots__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), snapshots__LineRes_9, (MR_Integer) 0)));
              MR_String snapshots__Var_19;

              {
                snapshots__Var_19 = mercury__io__error_message_1_f_0(snapshots__Error_11);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_lines\'/5", snapshots__Var_19);
                return;
              }
            }
            break;
        }
      }
      break;
    }
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

// Ensure everything is compiled with the same grade.
const char *mercury__snapshots__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module snapshots. */
