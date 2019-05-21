/*
** Automatically generated from `generate_dep_d_files.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module parse_tree.generate_dep_d_files. */
/* :- implementation. */

/*
INIT mercury__parse_tree__generate_dep_d_files__init
ENDINIT
*/

#include "parse_tree.generate_dep_d_files.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "digraph.mih"
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
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_deps_file.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_value_ordered_generate_dependencies_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2];

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__198__1_2_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_107,
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__2_108);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_6,
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_5,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
  MR_Word parse_tree__generate_dep_d_files__Name_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_22,
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_8,
  MR_Box parse_tree__generate_dep_d_files__A_9,
  MR_Box parse_tree__generate_dep_d_files__B_10);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_16,
  MR_Word parse_tree__generate_dep_d_files__Stream_6,
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_7,
  MR_Box parse_tree__generate_dep_d_files__Node_8);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__DepsGraph_6);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
  MR_Word parse_tree__generate_dep_d_files__DepsMap_4,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_5);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_8,
  MR_Word parse_tree__generate_dep_d_files__Mode_9,
  MR_Word parse_tree__generate_dep_d_files__Search_10,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_11,
  MR_Word parse_tree__generate_dep_d_files__DepsMap0_12);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_7,
  MR_Word parse_tree__generate_dep_d_files__Module_8,
  MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_9,
  MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_10);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
  MR_String parse_tree__generate_dep_d_files__Name_8,
  MR_Word parse_tree__generate_dep_d_files__Graph_10);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__DepsMap_2,
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3,
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4,
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5,
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[10][3];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[4][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[3][6];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][5];

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_5[1][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[1][9];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][10];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][1];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[1][11];




