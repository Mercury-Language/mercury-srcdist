/*
** Automatically generated from `snapshots.m'
** by the Mercury compiler,
** version rotd-2024-04-30
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_ordinal_ordered_major_axis_0[2];

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
  MR_Word HeadVar__1_1,
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
snapshots__output_site_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MajorAxis_10,
  MR_Integer TotalCells_11,
  MR_Integer TotalWords_12,
  MR_Word Single_13,
  MR_Word AllocCounts_14);

static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void);

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer N_4,
  MR_Integer Total_5);

static void MR_CALL 
snapshots__output_group_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__output_group_9_p_0(
  MR_Word OutputStream_10,
  MR_Word Options_11,
  MR_Integer TotalCells_12,
  MR_Integer TotalWords_13,
  MR_Word Group_14,
  MR_Integer STATE_VARIABLE_CumulWords_0_30,
  MR_Integer * STATE_VARIABLE_CumulWords_31);

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0(
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Options_10,
  MR_Word AllocSiteMap_11,
  MR_Word SizeMap_12);

static void MR_CALL 
snapshots__output_snapshot_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__output_snapshot_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Options_7,
  MR_Word Grouped_8);

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
snapshots__LCMC__pred__make_groups__1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
snapshots__LCMC__pred__make_groups__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
snapshots__LCMC__pred__make_groups__1_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * AddrOfGroups_29);

static void MR_CALL 
snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * Upto_7,
  MR_Word * After_8);

static void MR_CALL 
snapshots__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * AddrOfUpto_23,
  MR_Word * After_8);

static void MR_CALL 
snapshots__read_and_parse_snapshot_7_p_0(
  MR_Word InputStream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AllocCounts_12);

static void MR_CALL 
snapshots__LCMC__pred__read_and_parse_snapshot__1_7_p_0(
  MR_Word InputStream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AddrOfAllocCounts_98);

static MR_bool MR_CALL 
snapshots__read_and_parse_alloc_site_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
snapshots__read_and_parse_alloc_site_decls_5_p_0(
  MR_Word InputStream_6,
  MR_Word * AllocSiteMap_7,
  MR_Word * SizeMap_8);

static void MR_CALL 
snapshots__read_and_parse_alloc_site_lines_5_p_0(
  MR_Word InputStream_6,
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

static /* final */ const MR_Box snapshots_scalar_common_3[1][1];

static /* final */ const MR_Box snapshots_scalar_common_4[2][5];

static /* final */ const MR_Box snapshots_scalar_common_5[2][6];

static /* final */ const MR_Box snapshots_scalar_common_6[2][8];

static /* final */ const MR_Box snapshots_scalar_common_7[1][12];

static /* final */ const MR_Box snapshots_scalar_common_8[1][11];




static /* final */ const MR_Box snapshots_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_id_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&snapshots_scalar_common_4[1])),
    ((MR_Box) (snapshots__read_and_parse_alloc_site_decls_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__LCMC__pred__make_groups__1_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__LCMC__pred__make_groups__1_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[0])),
    ((MR_Box) (snapshots__make_groups_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&snapshots_scalar_common_6[1])),
    ((MR_Box) (snapshots__output_snapshot_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__show_all_snapshots_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[0])),
    ((MR_Box) (snapshots__show_all_snapshots_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&snapshots_scalar_common_5[1])),
    ((MR_Box) (snapshots__show_all_snapshots_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box snapshots_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "(unknown)")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box snapshots_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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

static /* final */ const MR_Box snapshots_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_major_axis_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_Integer snapshots__snapshots__functor_number_map_alloc_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc snapshots__snapshots__notag_functor_desc_alloc_id_0 = {
  (MR_String) "alloc_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (snapshots____Unify____alloc_id_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_id_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_id",
  { &snapshots__snapshots__notag_functor_desc_alloc_id_0 },
  { &snapshots__snapshots__notag_functor_desc_alloc_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  snapshots__snapshots__functor_number_map_alloc_id_0,

};

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  snapshots__snapshots__field_types_alloc_site_0_0,
  snapshots__snapshots__field_names_alloc_site_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_0_0[1] = { &snapshots__snapshots__du_functor_desc_alloc_site_0_0 };

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_0[1] = { &snapshots__snapshots__du_functor_desc_alloc_site_0_0 };

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____alloc_site_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site",
  { snapshots__snapshots__du_name_ordered_alloc_site_0 },
  { snapshots__snapshots__du_ptag_ordered_alloc_site_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  snapshots__snapshots__functor_number_map_alloc_site_0,

};

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_alloc_site_counts_0_0[3] = {
  (MR_PseudoTypeInfo) (&snapshots__snapshots__type_ctor_info_alloc_site_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString snapshots__snapshots__field_names_alloc_site_counts_0_0[3] = {
  (MR_String) "asc_alloc_site",
  (MR_String) "asc_num_cells",
  (MR_String) "asc_num_words"
};

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0 = {
  (MR_String) "alloc_site_counts",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  snapshots__snapshots__field_types_alloc_site_counts_0_0,
  snapshots__snapshots__field_names_alloc_site_counts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0[1] = { &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0 };

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_alloc_site_counts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_alloc_site_counts_0[1] = { &snapshots__snapshots__du_functor_desc_alloc_site_counts_0_0 };

static const MR_Integer snapshots__snapshots__functor_number_map_alloc_site_counts_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_counts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____alloc_site_counts_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_counts_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site_counts",
  { snapshots__snapshots__du_name_ordered_alloc_site_counts_0 },
  { snapshots__snapshots__du_ptag_ordered_alloc_site_counts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  snapshots__snapshots__functor_number_map_alloc_site_counts_0,

};

static const MR_FA_TypeInfo_Struct2 snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&snapshots__snapshots__type_ctor_info_alloc_id_0),
    (MR_TypeInfo) (&snapshots__snapshots__type_ctor_info_alloc_site_0)
  }
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_alloc_site_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (snapshots____Unify____alloc_site_map_0_0_10001)),
  ((MR_Box) (snapshots____Compare____alloc_site_map_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "alloc_site_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&snapshots__tree234__ti_tree234_2snapshots__type_ctor_info_alloc_id_0snapshots__type_ctor_info_alloc_site_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0) }
};

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_group_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&snapshots__snapshots__type_ctor_info_alloc_site_0),
  (MR_PseudoTypeInfo) (&snapshots__list__ti_list_1snapshots__type_ctor_info_alloc_site_counts_0)
};

static const MR_ConstString snapshots__snapshots__field_names_group_0_0[4] = {
  (MR_String) "g_total_cells",
  (MR_String) "g_total_words",
  (MR_String) "g_representative",
  (MR_String) "g_details"
};

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_group_0_0 = {
  (MR_String) "group",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  snapshots__snapshots__field_types_group_0_0,
  snapshots__snapshots__field_names_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_group_0_0[1] = { &snapshots__snapshots__du_functor_desc_group_0_0 };

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_group_0[1] = { &snapshots__snapshots__du_functor_desc_group_0_0 };

static const MR_Integer snapshots__snapshots__functor_number_map_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____group_0_0_10001)),
  ((MR_Box) (snapshots____Compare____group_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "group",
  { snapshots__snapshots__du_name_ordered_group_0 },
  { snapshots__snapshots__du_ptag_ordered_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  snapshots__snapshots__functor_number_map_group_0,

};

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_0 = {
  (MR_String) "major_axis_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc snapshots__snapshots__enum_functor_desc_major_axis_0_1 = {
  (MR_String) "major_axis_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr snapshots__snapshots__enum_ordinal_ordered_major_axis_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (snapshots____Unify____major_axis_0_0_10001)),
  ((MR_Box) (snapshots____Compare____major_axis_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "major_axis",
  { snapshots__snapshots__enum_name_ordered_major_axis_0 },
  { snapshots__snapshots__enum_ordinal_ordered_major_axis_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  snapshots__snapshots__functor_number_map_major_axis_0,

};

static const MR_FA_TypeInfo_Struct1 snapshots__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_size_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (snapshots____Unify____size_map_0_0_10001)),
  ((MR_Box) (snapshots____Compare____size_map_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "size_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&snapshots__list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo snapshots__snapshots__field_types_snapshot_options_0_0[4] = {
  (MR_PseudoTypeInfo) (&snapshots__snapshots__type_ctor_info_major_axis_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
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
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc snapshots__snapshots__du_functor_desc_snapshot_options_0_0 = {
  (MR_String) "snapshot_options",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  snapshots__snapshots__field_types_snapshot_options_0_0,
  snapshots__snapshots__field_names_snapshot_options_0_0,
  snapshots__snapshots__field_locns_snapshot_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_stag_ordered_snapshot_options_0_0[1] = { &snapshots__snapshots__du_functor_desc_snapshot_options_0_0 };

static const MR_DuPtagLayout snapshots__snapshots__du_ptag_ordered_snapshot_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    snapshots__snapshots__du_stag_ordered_snapshot_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr snapshots__snapshots__du_name_ordered_snapshot_options_0[1] = { &snapshots__snapshots__du_functor_desc_snapshot_options_0_0 };

static const MR_Integer snapshots__snapshots__functor_number_map_snapshot_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct snapshots__snapshots__type_ctor_info_snapshot_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (snapshots____Unify____snapshot_options_0_0_10001)),
  ((MR_Box) (snapshots____Compare____snapshot_options_0_0_10001)),
  (MR_String) "snapshots",
  (MR_String) "snapshot_options",
  { snapshots__snapshots__du_name_ordered_snapshot_options_0 },
  { snapshots__snapshots__du_ptag_ordered_snapshot_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  snapshots__snapshots__functor_number_map_snapshot_options_0,

};

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_23 < Var_24);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_23 > Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_27 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_28 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_27 < Var_28);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_27 > Var_28);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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

static void MR_CALL 
snapshots____Compare____size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&snapshots_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&snapshots_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
snapshots____Compare____group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        snapshots____Compare____alloc_site_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&snapshots_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = snapshots____Unify____alloc_site_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&snapshots_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&snapshots_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&snapshots_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    snapshots____Compare____alloc_site_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
snapshots____Compare____alloc_site_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
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
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

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

static void MR_CALL 
snapshots____Compare____alloc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
snapshots__sum_counts_5_p_0(
  MR_Word Site_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12)
{
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, Site_6, (MR_Integer) 1))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Site_6, (MR_Integer) 2))));

  *STATE_VARIABLE_TotalCells_10 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCells_0_9 + (MR_Unsigned) Var_14);
  *STATE_VARIABLE_TotalWords_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalWords_0_11 + (MR_Unsigned) Var_18);
}

