/*
** Automatically generated from `generate_dep_d_files.m'
** by the Mercury compiler,
** version rotd-2023-01-12
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
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
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_util.mih"
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

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_0[1];

static const MR_DuFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_name_ordered_allow_or_disallow_trans_opt_deps_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_allow_or_disallow_trans_opt_deps_0[2];

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_generate_dependencies_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0;

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__294__1_2_p_0(
  MR_Word HeadVar__1_123,
  MR_Word * HeadVar__2_124);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_module_disallow_deps_5_p_0(
  MR_Word DisallowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_module_allow_deps_5_p_0(
  MR_Word AllowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0(
  MR_Word SourceKey_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_14,
  MR_Word * STATE_VARIABLE_EdgesToRemove_15,
  MR_Word STATE_VARIABLE_Graph_0_16,
  MR_Word * STATE_VARIABLE_Graph_17);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_9,
  MR_Word * STATE_VARIABLE_EdgesToRemove_10,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

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
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0(
  MR_Word EdgesToRemove_4,
  MR_Word STATE_VARIABLE_Graph_0_8,
  MR_Word * STATE_VARIABLE_Graph_9);

static void MR_CALL 
parse_tree__generate_dep_d_files__read_trans_opt_deps_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_file_8_p_0(
  MR_String FileName_9,
  MR_String Contents_10,
  MR_Integer ContentsLen_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Pos_0_22,
  MR_Word * STATE_VARIABLE_Pos_23,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_24,
  MR_Word * STATE_VARIABLE_EdgesToRemove_25);

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_term_4_p_0(
  MR_Word Term_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_22,
  MR_Word * STATE_VARIABLE_EdgesToRemove_23);

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_list_4_p_0(
  MR_Word Term_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_RevModuleNames_0_12,
  MR_Word * STATE_VARIABLE_RevModuleNames_13);

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_names_4_p_0(
  MR_Word Terms_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_RevModuleNames_0_14,
  MR_Word * STATE_VARIABLE_RevModuleNames_15);

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
parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[12][3];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[5][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[2][5];

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_6[1][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][10];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[3][8];




static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[12][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[5][2] = {
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
  /* row   3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_2[3]))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[5][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".imports_graph"))))
  },
  /* row   2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "private_builtin"))
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

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0 = {
  (MR_String) "module_allow_deps",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1 = {
  (MR_String) "module_disallow_deps",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__field_types_allow_or_disallow_trans_opt_deps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0[1] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0
};

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1[1] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1
};

static const MR_DuPtagLayout parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_name_ordered_allow_or_disallow_trans_opt_deps_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1
};

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_allow_or_disallow_trans_opt_deps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "allow_or_disallow_trans_opt_deps",
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_name_ordered_allow_or_disallow_trans_opt_deps_0 },
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_allow_or_disallow_trans_opt_deps_0,

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

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_trans_opt_deps_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "trans_opt_deps_spec",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__generate_dep_d_files__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__294__1_2_p_0(
  MR_Word HeadVar__1_123,
  MR_Word * HeadVar__2_124)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_123, HeadVar__2_124);
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_module_disallow_deps_5_p_0(
  MR_Word DisallowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  MR_bool succeeded;
  MR_Word TargetName_10;
  MR_Box conv0_TargetName_10;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_11, TargetKey_8, &conv0_TargetName_10);
  TargetName_10 = ((MR_Word) (conv0_TargetName_10));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DisallowSet_6, ((MR_Box) (TargetName_10)));
  if (succeeded)
    mercury__digraph__delete_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SourceKey_7, TargetKey_8, STATE_VARIABLE_Graph_0_11, STATE_VARIABLE_Graph_12);
  else
    *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_module_allow_deps_5_p_0(
  MR_Word AllowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  MR_bool succeeded;
  MR_Word TargetName_10;
  MR_Box conv0_TargetName_10;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_11, TargetKey_8, &conv0_TargetName_10);
  TargetName_10 = ((MR_Word) (conv0_TargetName_10));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllowSet_6, ((MR_Box) (TargetName_10)));
  if (succeeded)
    *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
  else
    mercury__digraph__delete_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SourceKey_7, TargetKey_8, STATE_VARIABLE_Graph_0_11, STATE_VARIABLE_Graph_12);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Graph_12;

  parse_tree__generate_dep_d_files__apply_module_disallow_deps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Graph_12;

  parse_tree__generate_dep_d_files__apply_module_allow_deps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0(
  MR_Word SourceKey_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_14,
  MR_Word * STATE_VARIABLE_EdgesToRemove_15,
  MR_Word STATE_VARIABLE_Graph_0_16,
  MR_Word * STATE_VARIABLE_Graph_17)
{
  MR_bool succeeded;
  MR_Word SourceName_9;
  MR_Box conv0_SourceName_9;
  MR_Word AllowOrDisallow_10;
  MR_Box conv1_AllowOrDisallow_10;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_16, SourceKey_6, &conv0_SourceName_9);
  SourceName_9 = ((MR_Word) (conv0_SourceName_9));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0), STATE_VARIABLE_EdgesToRemove_0_14, ((MR_Box) (SourceName_9)), &conv1_AllowOrDisallow_10);
  if (succeeded)
  {
    AllowOrDisallow_10 = ((MR_Word) (conv1_AllowOrDisallow_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TargetSet_11;

    mercury__digraph__lookup_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_16, SourceKey_6, &TargetSet_11);
    if (((MR_tag((MR_Word) AllowOrDisallow_10)) == (MR_Integer) 0))
    {
      MR_Word AllowSet_12 = ((MR_Word) ((MR_hl_field(0, AllowOrDisallow_10, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Box conv3_STATE_VARIABLE_Graph_17;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[2]));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_1));
        MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_18, 3) = ((MR_Box) (AllowSet_12));
        MR_hl_field(0, Var_18, 4) = ((MR_Box) (SourceKey_6));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[3]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), Var_18, TargetSet_11, ((MR_Box) (STATE_VARIABLE_Graph_0_16)), &conv3_STATE_VARIABLE_Graph_17);
      *STATE_VARIABLE_Graph_17 = ((MR_Word) (conv3_STATE_VARIABLE_Graph_17));
    }
    else
    {
      MR_Word DisallowSet_13 = ((MR_Word) ((MR_hl_field(1, AllowOrDisallow_10, (MR_Integer) 0))));
      MR_Word Var_20;
      MR_Box conv5_STATE_VARIABLE_Graph_17;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[2]));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0_2));
        MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_20, 3) = ((MR_Box) (DisallowSet_13));
        MR_hl_field(0, Var_20, 4) = ((MR_Box) (SourceKey_6));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[3]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), Var_20, TargetSet_11, ((MR_Box) (STATE_VARIABLE_Graph_0_16)), &conv5_STATE_VARIABLE_Graph_17);
      *STATE_VARIABLE_Graph_17 = ((MR_Word) (conv5_STATE_VARIABLE_Graph_17));
    }
  }
  else
    *STATE_VARIABLE_Graph_17 = STATE_VARIABLE_Graph_0_16;
  *STATE_VARIABLE_EdgesToRemove_15 = STATE_VARIABLE_EdgesToRemove_0_14;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_EdgesToRemove_15;
  MR_Word conv0_STATE_VARIABLE_Graph_17;

  parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_for_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_EdgesToRemove_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Graph_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_EdgesToRemove_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_17));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_9,
  MR_Word * STATE_VARIABLE_EdgesToRemove_10,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  MR_bool succeeded;
  MR_Integer Var_13;

  Var_13 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[3]), SCC_6);
  succeeded = (Var_13 > (MR_Integer) 1);
  if (succeeded)
  {
    MR_Box conv3_STATE_VARIABLE_EdgesToRemove_10;
    MR_Box conv2_STATE_VARIABLE_Graph_12;

    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[3]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[11]), SCC_6, ((MR_Box) (STATE_VARIABLE_EdgesToRemove_0_9)), &conv3_STATE_VARIABLE_EdgesToRemove_10, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv2_STATE_VARIABLE_Graph_12);
    *STATE_VARIABLE_EdgesToRemove_10 = ((MR_Word) (conv3_STATE_VARIABLE_EdgesToRemove_10));
    *STATE_VARIABLE_Graph_12 = ((MR_Word) (conv2_STATE_VARIABLE_Graph_12));
  }
  else
  {
    *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
    *STATE_VARIABLE_EdgesToRemove_10 = STATE_VARIABLE_EdgesToRemove_0_9;
  }
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
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[10]), BurdenedModules_24, ((MR_Box) (DepsMap0_27)), &conv1_DepsMap0_9);
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
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[9]), BurdenedModules_24, ((MR_Box) (DepsMap0_27)), &conv1_DepsMap0_9);
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
  MR_Word conv1_HeadVar__2_124;

  parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__294__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_124);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_124));
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
  MR_Word Target_53;
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
      MR_String Var_129;

      Var_129 = mercury__string__f_43_43_2_f_0(ModuleNameStr_24, (MR_String) "\'.");
      Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read source file for module \140", Var_129);
    }
    else
    {
      MR_String Var_132;

      Var_132 = mercury__string__f_43_43_2_f_0(ModuleNameStr_24, (MR_String) "\'.\n");
      Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "cannot parse source file for module \140", Var_132);
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
    MR_Word OutputOrder_32;
    MR_Word TransImpDepsGraph_37;
    MR_Word IndirectDepsGraph_38;
    MR_Word IndirectOptDepsGraph_39;
    MR_Word MaybeSpecFileName_40;
    MR_Word TransOptDepsGraph_45;
    MR_Word TransOptDepsOrdering0_47;
    MR_Word TransOptDepsOrdering1_48;
    MR_Word TransOptDepsOrdering_49;
    MR_Word IntermodDirs_50;
    MR_Word TransOptOrder_51;
    MR_Word DFilesToWrite_52;

    mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntDepsGraph0_27);
    mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpDepsGraph0_28);
    mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_14, &DepsList_29);
    parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(DepsList_29, DepsMap_14, IntDepsGraph0_27, &IntDepsGraph_30, ImpDepsGraph0_28, &ImpDepsGraph_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 123, &OutputOrder_32);
    mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &TransImpDepsGraph_37);
    mercury__digraph__compose_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, TransImpDepsGraph_37, &IndirectDepsGraph_38);
    mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &IndirectOptDepsGraph_39);
    libs__globals__lookup_maybe_string_option_3_p_0(Globals_8, (MR_Integer) 190, &MaybeSpecFileName_40);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 687, &IntermodDirs_50);
    switch (Mode_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String SourceFileName_26 = ((MR_String) ((MR_hl_field(0, Baggage_20, (MR_Integer) 0))));

          parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(Globals_8, SourceFileName_26, ModuleName_11, DepsMap_14);
          parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(Globals_8, SourceFileName_26, ModuleName_11, DepsMap_14);
          DFilesToWrite_52 = DepsList_29;
        }
        break;
      case (MR_Integer) 0:
        {
          DFilesToWrite_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DFilesToWrite_52, 0) = ((MR_Box) (ModuleDep_17));
          MR_hl_field(1, DFilesToWrite_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
    }
    parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(Globals_8, ModuleName_11, IntDepsGraph_30, ImpDepsGraph_31);
    switch (OutputOrder_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImpDepsOrdering_33;

          mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_31, &ImpDepsOrdering_33);
          parse_tree__write_deps_file__output_module_order_6_p_0(Globals_8, ModuleName_11, (MR_Word) (((MR_Box) ((MR_String) ".order"))), ImpDepsOrdering_33);
        }
        break;
    }
    if ((MaybeSpecFileName_40 == (MR_Word) ((MR_Unsigned) 0U)))
      TransOptDepsGraph_45 = IndirectOptDepsGraph_39;
    else
    {
      MR_String SpecFileName_41 = ((MR_String) ((MR_hl_field(1, MaybeSpecFileName_40, (MR_Integer) 0))));
      MR_Word MaybeEdgesToRemove_42;

      parse_tree__generate_dep_d_files__read_trans_opt_deps_spec_file_4_p_0(SpecFileName_41, &MaybeEdgesToRemove_42);
      if (((MR_tag((MR_Word) MaybeEdgesToRemove_42)) == (MR_Integer) 1))
      {
        MR_String Error_46 = ((MR_String) ((MR_hl_field(1, MaybeEdgesToRemove_42, (MR_Integer) 0))));

        libs__file_util__report_error_4_p_0(ErrorStream_16, Error_46);
        TransOptDepsGraph_45 = IndirectOptDepsGraph_39;
      }
      else
      {
        MR_Word EdgesToRemove_43 = ((MR_Word) ((MR_hl_field(0, MaybeEdgesToRemove_42, (MR_Integer) 0))));
        MR_Word TransOptDepsGraph0_44;

        parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0(EdgesToRemove_43, ImpDepsGraph_31, &TransOptDepsGraph0_44);
        mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsGraph0_44, &TransOptDepsGraph_45);
      }
    }
    mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsGraph_45, &TransOptDepsOrdering0_47);
    switch (OutputOrder_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_deps_file__output_module_order_6_p_0(Globals_8, ModuleName_11, (MR_Word) (((MR_Box) ((MR_String) ".order-trans-opt"))), TransOptDepsOrdering0_47);
        break;
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[8]), TransOptDepsOrdering0_47, &TransOptDepsOrdering1_48);
    mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsOrdering1_48, &TransOptDepsOrdering_49);
    parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_8, (MR_Integer) 1, IntermodDirs_50, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), TransOptDepsOrdering_49, &TransOptOrder_51);
    parse_tree__write_deps_file__generate_dependencies_write_d_files_11_p_0(Globals_8, DFilesToWrite_52, IntDepsGraph_30, ImpDepsGraph_31, IndirectDepsGraph_38, IndirectOptDepsGraph_39, TransOptDepsGraph_45, TransOptOrder_51, DepsMap_14);
  }
  libs__globals__get_target_2_p_0(Globals_8, &Target_53);
  succeeded = (Target_53 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (Mode_9 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word _Succeeded_54;

    parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_8, ModuleName_11, &_Succeeded_54);
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_EdgesToRemove_10;
  MR_Word conv0_STATE_VARIABLE_Graph_12;

  parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_in_scc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_EdgesToRemove_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_EdgesToRemove_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__apply_trans_opt_deps_spec_3_p_0(
  MR_Word EdgesToRemove_4,
  MR_Word STATE_VARIABLE_Graph_0_8,
  MR_Word * STATE_VARIABLE_Graph_9)
{
  MR_Word SCCs_6;
  MR_Word Var_10;
  MR_Box conv3__EdgesToRemove_7;
  MR_Box conv2_STATE_VARIABLE_Graph_9;

  Var_10 = mercury__digraph__cliques_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_8);
  SCCs_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[4]), Var_10);
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[4]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[7]), SCCs_6, ((MR_Box) (EdgesToRemove_4)), &conv3__EdgesToRemove_7, ((MR_Box) (STATE_VARIABLE_Graph_0_8)), &conv2_STATE_VARIABLE_Graph_9);
  *STATE_VARIABLE_Graph_9 = ((MR_Word) (conv2_STATE_VARIABLE_Graph_9));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__read_trans_opt_deps_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word ReadResult_8;

  mercury__io__read_named_file_as_string_4_p_0(FileName_5, &ReadResult_8);
  if (((MR_tag((MR_Word) ReadResult_8)) == (MR_Integer) 1))
  {
    MR_String Var_23;
    MR_Word Error_24 = ((MR_Word) ((MR_hl_field(1, ReadResult_8, (MR_Integer) 0))));

    Var_23 = mercury__io__error_message_1_f_0(Error_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
    }
  }
  else
  {
    MR_String Contents_9 = ((MR_String) ((MR_hl_field(0, ReadResult_8, (MR_Integer) 0))));
    MR_Integer ContentsLen_10;
    MR_Word ParseResult_12;
    MR_Word EdgesToRemove_14;
    MR_Word Var_22;
    MR_Word _EndPos_13;

    mercury__string__length_2_p_0(Contents_9, &ContentsLen_10);
    Var_22 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0));
    parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_file_8_p_0(FileName_5, Contents_9, ContentsLen_10, &ParseResult_12, (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[3]), &_EndPos_13, Var_22, &EdgesToRemove_14);
    if ((ParseResult_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (EdgesToRemove_14));
      }
    else
    {
      MR_String Error_15 = ((MR_String) ((MR_hl_field(1, ParseResult_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_15));
      }
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_file_8_p_0(
  MR_String FileName_9,
  MR_String Contents_10,
  MR_Integer ContentsLen_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Pos_0_22,
  MR_Word * STATE_VARIABLE_Pos_23,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_24,
  MR_Word * STATE_VARIABLE_EdgesToRemove_25)
{
  while (MR_TRUE)
  {
    MR_Word ReadTerm_15;
    MR_Word STATE_VARIABLE_Pos_26_26;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_substring_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_9, Contents_10, ContentsLen_11, STATE_VARIABLE_Pos_0_22, &STATE_VARIABLE_Pos_26_26, &ReadTerm_15);
    switch (MR_tag((MR_Word) ReadTerm_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Pos_23 = STATE_VARIABLE_Pos_26_26;
          *STATE_VARIABLE_EdgesToRemove_25 = STATE_VARIABLE_EdgesToRemove_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Error_16 = ((MR_String) ((MR_hl_field(1, ReadTerm_15, (MR_Integer) 0))));
          MR_Integer LineNum_17 = ((MR_Integer) ((MR_hl_field(1, ReadTerm_15, (MR_Integer) 1))));
          MR_String Msg_18;
          MR_String Var_41;
          MR_String Var_42;
          MR_String Var_49;
          MR_String Var_51;

          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Error_16);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[2]), LineNum_17, &Var_42);
          Var_49 = mercury__string__f_43_43_2_f_0(Var_42, Var_41);
          Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_49);
          Msg_18 = mercury__string__f_43_43_2_f_0(FileName_9, Var_51);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Msg_18));
          }
          *STATE_VARIABLE_Pos_23 = STATE_VARIABLE_Pos_26_26;
          *STATE_VARIABLE_EdgesToRemove_25 = STATE_VARIABLE_EdgesToRemove_0_24;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_20 = ((MR_Word) ((MR_hl_field(2, ReadTerm_15, (MR_Integer) 1))));
          MR_Word Result0_21;
          MR_Word STATE_VARIABLE_EdgesToRemove_35_35;

          parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_term_4_p_0(Term_20, &Result0_21, STATE_VARIABLE_EdgesToRemove_0_24, &STATE_VARIABLE_EdgesToRemove_35_35);
          if ((Result0_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word next_value_of_STATE_VARIABLE_Pos_0_22 = STATE_VARIABLE_Pos_26_26;
            MR_Word next_value_of_STATE_VARIABLE_EdgesToRemove_0_24 = STATE_VARIABLE_EdgesToRemove_35_35;

            // direct tailcall eliminated
            ;
            STATE_VARIABLE_Pos_0_22 = next_value_of_STATE_VARIABLE_Pos_0_22;
            STATE_VARIABLE_EdgesToRemove_0_24 = next_value_of_STATE_VARIABLE_EdgesToRemove_0_24;
            continue;
          }
          else
          {
            *Result_12 = Result0_21;
            *STATE_VARIABLE_Pos_23 = STATE_VARIABLE_Pos_26_26;
            *STATE_VARIABLE_EdgesToRemove_25 = STATE_VARIABLE_EdgesToRemove_35_35;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_term_4_p_0(
  MR_Word Term_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_22,
  MR_Word * STATE_VARIABLE_EdgesToRemove_23)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String AtomName_8;
  MR_Word RightTerm_10;
  MR_Word SourceName_12;
  MR_Word TypeCtorInfo_61_61;
  MR_Word LeftTerm_9;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomName_8 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      if ((strcmp(AtomName_8, (MR_String) "module_allow_deps") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomName_8, (MR_String) "module_disallow_deps") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_61_61 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_61_61, LeftTerm_9, &SourceName_12);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Result0_13;
    MR_Word TargetList0_14;

    parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_list_4_p_0(RightTerm_10, &Result0_13, (MR_Word) ((MR_Unsigned) 0U), &TargetList0_14);
    if ((Result0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AllowOrDisallow_17;
      MR_Word STATE_VARIABLE_EdgesToRemove_36_36;

      if ((strcmp(AtomName_8, (MR_String) "module_allow_deps") == 0))
      {
        MR_Word TargetList_15;
        MR_Word TargetSet_16;
        MR_String Var_29;
        MR_String Var_30;

        succeeded = ((MR_tag((MR_Word) SourceName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_String) ((MR_hl_field(0, SourceName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_29, (MR_String) "builtin") == 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) SourceName_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_String) ((MR_hl_field(0, SourceName_12, (MR_Integer) 0))));
            succeeded = (strcmp(Var_30, (MR_String) "private_builtin") == 0);
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[4]));
            MR_hl_field(1, Var_33, 1) = ((MR_Box) (TargetList0_14));
          }
          {
            TargetList_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetList_15, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_3[3]));
            MR_hl_field(1, TargetList_15, 1) = ((MR_Box) (Var_33));
          }
        }
        else
          TargetList_15 = TargetList0_14;
        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetList_15, &TargetSet_16);
        {
          AllowOrDisallow_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AllowOrDisallow_17, 0) = ((MR_Box) (TargetSet_16));
        }
      }
      else
      {
        MR_Word TargetSet_57;

        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetList0_14, &TargetSet_57);
        {
          AllowOrDisallow_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllowOrDisallow_17, 0) = ((MR_Box) (TargetSet_57));
        }
      }
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0), ((MR_Box) (SourceName_12)), ((MR_Box) (AllowOrDisallow_17)), STATE_VARIABLE_EdgesToRemove_0_22, &STATE_VARIABLE_EdgesToRemove_36_36);
      if (succeeded)
      {
        *STATE_VARIABLE_EdgesToRemove_23 = STATE_VARIABLE_EdgesToRemove_36_36;
        *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_String FileName_18;
        MR_Integer LineNum_19;
        MR_String Msg_20;
        MR_Word Var_37;
        MR_String Var_45;
        MR_String Var_69;
        MR_String Var_70;
        MR_String Var_77;
        MR_String Var_79;

        Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
        FileName_18 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
        LineNum_19 = ((MR_Integer) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
        Var_45 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SourceName_12);
        Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ": duplicate source module ", Var_45);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[2]), LineNum_19, &Var_70);
        Var_77 = mercury__string__f_43_43_2_f_0(Var_70, Var_69);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_77);
        Msg_20 = mercury__string__f_43_43_2_f_0(FileName_18, Var_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_20));
        }
        *STATE_VARIABLE_EdgesToRemove_23 = STATE_VARIABLE_EdgesToRemove_0_22;
      }
    }
    else
    {
      *Result_6 = Result0_13;
      *STATE_VARIABLE_EdgesToRemove_23 = STATE_VARIABLE_EdgesToRemove_0_22;
    }
  }
  else
  {
    MR_Word Var_48;
    MR_String FileName_58;
    MR_Integer LineNum_59;
    MR_String Msg_60;
    MR_String Var_81;
    MR_String Var_88;
    MR_String Var_90;

    Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    FileName_58 = ((MR_String) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
    LineNum_59 = ((MR_Integer) ((MR_hl_field(0, Var_48, (MR_Integer) 1))));
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[2]), LineNum_59, &Var_81);
    Var_88 = mercury__string__f_43_43_2_f_0(Var_81, (MR_String) ": expected module_allow_deps/2 or module_disallow_deps/2");
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_88);
    Msg_60 = mercury__string__f_43_43_2_f_0(FileName_58, Var_90);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_60));
    }
    *STATE_VARIABLE_EdgesToRemove_23 = STATE_VARIABLE_EdgesToRemove_0_22;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_list_4_p_0(
  MR_Word Term_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_RevModuleNames_0_12,
  MR_Word * STATE_VARIABLE_RevModuleNames_13)
{
  MR_bool succeeded;
  MR_Word TermList_8;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_5, &TermList_8);
  if (succeeded)
    parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_names_4_p_0(TermList_8, Result_6, STATE_VARIABLE_RevModuleNames_0_12, STATE_VARIABLE_RevModuleNames_13);
  else
  {
    MR_String FileName_9;
    MR_Integer LineNum_10;
    MR_String Msg_11;
    MR_Word Var_15;
    MR_String Var_24;
    MR_String Var_31;
    MR_String Var_33;

    Var_15 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    FileName_9 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
    LineNum_10 = ((MR_Integer) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[2]), LineNum_10, &Var_24);
    Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ": expected list");
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_31);
    Msg_11 = mercury__string__f_43_43_2_f_0(FileName_9, Var_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
    }
    *STATE_VARIABLE_RevModuleNames_13 = STATE_VARIABLE_RevModuleNames_0_12;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__parse_trans_opt_deps_spec_module_names_4_p_0(
  MR_Word Terms_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_RevModuleNames_0_14,
  MR_Word * STATE_VARIABLE_RevModuleNames_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Terms_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevModuleNames_15 = STATE_VARIABLE_RevModuleNames_0_14;
    }
    else
    {
      MR_Word HeadTerm_8 = ((MR_Word) ((MR_hl_field(1, Terms_5, (MR_Integer) 0))));
      MR_Word TailTerm_9 = ((MR_Word) ((MR_hl_field(1, Terms_5, (MR_Integer) 1))));
      MR_Word ModuleName_10;

      succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_8, &ModuleName_10);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevModuleNames_16_16;
        MR_Word next_value_of_Terms_5;
        MR_Word next_value_of_STATE_VARIABLE_RevModuleNames_0_14;

        {
          STATE_VARIABLE_RevModuleNames_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevModuleNames_16_16, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(1, STATE_VARIABLE_RevModuleNames_16_16, 1) = ((MR_Box) (STATE_VARIABLE_RevModuleNames_0_14));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Terms_5 = TailTerm_9;
        next_value_of_STATE_VARIABLE_RevModuleNames_0_14 = STATE_VARIABLE_RevModuleNames_16_16;
        Terms_5 = next_value_of_Terms_5;
        STATE_VARIABLE_RevModuleNames_0_14 = next_value_of_STATE_VARIABLE_RevModuleNames_0_14;
        continue;
      }
      else
      {
        MR_String FileName_11;
        MR_Integer LineNum_12;
        MR_String Msg_13;
        MR_Word Var_18;
        MR_String Var_28;
        MR_String Var_35;
        MR_String Var_37;

        Var_18 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_8);
        FileName_11 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
        LineNum_12 = ((MR_Integer) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[2]), LineNum_12, &Var_28);
        Var_35 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) ": expected module name");
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_35);
        Msg_13 = mercury__string__f_43_43_2_f_0(FileName_11, Var_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_13));
        }
        *STATE_VARIABLE_RevModuleNames_15 = STATE_VARIABLE_RevModuleNames_0_14;
      }
    }
    break;
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
          conv1_Deps0_19 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[4]), Var_44, ((MR_Box) (Var_45)));
          Deps0_19 = ((MR_Word) (conv1_Deps0_19));
          Var_47 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_10);
          conv3_Deps_20 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[5]), Var_47, ((MR_Box) (Deps0_19)));
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
            MR_hl_field(0, Var_100, 5) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_1[6]));
          }
          {
            Var_101 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_101, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_8[0]));
            MR_hl_field(0, Var_101, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_5));
            MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_101, 3) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            MR_hl_field(0, Var_101, 4) = ((MR_Box) (ImpStream_18));
            MR_hl_field(0, Var_101, 5) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_1[6]));
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
parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____allow_or_disallow_trans_opt_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____allow_or_disallow_trans_opt_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____trans_opt_deps_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____trans_opt_deps_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_allow_or_disallow_trans_opt_deps_0);
	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_gen_node_name_1);
	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_generate_dependencies_mode_0);
	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_trans_opt_deps_spec_0);
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
