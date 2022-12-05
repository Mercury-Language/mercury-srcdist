/*
** Automatically generated from `generate_dep_d_files.m'
** by the Mercury compiler,
** version rotd-2022-12-05
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


// :- module parse_tree.generate_dep_d_files.
// :- implementation.

/*
INIT mercury__parse_tree__generate_dep_d_files__init
ENDINIT
*/

#include "parse_tree.generate_dep_d_files.mih"


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
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_generate_dependencies_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2];

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__210__1_2_p_0(
  MR_Word HeadVar__1_99,
  MR_Word * HeadVar__2_100);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
  MR_Word Name_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word GenNodeName_8,
  MR_Box A_9,
  MR_Box B_10);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_6,
  MR_Word GenNodeName_7,
  MR_Box Node_8);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsGraph_6);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word Mode_9,
  MR_Word Search_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap0_12);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word IntDepsGraph_9,
  MR_Word ImpDepsGraph_10);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsMap_2,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_3,
  MR_Word * STATE_VARIABLE_IntDepsGraph_4,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_5,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_6);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[8][3];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[3][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[2][5];

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_6[1][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][10];




static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[2][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".imports_graph"))))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_6[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
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



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_gen_node_name_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "gen_node_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0 = {
  (MR_String) "output_d_file_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1 = {
  (MR_String) "output_all_dependencies",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0
};

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_generate_dependencies_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "generate_dependencies_mode",
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0 },
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_generate_dependencies_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0,

};

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__210__1_2_p_0(
  MR_Word HeadVar__1_99,
  MR_Word * HeadVar__2_100)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_99, HeadVar__2_100);
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
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
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
  MR_Word Name_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;
  MR_String Var_6;

  Var_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Name_3);
  Var_5 = mercury__string__f_43_43_2_f_0(Var_6, (MR_String) "\"");
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_5);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word GenNodeName_8,
  MR_Box A_9,
  MR_Box B_10)
{
  MR_String Var_14;
  MR_String Var_18;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, GenNodeName_8, (MR_Integer) 1))));
  MR_Box conv1_Var_14;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_18;

  conv1_Var_14 = func_0(((MR_Box) (GenNodeName_8)), A_9);
  Var_14 = ((MR_String) (conv1_Var_14));
  mercury__io__write_string_4_p_0(Stream_7, Var_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " -> ");
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, GenNodeName_8, (MR_Integer) 1))));
  conv3_Var_18 = func_2(((MR_Box) (GenNodeName_8)), B_10);
  Var_18 = ((MR_String) (conv3_Var_18));
  mercury__io__write_string_4_p_0(Stream_7, Var_18);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_6,
  MR_Word GenNodeName_7,
  MR_Box Node_8)
{
  MR_String Var_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, GenNodeName_7, (MR_Integer) 1))));
  MR_Box conv1_Var_12;

  conv1_Var_12 = func_0(((MR_Box) (GenNodeName_7)), Node_8);
  Var_12 = ((MR_String) (conv1_Var_12));
  mercury__io__write_string_4_p_0(Stream_6, Var_12);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ";\n");
}

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsGraph_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word A_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(B_5);
  if (!(succeeded))
  {
    MR_String Var_7;
    MR_String Var_8;

    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(A_4, &Var_7);
    if (succeeded)
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(B_5, &Var_8);
  }
  if (succeeded)
    HeadVar__3_3 = DepsGraph_6;
  else
    HeadVar__3_3 = mercury__digraph__add_vertices_and_edge_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (A_4)), ((MR_Box) (B_5)), DepsGraph_6);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word BurdenedModule_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  BurdenedModule_8 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  {
    ModuleDepInfo_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModuleDepInfo_6, 0) = ((MR_Box) (BurdenedModule_8));
  }
  return ModuleDepInfo_6;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(
  MR_Word Globals_5,
  MR_String FileName_6)
{
  MR_Word ModuleName_8;
  MR_Word DepsMap0_9;
  MR_String FileNameDotM_15;
  MR_Word HaveReadModuleSrc_16;
  MR_Word Specs_23;
  MR_Word BurdenedModules_24;
  MR_Word ErrorStream_26;
  MR_Word DepsMap0_27;
  MR_Box conv1_DepsMap0_9;

  FileNameDotM_15 = mercury__string__f_43_43_2_f_0(FileName_6, (MR_String) ".m");
  parse_tree__read_modules__read_module_src_from_file_9_p_0(Globals_5, FileName_6, FileNameDotM_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[0]), &HaveReadModuleSrc_16);
  if (((MR_tag((MR_Word) HaveReadModuleSrc_16)) == (MR_Integer) 1))
  {
    MR_Word ReadModuleErrors_37 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_16, (MR_Integer) 1))));

    parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_6, FileNameDotM_15, &ModuleName_8);
    Specs_23 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_37);
    BurdenedModules_24 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ParseTreeSrc_19 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_16, (MR_Integer) 2))));
    MR_Word ReadModuleErrors_20 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_16, (MR_Integer) 3))));

    ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_19, (MR_Integer) 0))));
    parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_6_p_0(Globals_5, FileNameDotM_15, ParseTreeSrc_19, ReadModuleErrors_20, &Specs_23, &BurdenedModules_24);
  }
  libs__globals__get_error_output_stream_5_p_0(Globals_5, ModuleName_8, &ErrorStream_26);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_26, Globals_5, Specs_23);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[7]), BurdenedModules_24, ((MR_Box) (DepsMap0_27)), &conv1_DepsMap0_9);
  DepsMap0_9 = ((MR_Word) (conv1_DepsMap0_9));
  parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(Globals_5, (MR_Integer) 0, (MR_Integer) 0, ModuleName_8, DepsMap0_9);
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6)
{
  MR_Word DepsMap_8;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap_8);
  parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(Globals_5, (MR_Integer) 0, (MR_Integer) 0, ModuleName_6, DepsMap_8);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(
  MR_Word Globals_5,
  MR_String FileName_6)
{
  MR_Word ModuleName_8;
  MR_Word DepsMap0_9;
  MR_String FileNameDotM_15;
  MR_Word HaveReadModuleSrc_16;
  MR_Word Specs_23;
  MR_Word BurdenedModules_24;
  MR_Word ErrorStream_26;
  MR_Word DepsMap0_27;
  MR_Box conv1_DepsMap0_9;

  FileNameDotM_15 = mercury__string__f_43_43_2_f_0(FileName_6, (MR_String) ".m");
  parse_tree__read_modules__read_module_src_from_file_9_p_0(Globals_5, FileName_6, FileNameDotM_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[0]), &HaveReadModuleSrc_16);
  if (((MR_tag((MR_Word) HaveReadModuleSrc_16)) == (MR_Integer) 1))
  {
    MR_Word ReadModuleErrors_37 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_16, (MR_Integer) 1))));

    parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_6, FileNameDotM_15, &ModuleName_8);
    Specs_23 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_37);
    BurdenedModules_24 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ParseTreeSrc_19 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_16, (MR_Integer) 2))));
    MR_Word ReadModuleErrors_20 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_16, (MR_Integer) 3))));

    ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_19, (MR_Integer) 0))));
    parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_6_p_0(Globals_5, FileNameDotM_15, ParseTreeSrc_19, ReadModuleErrors_20, &Specs_23, &BurdenedModules_24);
  }
  libs__globals__get_error_output_stream_5_p_0(Globals_5, ModuleName_8, &ErrorStream_26);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_26, Globals_5, Specs_23);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[6]), BurdenedModules_24, ((MR_Box) (DepsMap0_27)), &conv1_DepsMap0_9);
  DepsMap0_9 = ((MR_Word) (conv1_DepsMap0_9));
  parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(Globals_5, (MR_Integer) 1, (MR_Integer) 1, ModuleName_8, DepsMap0_9);
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6)
{
  MR_Word DepsMap_8;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap_8);
  parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(Globals_5, (MR_Integer) 1, (MR_Integer) 1, ModuleName_6, DepsMap_8);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_100;

  parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__210__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_100);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_100));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word Mode_9,
  MR_Word Search_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap0_12)
{
  MR_bool succeeded;
  MR_Word DepsMap_14;
  MR_Word DepsMapSpecs_15;
  MR_Word ErrorStream_16;
  MR_Word ModuleDep_17;
  MR_Word BurdenedModule_19;
  MR_Word Baggage_20;
  MR_Word Errors_22;
  MR_Word FatalErrors_23;
  MR_Word Target_44;
  MR_Box conv0_ModuleDep_17;

  parse_tree__deps_map__generate_deps_map_9_p_0(Globals_8, Search_10, ModuleName_11, DepsMap0_12, &DepsMap_14, (MR_Word) ((MR_Unsigned) 0U), &DepsMapSpecs_15);
  libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_11, &ErrorStream_16);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_16, Globals_8, DepsMapSpecs_15);
  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_14, ((MR_Box) (ModuleName_11)), &conv0_ModuleDep_17);
  ModuleDep_17 = ((MR_Word) (conv0_ModuleDep_17));
  BurdenedModule_19 = ((MR_Word) ((MR_hl_field(0, ModuleDep_17, (MR_Integer) 1))));
  Baggage_20 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_19, (MR_Integer) 0))));
  Errors_22 = ((MR_Word) ((MR_hl_field(0, Baggage_20, (MR_Integer) 6))));
  FatalErrors_23 = ((MR_Word) ((MR_hl_field(0, Errors_22, (MR_Integer) 0))));
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_23);
  if (succeeded)
  {
    MR_String ModuleNameStr_24;
    MR_String Message_25;

    ModuleNameStr_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_23, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
    {
      MR_String Var_111;

      Var_111 = mercury__string__f_43_43_2_f_0(ModuleNameStr_24, (MR_String) "\'.");
      Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read source file for module \140", Var_111);
    }
    else
    {
      MR_String Var_114;

      Var_114 = mercury__string__f_43_43_2_f_0(ModuleNameStr_24, (MR_String) "\'.\n");
      Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "cannot parse source file for module \140", Var_114);
    }
    libs__file_util__report_error_4_p_0(ErrorStream_16, Message_25);
  }
  else
  {
    MR_Word IntDepsGraph0_27;
    MR_Word ImpDepsGraph0_28;
    MR_Word DepsList_29;
    MR_Word IntDepsGraph_30;
    MR_Word ImpDepsGraph_31;
    MR_Word ImpDepsOrdering0_32;
    MR_Word ImpDepsOrdering_33;
    MR_Word TransOptDepsOrdering0_34;
    MR_Word IntermodDirs_35;
    MR_Word TransOptDepsOrdering_36;
    MR_Word TransImpDepsGraph_40;
    MR_Word IndirectDepsGraph_41;
    MR_Word IndirectOptDepsGraph_42;
    MR_Word DFilesToWrite_43;

    mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntDepsGraph0_27);
    mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpDepsGraph0_28);
    mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_14, &DepsList_29);
    parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(DepsList_29, DepsMap_14, IntDepsGraph0_27, &IntDepsGraph_30, ImpDepsGraph0_28, &ImpDepsGraph_31);
    mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &ImpDepsOrdering0_32);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[5]), ImpDepsOrdering0_32, &ImpDepsOrdering_33);
    mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsOrdering_33, &TransOptDepsOrdering0_34);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 686, &IntermodDirs_35);
    mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &TransImpDepsGraph_40);
    mercury__digraph__compose_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, TransImpDepsGraph_40, &IndirectDepsGraph_41);
    mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &IndirectOptDepsGraph_42);
    switch (Mode_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String SourceFileName_26 = ((MR_String) ((MR_hl_field(0, Baggage_20, (MR_Integer) 0))));

          parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(Globals_8, SourceFileName_26, ModuleName_11, DepsMap_14);
          parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(Globals_8, SourceFileName_26, ModuleName_11, DepsMap_14);
          DFilesToWrite_43 = DepsList_29;
        }
        break;
      case (MR_Integer) 0:
        {
          DFilesToWrite_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DFilesToWrite_43, 0) = ((MR_Box) (ModuleDep_17));
          MR_hl_field(1, DFilesToWrite_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
    }
    parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(Globals_8, ModuleName_11, IntDepsGraph_30, ImpDepsGraph_31);
    parse_tree__write_deps_file__maybe_output_module_order_5_p_0(Globals_8, ModuleName_11, ImpDepsOrdering0_32);
    parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_8, (MR_Integer) 1, IntermodDirs_35, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), TransOptDepsOrdering0_34, &TransOptDepsOrdering_36);
    parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(Globals_8, DFilesToWrite_43, IntDepsGraph_30, ImpDepsGraph_31, IndirectDepsGraph_41, IndirectOptDepsGraph_42, TransOptDepsOrdering_36, DepsMap_14);
  }
  libs__globals__get_target_2_p_0(Globals_8, &Target_44);
  succeeded = (Target_44 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (Mode_9 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word _Succeeded_45;

    parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_8, ModuleName_11, &_Succeeded_45);
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__generate_dep_d_files__write_edge_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__generate_dep_d_files__write_node_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), wrapper_arg_1);
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word IntDepsGraph_9,
  MR_Word ImpDepsGraph_10)
{
  MR_Word ImportsGraph_12;
  MR_Word Verbose_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 189, &ImportsGraph_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 72, &Verbose_13);
  switch (ImportsGraph_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileName_14;
        MR_Word MaybeProgressStream_15;
        MR_Word ImpResult_17;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.generate_dep_d_files.maybe_output_imports_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_3[1])), ModuleName_8, &FileName_14);
        switch (Verbose_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeProgressStream_15 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream0_16;

              libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_8, &ProgressStream0_16);
              mercury__io__write_string_4_p_0(ProgressStream0_16, (MR_String) "% Creating imports graph file \140");
              mercury__io__write_string_4_p_0(ProgressStream0_16, FileName_14);
              mercury__io__write_string_4_p_0(ProgressStream0_16, (MR_String) "\'...");
              {
                MaybeProgressStream_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeProgressStream_15, 0) = ((MR_Box) (ProgressStream0_16));
              }
            }
            break;
        }
        mercury__io__open_output_4_p_0(FileName_14, &ImpResult_17);
        if (((MR_tag((MR_Word) ImpResult_17)) == (MR_Integer) 1))
        {
          MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, ImpResult_17, (MR_Integer) 0))));
          MR_Word ErrorStream_23;
          MR_String IOErrorMessage_24;
          MR_String ImpMessage_25;
          MR_String Var_82;
          MR_String Var_84;
          MR_String Var_85;

          if (!((MaybeProgressStream_15 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_65 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_15, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_65, (MR_String) " failed.\n");
            mercury__io__flush_output_3_p_0(ProgressStream_65);
          }
          libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_8, &ErrorStream_23);
          mercury__io__error_message_2_p_0(IOError_22, &IOErrorMessage_24);
          Var_82 = mercury__string__f_43_43_2_f_0(IOErrorMessage_24, (MR_String) "\n");
          Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_82);
          Var_85 = mercury__string__f_43_43_2_f_0(FileName_14, Var_84);
          ImpMessage_25 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_85);
          libs__file_util__report_error_4_p_0(ErrorStream_23, ImpMessage_25);
        }
        else
        {
          MR_Word ImpStream_18 = ((MR_Word) ((MR_hl_field(0, ImpResult_17, (MR_Integer) 0))));
          MR_Word Deps0_19;
          MR_Word Deps_20;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_String Var_88;
          MR_String Var_91;
          MR_String Var_93;
          MR_String Var_96;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Box conv1_Deps0_19;
          MR_Box conv3_Deps_20;
          MR_Box conv5_STATE_VARIABLE_IO_28_102;

          Var_44 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_9);
          Var_45 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          conv1_Deps0_19 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), Var_44, ((MR_Box) (Var_45)));
          Deps0_19 = ((MR_Word) (conv1_Deps0_19));
          Var_47 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_10);
          conv3_Deps_20 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[3]), Var_47, ((MR_Box) (Deps0_19)));
          Deps_20 = ((MR_Word) (conv3_Deps_20));
          Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "imports", (MR_String) " {\n");
          Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "digraph ", Var_91);
          mercury__io__write_string_4_p_0(ImpStream_18, Var_88);
          Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "imports", (MR_String) "\";\n");
          Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "label=\"", Var_96);
          mercury__io__write_string_4_p_0(ImpStream_18, Var_93);
          mercury__io__write_string_4_p_0(ImpStream_18, (MR_String) "center=true;\n");
          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_100, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0]));
            MR_hl_field(0, Var_100, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_4));
            MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_100, 3) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            MR_hl_field(0, Var_100, 4) = ((MR_Box) (ImpStream_18));
            MR_hl_field(0, Var_100, 5) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_1[4]));
          }
          {
            Var_101 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_101, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_8[0]));
            MR_hl_field(0, Var_101, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_5));
            MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_101, 3) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            MR_hl_field(0, Var_101, 4) = ((MR_Box) (ImpStream_18));
            MR_hl_field(0, Var_101, 5) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_1[4]));
          }
          mercury__digraph__traverse_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Deps_20, Var_100, Var_101, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_28_102);
          mercury__io__write_string_4_p_0(ImpStream_18, (MR_String) "}\n");
          mercury__io__close_output_3_p_0(ImpStream_18);
          if (!((MaybeProgressStream_15 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_21 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_15, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) " done.\n");
          }
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsMap_2,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_3,
  MR_Word * STATE_VARIABLE_IntDepsGraph_4,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_5,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpDepsGraph_6 = STATE_VARIABLE_ImpDepsGraph_0_5;
      *STATE_VARIABLE_IntDepsGraph_4 = STATE_VARIABLE_IntDepsGraph_0_3;
    }
    else
    {
      MR_Word Deps_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word DepsList_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BurdenedModule_20 = ((MR_Word) ((MR_hl_field(0, Deps_14, (MR_Integer) 1))));
      MR_Word Baggage_21 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_20, (MR_Integer) 0))));
      MR_Word Errors_22 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 6))));
      MR_Word FatalErrors_23 = ((MR_Word) ((MR_hl_field(0, Errors_22, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_IntDepsGraph_30_30;
      MR_Word STATE_VARIABLE_ImpDepsGraph_31_31;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntDepsGraph_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImpDepsGraph_0_5;

      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_23);
      if (succeeded)
      {
        MR_Word ModuleDepInfo_24;
        MR_Word Var_29;

        {
          ModuleDepInfo_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModuleDepInfo_24, 0) = ((MR_Box) (BurdenedModule_20));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[0]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (DepsMap_2));
        }
        parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_24, Var_29, STATE_VARIABLE_IntDepsGraph_0_3, &STATE_VARIABLE_IntDepsGraph_30_30, STATE_VARIABLE_ImpDepsGraph_0_5, &STATE_VARIABLE_ImpDepsGraph_31_31);
      }
      else
      {
        STATE_VARIABLE_ImpDepsGraph_31_31 = STATE_VARIABLE_ImpDepsGraph_0_5;
        STATE_VARIABLE_IntDepsGraph_30_30 = STATE_VARIABLE_IntDepsGraph_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = DepsList_15;
      next_value_of_STATE_VARIABLE_IntDepsGraph_0_3 = STATE_VARIABLE_IntDepsGraph_30_30;
      next_value_of_STATE_VARIABLE_ImpDepsGraph_0_5 = STATE_VARIABLE_ImpDepsGraph_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntDepsGraph_0_3 = next_value_of_STATE_VARIABLE_IntDepsGraph_0_3;
      STATE_VARIABLE_ImpDepsGraph_0_5 = next_value_of_STATE_VARIABLE_ImpDepsGraph_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__generate_dep_d_files__init(void)
{
}

void mercury__parse_tree__generate_dep_d_files__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_gen_node_name_1);
	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_generate_dependencies_mode_0);
}

void mercury__parse_tree__generate_dep_d_files__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__generate_dep_d_files__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.generate_dep_d_files.