static void MR_CALL 
snapshots__sum_groups_5_p_0(
  MR_Word Group_6,
  MR_Integer STATE_VARIABLE_TotalCells_0_9,
  MR_Integer * STATE_VARIABLE_TotalCells_10,
  MR_Integer STATE_VARIABLE_TotalWords_0_11,
  MR_Integer * STATE_VARIABLE_TotalWords_12)
{
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, Group_6, (MR_Integer) 0))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Group_6, (MR_Integer) 1))));

  *STATE_VARIABLE_TotalCells_10 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCells_0_9 + (MR_Unsigned) Var_14);
  *STATE_VARIABLE_TotalWords_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalWords_0_11 + (MR_Unsigned) Var_17);
}

static void MR_CALL 
snapshots__counts_by_words_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer A_7 = ((MR_Integer) ((MR_hl_field(0, CountsA_4, (MR_Integer) 2))));
  MR_Integer B_8 = ((MR_Integer) ((MR_hl_field(0, CountsB_5, (MR_Integer) 2))));

  succeeded = (B_8 < A_7);
  if (succeeded)
    *Result_6 = (MR_Integer) 1;
  else
  {
    succeeded = (B_8 > A_7);
    if (succeeded)
      *Result_6 = (MR_Integer) 2;
    else
      *Result_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
snapshots__counts_by_type_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  MR_String A_7;
  MR_String B_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, CountsA_4, (MR_Integer) 0))));
  MR_Word Var_10;

  A_7 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, CountsB_5, (MR_Integer) 0))));
  B_8 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, B_8, A_7);
}

static void MR_CALL 
snapshots__counts_by_proc_3_p_0(
  MR_Word CountsA_4,
  MR_Word CountsB_5,
  MR_Word * Result_6)
{
  MR_String A_7;
  MR_String B_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, CountsA_4, (MR_Integer) 0))));
  MR_Word Var_10;

  A_7 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, CountsB_5, (MR_Integer) 0))));
  B_8 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, B_8, A_7);
}

static void MR_CALL 
snapshots__group_by_words_3_p_0(
  MR_Word GroupA_4,
  MR_Word GroupB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer A_7 = ((MR_Integer) ((MR_hl_field(0, GroupA_4, (MR_Integer) 1))));
  MR_Integer B_8 = ((MR_Integer) ((MR_hl_field(0, GroupB_5, (MR_Integer) 1))));

  succeeded = (B_8 < A_7);
  if (succeeded)
    *Result_6 = (MR_Integer) 1;
  else
  {
    succeeded = (B_8 > A_7);
    if (succeeded)
      *Result_6 = (MR_Integer) 2;
    else
      *Result_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
snapshots__output_site_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MajorAxis_10,
  MR_Integer TotalCells_11,
  MR_Integer TotalWords_12,
  MR_Word Single_13,
  MR_Word AllocCounts_14)
{
  MR_bool succeeded;
  MR_Word AllocSite_16 = ((MR_Word) ((MR_hl_field(0, AllocCounts_14, (MR_Integer) 0))));
  MR_Integer NumCells_17 = ((MR_Integer) ((MR_hl_field(0, AllocCounts_14, (MR_Integer) 1))));
  MR_Integer NumWords_18 = ((MR_Integer) ((MR_hl_field(0, AllocCounts_14, (MR_Integer) 2))));
  MR_String Proc_19 = ((MR_String) ((MR_hl_field(0, AllocSite_16, (MR_Integer) 0))));
  MR_String Type_20 = ((MR_String) ((MR_hl_field(0, AllocSite_16, (MR_Integer) 1))));
  MR_String File_21 = ((MR_String) ((MR_hl_field(0, AllocSite_16, (MR_Integer) 2))));
  MR_Integer LineNum_22 = ((MR_Integer) ((MR_hl_field(0, AllocSite_16, (MR_Integer) 3))));
  MR_Float CellsPercent_24;
  MR_Float WordsPercent_25;
  MR_String RightLabel_26;

  CellsPercent_24 = snapshots__percentage_2_f_0(NumCells_17, TotalCells_11);
  WordsPercent_25 = snapshots__percentage_2_f_0(NumWords_18, TotalWords_12);
  switch (MajorAxis_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      RightLabel_26 = Type_20;
      break;
    case (MR_Integer) 1:
      RightLabel_26 = Proc_19;
      break;
  }
  switch (Single_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Float Var_41;
        MR_Float Var_42;

        Var_41 = snapshots__min_percentage_major_0_f_0();
        succeeded = (CellsPercent_24 <= Var_41);
        if (succeeded)
        {
          Var_42 = snapshots__min_percentage_major_0_f_0();
          succeeded = (WordsPercent_25 <= Var_42);
        }
        if (!(succeeded))
        {
          MR_String Var_94;
          MR_String Var_105;
          MR_String Var_118;
          MR_String Var_129;
          MR_String Var_142;
          MR_String Var_159;

          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " ");
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 7, NumCells_17, &Var_94);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_94);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "/");
          mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CellsPercent_24, &Var_105);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_105);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "% ");
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 9, NumWords_18, &Var_118);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_118);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "/");
          mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, WordsPercent_25, &Var_129);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_129);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "%  ");
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_String) "", &Var_142);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_142);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "  ");
          mercury__io__write_string_4_p_0(OutputStream_9, RightLabel_26);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " (");
          mercury__io__write_string_4_p_0(OutputStream_9, File_21);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) ":");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&snapshots_scalar_common_3[0]), LineNum_22, &Var_159);
          mercury__io__write_string_4_p_0(OutputStream_9, Var_159);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) ")\n");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_66;
        MR_String Var_83;

        mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " ");
        mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 38, (MR_String) "", &Var_66);
        mercury__io__write_string_4_p_0(OutputStream_9, Var_66);
        mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "  ");
        mercury__io__write_string_4_p_0(OutputStream_9, RightLabel_26);
        mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " (");
        mercury__io__write_string_4_p_0(OutputStream_9, File_21);
        mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) ":");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&snapshots_scalar_common_3[0]), LineNum_22, &Var_83);
        mercury__io__write_string_4_p_0(OutputStream_9, Var_83);
        mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) ")\n");
      }
      break;
  }
}

