/*
** Automatically generated from `snapshots.m'
** by the Mercury compiler,
** version rotd-2018-03-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module snapshots.
// :- implementation.

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

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____major_axis_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
snapshots__sum_counts_5_p_0(
  MR_Word Site_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12);

static void MR_CALL 
snapshots__sum_groups_5_p_0(
  MR_Word Group_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12);

static void MR_CALL 
snapshots__counts_by_words_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6);

static void MR_CALL 
snapshots__counts_by_type_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6);

static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6);

static void MR_CALL 
snapshots__group_by_words_3_p_0(
  MR_Word GroupA_4,
  MR_Word GroupB_5,
  MR_Word * Result_6);

static void MR_CALL 
snapshots__output_site_7_p_0(
  MR_Word MajorAxis_8,
  MR_Integer TotalCells_9,
  MR_Integer TotalWords_10,
  MR_Word Single_11,
  MR_Word AllocCounts_12);

static void MR_CALL 
snapshots__output_group_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__output_group_8_p_0(
  MR_Word Options_9,
  MR_Integer TotalCells_10,
  MR_Integer TotalWords_11,
  MR_Word Group_12,
  MR_Integer STATE_VARIABLE_CumulWords_0_28,
  MR_Integer * STATE_VARIABLE_CumulWords_29);

static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void);

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer N_4,
  MR_Integer Total_5);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
  MR_Word Stream_7,
  MR_Word Options_8,
  MR_Word AllocSiteMap_9,
  MR_Word SizeMap_10);

static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_4_p_0(
  MR_Word Options_5,
  MR_Word Grouped_6);

static void MR_CALL 
snapshots__output_column_names_3_p_0(
  MR_Word Options_4);

static void MR_CALL 
snapshots__make_groups_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__make_groups_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__make_groups_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * Groups_6);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * AddrOfGroups_39);

static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * Upto_7,
  MR_Word * After_8);

static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * AddrOfUpto_23,
  MR_Word * After_8);

static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
  MR_Word Stream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AllocCounts_12);

static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
  MR_Word Stream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AddrOfAllocCounts_32);

static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
  MR_Word Options_6,
  MR_Word AllocSiteMap_7,
  MR_Word SizeMap_8,
  MR_String Line_9,
  MR_Word * Counts_10);

static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
  MR_Word Stream_6,
  MR_Word * AllocSiteMap_7,
  MR_Word * SizeMap_8);

static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
  MR_Word Stream_6,
  MR_Word STATE_VARIABLE_AllocSiteMap_0_12,
  MR_Word * STATE_VARIABLE_AllocSiteMap_13);

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_alloc_site_0_0,
  snapshots__snapshots__field_names_alloc_site_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_alloc_site_counts_0_0,
  snapshots__snapshots__field_names_alloc_site_counts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_group_0_0,
  snapshots__snapshots__field_names_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_group_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  snapshots__snapshots__field_types_snapshot_options_0_0,
  snapshots__snapshots__field_names_snapshot_options_0_0,
  snapshots__snapshots__field_locns_snapshot_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1] = {
  &snapshots__snapshots__du_functor_desc_snapshot_options_0_0
};

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_12;
      MR_Integer Var_21 = (MR_Integer) ArgX1_4;
      MR_Integer Var_22 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_12, Var_21, Var_22);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_23 = (MR_Integer) ArgX2_6;
        MR_Integer Var_24 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_23, Var_24);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;
          MR_Integer Var_25 = (MR_Integer) ArgX3_8;
          MR_Integer Var_26 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_25, Var_26);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Integer Var_27 = (MR_Integer) ArgX4_10;
            MR_Integer Var_28 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_27, Var_28);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          snapshots____Compare____alloc_site_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = snapshots____Unify____alloc_site_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_13_13 = (MR_Word) &snapshots_scalar_common_2[0];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &snapshots_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &snapshots_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      snapshots____Compare____alloc_site_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = snapshots____Unify____alloc_site_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_String ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_String ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_String ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_String ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots__sum_counts_5_p_0(
  MR_Word Site_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12)
{
  {
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Site_6, (MR_Integer) 1)));
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Site_6, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Site_6, (MR_Integer) 0)));

    *STATE_VARIABLE_TotalCells_10 = (STATE_VARIABLE_TotalCells_0_9 + Var_14);
    *STATE_VARIABLE_TotalWords_12 = (STATE_VARIABLE_TotalWords_0_11 + Var_18);
  }
}

static void MR_CALL 
snapshots__sum_groups_5_p_0(
  MR_Word Group_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12)
{
  {
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Group_6, (MR_Integer) 0)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Group_6, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Group_6, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Group_6, (MR_Integer) 3)));

    *STATE_VARIABLE_TotalCells_10 = (STATE_VARIABLE_TotalCells_0_9 + Var_14);
    *STATE_VARIABLE_TotalWords_12 = (STATE_VARIABLE_TotalWords_0_11 + Var_17);
  }
}

static void MR_CALL 
snapshots__counts_by_words_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  {
    MR_Integer A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 2)));
    MR_Integer B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 0)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 1)));

    mercury__private_builtin__builtin_compare_int_3_p_0(Result_6, B_8, A_7);
  }
}

static void MR_CALL 
snapshots__counts_by_type_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  {
    MR_String A_7;
    MR_String B_8;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 0)));
    MR_Word Var_10;
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 1)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 2)));
    MR_String Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_String Var_14;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_Integer Var_21;
    MR_Integer Var_22;

    A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 0)));
    Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 1)));
    Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 2)));
    Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
    B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
    Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
    Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
    mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, B_8, A_7);
  }
}

static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  {
    MR_String A_7;
    MR_String B_8;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 0)));
    MR_Word Var_10;
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 1)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsA_4, (MR_Integer) 2)));
    MR_String Var_13;
    MR_String Var_14;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_Integer Var_21;
    MR_Integer Var_22;

    A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 0)));
    Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 1)));
    Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CountsB_5, (MR_Integer) 2)));
    B_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
    Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
    Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
    Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
    mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, B_8, A_7);
  }
}

static void MR_CALL 
snapshots__group_by_words_3_p_0(
  MR_Word GroupA_4,
  MR_Word GroupB_5,
  MR_Word * Result_6)
{
  {
    MR_Integer A_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GroupA_4, (MR_Integer) 1)));
    MR_Integer B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GroupB_5, (MR_Integer) 1)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GroupA_4, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroupA_4, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroupA_4, (MR_Integer) 3)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GroupB_5, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroupB_5, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroupB_5, (MR_Integer) 3)));

    mercury__private_builtin__builtin_compare_int_3_p_0(Result_6, B_8, A_7);
  }
}

static void MR_CALL 
snapshots__output_site_7_p_0(
  MR_Word MajorAxis_8,
  MR_Integer TotalCells_9,
  MR_Integer TotalWords_10,
  MR_Word Single_11,
  MR_Word AllocCounts_12)
{
  {
    MR_bool succeeded;
    MR_Word AllocSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), AllocCounts_12, (MR_Integer) 0)));
    MR_Integer NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocCounts_12, (MR_Integer) 1)));
    MR_Integer NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocCounts_12, (MR_Integer) 2)));
    MR_String Proc_17 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_14, (MR_Integer) 0)));
    MR_String Type_18 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_14, (MR_Integer) 1)));
    MR_String File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_14, (MR_Integer) 2)));
    MR_Integer LineNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_14, (MR_Integer) 3)));
    MR_Float CellsPercent_22;
    MR_Float WordsPercent_23;
    MR_String RightLabel_24;
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_14, (MR_Integer) 4)));

    CellsPercent_22 = snapshots__percentage_2_f_0(NumCells_15, TotalCells_9);
    WordsPercent_23 = snapshots__percentage_2_f_0(NumWords_16, TotalWords_10);
    switch (MajorAxis_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RightLabel_24 = Type_18;
        break;
      case (MR_Integer) 1:
        RightLabel_24 = Proc_17;
        break;
    }
    switch (Single_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float Var_27;
          MR_Float Var_28;

          Var_27 = snapshots__min_percentage_major_0_f_0();
          succeeded = (CellsPercent_22 <= Var_27);
          if (succeeded)
          {
            Var_28 = snapshots__min_percentage_major_0_f_0();
            succeeded = (WordsPercent_23 <= Var_28);
          }
          if (!(succeeded))
          {
            MR_String Var_92;
            MR_Word Var_98;
            MR_String Var_103;
            MR_String Var_116;
            MR_String Var_127;
            MR_String Var_140;
            MR_String Var_157;

            mercury__io__write_string_3_p_0((MR_String) " ");
            Var_98 = (MR_Word) &snapshots_scalar_common_4[0];
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_98, (MR_Integer) 7, NumCells_15, &Var_92);
            mercury__io__write_string_3_p_0(Var_92);
            mercury__io__write_string_3_p_0((MR_String) "/");
            mercury__string__format__format_float_component_width_prec_6_p_0(Var_98, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CellsPercent_22, &Var_103);
            mercury__io__write_string_3_p_0(Var_103);
            mercury__io__write_string_3_p_0((MR_String) "% ");
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_98, (MR_Integer) 9, NumWords_16, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "/");
            mercury__string__format__format_float_component_width_prec_6_p_0(Var_98, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, WordsPercent_23, &Var_127);
            mercury__io__write_string_3_p_0(Var_127);
            mercury__io__write_string_3_p_0((MR_String) "%  ");
            mercury__string__format__format_string_component_width_noprec_4_p_0(Var_98, (MR_Integer) 5, (MR_String) "", &Var_140);
            mercury__io__write_string_3_p_0(Var_140);
            mercury__io__write_string_3_p_0((MR_String) "  ");
            mercury__io__write_string_3_p_0(RightLabel_24);
            mercury__io__write_string_3_p_0((MR_String) " (");
            mercury__io__write_string_3_p_0(File_19);
            mercury__io__write_string_3_p_0((MR_String) ":");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_98, LineNum_20, &Var_157);
            mercury__io__write_string_3_p_0(Var_157);
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_64;
          MR_Word Var_70;
          MR_String Var_81;

          mercury__io__write_string_3_p_0((MR_String) " ");
          Var_70 = (MR_Word) &snapshots_scalar_common_4[0];
          mercury__string__format__format_string_component_width_noprec_4_p_0(Var_70, (MR_Integer) 38, (MR_String) "", &Var_64);
          mercury__io__write_string_3_p_0(Var_64);
          mercury__io__write_string_3_p_0((MR_String) "  ");
          mercury__io__write_string_3_p_0(RightLabel_24);
          mercury__io__write_string_3_p_0((MR_String) " (");
          mercury__io__write_string_3_p_0(File_19);
          mercury__io__write_string_3_p_0((MR_String) ":");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_70, LineNum_20, &Var_81);
          mercury__io__write_string_3_p_0(Var_81);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
        break;
    }
  }
}

static void MR_CALL 
snapshots__output_group_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    snapshots__output_site_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
snapshots__output_group_8_p_0(
  MR_Word Options_9,
  MR_Integer TotalCells_10,
  MR_Integer TotalWords_11,
  MR_Word Group_12,
  MR_Integer STATE_VARIABLE_CumulWords_0_28,
  MR_Integer * STATE_VARIABLE_CumulWords_29)
{
  {
    MR_bool succeeded;
    MR_Integer NumCells_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 0)));
    MR_Integer NumWords_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 1)));
    MR_Word AllocSite_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 2)));
    MR_Word Counts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 3)));
    MR_Float CellsPercent_19;
    MR_Float WordsPercent_20;
    MR_Float CumulPercent_21;
    MR_Float Var_33;
    MR_Float Var_34;

    *STATE_VARIABLE_CumulWords_29 = (STATE_VARIABLE_CumulWords_0_28 + NumWords_16);
    CellsPercent_19 = snapshots__percentage_2_f_0(NumCells_15, TotalCells_10);
    WordsPercent_20 = snapshots__percentage_2_f_0(NumWords_16, TotalWords_11);
    CumulPercent_21 = snapshots__percentage_2_f_0(*STATE_VARIABLE_CumulWords_29, TotalWords_11);
    Var_33 = snapshots__min_percentage_major_0_f_0();
    succeeded = (CellsPercent_19 <= Var_33);
    if (succeeded)
    {
      Var_34 = snapshots__min_percentage_major_0_f_0();
      succeeded = (WordsPercent_20 <= Var_34);
    }
    if (!(succeeded))
    {
      MR_Word MajorAxis_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_9, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word Brief_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_String RightLabel_24;
      MR_Char Star_25;
      MR_String Var_78 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 1)));
      MR_String Var_79 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 0)));
      MR_String Var_81;
      MR_Word Var_87;
      MR_String Var_89;
      MR_String Var_100;
      MR_String Var_113;
      MR_String Var_124;
      MR_String Var_137;
      MR_Word Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 4)));
      MR_Integer Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 3)));
      MR_String Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 2)));

      switch (MajorAxis_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          RightLabel_24 = Var_79;
          break;
        case (MR_Integer) 1:
          RightLabel_24 = Var_78;
          break;
      }
      switch (Brief_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Star_25 = (MR_Char) 42;
          break;
        case (MR_Integer) 1:
          Star_25 = (MR_Char) 32;
          break;
      }
      Var_87 = (MR_Word) &snapshots_scalar_common_4[0];
      mercury__string__format__format_char_component_nowidth_3_p_0(Var_87, Star_25, &Var_81);
      mercury__io__write_string_3_p_0(Var_81);
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_87, (MR_Integer) 7, NumCells_15, &Var_89);
      mercury__io__write_string_3_p_0(Var_89);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__string__format__format_float_component_width_prec_6_p_0(Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CellsPercent_19, &Var_100);
      mercury__io__write_string_3_p_0(Var_100);
      mercury__io__write_string_3_p_0((MR_String) "% ");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_87, (MR_Integer) 9, NumWords_16, &Var_113);
      mercury__io__write_string_3_p_0(Var_113);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__string__format__format_float_component_width_prec_6_p_0(Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, WordsPercent_20, &Var_124);
      mercury__io__write_string_3_p_0(Var_124);
      mercury__io__write_string_3_p_0((MR_String) "% ");
      mercury__string__format__format_float_component_width_prec_6_p_0(Var_87, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CumulPercent_21, &Var_137);
      mercury__io__write_string_3_p_0(Var_137);
      mercury__io__write_string_3_p_0((MR_String) "%  ");
      mercury__io__write_string_3_p_0(RightLabel_24);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      switch (Brief_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Single_26;
            MR_Word Var_53;
            MR_Word Var_52;
            MR_Word Var_27;
            MR_Box conv0_STATE_VARIABLE_IO_54_54;

            succeeded = ((MR_tag((MR_Word) Counts_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Counts_18, (MR_Integer) 0)));
              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Counts_18, (MR_Integer) 1)));
              succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            if (succeeded)
              Single_26 = (MR_Integer) 1;
            else
              Single_26 = (MR_Integer) 0;
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&snapshots_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (snapshots__output_group_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (MajorAxis_22));
              MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (TotalCells_10));
              MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (TotalWords_11));
              MR_hl_field(MR_mktag(0), Var_53, 6) = ((MR_Box) (Single_26));
            }
            mercury__list__foldl_4_p_2((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_53, Counts_18, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
            mercury__io__nl_2_p_0();
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
    return (MR_Float) 0.10000000000000001;
  }
}

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer N_4,
  MR_Integer Total_5)
{
  {
    MR_Float HeadVar__3_3;
    MR_Float Var_6;
    MR_Float Var_8;
    MR_Float Var_9;

    Var_8 = mercury__float__float_1_f_0(N_4);
    Var_6 = (((MR_Float) 100.00000000000000) * Var_8);
    Var_9 = mercury__float__float_1_f_0(Total_5);
    HeadVar__3_3 = mercury__float__f_slash_2_f_0(Var_6, Var_9);
    return HeadVar__3_3;
  }
}

void MR_CALL 
snapshots__show_snapshots_2_p_0(void)
{
  {
    MR_String SnapshotsFile_4;
    MR_Word ByType_5;
    MR_Word Brief_6;
    MR_Word RecalcSize_7;
    MR_Word InclRuntime_8;
    MR_Word MajorAxis_9;
    MR_Word Options_10;
    MR_Word OpenDeclRes_11;
    MR_Word AllocSiteMap_13;
    MR_Word SizeMap_14;
    MR_Word OpenRes_17;

    globals__io_lookup_string_option_4_p_0((MR_Integer) 14, &SnapshotsFile_4);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 15, &ByType_5);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 16, &Brief_6);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 18, &RecalcSize_7);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 17, &InclRuntime_8);
    switch (ByType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MajorAxis_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MajorAxis_9 = (MR_Integer) 1;
        break;
    }
    {
      Options_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Options_10, 0) = ((MR_Box) ((MajorAxis_9 | ((((Brief_6 << (MR_Integer) 1)) | ((((RecalcSize_7 << (MR_Integer) 2)) | ((InclRuntime_8 << (MR_Integer) 3)))))))));
    }
    mercury__io__open_input_4_p_0(SnapshotsFile_4, &OpenDeclRes_11);
    if (((MR_tag((MR_Word) OpenDeclRes_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word DeclError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenDeclRes_11, (MR_Integer) 0)));
      MR_String DeclErrorStr_16;
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_38;
      MR_String Var_39;

      Var_39 = mercury__io__error_message_1_f_0(DeclError_15);
      Var_38 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) "\n");
      Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_38);
      Var_35 = mercury__string__f_43_43_2_f_0(SnapshotsFile_4, Var_36);
      DeclErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_35);
      {
        mercury__require__error_1_p_0(DeclErrorStr_16);
        return;
      }
    }
    else
    {
      MR_Word DeclStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenDeclRes_11, (MR_Integer) 0)));

      snapshots__parse_alloc_site_decls_5_p_0(DeclStream_12, &AllocSiteMap_13, &SizeMap_14);
      mercury__io__close_input_3_p_0(DeclStream_12);
    }
    mercury__io__open_input_4_p_0(SnapshotsFile_4, &OpenRes_17);
    if (((MR_tag((MR_Word) OpenRes_17)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenRes_17, (MR_Integer) 0)));
      MR_String ErrorStr_20;
      MR_String Var_45;
      MR_String Var_46;
      MR_String Var_48;
      MR_String Var_49;

      Var_49 = mercury__io__error_message_1_f_0(Error_19);
      Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "\n");
      Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_48);
      Var_45 = mercury__string__f_43_43_2_f_0(SnapshotsFile_4, Var_46);
      ErrorStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_45);
      {
        mercury__require__error_1_p_0(ErrorStr_20);
        return;
      }
    }
    else
    {
      MR_Word Stream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenRes_17, (MR_Integer) 0)));

      snapshots__show_all_snapshots_6_p_0(Stream_18, Options_10, AllocSiteMap_13, SizeMap_14);
      mercury__io__close_input_3_p_0(Stream_18);
    }
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Result_6;

    snapshots__group_by_words_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv2_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Result_6;

    snapshots__counts_by_type_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    snapshots__counts_by_proc_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_6_p_0(
  MR_Word Stream_7,
  MR_Word Options_8,
  MR_Word AllocSiteMap_9,
  MR_Word SizeMap_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_12;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_4_p_0(Stream_7, &LineRes_12);
    switch (MR_tag((MR_Word) LineRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_12, (MR_Integer) 0)));
          MR_String SnapshotName0_14;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "start ", Line_13, &SnapshotName0_14);
          if (succeeded)
          {
            MR_String SnapshotName_15;
            MR_Word AllocCounts_43;
            MR_Word MajorAxis_44;
            MR_Word Groups_45;
            MR_Word Compare_54;
            MR_Word SortedCounts_55;
            MR_Word Groups_56;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;

            SnapshotName_15 = mercury__string__chomp_1_f_0(SnapshotName0_14);
            mercury__io__write_string_3_p_0((MR_String) "------ ");
            mercury__io__write_string_3_p_0(SnapshotName_15);
            mercury__io__write_string_3_p_0((MR_String) " ------\n");
            snapshots__parse_snapshot_7_p_0(Stream_7, Options_8, AllocSiteMap_9, SizeMap_10, &AllocCounts_43);
            MajorAxis_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 0)))) & (MR_Integer) 1);
            Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            switch (MajorAxis_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Compare_54 = (MR_Word) &snapshots_scalar_common_1[7];
                break;
              case (MR_Integer) 1:
                Compare_54 = (MR_Word) &snapshots_scalar_common_1[8];
                break;
            }
            mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0, Compare_54, AllocCounts_43, &SortedCounts_55);
            snapshots__make_groups_3_p_0(Compare_54, SortedCounts_55, &Groups_56);
            mercury__list__sort_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_group_0, (MR_Word) &snapshots_scalar_common_1[9], Groups_56, &Groups_45);
            snapshots__output_snapshot_4_p_0(Options_8, Groups_45);
            // direct tailcall eliminated
            continue;
          }
          else
          {
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_12, (MR_Integer) 0)));
          MR_String Var_22;

          Var_22 = mercury__io__error_message_1_f_0(Error_16);
          {
            mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.show_all_snapshots\'/6", Var_22);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv4_STATE_VARIABLE_CumulWords_29;

    snapshots__output_group_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv4_STATE_VARIABLE_CumulWords_29);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_CumulWords_29));
  }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_TotalCells_10;
    MR_Integer conv0_STATE_VARIABLE_TotalWords_12;

    snapshots__sum_groups_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_STATE_VARIABLE_TotalCells_10, ((MR_Integer) wrapper_arg_4), &conv0_STATE_VARIABLE_TotalWords_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TotalCells_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__output_snapshot_4_p_0(
  MR_Word Options_5,
  MR_Word Grouped_6)
{
  {
    MR_Word TypeCtorInfo_43_43;
    MR_Word TypeCtorInfo_44_44;
    MR_Integer TotalCells_8;
    MR_Integer TotalWords_9;
    MR_Word Brief_10;
    MR_Word Var_32;
    MR_String Var_54;
    MR_Word Var_60;
    MR_String Var_63;
    MR_String Var_72;
    MR_Box conv3_TotalCells_8;
    MR_Box conv2_TotalWords_9;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer _CumulWords_11;
    MR_Box conv6__CumulWords_11;
    MR_Box conv5_STATE_VARIABLE_IO_13;

    snapshots__output_column_names_3_p_0(Options_5);
    TypeCtorInfo_43_43 = (MR_Word) &snapshots__snapshots__type_ctor_info_group_0;
    TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__foldl2_6_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, TypeCtorInfo_44_44, (MR_Word) &snapshots_scalar_common_1[6], Grouped_6, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalCells_8, ((MR_Box) ((MR_Integer) 0)), &conv2_TotalWords_9);
    TotalCells_8 = ((MR_Integer) conv3_TotalCells_8);
    TotalWords_9 = ((MR_Integer) conv2_TotalWords_9);
    mercury__io__write_string_3_p_0((MR_String) " ");
    Var_60 = (MR_Word) &snapshots_scalar_common_4[0];
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_60, (MR_Integer) 7, TotalCells_8, &Var_54);
    mercury__io__write_string_3_p_0(Var_54);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(Var_60, (MR_Integer) 17, TotalWords_9, &Var_63);
    mercury__io__write_string_3_p_0(Var_63);
    mercury__string__format__format_string_component_width_noprec_4_p_0(Var_60, (MR_Integer) 14, (MR_String) "", &Var_72);
    mercury__io__write_string_3_p_0(Var_72);
    mercury__io__write_string_3_p_0((MR_String) "  ");
    mercury__io__write_string_3_p_0((MR_String) "total");
    mercury__io__write_string_3_p_0((MR_String) "\n");
    Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    Brief_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    switch (Brief_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__nl_2_p_0();
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&snapshots_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (snapshots__output_snapshot_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Options_5));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TotalCells_8));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (TotalWords_9));
    }
    mercury__list__foldl2_6_p_2(TypeCtorInfo_43_43, TypeCtorInfo_44_44, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_32, Grouped_6, ((MR_Box) ((MR_Integer) 0)), &conv6__CumulWords_11, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_13);
    _CumulWords_11 = ((MR_Integer) conv6__CumulWords_11);
  }
}

static void MR_CALL 
snapshots__output_column_names_3_p_0(
  MR_Word Options_4)
{
  {
    MR_Word MajorAxis_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_String RightLabel_7;
    MR_String Var_30;
    MR_Word Var_36;
    MR_String Var_39;
    MR_String Var_48;
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    switch (MajorAxis_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RightLabel_7 = (MR_String) "procedure / type (location)";
        break;
      case (MR_Integer) 1:
        RightLabel_7 = (MR_String) "type / procedure (location)";
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) " ");
    Var_36 = (MR_Word) &snapshots_scalar_common_4[0];
    mercury__string__format__format_string_component_width_noprec_4_p_0(Var_36, (MR_Integer) 7, (MR_String) "cells", &Var_30);
    mercury__io__write_string_3_p_0(Var_30);
    mercury__string__format__format_string_component_width_noprec_4_p_0(Var_36, (MR_Integer) 17, (MR_String) "words", &Var_39);
    mercury__io__write_string_3_p_0(Var_39);
    mercury__string__format__format_string_component_width_noprec_4_p_0(Var_36, (MR_Integer) 14, (MR_String) "cumul", &Var_48);
    mercury__io__write_string_3_p_0(Var_48);
    mercury__io__write_string_3_p_0((MR_String) "  ");
    mercury__io__write_string_3_p_0(RightLabel_7);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_TotalCells_10;
    MR_Integer conv1_STATE_VARIABLE_TotalWords_12;

    snapshots__sum_counts_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) wrapper_arg_4), &conv1_STATE_VARIABLE_TotalWords_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TotalCells_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    snapshots__counts_by_words_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__make_groups_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * Groups_6)
{
  if ((Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Groups_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word TypeCtorInfo_17_28;
    MR_Word TypeCtorInfo_26_37;
    MR_Word First_9;
    MR_Word Rest_10;
    MR_Word FirstGroup_11;
    MR_Word SortedCounts0_16;
    MR_Word SortedCounts_17;
    MR_Integer TotalCells_18;
    MR_Integer TotalWords_19;
    MR_Word FirstSite_20;
    MR_Word Var_25;
    MR_Box conv4_TotalCells_18;
    MR_Box conv3_TotalWords_19;
    MR_Box conv5_Var_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Word * AddrRestGroups_38;

    snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(Compare_4, Counts_5, &First_9, &Rest_10);
    TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
    mercury__list__sort_2_p_0(TypeCtorInfo_17_28, First_9, &SortedCounts0_16);
    mercury__list__sort_3_p_0(TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[4], SortedCounts0_16, &SortedCounts_17);
    TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__foldl2_6_p_0(TypeCtorInfo_17_28, TypeCtorInfo_26_37, TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[5], SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalWords_19);
    TotalCells_18 = ((MR_Integer) conv4_TotalCells_18);
    TotalWords_19 = ((MR_Integer) conv3_TotalWords_19);
    conv5_Var_25 = mercury__list__det_head_1_f_0(TypeCtorInfo_17_28, SortedCounts_17);
    Var_25 = ((MR_Word) conv5_Var_25);
    FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
    Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
    Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 2)));
    {
      FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstGroup_11, 0) = ((MR_Box) (TotalCells_18));
      MR_hl_field(MR_mktag(0), FirstGroup_11, 1) = ((MR_Box) (TotalWords_19));
      MR_hl_field(MR_mktag(0), FirstGroup_11, 2) = ((MR_Box) (FirstSite_20));
      MR_hl_field(MR_mktag(0), FirstGroup_11, 3) = ((MR_Box) (SortedCounts_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Groups_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstGroup_11));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *Groups_6, (MR_Integer) 1));
    snapshots__LCMCpr_make_groups_1_3_p_0(Compare_4, Rest_10, AddrRestGroups_38);
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_TotalCells_10;
    MR_Integer conv1_STATE_VARIABLE_TotalWords_12;

    snapshots__sum_counts_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) wrapper_arg_4), &conv1_STATE_VARIABLE_TotalWords_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TotalCells_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TotalWords_12));
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    snapshots__counts_by_words_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
snapshots__LCMCpr_make_groups_1_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * AddrOfGroups_39)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((Counts_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfGroups_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word TypeCtorInfo_17_28;
      MR_Word TypeCtorInfo_26_37;
      MR_Word First_9;
      MR_Word Rest_10;
      MR_Word FirstGroup_11;
      MR_Word SortedCounts0_16;
      MR_Word SortedCounts_17;
      MR_Integer TotalCells_18;
      MR_Integer TotalWords_19;
      MR_Word FirstSite_20;
      MR_Word Var_25;
      MR_Box conv4_TotalCells_18;
      MR_Box conv3_TotalWords_19;
      MR_Box conv5_Var_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Word * AddrRestGroups_38;
      MR_Word Groups_40;
      MR_Word next_value_of_Counts_5;
      MR_Word * next_value_of_AddrOfGroups_39;

      snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(Compare_4, Counts_5, &First_9, &Rest_10);
      TypeCtorInfo_17_28 = (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_counts_0;
      mercury__list__sort_2_p_0(TypeCtorInfo_17_28, First_9, &SortedCounts0_16);
      mercury__list__sort_3_p_0(TypeCtorInfo_17_28, (MR_Word) &snapshots_scalar_common_1[2], SortedCounts0_16, &SortedCounts_17);
      TypeCtorInfo_26_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__list__foldl2_6_p_0(TypeCtorInfo_17_28, TypeCtorInfo_26_37, TypeCtorInfo_26_37, (MR_Word) &snapshots_scalar_common_1[3], SortedCounts_17, ((MR_Box) ((MR_Integer) 0)), &conv4_TotalCells_18, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalWords_19);
      TotalCells_18 = ((MR_Integer) conv4_TotalCells_18);
      TotalWords_19 = ((MR_Integer) conv3_TotalWords_19);
      conv5_Var_25 = mercury__list__det_head_1_f_0(TypeCtorInfo_17_28, SortedCounts_17);
      Var_25 = ((MR_Word) conv5_Var_25);
      FirstSite_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
      Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
      Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 2)));
      {
        FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstGroup_11, 0) = ((MR_Box) (TotalCells_18));
        MR_hl_field(MR_mktag(0), FirstGroup_11, 1) = ((MR_Box) (TotalWords_19));
        MR_hl_field(MR_mktag(0), FirstGroup_11, 2) = ((MR_Box) (FirstSite_20));
        MR_hl_field(MR_mktag(0), FirstGroup_11, 3) = ((MR_Box) (SortedCounts_17));
      }
      {
        Groups_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Groups_40, 0) = ((MR_Box) (FirstGroup_11));
        MR_hl_field(MR_mktag(1), Groups_40, 1) = NULL;
      }
      AddrRestGroups_38 = (MR_Word *) &(MR_hl_field(MR_mktag(1), Groups_40, (MR_Integer) 1));
      *AddrOfGroups_39 = Groups_40;
      // direct tailcall eliminated
      next_value_of_Counts_5 = Rest_10;
      next_value_of_AddrOfGroups_39 = AddrRestGroups_38;
      Counts_5 = next_value_of_Counts_5;
      AddrOfGroups_39 = next_value_of_AddrOfGroups_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * Upto_7,
  MR_Word * After_8)
{
  if ((List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *Upto_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1)));
    MR_Box Var_21 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));

    if ((Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Upto_7 = List_6;
      *After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Box B_11 = (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0));
      MR_Word Cmp_13;
      MR_Word Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Compare_5, (MR_Integer) 1)));
      MR_Box conv1_Cmp_13;

      func_0(((MR_Box) Compare_5), Var_21, B_11, &conv1_Cmp_13);
      Cmp_13 = ((MR_Word) conv1_Cmp_13);
      switch (Cmp_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Upto_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = Var_21;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *After_8 = Var_20;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word * AddrUpto0_22;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Upto_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = Var_21;
              MR_hl_field(MR_mktag(1), base, 1) = NULL;
            }
            AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *Upto_7, (MR_Integer) 1));
            snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(Compare_5, Var_20, AddrUpto0_22, After_8);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
snapshots__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_49_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * AddrOfUpto_23,
  MR_Word * After_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *AddrOfUpto_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1)));
      MR_Box Var_21 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));

      if ((Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *AddrOfUpto_23 = List_6;
        *After_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Box B_11 = (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0));
        MR_Word Cmp_13;
        MR_Word Cs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Compare_5, (MR_Integer) 1)));
        MR_Box conv1_Cmp_13;

        func_0(((MR_Box) Compare_5), Var_21, B_11, &conv1_Cmp_13);
        Cmp_13 = ((MR_Word) conv1_Cmp_13);
        switch (Cmp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Upto_25;

              {
                Upto_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Upto_25, 0) = Var_21;
                MR_hl_field(MR_mktag(1), Upto_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *AddrOfUpto_23 = Upto_25;
              *After_8 = Var_20;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word * AddrUpto0_22;
              MR_Word Upto_26;
              MR_Word next_value_of_List_6;
              MR_Word * next_value_of_AddrOfUpto_23;

              {
                Upto_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Upto_26, 0) = Var_21;
                MR_hl_field(MR_mktag(1), Upto_26, 1) = NULL;
              }
              AddrUpto0_22 = (MR_Word *) &(MR_hl_field(MR_mktag(1), Upto_26, (MR_Integer) 1));
              *AddrOfUpto_23 = Upto_26;
              // direct tailcall eliminated
              next_value_of_List_6 = Var_20;
              next_value_of_AddrOfUpto_23 = AddrUpto0_22;
              List_6 = next_value_of_List_6;
              AddrOfUpto_23 = next_value_of_AddrOfUpto_23;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
snapshots__parse_snapshot_7_p_0(
  MR_Word Stream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AllocCounts_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_14;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_4_p_0(Stream_8, &LineRes_14);
    switch (MR_tag((MR_Word) LineRes_14)) {
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
          MR_String Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_14, (MR_Integer) 0)));

          succeeded = mercury__string__prefix_2_p_0(Line_15, (MR_String) "end ");
          if (succeeded)
            *AllocCounts_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word Counts_16;

            succeeded = snapshots__parse_alloc_site_5_p_0(Options_9, AllocSiteMap_10, SizeMap_11, Line_15, &Counts_16);
            if (succeeded)
            {
              MR_Word * AddrRestCounts_31;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *AllocCounts_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Counts_16));
                MR_hl_field(MR_mktag(1), base, 1) = NULL;
              }
              AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *AllocCounts_12, (MR_Integer) 1));
              snapshots__LCMCpr_parse_snapshot_1_7_p_0(Stream_8, Options_9, AllocSiteMap_10, SizeMap_11, AddrRestCounts_31);
            }
            else
            {
              // direct tailcall eliminated
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_14, (MR_Integer) 0)));
          MR_String Var_24;

          Var_24 = mercury__io__error_message_1_f_0(Error_18);
          {
            mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", Var_24);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__LCMCpr_parse_snapshot_1_7_p_0(
  MR_Word Stream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AddrOfAllocCounts_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_14;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_4_p_0(Stream_8, &LineRes_14);
    switch (MR_tag((MR_Word) LineRes_14)) {
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
          MR_String Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_14, (MR_Integer) 0)));

          succeeded = mercury__string__prefix_2_p_0(Line_15, (MR_String) "end ");
          if (succeeded)
          {
            *AddrOfAllocCounts_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Word Counts_16;

            succeeded = snapshots__parse_alloc_site_5_p_0(Options_9, AllocSiteMap_10, SizeMap_11, Line_15, &Counts_16);
            if (succeeded)
            {
              MR_Word * AddrRestCounts_31;
              MR_Word AllocCounts_33;
              MR_Word * next_value_of_AddrOfAllocCounts_32;

              {
                AllocCounts_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllocCounts_33, 0) = ((MR_Box) (Counts_16));
                MR_hl_field(MR_mktag(1), AllocCounts_33, 1) = NULL;
              }
              AddrRestCounts_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), AllocCounts_33, (MR_Integer) 1));
              *AddrOfAllocCounts_32 = AllocCounts_33;
              // direct tailcall eliminated
              next_value_of_AddrOfAllocCounts_32 = AddrRestCounts_31;
              AddrOfAllocCounts_32 = next_value_of_AddrOfAllocCounts_32;
              continue;
            }
            else
            {
              // direct tailcall eliminated
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_14, (MR_Integer) 0)));
          MR_String Var_24;

          Var_24 = mercury__io__error_message_1_f_0(Error_18);
          {
            mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_snapshot\'/7", Var_24);
            return;
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
snapshots__parse_alloc_site_5_p_0(
  MR_Word Options_6,
  MR_Word AllocSiteMap_7,
  MR_Word SizeMap_8,
  MR_String Line_9,
  MR_Word * Counts_10)
{
  {
    MR_bool succeeded;
    MR_String IdStr_11;
    MR_String NumCellsStr_12;
    MR_String NumWordsStr0_13;
    MR_Integer NumCells_14;
    MR_Integer NumWords0_15;
    MR_Word AllocSite_17;
    MR_Word RecalcSize_18;
    MR_Integer NumWords_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Id_16;
    MR_Integer SizeMapWords_21;
    MR_Word TypeCtorInfo_55_55;
    MR_Integer WordsPerCell_20;
    MR_Integer Var_43;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_53;
    MR_Integer Var_54;
    MR_Box conv1_SizeMapWords_21;

    Var_23 = mercury__string__words_1_f_0(Line_9);
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      IdStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        NumCellsStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0)));
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          NumWordsStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
          succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = mercury__string__to_int_2_p_0(NumCellsStr_12, &NumCells_14);
            if (succeeded)
            {
              succeeded = mercury__string__to_int_2_p_0(NumWordsStr0_13, &NumWords0_15);
              if (succeeded)
              {
                succeeded = mercury__string__to_int_2_p_0(IdStr_11, &Id_16);
                if (succeeded)
                {
                  MR_Word Var_27 = (MR_Word) Id_16;
                  MR_Word AllocSite0_79;
                  MR_Box conv0_AllocSite0_79;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word Var_47;

                  succeeded = mercury__map__search_3_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, AllocSiteMap_7, ((MR_Box) (Var_27)), &conv0_AllocSite0_79);
                  if (succeeded)
                  {
                    AllocSite0_79 = ((MR_Word) conv0_AllocSite0_79);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    AllocSite_17 = AllocSite0_79;
                  else
                    AllocSite_17 = (MR_Word) &snapshots_scalar_common_3[0];
                  Var_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
                  Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  RecalcSize_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(IdStr_11, (MR_String) "runtime") == 0))
                {
                  MR_String Type_19;
                  MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_String Var_40;
                  MR_String Var_41;
                  MR_Integer Var_42;
                  MR_String Var_66;
                  MR_String Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_String Var_74;
                  MR_String Var_75;
                  MR_Word Var_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Options_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

                  succeeded = (Var_35 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_66 = (MR_String) " words)";
                    Var_68 = (MR_Integer) 0;
                    Var_69 = (MR_Integer) 0;
                    Var_70 = (MR_Integer) 0;
                    Var_71 = (MR_Integer) 0;
                    Var_72 = (MR_Integer) 0;
                    Var_73 = (MR_Word) &snapshots_scalar_common_4[0];
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_73, NumWords0_15, &Var_67);
                    Var_74 = mercury__string__f_43_43_2_f_0(Var_67, Var_66);
                    Var_75 = (MR_String) "runtime struct (";
                    Type_19 = mercury__string__f_43_43_2_f_0(Var_75, Var_74);
                    Var_40 = (MR_String) "unknown";
                    Var_41 = (MR_String) "unknown";
                    Var_42 = (MR_Integer) 0;
                    RecalcSize_18 = (MR_Integer) 0;
                    {
                      AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), AllocSite_17, 0) = ((MR_Box) (Var_40));
                      MR_hl_field(MR_mktag(0), AllocSite_17, 1) = ((MR_Box) (Type_19));
                      MR_hl_field(MR_mktag(0), AllocSite_17, 2) = ((MR_Box) (Var_41));
                      MR_hl_field(MR_mktag(0), AllocSite_17, 3) = ((MR_Box) (Var_42));
                      MR_hl_field(MR_mktag(0), AllocSite_17, 4) = ((MR_Box) (NumWords0_15));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                else
                if ((strcmp(IdStr_11, (MR_String) "unknown") == 0))
                {
                  MR_String Type_44;
                  MR_String Var_57;
                  MR_String Var_64;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &snapshots_scalar_common_4[0], NumWords0_15, &Var_57);
                  Var_64 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) " words)");
                  Type_44 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", Var_64);
                  {
                    AllocSite_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), AllocSite_17, 0) = ((MR_Box) ((MR_String) "unknown"));
                    MR_hl_field(MR_mktag(0), AllocSite_17, 1) = ((MR_Box) (Type_44));
                    MR_hl_field(MR_mktag(0), AllocSite_17, 2) = ((MR_Box) ((MR_String) "unknown"));
                    MR_hl_field(MR_mktag(0), AllocSite_17, 3) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), AllocSite_17, 4) = ((MR_Box) (NumWords0_15));
                  }
                  RecalcSize_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  succeeded = (RecalcSize_18 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 0)));
                    Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 1)));
                    Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 2)));
                    Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 3)));
                    WordsPerCell_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AllocSite_17, (MR_Integer) 4)));
                    Var_43 = (MR_Integer) 0;
                    succeeded = (WordsPerCell_20 > Var_43);
                    if (succeeded)
                    {
                      TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                      succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_55_55, SizeMap_8, WordsPerCell_20, &conv1_SizeMapWords_21);
                      if (succeeded)
                      {
                        SizeMapWords_21 = ((MR_Integer) conv1_SizeMapWords_21);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    NumWords_22 = (NumCells_14 * SizeMapWords_21);
                  else
                    NumWords_22 = NumWords0_15;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    *Counts_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AllocSite_17));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumCells_14));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NumWords_22));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    succeeded = mercury__string__to_int_2_p_0(((MR_String) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
snapshots__parse_alloc_site_decls_5_p_0(
  MR_Word Stream_6,
  MR_Word * AllocSiteMap_7,
  MR_Word * SizeMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_10;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_4_p_0(Stream_6, &LineRes_10);
    switch (MR_tag((MR_Word) LineRes_10)) {
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
          MR_String Line_11 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_10, (MR_Integer) 0)));

          succeeded = mercury__string__prefix_2_p_0(Line_11, (MR_String) "size_map ");
          if (succeeded)
          {
            MR_Word Var_23;
            MR_Word Ints_31;
            MR_Word TypeCtorInfo_15_40;
            MR_Word TypeCtorInfo_16_41;
            MR_Word Words_30;
            MR_Word Var_32;
            MR_String Var_33;
            MR_Word Var_34;

            Var_32 = mercury__string__words_1_f_0(Line_11);
            succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_33 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0)));
              Words_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1)));
              succeeded = (strcmp(Var_33, (MR_String) "size_map") == 0);
              if (succeeded)
              {
                Var_34 = (MR_Word) &snapshots_scalar_common_1[1];
                TypeCtorInfo_15_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                TypeCtorInfo_16_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                succeeded = mercury__list__map_3_p_2(TypeCtorInfo_15_40, TypeCtorInfo_16_41, Var_34, Words_30, &Ints_31);
              }
            }
            if (succeeded)
              *SizeMap_8 = Ints_31;
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_size_map\'/2", (MR_String) "format error: bad size_map line");
                return;
              }
            }
            Var_23 = mercury__map__init_0_f_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0);
            snapshots__parse_alloc_site_lines_5_p_0(Stream_6, Var_23, AllocSiteMap_7);
          }
          else
          {
            // direct tailcall eliminated
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_10, (MR_Integer) 0)));
          MR_String Var_18;

          Var_18 = mercury__io__error_message_1_f_0(Error_12);
          {
            mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_decls\'/5", Var_18);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__parse_alloc_site_lines_5_p_0(
  MR_Word Stream_6,
  MR_Word STATE_VARIABLE_AllocSiteMap_0_12,
  MR_Word * STATE_VARIABLE_AllocSiteMap_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_9;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_4_p_0(Stream_6, &LineRes_9);
    switch (MR_tag((MR_Word) LineRes_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AllocSiteMap_13 = STATE_VARIABLE_AllocSiteMap_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_9, (MR_Integer) 0)));
          MR_Word STATE_VARIABLE_AllocSiteMap_20_20;
          MR_String Line_31;
          MR_Word Words_32;
          MR_String MangledProcName_34;
          MR_String FileName_35;
          MR_String Type_37;
          MR_Integer Id_39;
          MR_Integer LineNum_40;
          MR_Integer NumWords_41;
          MR_String IdStr_33;
          MR_String LineNumStr_36;
          MR_String NumWordsStr_38;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word next_value_of_STATE_VARIABLE_AllocSiteMap_0_12;

          Line_31 = mercury__string__chomp_1_f_0(Line_10);
          Words_32 = mercury__string__split_at_char_2_f_0((MR_Char) 9, Line_31);
          succeeded = ((MR_tag((MR_Word) Words_32)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            IdStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), Words_32, (MR_Integer) 0)));
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Words_32, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              MangledProcName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0)));
              Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                FileName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
                Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  LineNumStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Type_37 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      NumWordsStr_38 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0)));
                      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1)));
                      succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(IdStr_33, &Id_39);
                        if (succeeded)
                        {
                          succeeded = mercury__string__to_int_2_p_0(LineNumStr_36, &LineNum_40);
                          if (succeeded)
                            succeeded = mercury__string__to_int_2_p_0(NumWordsStr_38, &NumWords_41);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_String ProcName_42;
            MR_Word AllocSite_43;
            MR_Word Var_51;

            demangle__demangle_2_p_0(MangledProcName_34, &ProcName_42);
            {
              AllocSite_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AllocSite_43, 0) = ((MR_Box) (ProcName_42));
              MR_hl_field(MR_mktag(0), AllocSite_43, 1) = ((MR_Box) (Type_37));
              MR_hl_field(MR_mktag(0), AllocSite_43, 2) = ((MR_Box) (FileName_35));
              MR_hl_field(MR_mktag(0), AllocSite_43, 3) = ((MR_Box) (LineNum_40));
              MR_hl_field(MR_mktag(0), AllocSite_43, 4) = ((MR_Box) (NumWords_41));
            }
            Var_51 = (MR_Word) Id_39;
            mercury__map__det_insert_4_p_0((MR_Word) &snapshots__snapshots__type_ctor_info_alloc_id_0, (MR_Word) &snapshots__snapshots__type_ctor_info_alloc_site_0, ((MR_Box) (Var_51)), ((MR_Box) (AllocSite_43)), STATE_VARIABLE_AllocSiteMap_0_12, &STATE_VARIABLE_AllocSiteMap_20_20);
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_line\'/5", (MR_String) "format error: bad alloc site declaration");
              return;
            }
          }
          // direct tailcall eliminated
          next_value_of_STATE_VARIABLE_AllocSiteMap_0_12 = STATE_VARIABLE_AllocSiteMap_20_20;
          STATE_VARIABLE_AllocSiteMap_0_12 = next_value_of_STATE_VARIABLE_AllocSiteMap_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_9, (MR_Integer) 0)));
          MR_String Var_19;

          Var_19 = mercury__io__error_message_1_f_0(Error_11);
          {
            mercury__require__unexpected_3_p_0((MR_String) "snapshots", (MR_String) "predicate \140snapshots.parse_alloc_site_lines\'/5", Var_19);
            return;
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____alloc_id_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____alloc_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____alloc_site_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____alloc_site_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____alloc_site_counts_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____alloc_site_counts_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____alloc_site_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____alloc_site_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____major_axis_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____major_axis_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____size_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____size_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = snapshots____Unify____snapshot_options_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    snapshots____Compare____snapshot_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module snapshots.