static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_gen_node_name_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "gen_node_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0 = {
  (MR_String) "output_d_file_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1 = {
  (MR_String) "output_all_dependencies",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_value_ordered_generate_dependencies_mode_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "generate_dependencies_mode",
  {     parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0 },
  {     parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_value_ordered_generate_dependencies_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0
};

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__198__1_2_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_107,
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__2_108)
{
  {
    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__generate_dep_d_files__HeadVar__1_107, parse_tree__generate_dep_d_files__HeadVar__2_108);
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__generate_dep_d_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__generate_dep_d_files__HeadVar__2_2;
    MR_Integer parse_tree__generate_dep_d_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__generate_dep_d_files__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__Cast_HeadVar1_4, parse_tree__generate_dep_d_files__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__HeadVar__2_1 == parse_tree__generate_dep_d_files__HeadVar__2_2);

    return parse_tree__generate_dep_d_files__succeeded;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_6,
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
{
  {
    parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__HeadVar__2_2, parse_tree__generate_dep_d_files__HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
{
  {
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar1_4 = parse_tree__generate_dep_d_files__HeadVar__2_2;
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar2_5 = parse_tree__generate_dep_d_files__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar1_4, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_5,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;

    {
      parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__HeadVar__2_2);
    }
    return parse_tree__generate_dep_d_files__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar1_3 = parse_tree__generate_dep_d_files__HeadVar__1_1;
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar2_4 = parse_tree__generate_dep_d_files__HeadVar__2_2;

    {
      parse_tree__generate_dep_d_files__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar1_3, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar2_4);
    }
    return parse_tree__generate_dep_d_files__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
  MR_Word parse_tree__generate_dep_d_files__Name_3)
{
  {
    MR_String parse_tree__generate_dep_d_files__HeadVar__2_2;
    MR_String parse_tree__generate_dep_d_files__Var_5;
    MR_String parse_tree__generate_dep_d_files__Var_6;

    {
      parse_tree__generate_dep_d_files__Var_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__generate_dep_d_files__Name_3);
    }
    {
      parse_tree__generate_dep_d_files__Var_5 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__Var_6, (MR_String) "\"");
    }
    {
      parse_tree__generate_dep_d_files__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__generate_dep_d_files__Var_5);
    }
    return parse_tree__generate_dep_d_files__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_22,
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_8,
  MR_Box parse_tree__generate_dep_d_files__A_9,
  MR_Box parse_tree__generate_dep_d_files__B_10)
{
  {
    MR_String parse_tree__generate_dep_d_files__Var_14;
    MR_String parse_tree__generate_dep_d_files__Var_18;
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_8, (MR_Integer) 1)));
    MR_Box parse_tree__generate_dep_d_files__conv1_Var_14;
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_2)(MR_Box, MR_Box);
    MR_Box parse_tree__generate_dep_d_files__conv3_Var_18;

    {
      parse_tree__generate_dep_d_files__conv1_Var_14 = parse_tree__generate_dep_d_files__func_0(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_8), parse_tree__generate_dep_d_files__A_9);
    }
    parse_tree__generate_dep_d_files__Var_14 = ((MR_String) parse_tree__generate_dep_d_files__conv1_Var_14);
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__Var_14);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) " -> ");
    }
    parse_tree__generate_dep_d_files__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_8, (MR_Integer) 1)));
    {
      parse_tree__generate_dep_d_files__conv3_Var_18 = parse_tree__generate_dep_d_files__func_2(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_8), parse_tree__generate_dep_d_files__B_10);
    }
    parse_tree__generate_dep_d_files__Var_18 = ((MR_String) parse_tree__generate_dep_d_files__conv3_Var_18);
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__Var_18);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) ";\n");
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_16,
  MR_Word parse_tree__generate_dep_d_files__Stream_6,
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_7,
  MR_Box parse_tree__generate_dep_d_files__Node_8)
{
  {
    MR_String parse_tree__generate_dep_d_files__Var_12;
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_7, (MR_Integer) 1)));
    MR_Box parse_tree__generate_dep_d_files__conv1_Var_12;

    {
      parse_tree__generate_dep_d_files__conv1_Var_12 = parse_tree__generate_dep_d_files__func_0(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_7), parse_tree__generate_dep_d_files__Node_8);
    }
    parse_tree__generate_dep_d_files__Var_12 = ((MR_String) parse_tree__generate_dep_d_files__conv1_Var_12);
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_6, parse_tree__generate_dep_d_files__Var_12);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_6, (MR_String) ";\n");
    }
  }
}

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__DepsGraph_6)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;
    MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3;
    MR_Word parse_tree__generate_dep_d_files__A_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__generate_dep_d_files__B_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(parse_tree__generate_dep_d_files__B_5);
    }
    if (!(parse_tree__generate_dep_d_files__succeeded))
    {
      MR_String parse_tree__generate_dep_d_files__Var_7;
      MR_String parse_tree__generate_dep_d_files__Var_8;

      {
        parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__generate_dep_d_files__A_4, &parse_tree__generate_dep_d_files__Var_7);
      }
      if (parse_tree__generate_dep_d_files__succeeded)
        {
          parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__generate_dep_d_files__B_5, &parse_tree__generate_dep_d_files__Var_8);
        }
    }
    if (parse_tree__generate_dep_d_files__succeeded)
      parse_tree__generate_dep_d_files__HeadVar__3_3 = parse_tree__generate_dep_d_files__DepsGraph_6;
    else
    {
      {
        parse_tree__generate_dep_d_files__HeadVar__3_3 = mercury__digraph__add_vertices_and_edge_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__generate_dep_d_files__A_4)), ((MR_Box) (parse_tree__generate_dep_d_files__B_5)), parse_tree__generate_dep_d_files__DepsGraph_6);
      }
    }
    return parse_tree__generate_dep_d_files__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
  MR_Word parse_tree__generate_dep_d_files__DepsMap_4,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_5)
{
  {
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_6;
    MR_Word parse_tree__generate_dep_d_files__Var_8;
    MR_Box parse_tree__generate_dep_d_files__conv0_Var_8;
    MR_Word parse_tree__generate_dep_d_files__Var_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__generate_dep_d_files__DepsMap_4, ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_5)), &parse_tree__generate_dep_d_files__conv0_Var_8);
    }
    parse_tree__generate_dep_d_files__Var_8 = ((MR_Word) parse_tree__generate_dep_d_files__conv0_Var_8);
    parse_tree__generate_dep_d_files__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_8, (MR_Integer) 0)));
    parse_tree__generate_dep_d_files__ModuleAndImports_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_8, (MR_Integer) 1)));
    return parse_tree__generate_dep_d_files__ModuleAndImports_6;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

    {
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), &parse_tree__generate_dep_d_files__conv2_HeadVar__3_3);
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__8_8;

    {
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__8_8);
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

    {
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
  MR_String parse_tree__generate_dep_d_files__FileName_6)
{
  {
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_42_51;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_43_52;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_48_57;
    MR_Word parse_tree__generate_dep_d_files__ModuleName_8;
    MR_Word parse_tree__generate_dep_d_files__DepsMap_9;
    MR_Word parse_tree__generate_dep_d_files__ParseTreeSrc_24;
    MR_Word parse_tree__generate_dep_d_files__Specs0_25;
    MR_Word parse_tree__generate_dep_d_files__Error_26;
    MR_Word parse_tree__generate_dep_d_files__RawCompUnits_27;
    MR_Word parse_tree__generate_dep_d_files__Specs_28;
    MR_Word parse_tree__generate_dep_d_files__NestedModuleNames_33;
    MR_String parse_tree__generate_dep_d_files__SourceFileName_34;
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImportsList_35;
    MR_Word parse_tree__generate_dep_d_files__DepsMap0_36;
    MR_Word parse_tree__generate_dep_d_files__Var_45;
    MR_Word parse_tree__generate_dep_d_files__Var_48;
    MR_Word parse_tree__generate_dep_d_files__Var_23;
    MR_Word parse_tree__generate_dep_d_files__Var_29;
    MR_Word parse_tree__generate_dep_d_files__Var_30;
    MR_Integer parse_tree__generate_dep_d_files___NumWarnings_31;
    MR_Integer parse_tree__generate_dep_d_files___NumErrors_32;
    MR_Box parse_tree__generate_dep_d_files__conv3_DepsMap_9;

    {
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__generate_dep_d_files__Globals_5, parse_tree__generate_dep_d_files__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_8[0], &parse_tree__generate_dep_d_files__Var_23, &parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Error_26);
    }
    {
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__RawCompUnits_27, parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Specs_28);
    }
    parse_tree__generate_dep_d_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 0)));
    parse_tree__generate_dep_d_files__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 1)));
    parse_tree__generate_dep_d_files__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 2)));
    {
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__generate_dep_d_files__Specs_28, parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumWarnings_31, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumErrors_32);
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__generate_dep_d_files__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    {
      parse_tree__generate_dep_d_files__Var_45 = mercury__list__map_2_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[8], parse_tree__generate_dep_d_files__RawCompUnits_27);
    }
    {
      parse_tree__generate_dep_d_files__NestedModuleNames_33 = mercury__set__list_to_set_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, parse_tree__generate_dep_d_files__Var_45);
    }
    {
      parse_tree__generate_dep_d_files__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__FileName_6, (MR_String) ".m");
    }
    {
      parse_tree__generate_dep_d_files__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__Globals_5));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__SourceFileName_34));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_8));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 6) = ((MR_Box) (parse_tree__generate_dep_d_files__NestedModuleNames_33));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 8) = ((MR_Box) (parse_tree__generate_dep_d_files__Error_26));
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
    {
      mercury__list__map_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, parse_tree__generate_dep_d_files__Var_48, parse_tree__generate_dep_d_files__RawCompUnits_27, &parse_tree__generate_dep_d_files__ModuleAndImportsList_35);
    }
    {
      mercury__map__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap0_36);
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[9], parse_tree__generate_dep_d_files__ModuleAndImportsList_35, ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap0_36)), &parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    }
    parse_tree__generate_dep_d_files__DepsMap_9 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    {
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__generate_dep_d_files__ModuleName_8, parse_tree__generate_dep_d_files__DepsMap_9);
    }
  }
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_6)
{
  {
    MR_Word parse_tree__generate_dep_d_files__DepsMap_8;

    {
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap_8);
    }
    {
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__generate_dep_d_files__ModuleName_6, parse_tree__generate_dep_d_files__DepsMap_8);
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

    {
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), &parse_tree__generate_dep_d_files__conv2_HeadVar__3_3);
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__8_8;

    {
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__8_8);
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

    {
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
  MR_String parse_tree__generate_dep_d_files__FileName_6)
{
  {
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_42_51;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_43_52;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_48_57;
    MR_Word parse_tree__generate_dep_d_files__ModuleName_8;
    MR_Word parse_tree__generate_dep_d_files__DepsMap_9;
    MR_Word parse_tree__generate_dep_d_files__ParseTreeSrc_24;
    MR_Word parse_tree__generate_dep_d_files__Specs0_25;
    MR_Word parse_tree__generate_dep_d_files__Error_26;
    MR_Word parse_tree__generate_dep_d_files__RawCompUnits_27;
    MR_Word parse_tree__generate_dep_d_files__Specs_28;
    MR_Word parse_tree__generate_dep_d_files__NestedModuleNames_33;
    MR_String parse_tree__generate_dep_d_files__SourceFileName_34;
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImportsList_35;
    MR_Word parse_tree__generate_dep_d_files__DepsMap0_36;
    MR_Word parse_tree__generate_dep_d_files__Var_45;
    MR_Word parse_tree__generate_dep_d_files__Var_48;
    MR_Word parse_tree__generate_dep_d_files__Var_23;
    MR_Word parse_tree__generate_dep_d_files__Var_29;
    MR_Word parse_tree__generate_dep_d_files__Var_30;
    MR_Integer parse_tree__generate_dep_d_files___NumWarnings_31;
    MR_Integer parse_tree__generate_dep_d_files___NumErrors_32;
    MR_Box parse_tree__generate_dep_d_files__conv3_DepsMap_9;

    {
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__generate_dep_d_files__Globals_5, parse_tree__generate_dep_d_files__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_8[0], &parse_tree__generate_dep_d_files__Var_23, &parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Error_26);
    }
    {
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__RawCompUnits_27, parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Specs_28);
    }
    parse_tree__generate_dep_d_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 0)));
    parse_tree__generate_dep_d_files__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 1)));
    parse_tree__generate_dep_d_files__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 2)));
    {
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__generate_dep_d_files__Specs_28, parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumWarnings_31, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumErrors_32);
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__generate_dep_d_files__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    {
      parse_tree__generate_dep_d_files__Var_45 = mercury__list__map_2_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[6], parse_tree__generate_dep_d_files__RawCompUnits_27);
    }
    {
      parse_tree__generate_dep_d_files__NestedModuleNames_33 = mercury__set__list_to_set_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, parse_tree__generate_dep_d_files__Var_45);
    }
    {
      parse_tree__generate_dep_d_files__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__FileName_6, (MR_String) ".m");
    }
    {
      parse_tree__generate_dep_d_files__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__Globals_5));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__SourceFileName_34));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_8));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 6) = ((MR_Box) (parse_tree__generate_dep_d_files__NestedModuleNames_33));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_48, 8) = ((MR_Box) (parse_tree__generate_dep_d_files__Error_26));
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
    {
      mercury__list__map_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, parse_tree__generate_dep_d_files__Var_48, parse_tree__generate_dep_d_files__RawCompUnits_27, &parse_tree__generate_dep_d_files__ModuleAndImportsList_35);
    }
    {
      mercury__map__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap0_36);
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[7], parse_tree__generate_dep_d_files__ModuleAndImportsList_35, ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap0_36)), &parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    }
    parse_tree__generate_dep_d_files__DepsMap_9 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    {
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__generate_dep_d_files__ModuleName_8, parse_tree__generate_dep_d_files__DepsMap_9);
    }
  }
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_6)
{
  {
    MR_Word parse_tree__generate_dep_d_files__DepsMap_8;

    {
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap_8);
    }
    {
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__generate_dep_d_files__ModuleName_6, parse_tree__generate_dep_d_files__DepsMap_8);
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__2_108;

    {
      parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__198__1_2_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__2_108);
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__2_108));
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_8,
  MR_Word parse_tree__generate_dep_d_files__Mode_9,
  MR_Word parse_tree__generate_dep_d_files__Search_10,
  MR_Word parse_tree__generate_dep_d_files__ModuleName_11,
  MR_Word parse_tree__generate_dep_d_files__DepsMap0_12)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_104_104;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_105_105;
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_106_106;
    MR_Word parse_tree__generate_dep_d_files__DepsMap_14;
    MR_Word parse_tree__generate_dep_d_files__ModuleDep_15;
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_17;
    MR_Word parse_tree__generate_dep_d_files__Errors_18;
    MR_Word parse_tree__generate_dep_d_files__FatalErrors_19;
    MR_Word parse_tree__generate_dep_d_files__Target_39;
    MR_Word parse_tree__generate_dep_d_files__Var_44;
    MR_Box parse_tree__generate_dep_d_files__conv0_ModuleDep_15;
    MR_Word parse_tree__generate_dep_d_files__Var_16;
    MR_String parse_tree__generate_dep_d_files__Var_78;
    MR_Word parse_tree__generate_dep_d_files__Var_79;
    MR_Word parse_tree__generate_dep_d_files__Var_80;
    MR_Word parse_tree__generate_dep_d_files__Var_81;
    MR_Word parse_tree__generate_dep_d_files__Var_82;
    MR_Word parse_tree__generate_dep_d_files__Var_83;
    MR_Word parse_tree__generate_dep_d_files__Var_84;
    MR_Word parse_tree__generate_dep_d_files__Var_85;
    MR_Word parse_tree__generate_dep_d_files__Var_86;
    MR_Word parse_tree__generate_dep_d_files__Var_87;
    MR_Word parse_tree__generate_dep_d_files__Var_88;
    MR_Word parse_tree__generate_dep_d_files__Var_89;
    MR_Word parse_tree__generate_dep_d_files__Var_90;
    MR_Word parse_tree__generate_dep_d_files__Var_91;
    MR_Word parse_tree__generate_dep_d_files__Var_92;
    MR_Word parse_tree__generate_dep_d_files__Var_93;
    MR_Word parse_tree__generate_dep_d_files__Var_94;
    MR_Word parse_tree__generate_dep_d_files__Var_95;
    MR_Word parse_tree__generate_dep_d_files__Var_96;
    MR_Word parse_tree__generate_dep_d_files__Var_97;
    MR_Word parse_tree__generate_dep_d_files__Var_98;
    MR_Word parse_tree__generate_dep_d_files__Var_99;
    MR_Word parse_tree__generate_dep_d_files__Var_100;
    MR_Word parse_tree__generate_dep_d_files__Var_101;
    MR_Word parse_tree__generate_dep_d_files__Var_102;
    MR_String parse_tree__generate_dep_d_files__Var_103;

    {
      parse_tree__deps_map__generate_deps_map_7_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__Search_10, parse_tree__generate_dep_d_files__DepsMap0_12, &parse_tree__generate_dep_d_files__DepsMap_14);
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__generate_dep_d_files__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
    {
      mercury__map__lookup_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__TypeCtorInfo_105_105, parse_tree__generate_dep_d_files__DepsMap_14, ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_11)), &parse_tree__generate_dep_d_files__conv0_ModuleDep_15);
    }
    parse_tree__generate_dep_d_files__ModuleDep_15 = ((MR_Word) parse_tree__generate_dep_d_files__conv0_ModuleDep_15);
    parse_tree__generate_dep_d_files__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleDep_15, (MR_Integer) 0)));
    parse_tree__generate_dep_d_files__ModuleAndImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleDep_15, (MR_Integer) 1)));
    parse_tree__generate_dep_d_files__Var_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 0)));
    parse_tree__generate_dep_d_files__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 1)));
    parse_tree__generate_dep_d_files__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 2)));
    parse_tree__generate_dep_d_files__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 3)));
    parse_tree__generate_dep_d_files__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 4)));
    parse_tree__generate_dep_d_files__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 5)));
    parse_tree__generate_dep_d_files__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 6)));
    parse_tree__generate_dep_d_files__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 7)));
    parse_tree__generate_dep_d_files__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 8)));
    parse_tree__generate_dep_d_files__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 9)));
    parse_tree__generate_dep_d_files__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 10)));
    parse_tree__generate_dep_d_files__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 11)));
    parse_tree__generate_dep_d_files__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 12)));
    parse_tree__generate_dep_d_files__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 13)));
    parse_tree__generate_dep_d_files__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 14)));
    parse_tree__generate_dep_d_files__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 15)));
    parse_tree__generate_dep_d_files__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 16)));
    parse_tree__generate_dep_d_files__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 17)));
    parse_tree__generate_dep_d_files__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 18)));
    parse_tree__generate_dep_d_files__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 19)));
    parse_tree__generate_dep_d_files__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 20)));
    parse_tree__generate_dep_d_files__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 21)));
    parse_tree__generate_dep_d_files__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 22)));
    parse_tree__generate_dep_d_files__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 23)));
    parse_tree__generate_dep_d_files__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 24)));
    parse_tree__generate_dep_d_files__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 25)));
    parse_tree__generate_dep_d_files__Var_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 26)));
    {
      parse_tree__generate_dep_d_files__Var_44 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    }
    parse_tree__generate_dep_d_files__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    {
      mercury__set__intersect_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__Errors_18, parse_tree__generate_dep_d_files__Var_44, &parse_tree__generate_dep_d_files__FatalErrors_19);
    }
    {
      parse_tree__generate_dep_d_files__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__FatalErrors_19);
    }
    if (parse_tree__generate_dep_d_files__succeeded)
    {
      MR_String parse_tree__generate_dep_d_files__ModuleString_20;
      MR_String parse_tree__generate_dep_d_files__Message_21;

      {
        parse_tree__generate_dep_d_files__ModuleString_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__generate_dep_d_files__ModuleName_11);
      }
      {
        parse_tree__generate_dep_d_files__succeeded = mercury__set__contains_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__FatalErrors_19, ((MR_Box) ((MR_Integer) 0)));
      }
      if (parse_tree__generate_dep_d_files__succeeded)
      {
        MR_Word parse_tree__generate_dep_d_files__Var_46;
        MR_Word parse_tree__generate_dep_d_files__Var_48;

        {
          parse_tree__generate_dep_d_files__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_48, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleString_20));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__generate_dep_d_files_scalar_common_2[3])));
        }
        {
          parse_tree__generate_dep_d_files__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_46, 0) = ((MR_Box) ((MR_String) "cannot read source file for module \140"));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_46, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__Var_48));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__Var_46, &parse_tree__generate_dep_d_files__Message_21);
        }
      }
      else
      {
        MR_Word parse_tree__generate_dep_d_files__Var_52;
        MR_Word parse_tree__generate_dep_d_files__Var_54;

        {
          parse_tree__generate_dep_d_files__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_54, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleString_20));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__generate_dep_d_files_scalar_common_2[3])));
        }
        {
          parse_tree__generate_dep_d_files__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_52, 0) = ((MR_Box) ((MR_String) "cannot parse source file for module \140"));
          MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_52, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__Var_54));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__Var_52, &parse_tree__generate_dep_d_files__Message_21);
        }
      }
      {
        libs__file_util__report_error_3_p_0(parse_tree__generate_dep_d_files__Message_21);
      }
    }
    else
    {
      MR_Word parse_tree__generate_dep_d_files__IntDepsGraph0_23;
      MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph0_24;
      MR_Word parse_tree__generate_dep_d_files__DepsList_25;
      MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_26;
      MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_27;
      MR_Word parse_tree__generate_dep_d_files__ImpDepsOrdering0_28;
      MR_Word parse_tree__generate_dep_d_files__ImpDepsOrdering_29;
      MR_Word parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30;
      MR_Word parse_tree__generate_dep_d_files__IntermodDirs_31;
      MR_Word parse_tree__generate_dep_d_files__TransOptDepsOrdering_32;
      MR_Word parse_tree__generate_dep_d_files__TransImpDepsGraph_35;
      MR_Word parse_tree__generate_dep_d_files__IndirectDepsGraph_36;
      MR_Word parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37;
      MR_Word parse_tree__generate_dep_d_files__DFilesToWrite_38;

      {
        mercury__digraph__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, &parse_tree__generate_dep_d_files__IntDepsGraph0_23);
      }
      {
        mercury__digraph__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, &parse_tree__generate_dep_d_files__ImpDepsGraph0_24);
      }
      {
        mercury__map__values_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__TypeCtorInfo_105_105, parse_tree__generate_dep_d_files__DepsMap_14, &parse_tree__generate_dep_d_files__DepsList_25);
      }
      {
        parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(parse_tree__generate_dep_d_files__DepsList_25, parse_tree__generate_dep_d_files__DepsMap_14, parse_tree__generate_dep_d_files__IntDepsGraph0_23, &parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph0_24, &parse_tree__generate_dep_d_files__ImpDepsGraph_27);
      }
      {
        mercury__digraph__atsort_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__ImpDepsOrdering0_28);
      }
      {
        mercury__list__map_3_p_0((MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[1], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[5], parse_tree__generate_dep_d_files__ImpDepsOrdering0_28, &parse_tree__generate_dep_d_files__ImpDepsOrdering_29);
      }
      {
        mercury__list__condense_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsOrdering_29, &parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30);
      }
      {
        libs__globals__lookup_accumulating_option_3_p_0(parse_tree__generate_dep_d_files__Globals_8, (MR_Integer) 652, &parse_tree__generate_dep_d_files__IntermodDirs_31);
      }
      {
        mercury__digraph__tc_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__TransImpDepsGraph_35);
      }
      {
        mercury__digraph__compose_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, parse_tree__generate_dep_d_files__TransImpDepsGraph_35, &parse_tree__generate_dep_d_files__IndirectDepsGraph_36);
      }
      {
        mercury__digraph__tc_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37);
      }
      switch (parse_tree__generate_dep_d_files__Mode_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String parse_tree__generate_dep_d_files__SourceFileName_22;

            {
              parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__generate_dep_d_files__ModuleAndImports_17, &parse_tree__generate_dep_d_files__SourceFileName_22);
            }
            {
              parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__SourceFileName_22, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__DepsMap_14);
            }
            {
              parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__SourceFileName_22, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__DepsMap_14);
            }
            parse_tree__generate_dep_d_files__DFilesToWrite_38 = parse_tree__generate_dep_d_files__DepsList_25;
          }
          break;
        case (MR_Integer) 0:
          {
            {
              parse_tree__generate_dep_d_files__DFilesToWrite_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__DFilesToWrite_38, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleDep_15));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__DFilesToWrite_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
      }
      {
        parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph_27);
      }
      {
        parse_tree__write_deps_file__maybe_output_module_order_5_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__ImpDepsOrdering0_28);
      }
      {
        parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__generate_dep_d_files__Globals_8, (MR_Integer) 1, parse_tree__generate_dep_d_files__IntermodDirs_31, (MR_String) ".trans_opt", parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30, &parse_tree__generate_dep_d_files__TransOptDepsOrdering_32);
      }
      {
        parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__DFilesToWrite_38, parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph_27, parse_tree__generate_dep_d_files__IndirectDepsGraph_36, parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37, parse_tree__generate_dep_d_files__TransOptDepsOrdering_32, parse_tree__generate_dep_d_files__DepsMap_14);
      }
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__generate_dep_d_files__Globals_8, &parse_tree__generate_dep_d_files__Target_39);
    }
    parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__Target_39 == (MR_Integer) 2);
    if (parse_tree__generate_dep_d_files__succeeded)
      parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__Mode_9 == (MR_Integer) 1);
    if (parse_tree__generate_dep_d_files__succeeded)
    {
      MR_Word parse_tree__generate_dep_d_files___Succeeded_40;

      {
        parse_tree__module_cmds__create_java_shell_script_5_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, &parse_tree__generate_dep_d_files___Succeeded_40);
      }
    }
    else
    {
    }
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

    {
      parse_tree__generate_dep_d_files__conv2_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
    return parse_tree__generate_dep_d_files__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__3_3;

    {
      parse_tree__generate_dep_d_files__conv0_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__3_3));
    return parse_tree__generate_dep_d_files__wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__Globals_7,
  MR_Word parse_tree__generate_dep_d_files__Module_8,
  MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_9,
  MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_10)
{
  {
    MR_Word parse_tree__generate_dep_d_files__ImportsGraph_12;
    MR_Word parse_tree__generate_dep_d_files__Verbose_13;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__generate_dep_d_files__Globals_7, (MR_Integer) 157, &parse_tree__generate_dep_d_files__ImportsGraph_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__generate_dep_d_files__Globals_7, (MR_Integer) 56, &parse_tree__generate_dep_d_files__Verbose_13);
    }
    switch (parse_tree__generate_dep_d_files__ImportsGraph_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__generate_dep_d_files__FileName_14;
          MR_Word parse_tree__generate_dep_d_files__ImpResult_15;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__generate_dep_d_files__Globals_7, (MR_Integer) 0, (MR_String) ".imports_graph", parse_tree__generate_dep_d_files__Module_8, &parse_tree__generate_dep_d_files__FileName_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) "% Creating imports graph file \140");
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, parse_tree__generate_dep_d_files__FileName_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) "\'...");
          }
          {
            mercury__io__open_output_4_p_0(parse_tree__generate_dep_d_files__FileName_14, &parse_tree__generate_dep_d_files__ImpResult_15);
          }
          if (((MR_tag((MR_Word) parse_tree__generate_dep_d_files__ImpResult_15)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__generate_dep_d_files__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__ImpResult_15, (MR_Integer) 0)));
            MR_String parse_tree__generate_dep_d_files__IOErrorMessage_20;
            MR_String parse_tree__generate_dep_d_files__ImpMessage_21;
            MR_Word parse_tree__generate_dep_d_files__Var_38;
            MR_Word parse_tree__generate_dep_d_files__Var_40;
            MR_Word parse_tree__generate_dep_d_files__Var_41;
            MR_Word parse_tree__generate_dep_d_files__Var_43;

            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) " failed.\n");
            }
            {
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__generate_dep_d_files__Verbose_13);
            }
            {
              mercury__io__error_message_2_p_0(parse_tree__generate_dep_d_files__IOError_19, &parse_tree__generate_dep_d_files__IOErrorMessage_20);
            }
            {
              parse_tree__generate_dep_d_files__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_43, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__IOErrorMessage_20));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__generate_dep_d_files__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_41, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_41, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__Var_43));
            }
            {
              parse_tree__generate_dep_d_files__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_40, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__FileName_14));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_40, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__Var_41));
            }
            {
              parse_tree__generate_dep_d_files__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_38, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__Var_38, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__Var_40));
            }
            {
              mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__Var_38, &parse_tree__generate_dep_d_files__ImpMessage_21);
            }
            {
              libs__file_util__report_error_3_p_0(parse_tree__generate_dep_d_files__ImpMessage_21);
            }
          }
          else
          {
            MR_Word parse_tree__generate_dep_d_files__TypeInfo_57_57 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[1];
            MR_Word parse_tree__generate_dep_d_files__TypeInfo_58_58 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[2];
            MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_62_62 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word parse_tree__generate_dep_d_files__ImpStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ImpResult_15, (MR_Integer) 0)));
            MR_Word parse_tree__generate_dep_d_files__Deps0_17;
            MR_Word parse_tree__generate_dep_d_files__Deps_18;
            MR_Word parse_tree__generate_dep_d_files__Var_47;
            MR_Word parse_tree__generate_dep_d_files__Var_48;
            MR_Word parse_tree__generate_dep_d_files__Var_50;
            MR_Box parse_tree__generate_dep_d_files__conv1_Deps0_17;
            MR_Box parse_tree__generate_dep_d_files__conv3_Deps_18;

            {
              parse_tree__generate_dep_d_files__Var_47 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62, parse_tree__generate_dep_d_files__IntDepsGraph_9);
            }
            {
              parse_tree__generate_dep_d_files__Var_48 = mercury__digraph__init_0_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62);
            }
            {
              parse_tree__generate_dep_d_files__conv1_Deps0_17 = mercury__list__foldl_3_f_0(parse_tree__generate_dep_d_files__TypeInfo_57_57, parse_tree__generate_dep_d_files__TypeInfo_58_58, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[3], parse_tree__generate_dep_d_files__Var_47, ((MR_Box) (parse_tree__generate_dep_d_files__Var_48)));
            }
            parse_tree__generate_dep_d_files__Deps0_17 = ((MR_Word) parse_tree__generate_dep_d_files__conv1_Deps0_17);
            {
              parse_tree__generate_dep_d_files__Var_50 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62, parse_tree__generate_dep_d_files__ImpDepsGraph_10);
            }
            {
              parse_tree__generate_dep_d_files__conv3_Deps_18 = mercury__list__foldl_3_f_0(parse_tree__generate_dep_d_files__TypeInfo_57_57, parse_tree__generate_dep_d_files__TypeInfo_58_58, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[4], parse_tree__generate_dep_d_files__Var_50, ((MR_Box) (parse_tree__generate_dep_d_files__Deps0_17)));
            }
            parse_tree__generate_dep_d_files__Deps_18 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_Deps_18);
            {
              parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(parse_tree__generate_dep_d_files__ImpStream_16, (MR_String) "imports", parse_tree__generate_dep_d_files__Deps_18);
            }
            {
              mercury__io__close_output_3_p_0(parse_tree__generate_dep_d_files__ImpStream_16);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) " done.\n");
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_4)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;

    {
      parse_tree__generate_dep_d_files__write_edge_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), parse_tree__generate_dep_d_files__wrapper_arg_1, parse_tree__generate_dep_d_files__wrapper_arg_2);
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
{
  {
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;

    {
      parse_tree__generate_dep_d_files__write_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), parse_tree__generate_dep_d_files__wrapper_arg_1);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_String parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

    {
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
  MR_String parse_tree__generate_dep_d_files__Name_8,
  MR_Word parse_tree__generate_dep_d_files__Graph_10)
{
  {
    MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_31 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__generate_dep_d_files__GenNodeName_9 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[2];
    MR_String parse_tree__generate_dep_d_files__Var_14;
    MR_String parse_tree__generate_dep_d_files__Var_17;
    MR_String parse_tree__generate_dep_d_files__Var_19;
    MR_String parse_tree__generate_dep_d_files__Var_22;
    MR_Word parse_tree__generate_dep_d_files__Var_26;
    MR_Word parse_tree__generate_dep_d_files__Var_27;
    MR_Box parse_tree__generate_dep_d_files__conv1_STATE_VARIABLE_IO_28_28;

    {
      parse_tree__generate_dep_d_files__Var_17 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__Name_8, (MR_String) " {\n");
    }
    {
      parse_tree__generate_dep_d_files__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "digraph ", parse_tree__generate_dep_d_files__Var_17);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__Var_14);
    }
    {
      parse_tree__generate_dep_d_files__Var_22 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__Name_8, (MR_String) "\";\n");
    }
    {
      parse_tree__generate_dep_d_files__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "label=\"", parse_tree__generate_dep_d_files__Var_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__Var_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) "center=true;\n");
    }
    {
      parse_tree__generate_dep_d_files__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__TypeInfo_for_T_31));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__Stream_7));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_26, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__GenNodeName_9));
    }
    {
      parse_tree__generate_dep_d_files__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__TypeInfo_for_T_31));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__Stream_7));
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_27, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__GenNodeName_9));
    }
    {
      mercury__digraph__traverse_5_p_0(parse_tree__generate_dep_d_files__TypeInfo_for_T_31, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__generate_dep_d_files__Graph_10, parse_tree__generate_dep_d_files__Var_26, parse_tree__generate_dep_d_files__Var_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__generate_dep_d_files__conv1_STATE_VARIABLE_IO_28_28);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) "}\n");
    }
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
{
  {
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
    MR_Word parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6;

    {
      parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6 = parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6));
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
  MR_Word parse_tree__generate_dep_d_files__DepsMap_2,
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3,
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4,
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5,
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__generate_dep_d_files__succeeded;

      if ((parse_tree__generate_dep_d_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5;
        *parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3;
      }
      else
      {
        MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_59_59;
        MR_Word parse_tree__generate_dep_d_files__Deps_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__generate_dep_d_files__DepsList_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Deps_14, (MR_Integer) 1)));
        MR_Word parse_tree__generate_dep_d_files__ModuleErrors_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 23)));
        MR_Word parse_tree__generate_dep_d_files__FatalModuleErrors_22;
        MR_Word parse_tree__generate_dep_d_files__Var_27;
        MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29;
        MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30;
        MR_Word parse_tree__generate_dep_d_files__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Deps_14, (MR_Integer) 0)));
        MR_String parse_tree__generate_dep_d_files__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 0)));
        MR_Word parse_tree__generate_dep_d_files__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 1)));
        MR_Word parse_tree__generate_dep_d_files__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 2)));
        MR_Word parse_tree__generate_dep_d_files__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 3)));
        MR_Word parse_tree__generate_dep_d_files__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 4)));
        MR_Word parse_tree__generate_dep_d_files__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 5)));
        MR_Word parse_tree__generate_dep_d_files__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 6)));
        MR_Word parse_tree__generate_dep_d_files__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 7)));
        MR_Word parse_tree__generate_dep_d_files__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 8)));
        MR_Word parse_tree__generate_dep_d_files__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 9)));
        MR_Word parse_tree__generate_dep_d_files__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 10)));
        MR_Word parse_tree__generate_dep_d_files__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 11)));
        MR_Word parse_tree__generate_dep_d_files__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 12)));
        MR_Word parse_tree__generate_dep_d_files__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 13)));
        MR_Word parse_tree__generate_dep_d_files__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 14)));
        MR_Word parse_tree__generate_dep_d_files__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 15)));
        MR_Word parse_tree__generate_dep_d_files__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 16)));
        MR_Word parse_tree__generate_dep_d_files__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 17)));
        MR_Word parse_tree__generate_dep_d_files__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 18)));
        MR_Word parse_tree__generate_dep_d_files__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 19)));
        MR_Word parse_tree__generate_dep_d_files__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 20)));
        MR_Word parse_tree__generate_dep_d_files__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 21)));
        MR_Word parse_tree__generate_dep_d_files__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 22)));
        MR_Word parse_tree__generate_dep_d_files__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 24)));
        MR_Word parse_tree__generate_dep_d_files__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 25)));
        MR_String parse_tree__generate_dep_d_files__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 26)));

        {
          parse_tree__generate_dep_d_files__Var_27 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        }
        parse_tree__generate_dep_d_files__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
        {
          mercury__set__intersect_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_59_59, parse_tree__generate_dep_d_files__ModuleErrors_21, parse_tree__generate_dep_d_files__Var_27, &parse_tree__generate_dep_d_files__FatalModuleErrors_22);
        }
        {
          parse_tree__generate_dep_d_files__succeeded = mercury__set__is_empty_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_59_59, parse_tree__generate_dep_d_files__FatalModuleErrors_22);
        }
        if (parse_tree__generate_dep_d_files__succeeded)
        {
          MR_Word parse_tree__generate_dep_d_files__Var_28;

          {
            parse_tree__generate_dep_d_files__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_28, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_28, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Var_28, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap_2));
          }
          {
            parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(parse_tree__generate_dep_d_files__ModuleAndImports_20, parse_tree__generate_dep_d_files__Var_28, parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3, &parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29, parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5, &parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30);
          }
        }
        else
        {
          parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5;
          parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3;
        }
        /* direct tailcall eliminated */
        {
          MR_Word parse_tree__generate_dep_d_files__next_value_of_HeadVar__1_1 = parse_tree__generate_dep_d_files__DepsList_15;
          MR_Word parse_tree__generate_dep_d_files__next_value_of_STATE_VARIABLE_IntDepsGraph_0_3 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29;
          MR_Word parse_tree__generate_dep_d_files__next_value_of_STATE_VARIABLE_ImplDepsGraph_0_5 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30;

          parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5 = parse_tree__generate_dep_d_files__next_value_of_STATE_VARIABLE_ImplDepsGraph_0_5;
          parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3 = parse_tree__generate_dep_d_files__next_value_of_STATE_VARIABLE_IntDepsGraph_0_3;
          parse_tree__generate_dep_d_files__HeadVar__1_1 = parse_tree__generate_dep_d_files__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;

    {
      parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3));
    }
    return parse_tree__generate_dep_d_files__succeeded;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_4)
{
  {
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__1_1;

    {
      parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_4));
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
{
  {
    MR_bool parse_tree__generate_dep_d_files__succeeded;

    {
      parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
    return parse_tree__generate_dep_d_files__succeeded;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_1,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3)
{
  {
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__1_1;

    {
      parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(&parse_tree__generate_dep_d_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3));
    }
    *parse_tree__generate_dep_d_files__wrapper_arg_1 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__1_1));
  }
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

/* :- end_module parse_tree.generate_dep_d_files. */