static MR_Float MR_CALL 
snapshots__min_percentage_major_0_f_0(void)
{
  return (MR_Float) 0.10000000000000001;
}

static MR_Float MR_CALL 
snapshots__percentage_2_f_0(
  MR_Integer N_4,
  MR_Integer Total_5)
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

static void MR_CALL 
snapshots__output_group_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  snapshots__output_site_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
snapshots__output_group_9_p_0(
  MR_Word OutputStream_10,
  MR_Word Options_11,
  MR_Integer TotalCells_12,
  MR_Integer TotalWords_13,
  MR_Word Group_14,
  MR_Integer STATE_VARIABLE_CumulWords_0_30,
  MR_Integer * STATE_VARIABLE_CumulWords_31)
{
  MR_bool succeeded;
  MR_Integer NumCells_17 = ((MR_Integer) ((MR_hl_field(0, Group_14, (MR_Integer) 0))));
  MR_Integer NumWords_18 = ((MR_Integer) ((MR_hl_field(0, Group_14, (MR_Integer) 1))));
  MR_Word AllocSite_19 = ((MR_Word) ((MR_hl_field(0, Group_14, (MR_Integer) 2))));
  MR_Word Counts_20 = ((MR_Word) ((MR_hl_field(0, Group_14, (MR_Integer) 3))));
  MR_Float CellsPercent_21;
  MR_Float WordsPercent_22;
  MR_Float CumulPercent_23;
  MR_Float Var_152;
  MR_Float Var_154;
  MR_Float Var_155;
  MR_Float Var_156;
  MR_Float Var_158;
  MR_Float Var_159;
  MR_Float Var_160;
  MR_Float Var_162;
  MR_Float Var_163;
  MR_Float Var_36;

  *STATE_VARIABLE_CumulWords_31 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CumulWords_0_30 + (MR_Unsigned) NumWords_18);
  Var_154 = mercury__float__float_1_f_0(NumCells_17);
  Var_152 = (((MR_Float) 100.00000000000000) * Var_154);
  Var_155 = mercury__float__float_1_f_0(TotalCells_12);
  CellsPercent_21 = mercury__float__f_slash_2_f_0(Var_152, Var_155);
  Var_158 = mercury__float__float_1_f_0(NumWords_18);
  Var_156 = (((MR_Float) 100.00000000000000) * Var_158);
  Var_159 = mercury__float__float_1_f_0(TotalWords_13);
  WordsPercent_22 = mercury__float__f_slash_2_f_0(Var_156, Var_159);
  Var_162 = mercury__float__float_1_f_0(*STATE_VARIABLE_CumulWords_31);
  Var_160 = (((MR_Float) 100.00000000000000) * Var_162);
  Var_163 = mercury__float__float_1_f_0(TotalWords_13);
  CumulPercent_23 = mercury__float__f_slash_2_f_0(Var_160, Var_163);
  succeeded = (CellsPercent_21 <= ((MR_Float) 0.10000000000000001));
  if (succeeded)
  {
    Var_36 = (MR_Float) 0.10000000000000001;
    succeeded = (WordsPercent_22 <= Var_36);
  }
  if (!(succeeded))
  {
    MR_Word MajorAxis_24 = ((((MR_Unsigned) ((MR_hl_field(0, Options_11, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word Brief_25 = ((((MR_Unsigned) ((MR_hl_field(0, Options_11, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_String RightLabel_26;
    MR_Char Star_27;
    MR_String Var_79 = ((MR_String) ((MR_hl_field(0, AllocSite_19, (MR_Integer) 1))));
    MR_String Var_80 = ((MR_String) ((MR_hl_field(0, AllocSite_19, (MR_Integer) 0))));
    MR_String Var_82;
    MR_String Var_90;
    MR_String Var_101;
    MR_String Var_114;
    MR_String Var_125;
    MR_String Var_138;

    switch (MajorAxis_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RightLabel_26 = Var_80;
        break;
      case (MR_Integer) 1:
        RightLabel_26 = Var_79;
        break;
    }
    switch (Brief_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Star_27 = (MR_Char) 42;
        break;
      case (MR_Integer) 1:
        Star_27 = (MR_Char) 32;
        break;
    }
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&snapshots_scalar_common_3[0]), Star_27, &Var_82);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_82);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 7, NumCells_17, &Var_90);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_90);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "/");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CellsPercent_21, &Var_101);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_101);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "% ");
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 9, NumWords_18, &Var_114);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_114);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "/");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, WordsPercent_22, &Var_125);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_125);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "% ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, CumulPercent_23, &Var_138);
    mercury__io__write_string_4_p_0(OutputStream_10, Var_138);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "%  ");
    mercury__io__write_string_4_p_0(OutputStream_10, RightLabel_26);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\n");
    switch (Brief_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Single_28;
          MR_Word Var_55;
          MR_Word Var_54;
          MR_Box conv0_STATE_VARIABLE_IO_56_56;

          succeeded = (Counts_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_54 = ((MR_Word) ((MR_hl_field(1, Counts_20, (MR_Integer) 1))));
            succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            Single_28 = (MR_Integer) 1;
          else
            Single_28 = (MR_Integer) 0;
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&snapshots_scalar_common_8[0]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (snapshots__output_group_9_p_0_1));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (OutputStream_10));
            MR_hl_field(0, Var_55, 4) = ((MR_Box) (MajorAxis_24));
            MR_hl_field(0, Var_55, 5) = ((MR_Box) (TotalCells_12));
            MR_hl_field(0, Var_55, 6) = ((MR_Box) (TotalWords_13));
            MR_hl_field(0, Var_55, 7) = ((MR_Box) (Single_28));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, Counts_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
          mercury__io__nl_3_p_0(OutputStream_10);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
snapshots__show_snapshots_3_p_0(
  MR_Word OutputStream_4)
{
  MR_String SnapshotsFile_6;
  MR_Word ByType_7;
  MR_Word Brief_8;
  MR_Word RecalcSize_9;
  MR_Word InclRuntime_10;
  MR_Word MajorAxis_11;
  MR_Word Options_12;
  MR_Word OpenDeclRes_13;
  MR_Word AllocSiteMap_15;
  MR_Word SizeMap_16;
  MR_Word OpenRes_19;

  globals__io_lookup_string_option_4_p_0((MR_Integer) 14, &SnapshotsFile_6);
  globals__io_lookup_bool_option_4_p_0((MR_Integer) 15, &ByType_7);
  globals__io_lookup_bool_option_4_p_0((MR_Integer) 16, &Brief_8);
  globals__io_lookup_bool_option_4_p_0((MR_Integer) 18, &RecalcSize_9);
  globals__io_lookup_bool_option_4_p_0((MR_Integer) 17, &InclRuntime_10);
  switch (ByType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MajorAxis_11 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      MajorAxis_11 = (MR_Integer) 1;
      break;
  }
  {
    Options_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Options_12, 0) = (MR_Box) (((((MR_Unsigned) (MajorAxis_11) << 3)) | (((((MR_Unsigned) (Brief_8) << 2)) | (((((MR_Unsigned) (RecalcSize_9) << 1)) | (MR_Unsigned) (InclRuntime_10)))))));
  }
  mercury__io__open_input_4_p_0(SnapshotsFile_6, &OpenDeclRes_13);
  if (((MR_tag((MR_Word) OpenDeclRes_13)) == (MR_Integer) 1))
  {
    MR_Word DeclError_17 = ((MR_Word) ((MR_hl_field(1, OpenDeclRes_13, (MR_Integer) 0))));
    MR_String DeclErrorStr_18;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_42;
    MR_String Var_43;

    Var_43 = mercury__io__error_message_1_f_0(DeclError_17);
    Var_42 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) "\n");
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_42);
    Var_39 = mercury__string__f_43_43_2_f_0(SnapshotsFile_6, Var_40);
    DeclErrorStr_18 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_39);
    {
      mercury__require__error_1_p_0(DeclErrorStr_18);
      return;
    }
  }
  else
  {
    MR_Word DeclStream_14 = ((MR_Word) ((MR_hl_field(0, OpenDeclRes_13, (MR_Integer) 0))));

    snapshots__read_and_parse_alloc_site_decls_5_p_0(DeclStream_14, &AllocSiteMap_15, &SizeMap_16);
    mercury__io__close_input_3_p_0(DeclStream_14);
  }
  mercury__io__open_input_4_p_0(SnapshotsFile_6, &OpenRes_19);
  if (((MR_tag((MR_Word) OpenRes_19)) == (MR_Integer) 1))
  {
    MR_Word Error_21 = ((MR_Word) ((MR_hl_field(1, OpenRes_19, (MR_Integer) 0))));
    MR_String ErrorStr_22;
    MR_String Var_49;
    MR_String Var_50;
    MR_String Var_52;
    MR_String Var_53;

    Var_53 = mercury__io__error_message_1_f_0(Error_21);
    Var_52 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "\n");
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_52);
    Var_49 = mercury__string__f_43_43_2_f_0(SnapshotsFile_6, Var_50);
    ErrorStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_49);
    {
      mercury__require__error_1_p_0(ErrorStr_22);
      return;
    }
  }
  else
  {
    MR_Word SnapshotStream_20 = ((MR_Word) ((MR_hl_field(0, OpenRes_19, (MR_Integer) 0))));

    snapshots__show_all_snapshots_7_p_0(SnapshotStream_20, OutputStream_4, Options_12, AllocSiteMap_15, SizeMap_16);
    mercury__io__close_input_3_p_0(SnapshotStream_20);
  }
}

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_6;

  snapshots__group_by_words_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_Result_6));
}

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_6;

  snapshots__counts_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_Result_6));
}

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  snapshots__counts_by_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
snapshots__show_all_snapshots_7_p_0(
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Options_10,
  MR_Word AllocSiteMap_11,
  MR_Word SizeMap_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_8, &LineRes_14);
    switch (MR_tag((MR_Word) LineRes_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_15 = ((MR_String) ((MR_hl_field(1, LineRes_14, (MR_Integer) 0))));
          MR_String SnapshotName0_16;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "start ", Line_15, &SnapshotName0_16);
          if (succeeded)
          {
            MR_String SnapshotName_17;
            MR_Word AllocCounts_32;
            MR_Word MajorAxis_33;
            MR_Word Groups_34;
            MR_Word Compare_39;
            MR_Word SortedCounts_40;
            MR_Word Groups_41;

            SnapshotName_17 = mercury__string__chomp_1_f_0(SnapshotName0_16);
            mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "------ ");
            mercury__io__write_string_4_p_0(OutputStream_9, SnapshotName_17);
            mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " ------\n");
            snapshots__read_and_parse_snapshot_7_p_0(InputStream_8, Options_10, AllocSiteMap_11, SizeMap_12, &AllocCounts_32);
            MajorAxis_33 = ((((MR_Unsigned) ((MR_hl_field(0, Options_10, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
            switch (MajorAxis_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Compare_39 = (MR_Word) (&snapshots_scalar_common_1[7]);
                break;
              case (MR_Integer) 1:
                Compare_39 = (MR_Word) (&snapshots_scalar_common_1[8]);
                break;
            }
            mercury__list__sort_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), Compare_39, AllocCounts_32, &SortedCounts_40);
            snapshots__make_groups_3_p_0(Compare_39, SortedCounts_40, &Groups_41);
            mercury__list__sort_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_group_0), (MR_Word) (&snapshots_scalar_common_1[9]), Groups_41, &Groups_34);
            snapshots__output_snapshot_5_p_0(OutputStream_9, Options_10, Groups_34);
            // direct tailcall eliminated
            ;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(2, LineRes_14, (MR_Integer) 0))));
          MR_String Var_27;

          Var_27 = mercury__io__error_message_1_f_0(Error_18);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.show_all_snapshots\'/7", Var_27);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__output_snapshot_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_STATE_VARIABLE_CumulWords_31;

  snapshots__output_group_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_STATE_VARIABLE_CumulWords_31);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_CumulWords_31));
}

static void MR_CALL 
snapshots__output_snapshot_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_TotalCells_10;
  MR_Integer conv0_STATE_VARIABLE_TotalWords_12;

  snapshots__sum_groups_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TotalCells_10, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_TotalWords_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TotalCells_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_TotalWords_12));
}

static void MR_CALL 
snapshots__output_snapshot_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Options_7,
  MR_Word Grouped_8)
{
  MR_Integer TotalCells_10;
  MR_Integer TotalWords_11;
  MR_Word Brief_12;
  MR_Word Var_34;
  MR_String Var_55;
  MR_String Var_64;
  MR_String Var_73;
  MR_Word MajorAxis_85 = ((((MR_Unsigned) ((MR_hl_field(0, Options_7, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  MR_String RightLabel_86;
  MR_String Var_106;
  MR_String Var_115;
  MR_String Var_124;
  MR_Box conv3_TotalCells_10;
  MR_Box conv2_TotalWords_11;
  MR_Box conv6__CumulWords_13;
  MR_Box conv5_STATE_VARIABLE_IO_15;

  switch (MajorAxis_85) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      RightLabel_86 = (MR_String) "procedure / type (location)";
      break;
    case (MR_Integer) 1:
      RightLabel_86 = (MR_String) "type / procedure (location)";
      break;
  }
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 7, (MR_String) "cells", &Var_106);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_106);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 17, (MR_String) "words", &Var_115);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_115);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 14, (MR_String) "cumul", &Var_124);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_124);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "  ");
  mercury__io__write_string_4_p_0(OutputStream_6, RightLabel_86);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  mercury__list__foldl2_6_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_group_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&snapshots_scalar_common_1[6]), Grouped_8, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalCells_10, ((MR_Box) ((MR_Integer) 0)), &conv2_TotalWords_11);
  TotalCells_10 = ((MR_Integer) (conv3_TotalCells_10));
  TotalWords_11 = ((MR_Integer) (conv2_TotalWords_11));
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 7, TotalCells_10, &Var_55);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_55);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 17, TotalWords_11, &Var_64);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_64);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&snapshots_scalar_common_3[0]), (MR_Integer) 14, (MR_String) "", &Var_73);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_73);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "  ");
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "total");
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  Brief_12 = ((((MR_Unsigned) ((MR_hl_field(0, Options_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  switch (Brief_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__nl_3_p_0(OutputStream_6);
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&snapshots_scalar_common_7[0]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (snapshots__output_snapshot_5_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (OutputStream_6));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (Options_7));
    MR_hl_field(0, Var_34, 5) = ((MR_Box) (TotalCells_10));
    MR_hl_field(0, Var_34, 6) = ((MR_Box) (TotalWords_11));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&snapshots__snapshots__type_ctor_info_group_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, Grouped_8, ((MR_Box) ((MR_Integer) 0)), &conv6__CumulWords_13, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_15);
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
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_TotalCells_10;
  MR_Integer conv1_STATE_VARIABLE_TotalWords_12;

  snapshots__sum_counts_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) (wrapper_arg_4)), &conv1_STATE_VARIABLE_TotalWords_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TotalCells_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TotalWords_12));
}

static void MR_CALL 
snapshots__make_groups_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  snapshots__counts_by_words_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
snapshots__make_groups_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * Groups_6)
{
  if ((Counts_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *Groups_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word First_9;
    MR_Word Rest_10;
    MR_Word FirstGroup_11;
    MR_Word SortedCounts0_14;
    MR_Word SortedCounts_15;
    MR_Integer TotalCells_16;
    MR_Integer TotalWords_17;
    MR_Word FirstSite_18;
    MR_Word Var_23;
    MR_Box conv4_TotalCells_16;
    MR_Box conv3_TotalWords_17;
    MR_Box conv5_Var_23;
    MR_Word * AddrRestGroups_28;

    snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(Compare_4, Counts_5, &First_9, &Rest_10);
    mercury__list__sort_2_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), First_9, &SortedCounts0_14);
    mercury__list__sort_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), (MR_Word) (&snapshots_scalar_common_1[4]), SortedCounts0_14, &SortedCounts_15);
    mercury__list__foldl2_6_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&snapshots_scalar_common_1[5]), SortedCounts_15, ((MR_Box) ((MR_Integer) 0)), &conv4_TotalCells_16, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalWords_17);
    TotalCells_16 = ((MR_Integer) (conv4_TotalCells_16));
    TotalWords_17 = ((MR_Integer) (conv3_TotalWords_17));
    conv5_Var_23 = mercury__list__det_head_1_f_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), SortedCounts_15);
    Var_23 = ((MR_Word) (conv5_Var_23));
    FirstSite_18 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
    {
      FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstGroup_11, 0) = ((MR_Box) (TotalCells_16));
      MR_hl_field(0, FirstGroup_11, 1) = ((MR_Box) (TotalWords_17));
      MR_hl_field(0, FirstGroup_11, 2) = ((MR_Box) (FirstSite_18));
      MR_hl_field(0, FirstGroup_11, 3) = ((MR_Box) (SortedCounts_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Groups_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FirstGroup_11));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrRestGroups_28 = (MR_Word *) (&(MR_hl_field(1, *Groups_6, (MR_Integer) 1)));
    snapshots__LCMC__pred__make_groups__1_3_p_0(Compare_4, Rest_10, AddrRestGroups_28);
  }
}

static void MR_CALL 
snapshots__LCMC__pred__make_groups__1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_TotalCells_10;
  MR_Integer conv1_STATE_VARIABLE_TotalWords_12;

  snapshots__sum_counts_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TotalCells_10, ((MR_Integer) (wrapper_arg_4)), &conv1_STATE_VARIABLE_TotalWords_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TotalCells_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TotalWords_12));
}

static void MR_CALL 
snapshots__LCMC__pred__make_groups__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  snapshots__counts_by_words_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
snapshots__LCMC__pred__make_groups__1_3_p_0(
  MR_Word Compare_4,
  MR_Word Counts_5,
  MR_Word * AddrOfGroups_29)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Counts_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfGroups_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word First_9;
      MR_Word Rest_10;
      MR_Word FirstGroup_11;
      MR_Word SortedCounts0_14;
      MR_Word SortedCounts_15;
      MR_Integer TotalCells_16;
      MR_Integer TotalWords_17;
      MR_Word FirstSite_18;
      MR_Word Var_23;
      MR_Box conv4_TotalCells_16;
      MR_Box conv3_TotalWords_17;
      MR_Box conv5_Var_23;
      MR_Word * AddrRestGroups_28;
      MR_Word Groups_30;
      MR_Word next_value_of_Counts_5;
      MR_Word * next_value_of_AddrOfGroups_29;

      snapshots__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_4_p_0(Compare_4, Counts_5, &First_9, &Rest_10);
      mercury__list__sort_2_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), First_9, &SortedCounts0_14);
      mercury__list__sort_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), (MR_Word) (&snapshots_scalar_common_1[2]), SortedCounts0_14, &SortedCounts_15);
      mercury__list__foldl2_6_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&snapshots_scalar_common_1[3]), SortedCounts_15, ((MR_Box) ((MR_Integer) 0)), &conv4_TotalCells_16, ((MR_Box) ((MR_Integer) 0)), &conv3_TotalWords_17);
      TotalCells_16 = ((MR_Integer) (conv4_TotalCells_16));
      TotalWords_17 = ((MR_Integer) (conv3_TotalWords_17));
      conv5_Var_23 = mercury__list__det_head_1_f_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_counts_0), SortedCounts_15);
      Var_23 = ((MR_Word) (conv5_Var_23));
      FirstSite_18 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
      {
        FirstGroup_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FirstGroup_11, 0) = ((MR_Box) (TotalCells_16));
        MR_hl_field(0, FirstGroup_11, 1) = ((MR_Box) (TotalWords_17));
        MR_hl_field(0, FirstGroup_11, 2) = ((MR_Box) (FirstSite_18));
        MR_hl_field(0, FirstGroup_11, 3) = ((MR_Box) (SortedCounts_15));
      }
      {
        Groups_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Groups_30, 0) = ((MR_Box) (FirstGroup_11));
        MR_hl_field(1, Groups_30, 1) = NULL;
      }
      AddrRestGroups_28 = (MR_Word *) (&(MR_hl_field(1, Groups_30, (MR_Integer) 1)));
      *AddrOfGroups_29 = Groups_30;
      // direct tailcall eliminated
      ;
      next_value_of_Counts_5 = Rest_10;
      next_value_of_AddrOfGroups_29 = AddrRestGroups_28;
      Counts_5 = next_value_of_Counts_5;
      AddrOfGroups_29 = next_value_of_AddrOfGroups_29;
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
  if ((List_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Upto_7 = (MR_Word) ((MR_Unsigned) 0U);
    *After_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, List_6, (MR_Integer) 1))));
    MR_Box Var_21 = (MR_hl_field(1, List_6, (MR_Integer) 0));

    if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Upto_7 = List_6;
      *After_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box B_11 = (MR_hl_field(1, Var_20, (MR_Integer) 0));
      MR_Word Cmp_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Compare_5, (MR_Integer) 1))));
      MR_Box conv1_Cmp_13;

      func_0(((MR_Box) (Compare_5)), Var_21, B_11, &conv1_Cmp_13);
      Cmp_13 = ((MR_Word) (conv1_Cmp_13));
      switch (Cmp_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Upto_7 = base;
              MR_hl_field(1, base, 0) = Var_21;
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *After_8 = Var_20;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word * AddrUpto0_22;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Upto_7 = base;
              MR_hl_field(1, base, 0) = Var_21;
              MR_hl_field(1, base, 1) = NULL;
            }
            AddrUpto0_22 = (MR_Word *) (&(MR_hl_field(1, *Upto_7, (MR_Integer) 1)));
            snapshots__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_95_49_4_p_0(Compare_5, Var_20, AddrUpto0_22, After_8);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
snapshots__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_119_104_105_108_101_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word Compare_5,
  MR_Word List_6,
  MR_Word * AddrOfUpto_23,
  MR_Word * After_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((List_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfUpto_23 = (MR_Word) ((MR_Unsigned) 0U);
      *After_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, List_6, (MR_Integer) 1))));
      MR_Box Var_21 = (MR_hl_field(1, List_6, (MR_Integer) 0));

      if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *AddrOfUpto_23 = List_6;
        *After_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Box B_11 = (MR_hl_field(1, Var_20, (MR_Integer) 0));
        MR_Word Cmp_13;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Compare_5, (MR_Integer) 1))));
        MR_Box conv1_Cmp_13;

        func_0(((MR_Box) (Compare_5)), Var_21, B_11, &conv1_Cmp_13);
        Cmp_13 = ((MR_Word) (conv1_Cmp_13));
        switch (Cmp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Upto_25;

              {
                Upto_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Upto_25, 0) = Var_21;
                MR_hl_field(1, Upto_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
                Upto_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Upto_26, 0) = Var_21;
                MR_hl_field(1, Upto_26, 1) = NULL;
              }
              AddrUpto0_22 = (MR_Word *) (&(MR_hl_field(1, Upto_26, (MR_Integer) 1)));
              *AddrOfUpto_23 = Upto_26;
              // direct tailcall eliminated
              ;
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
snapshots__read_and_parse_snapshot_7_p_0(
  MR_Word InputStream_8,
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
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_8, &LineRes_14);
    switch (MR_tag((MR_Word) LineRes_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_snapshot\'/7", (MR_String) "format error");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_15 = ((MR_String) ((MR_hl_field(1, LineRes_14, (MR_Integer) 0))));

          succeeded = mercury__string__prefix_2_p_0(Line_15, (MR_String) "end ");
          if (succeeded)
            *AllocCounts_12 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Counts_16;
            MR_String IdStr_29;
            MR_String NumCellsStr_30;
            MR_String NumWordsStr0_31;
            MR_Integer NumCells_32;
            MR_Integer NumWords0_33;
            MR_Word AllocSite_35;
            MR_Word RecalcSize_36;
            MR_Integer NumWords_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Integer Id_34;
            MR_Integer SizeMapWords_39;
            MR_Word TypeCtorInfo_55_73;
            MR_Integer WordsPerCell_38;
            MR_Integer Var_61;
            MR_Box conv1_SizeMapWords_39;

            Var_41 = mercury__string__words_1_f_0(Line_15);
            succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IdStr_29 = ((MR_String) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
              Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
              succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NumCellsStr_30 = ((MR_String) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  NumWordsStr0_31 = ((MR_String) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
                  Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
                  succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = mercury__string__to_int_2_p_0(NumCellsStr_30, &NumCells_32);
                    if (succeeded)
                    {
                      succeeded = mercury__string__to_int_2_p_0(NumWordsStr0_31, &NumWords0_33);
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(IdStr_29, &Id_34);
                        if (succeeded)
                        {
                          MR_Word Var_45 = (MR_Word) (Id_34);
                          MR_Word AllocSite0_94;
                          MR_Box conv0_AllocSite0_94;

                          succeeded = mercury__map__search_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_id_0), (MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_0), AllocSiteMap_10, ((MR_Box) (Var_45)), &conv0_AllocSite0_94);
                          if (succeeded)
                          {
                            AllocSite0_94 = ((MR_Word) (conv0_AllocSite0_94));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                            AllocSite_35 = AllocSite0_94;
                          else
                            AllocSite_35 = (MR_Word) (&snapshots_scalar_common_4[0]);
                          RecalcSize_36 = ((((MR_Unsigned) ((MR_hl_field(0, Options_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                          succeeded = MR_TRUE;
                        }
                        else
                        if ((strcmp(IdStr_29, (MR_String) "runtime") == 0))
                        {
                          MR_String Type_37;
                          MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(0, Options_9, (MR_Integer) 0))) & (MR_Integer) 1);
                          MR_String Var_51;
                          MR_Integer Var_53;
                          MR_String Var_84;
                          MR_String Var_85;
                          MR_Word Var_91;
                          MR_String Var_92;
                          MR_String Var_93;

                          succeeded = (Var_46 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_84 = (MR_String) " words)";
                            Var_91 = (MR_Word) (&snapshots_scalar_common_3[0]);
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_91, NumWords0_33, &Var_85);
                            Var_92 = mercury__string__f_43_43_2_f_0(Var_85, Var_84);
                            Var_93 = (MR_String) "runtime struct (";
                            Type_37 = mercury__string__f_43_43_2_f_0(Var_93, Var_92);
                            Var_51 = (MR_String) "unknown";
                            Var_53 = (MR_Integer) 0;
                            RecalcSize_36 = (MR_Integer) 0;
                            {
                              AllocSite_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, AllocSite_35, 0) = ((MR_Box) (Var_51));
                              MR_hl_field(0, AllocSite_35, 1) = ((MR_Box) (Type_37));
                              MR_hl_field(0, AllocSite_35, 2) = ((MR_Box) (Var_51));
                              MR_hl_field(0, AllocSite_35, 3) = ((MR_Box) (Var_53));
                              MR_hl_field(0, AllocSite_35, 4) = ((MR_Box) (NumWords0_33));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        if ((strcmp(IdStr_29, (MR_String) "unknown") == 0))
                        {
                          MR_String Type_62;
                          MR_String Var_75;
                          MR_String Var_82;

                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&snapshots_scalar_common_3[0]), NumWords0_33, &Var_75);
                          Var_82 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) " words)");
                          Type_62 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", Var_82);
                          {
                            AllocSite_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, AllocSite_35, 0) = ((MR_Box) ((MR_String) "unknown"));
                            MR_hl_field(0, AllocSite_35, 1) = ((MR_Box) (Type_62));
                            MR_hl_field(0, AllocSite_35, 2) = ((MR_Box) ((MR_String) "unknown"));
                            MR_hl_field(0, AllocSite_35, 3) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(0, AllocSite_35, 4) = ((MR_Box) (NumWords0_33));
                          }
                          RecalcSize_36 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          succeeded = (RecalcSize_36 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            WordsPerCell_38 = ((MR_Integer) ((MR_hl_field(0, AllocSite_35, (MR_Integer) 4))));
                            Var_61 = (MR_Integer) 0;
                            succeeded = (WordsPerCell_38 > Var_61);
                            if (succeeded)
                            {
                              TypeCtorInfo_55_73 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                              succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_55_73, SizeMap_11, WordsPerCell_38, &conv1_SizeMapWords_39);
                              if (succeeded)
                              {
                                SizeMapWords_39 = ((MR_Integer) (conv1_SizeMapWords_39));
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            NumWords_40 = (MR_Integer) ((MR_Unsigned) NumCells_32 * (MR_Unsigned) SizeMapWords_39);
                          else
                            NumWords_40 = NumWords0_33;
                          {
                            Counts_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Counts_16, 0) = ((MR_Box) (AllocSite_35));
                            MR_hl_field(0, Counts_16, 1) = ((MR_Box) (NumCells_32));
                            MR_hl_field(0, Counts_16, 2) = ((MR_Box) (NumWords_40));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word * AddrRestCounts_97;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *AllocCounts_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Counts_16));
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrRestCounts_97 = (MR_Word *) (&(MR_hl_field(1, *AllocCounts_12, (MR_Integer) 1)));
              snapshots__LCMC__pred__read_and_parse_snapshot__1_7_p_0(InputStream_8, Options_9, AllocSiteMap_10, SizeMap_11, AddrRestCounts_97);
            }
            else
            {
              // direct tailcall eliminated
              ;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(2, LineRes_14, (MR_Integer) 0))));
          MR_String Var_28;

          Var_28 = mercury__io__error_message_1_f_0(Error_18);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_snapshot\'/7", Var_28);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__LCMC__pred__read_and_parse_snapshot__1_7_p_0(
  MR_Word InputStream_8,
  MR_Word Options_9,
  MR_Word AllocSiteMap_10,
  MR_Word SizeMap_11,
  MR_Word * AddrOfAllocCounts_98)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_8, &LineRes_14);
    switch (MR_tag((MR_Word) LineRes_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_snapshot\'/7", (MR_String) "format error");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_15 = ((MR_String) ((MR_hl_field(1, LineRes_14, (MR_Integer) 0))));

          succeeded = mercury__string__prefix_2_p_0(Line_15, (MR_String) "end ");
          if (succeeded)
            *AddrOfAllocCounts_98 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Counts_16;
            MR_String IdStr_29;
            MR_String NumCellsStr_30;
            MR_String NumWordsStr0_31;
            MR_Integer NumCells_32;
            MR_Integer NumWords0_33;
            MR_Word AllocSite_35;
            MR_Word RecalcSize_36;
            MR_Integer NumWords_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Integer Id_34;
            MR_Integer SizeMapWords_39;
            MR_Word TypeCtorInfo_55_73;
            MR_Integer WordsPerCell_38;
            MR_Integer Var_61;
            MR_Box conv1_SizeMapWords_39;

            Var_41 = mercury__string__words_1_f_0(Line_15);
            succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IdStr_29 = ((MR_String) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
              Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
              succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NumCellsStr_30 = ((MR_String) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  NumWordsStr0_31 = ((MR_String) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
                  Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
                  succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = mercury__string__to_int_2_p_0(NumCellsStr_30, &NumCells_32);
                    if (succeeded)
                    {
                      succeeded = mercury__string__to_int_2_p_0(NumWordsStr0_31, &NumWords0_33);
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(IdStr_29, &Id_34);
                        if (succeeded)
                        {
                          MR_Word Var_45 = (MR_Word) (Id_34);
                          MR_Word AllocSite0_94;
                          MR_Box conv0_AllocSite0_94;

                          succeeded = mercury__map__search_3_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_id_0), (MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_0), AllocSiteMap_10, ((MR_Box) (Var_45)), &conv0_AllocSite0_94);
                          if (succeeded)
                          {
                            AllocSite0_94 = ((MR_Word) (conv0_AllocSite0_94));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                            AllocSite_35 = AllocSite0_94;
                          else
                            AllocSite_35 = (MR_Word) (&snapshots_scalar_common_4[0]);
                          RecalcSize_36 = ((((MR_Unsigned) ((MR_hl_field(0, Options_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                          succeeded = MR_TRUE;
                        }
                        else
                        if ((strcmp(IdStr_29, (MR_String) "runtime") == 0))
                        {
                          MR_String Type_37;
                          MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(0, Options_9, (MR_Integer) 0))) & (MR_Integer) 1);
                          MR_String Var_51;
                          MR_Integer Var_53;
                          MR_String Var_84;
                          MR_String Var_85;
                          MR_Word Var_91;
                          MR_String Var_92;
                          MR_String Var_93;

                          succeeded = (Var_46 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_84 = (MR_String) " words)";
                            Var_91 = (MR_Word) (&snapshots_scalar_common_3[0]);
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_91, NumWords0_33, &Var_85);
                            Var_92 = mercury__string__f_43_43_2_f_0(Var_85, Var_84);
                            Var_93 = (MR_String) "runtime struct (";
                            Type_37 = mercury__string__f_43_43_2_f_0(Var_93, Var_92);
                            Var_51 = (MR_String) "unknown";
                            Var_53 = (MR_Integer) 0;
                            RecalcSize_36 = (MR_Integer) 0;
                            {
                              AllocSite_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, AllocSite_35, 0) = ((MR_Box) (Var_51));
                              MR_hl_field(0, AllocSite_35, 1) = ((MR_Box) (Type_37));
                              MR_hl_field(0, AllocSite_35, 2) = ((MR_Box) (Var_51));
                              MR_hl_field(0, AllocSite_35, 3) = ((MR_Box) (Var_53));
                              MR_hl_field(0, AllocSite_35, 4) = ((MR_Box) (NumWords0_33));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        if ((strcmp(IdStr_29, (MR_String) "unknown") == 0))
                        {
                          MR_String Type_62;
                          MR_String Var_75;
                          MR_String Var_82;

                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&snapshots_scalar_common_3[0]), NumWords0_33, &Var_75);
                          Var_82 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) " words)");
                          Type_62 = mercury__string__f_43_43_2_f_0((MR_String) "unknown (", Var_82);
                          {
                            AllocSite_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, AllocSite_35, 0) = ((MR_Box) ((MR_String) "unknown"));
                            MR_hl_field(0, AllocSite_35, 1) = ((MR_Box) (Type_62));
                            MR_hl_field(0, AllocSite_35, 2) = ((MR_Box) ((MR_String) "unknown"));
                            MR_hl_field(0, AllocSite_35, 3) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(0, AllocSite_35, 4) = ((MR_Box) (NumWords0_33));
                          }
                          RecalcSize_36 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          succeeded = (RecalcSize_36 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            WordsPerCell_38 = ((MR_Integer) ((MR_hl_field(0, AllocSite_35, (MR_Integer) 4))));
                            Var_61 = (MR_Integer) 0;
                            succeeded = (WordsPerCell_38 > Var_61);
                            if (succeeded)
                            {
                              TypeCtorInfo_55_73 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                              succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_55_73, SizeMap_11, WordsPerCell_38, &conv1_SizeMapWords_39);
                              if (succeeded)
                              {
                                SizeMapWords_39 = ((MR_Integer) (conv1_SizeMapWords_39));
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            NumWords_40 = (MR_Integer) ((MR_Unsigned) NumCells_32 * (MR_Unsigned) SizeMapWords_39);
                          else
                            NumWords_40 = NumWords0_33;
                          {
                            Counts_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Counts_16, 0) = ((MR_Box) (AllocSite_35));
                            MR_hl_field(0, Counts_16, 1) = ((MR_Box) (NumCells_32));
                            MR_hl_field(0, Counts_16, 2) = ((MR_Box) (NumWords_40));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word * AddrRestCounts_97;
              MR_Word AllocCounts_99;
              MR_Word * next_value_of_AddrOfAllocCounts_98;

              {
                AllocCounts_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, AllocCounts_99, 0) = ((MR_Box) (Counts_16));
                MR_hl_field(1, AllocCounts_99, 1) = NULL;
              }
              AddrRestCounts_97 = (MR_Word *) (&(MR_hl_field(1, AllocCounts_99, (MR_Integer) 1)));
              *AddrOfAllocCounts_98 = AllocCounts_99;
              // direct tailcall eliminated
              ;
              next_value_of_AddrOfAllocCounts_98 = AddrRestCounts_97;
              AddrOfAllocCounts_98 = next_value_of_AddrOfAllocCounts_98;
              continue;
            }
            else
            {
              // direct tailcall eliminated
              ;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(2, LineRes_14, (MR_Integer) 0))));
          MR_String Var_28;

          Var_28 = mercury__io__error_message_1_f_0(Error_18);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_snapshot\'/7", Var_28);
            return;
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
snapshots__read_and_parse_alloc_site_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  succeeded = mercury__string__to_int_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
snapshots__read_and_parse_alloc_site_decls_5_p_0(
  MR_Word InputStream_6,
  MR_Word * AllocSiteMap_7,
  MR_Word * SizeMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_6, &LineRes_10);
    switch (MR_tag((MR_Word) LineRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_alloc_site_decls\'/5", (MR_String) "format error: cannot find declarations");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_11 = ((MR_String) ((MR_hl_field(1, LineRes_10, (MR_Integer) 0))));

          succeeded = mercury__string__prefix_2_p_0(Line_11, (MR_String) "size_map ");
          if (succeeded)
          {
            MR_Word Var_17;
            MR_Word Ints_27;
            MR_Word TypeCtorInfo_14_33;
            MR_Word TypeCtorInfo_15_34;
            MR_Word Words_26;
            MR_Word Var_28;
            MR_String Var_29;
            MR_Word Var_30;

            Var_28 = mercury__string__words_1_f_0(Line_11);
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_29 = ((MR_String) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
              Words_26 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
              succeeded = (strcmp(Var_29, (MR_String) "size_map") == 0);
              if (succeeded)
              {
                Var_30 = (MR_Word) (&snapshots_scalar_common_1[1]);
                TypeCtorInfo_14_33 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                TypeCtorInfo_15_34 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                succeeded = mercury__list__map_3_p_2(TypeCtorInfo_14_33, TypeCtorInfo_15_34, Var_30, Words_26, &Ints_27);
              }
            }
            if (succeeded)
              *SizeMap_8 = Ints_27;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.parse_size_map\'/2", (MR_String) "format error: bad size_map line");
                return;
              }
            Var_17 = mercury__map__init_0_f_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_id_0), (MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_0));
            snapshots__read_and_parse_alloc_site_lines_5_p_0(InputStream_6, Var_17, AllocSiteMap_7);
          }
          else
          {
            // direct tailcall eliminated
            ;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, LineRes_10, (MR_Integer) 0))));
          MR_String Var_23;

          Var_23 = mercury__io__error_message_1_f_0(Error_12);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_alloc_site_decls\'/5", Var_23);
            return;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
snapshots__read_and_parse_alloc_site_lines_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_AllocSiteMap_0_12,
  MR_Word * STATE_VARIABLE_AllocSiteMap_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineRes_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_6, &LineRes_9);
    switch (MR_tag((MR_Word) LineRes_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AllocSiteMap_13 = STATE_VARIABLE_AllocSiteMap_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_10 = ((MR_String) ((MR_hl_field(1, LineRes_9, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_AllocSiteMap_17_17;
          MR_String Line_22;
          MR_Word Words_23;
          MR_String MangledProcName_25;
          MR_String FileName_26;
          MR_String Type_28;
          MR_Integer Id_30;
          MR_Integer LineNum_31;
          MR_Integer NumWords_32;
          MR_String IdStr_24;
          MR_String LineNumStr_27;
          MR_String NumWordsStr_29;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word next_value_of_STATE_VARIABLE_AllocSiteMap_0_12;

          Line_22 = mercury__string__chomp_1_f_0(Line_10);
          Words_23 = mercury__string__split_at_char_2_f_0((MR_Char) 9, Line_22);
          succeeded = (Words_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            IdStr_24 = ((MR_String) ((MR_hl_field(1, Words_23, (MR_Integer) 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(1, Words_23, (MR_Integer) 1))));
            succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MangledProcName_25 = ((MR_String) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
              Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
              succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FileName_26 = ((MR_String) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
                Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
                succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LineNumStr_27 = ((MR_String) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
                  Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
                  succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Type_28 = ((MR_String) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
                    Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
                    succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumWordsStr_29 = ((MR_String) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
                      Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
                      succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(IdStr_24, &Id_30);
                        if (succeeded)
                        {
                          succeeded = mercury__string__to_int_2_p_0(LineNumStr_27, &LineNum_31);
                          if (succeeded)
                            succeeded = mercury__string__to_int_2_p_0(NumWordsStr_29, &NumWords_32);
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
            MR_String ProcName_33;
            MR_Word AllocSite_34;
            MR_Word Var_42;

            demangle__demangle_2_p_0(MangledProcName_25, &ProcName_33);
            {
              AllocSite_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AllocSite_34, 0) = ((MR_Box) (ProcName_33));
              MR_hl_field(0, AllocSite_34, 1) = ((MR_Box) (Type_28));
              MR_hl_field(0, AllocSite_34, 2) = ((MR_Box) (FileName_26));
              MR_hl_field(0, AllocSite_34, 3) = ((MR_Box) (LineNum_31));
              MR_hl_field(0, AllocSite_34, 4) = ((MR_Box) (NumWords_32));
            }
            Var_42 = (MR_Word) (Id_30);
            mercury__map__det_insert_4_p_0((MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_id_0), (MR_Word) (&snapshots__snapshots__type_ctor_info_alloc_site_0), ((MR_Box) (Var_42)), ((MR_Box) (AllocSite_34)), STATE_VARIABLE_AllocSiteMap_0_12, &STATE_VARIABLE_AllocSiteMap_17_17);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.parse_alloc_site_line\'/3", (MR_String) "format error: bad alloc site declaration");
              return;
            }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_AllocSiteMap_0_12 = STATE_VARIABLE_AllocSiteMap_17_17;
          STATE_VARIABLE_AllocSiteMap_0_12 = next_value_of_STATE_VARIABLE_AllocSiteMap_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(2, LineRes_9, (MR_Integer) 0))));
          MR_String Var_21;

          Var_21 = mercury__io__error_message_1_f_0(Error_11);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140snapshots.read_and_parse_alloc_site_lines\'/5", Var_21);
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
  MR_bool succeeded;

  succeeded = snapshots____Unify____alloc_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____alloc_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____alloc_site_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____alloc_site_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____alloc_site_counts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_site_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____alloc_site_counts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____alloc_site_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____alloc_site_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____alloc_site_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____alloc_site_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____major_axis_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____major_axis_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____major_axis_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____major_axis_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____size_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____size_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
snapshots____Unify____snapshot_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = snapshots____Unify____snapshot_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
snapshots____Compare____snapshot_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  snapshots____Compare____snapshot_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
