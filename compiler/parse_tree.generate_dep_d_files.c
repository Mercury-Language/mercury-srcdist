/*
** Automatically generated from `generate_dep_d_files.m'
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


/* :- module parse_tree.generate_dep_d_files. */
/* :- implementation. */

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
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.status.mih"
#include "parse_tree.write_deps_file.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 108 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 111 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 114 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 117 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 120 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 123 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 126 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 129 "parse_tree.generate_dep_d_files.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 132 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0;

#line 135 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1;

#line 138 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_value_ordered_generate_dependencies_mode_0[2];

#line 141 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2];

#line 144 "parse_tree.generate_dep_d_files.c"
static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2];

#line 147 "parse_tree.generate_dep_d_files.c"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
#line 150 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 152 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 154 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3);

#line 157 "parse_tree.generate_dep_d_files.c"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
#line 160 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 162 "parse_tree.generate_dep_d_files.c"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 164 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
#line 166 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_4);

#line 169 "parse_tree.generate_dep_d_files.c"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
#line 172 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 174 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 177 "parse_tree.generate_dep_d_files.c"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
#line 180 "parse_tree.generate_dep_d_files.c"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 182 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 184 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3);

#line 352 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 352 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

#line 352 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

#line 362 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3(
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
#line 362 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_4);

#line 361 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2(
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 361 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

#line 231 "parse_tree.generate_dep_d_files.c"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1(
#line 234 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 236 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

#line 354 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(
#line 354 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
#line 354 "generate_dep_d_files.m"
  MR_String parse_tree__generate_dep_d_files__Name_8,
#line 354 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Graph_10);

#line 196 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__196__1_2_p_0(
#line 196 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_107,
#line 196 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__2_108);

#line 139 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
#line 139 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

#line 139 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_1,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

#line 352 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_6,
#line 352 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3);

#line 352 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_5,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2);

#line 382 "generate_dep_d_files.m"
static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
#line 382 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Name_3);

#line 373 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_22,
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_8,
#line 373 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__A_9,
#line 373 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__B_10);

#line 365 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_16,
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_6,
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_7,
#line 365 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__Node_8);

#line 331 "generate_dep_d_files.m"
static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
#line 331 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 331 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsGraph_6);

#line 311 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 309 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 291 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_7,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Module_8,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_9,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_10);

#line 282 "generate_dep_d_files.m"
static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
#line 282 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap_4,
#line 282 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_5);

#line 275 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
#line 275 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 275 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

#line 264 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap_2,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3,
#line 264 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5,
#line 264 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6);

#line 196 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
#line 196 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 196 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 196 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 143 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_8,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Mode_9,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Search_10,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_11,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap0_12);

#line 135 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3(
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 135 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

#line 131 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2(
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 131 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 128 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);

#line 135 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3(
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 135 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3);

#line 131 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2(
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 131 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2);

#line 128 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[10][3];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[4][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[1][11];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[3][6];

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_7[1][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][9];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[1][10];




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
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1)),
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

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[1][11] = {
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
    ((MR_Box) (&parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Integer parse_tree__generate_dep_d_files_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0])),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 722 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 730 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 738 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 746 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 755 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 763 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 772 "parse_tree.generate_dep_d_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 780 "parse_tree.generate_dep_d_files.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 790 "parse_tree.generate_dep_d_files.c"
const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_gen_node_name_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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

#line 807 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0 = {
  (MR_String) "output_d_file_only",
  (MR_Integer) 0
};

#line 813 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1 = {
  (MR_String) "output_all_dependencies",
  (MR_Integer) 1
};

#line 819 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_value_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1
};

#line 825 "parse_tree.generate_dep_d_files.c"
static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_1,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_generate_dependencies_mode_0_0
};

#line 831 "parse_tree.generate_dep_d_files.c"
static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_generate_dependencies_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 837 "parse_tree.generate_dep_d_files.c"
const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_generate_dependencies_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 854 "parse_tree.generate_dep_d_files.c"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0_10001(
#line 857 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 859 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 861 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3)
#line 863 "parse_tree.generate_dep_d_files.c"
{
#line 865 "parse_tree.generate_dep_d_files.c"
  {
#line 867 "parse_tree.generate_dep_d_files.c"
    MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 870 "parse_tree.generate_dep_d_files.c"
    {
#line 872 "parse_tree.generate_dep_d_files.c"
      parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3));
    }
#line 875 "parse_tree.generate_dep_d_files.c"
    return parse_tree__generate_dep_d_files__succeeded;
#line 877 "parse_tree.generate_dep_d_files.c"
  }
#line 879 "parse_tree.generate_dep_d_files.c"
}

#line 882 "parse_tree.generate_dep_d_files.c"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0_10001(
#line 885 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 887 "parse_tree.generate_dep_d_files.c"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 889 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
#line 891 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_4)
#line 893 "parse_tree.generate_dep_d_files.c"
{
#line 895 "parse_tree.generate_dep_d_files.c"
  {
#line 897 "parse_tree.generate_dep_d_files.c"
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__1_1;

#line 900 "parse_tree.generate_dep_d_files.c"
    {
#line 902 "parse_tree.generate_dep_d_files.c"
      parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_4));
    }
#line 905 "parse_tree.generate_dep_d_files.c"
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__1_1));
#line 907 "parse_tree.generate_dep_d_files.c"
  }
#line 909 "parse_tree.generate_dep_d_files.c"
}

#line 912 "parse_tree.generate_dep_d_files.c"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0_10001(
#line 915 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 917 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 919 "parse_tree.generate_dep_d_files.c"
{
#line 921 "parse_tree.generate_dep_d_files.c"
  {
#line 923 "parse_tree.generate_dep_d_files.c"
    MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 926 "parse_tree.generate_dep_d_files.c"
    {
#line 928 "parse_tree.generate_dep_d_files.c"
      parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
#line 931 "parse_tree.generate_dep_d_files.c"
    return parse_tree__generate_dep_d_files__succeeded;
#line 933 "parse_tree.generate_dep_d_files.c"
  }
#line 935 "parse_tree.generate_dep_d_files.c"
}

#line 938 "parse_tree.generate_dep_d_files.c"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0_10001(
#line 941 "parse_tree.generate_dep_d_files.c"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 943 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 945 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3)
#line 947 "parse_tree.generate_dep_d_files.c"
{
#line 949 "parse_tree.generate_dep_d_files.c"
  {
#line 951 "parse_tree.generate_dep_d_files.c"
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__1_1;

#line 954 "parse_tree.generate_dep_d_files.c"
    {
#line 956 "parse_tree.generate_dep_d_files.c"
      parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(&parse_tree__generate_dep_d_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_3));
    }
#line 959 "parse_tree.generate_dep_d_files.c"
    *parse_tree__generate_dep_d_files__wrapper_arg_1 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__1_1));
#line 961 "parse_tree.generate_dep_d_files.c"
  }
#line 963 "parse_tree.generate_dep_d_files.c"
}

#line 352 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 352 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
#line 352 "generate_dep_d_files.m"
{
#line 352 "generate_dep_d_files.m"
  {
#line 352 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 352 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar1_4 = parse_tree__generate_dep_d_files__HeadVar__2_2;
#line 352 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar2_5 = parse_tree__generate_dep_d_files__HeadVar__3_3;

#line 352 "generate_dep_d_files.m"
    {
#line 352 "generate_dep_d_files.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar1_4, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar2_5);
#line 352 "generate_dep_d_files.m"
      return;
    }
#line 352 "generate_dep_d_files.m"
  }
#line 352 "generate_dep_d_files.m"
}

#line 352 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
#line 352 "generate_dep_d_files.m"
{
#line 352 "generate_dep_d_files.m"
  {
#line 352 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 352 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar1_3 = parse_tree__generate_dep_d_files__HeadVar__1_1;
#line 352 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Cast_HeadVar2_4 = parse_tree__generate_dep_d_files__HeadVar__2_2;

#line 352 "generate_dep_d_files.m"
    {
#line 352 "generate_dep_d_files.m"
      return parse_tree__generate_dep_d_files__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar1_3, (MR_Word) parse_tree__generate_dep_d_files__Cast_HeadVar2_4);
    }
#line 352 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__succeeded;
#line 352 "generate_dep_d_files.m"
  }
#line 352 "generate_dep_d_files.m"
}

#line 362 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3(
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 362 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3,
#line 362 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_4)
#line 362 "generate_dep_d_files.m"
{
#line 362 "generate_dep_d_files.m"
  {
#line 362 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;

#line 362 "generate_dep_d_files.m"
    {
#line 362 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__write_edge_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), parse_tree__generate_dep_d_files__wrapper_arg_1, parse_tree__generate_dep_d_files__wrapper_arg_2);
#line 362 "generate_dep_d_files.m"
      return;
    }
#line 362 "generate_dep_d_files.m"
  }
#line 362 "generate_dep_d_files.m"
}

#line 361 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2(
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 361 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 361 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
#line 361 "generate_dep_d_files.m"
{
#line 361 "generate_dep_d_files.m"
  {
#line 361 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;

#line 361 "generate_dep_d_files.m"
    {
#line 361 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__write_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), parse_tree__generate_dep_d_files__wrapper_arg_1);
#line 361 "generate_dep_d_files.m"
      return;
    }
#line 361 "generate_dep_d_files.m"
  }
#line 361 "generate_dep_d_files.m"
}

#line 1090 "parse_tree.generate_dep_d_files.c"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_1(
#line 1093 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 1095 "parse_tree.generate_dep_d_files.c"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
#line 1097 "parse_tree.generate_dep_d_files.c"
{
#line 1099 "parse_tree.generate_dep_d_files.c"
  {
#line 1101 "parse_tree.generate_dep_d_files.c"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 1103 "parse_tree.generate_dep_d_files.c"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 1105 "parse_tree.generate_dep_d_files.c"
    MR_String parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

#line 1108 "parse_tree.generate_dep_d_files.c"
    {
#line 1110 "parse_tree.generate_dep_d_files.c"
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
#line 1113 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
#line 1115 "parse_tree.generate_dep_d_files.c"
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 1117 "parse_tree.generate_dep_d_files.c"
  }
#line 1119 "parse_tree.generate_dep_d_files.c"
}

#line 354 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(
#line 354 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
#line 354 "generate_dep_d_files.m"
  MR_String parse_tree__generate_dep_d_files__Name_8,
#line 354 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Graph_10)
#line 354 "generate_dep_d_files.m"
{
#line 357 "generate_dep_d_files.m"
  {
#line 357 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 357 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_31 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 357 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__GenNodeName_9 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[9];
#line 357 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_14_14;
#line 357 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_17_17;
#line 357 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_19_19;
#line 357 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_22_22;
#line 357 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_26_26;
#line 357 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_27_27;
#line 361 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv1_STATE_VARIABLE_IO_28_28;

#line 358 "generate_dep_d_files.m"
    {
#line 358 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_17_17 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__Name_8, (MR_String) " {\n");
    }
#line 358 "generate_dep_d_files.m"
    {
#line 358 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "digraph ", parse_tree__generate_dep_d_files__V_17_17);
    }
#line 358 "generate_dep_d_files.m"
    {
#line 358 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__V_14_14);
    }
#line 359 "generate_dep_d_files.m"
    {
#line 359 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_22_22 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__Name_8, (MR_String) "\";\n");
    }
#line 359 "generate_dep_d_files.m"
    {
#line 359 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "label=\"", parse_tree__generate_dep_d_files__V_22_22);
    }
#line 359 "generate_dep_d_files.m"
    {
#line 359 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__V_19_19);
    }
#line 360 "generate_dep_d_files.m"
    {
#line 360 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) "center=true;\n");
    }
#line 361 "generate_dep_d_files.m"
    {
#line 361 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_8[0]));
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_2));
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__TypeInfo_for_T_31));
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__Stream_7));
#line 361 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_26_26, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__GenNodeName_9));
#line 361 "generate_dep_d_files.m"
    }
#line 362 "generate_dep_d_files.m"
    {
#line 362 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_9[0]));
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0_3));
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__TypeInfo_for_T_31));
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__Stream_7));
#line 362 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_27_27, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__GenNodeName_9));
#line 362 "generate_dep_d_files.m"
    }
#line 361 "generate_dep_d_files.m"
    {
#line 361 "generate_dep_d_files.m"
      mercury__digraph__traverse_5_p_0(parse_tree__generate_dep_d_files__TypeInfo_for_T_31, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__generate_dep_d_files__Graph_10, parse_tree__generate_dep_d_files__V_26_26, parse_tree__generate_dep_d_files__V_27_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__generate_dep_d_files__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 363 "generate_dep_d_files.m"
    {
#line 363 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) "}\n");
#line 363 "generate_dep_d_files.m"
      return;
    }
#line 357 "generate_dep_d_files.m"
  }
#line 354 "generate_dep_d_files.m"
}

#line 196 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__196__1_2_p_0(
#line 196 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_107,
#line 196 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__2_108)
#line 196 "generate_dep_d_files.m"
{
#line 196 "generate_dep_d_files.m"
  {
#line 196 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 196 "generate_dep_d_files.m"
    {
#line 196 "generate_dep_d_files.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__generate_dep_d_files__HeadVar__1_107, parse_tree__generate_dep_d_files__HeadVar__2_108);
#line 196 "generate_dep_d_files.m"
      return;
    }
#line 196 "generate_dep_d_files.m"
  }
#line 196 "generate_dep_d_files.m"
}

#line 139 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____generate_dependencies_mode_0_0(
#line 139 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
#line 139 "generate_dep_d_files.m"
{
#line 139 "generate_dep_d_files.m"
  {
#line 139 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 139 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__generate_dep_d_files__HeadVar__2_2;
#line 139 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__generate_dep_d_files__HeadVar__3_3;

#line 139 "generate_dep_d_files.m"
    {
#line 139 "generate_dep_d_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__Cast_HeadVar1_4, parse_tree__generate_dep_d_files__Cast_HeadVar2_5);
#line 139 "generate_dep_d_files.m"
      return;
    }
#line 139 "generate_dep_d_files.m"
  }
#line 139 "generate_dep_d_files.m"
}

#line 139 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____generate_dependencies_mode_0_0(
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_1,
#line 139 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
#line 139 "generate_dep_d_files.m"
{
#line 1311 "parse_tree.generate_dep_d_files.c"
  {
#line 1313 "parse_tree.generate_dep_d_files.c"
    MR_bool parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__HeadVar__2_1 == parse_tree__generate_dep_d_files__HeadVar__2_2);

#line 1316 "parse_tree.generate_dep_d_files.c"
    return parse_tree__generate_dep_d_files__succeeded;
#line 1318 "parse_tree.generate_dep_d_files.c"
  }
#line 139 "generate_dep_d_files.m"
}

#line 352 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____gen_node_name_1_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_6,
#line 352 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3)
#line 352 "generate_dep_d_files.m"
{
#line 352 "generate_dep_d_files.m"
  {
#line 352 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 352 "generate_dep_d_files.m"
    {
#line 352 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__HeadVar__2_2, parse_tree__generate_dep_d_files__HeadVar__3_3);
#line 352 "generate_dep_d_files.m"
      return;
    }
#line 352 "generate_dep_d_files.m"
  }
#line 352 "generate_dep_d_files.m"
}

#line 352 "generate_dep_d_files.m"
static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____gen_node_name_1_0(
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_5,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 352 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__2_2)
#line 352 "generate_dep_d_files.m"
{
#line 352 "generate_dep_d_files.m"
  {
#line 352 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 352 "generate_dep_d_files.m"
    {
#line 352 "generate_dep_d_files.m"
      return parse_tree__generate_dep_d_files__succeeded = parse_tree__generate_dep_d_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_103_101_110_101_114_97_116_101_95_100_101_112_95_100_95_102_105_108_101_115_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__generate_dep_d_files__HeadVar__1_1, parse_tree__generate_dep_d_files__HeadVar__2_2);
    }
#line 352 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__succeeded;
#line 352 "generate_dep_d_files.m"
  }
#line 352 "generate_dep_d_files.m"
}

#line 382 "generate_dep_d_files.m"
static MR_String MR_CALL 
parse_tree__generate_dep_d_files__sym_name_to_node_id_1_f_0(
#line 382 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Name_3)
#line 382 "generate_dep_d_files.m"
{
#line 384 "generate_dep_d_files.m"
  {
#line 384 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 384 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__HeadVar__2_2;
#line 384 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_5_5;
#line 384 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_6_6;

#line 385 "generate_dep_d_files.m"
    {
#line 385 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__generate_dep_d_files__Name_3);
    }
#line 385 "generate_dep_d_files.m"
    {
#line 385 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__V_6_6, (MR_String) "\"");
    }
#line 385 "generate_dep_d_files.m"
    {
#line 385 "generate_dep_d_files.m"
      return parse_tree__generate_dep_d_files__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__generate_dep_d_files__V_5_5);
    }
#line 384 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__HeadVar__2_2;
#line 384 "generate_dep_d_files.m"
  }
#line 382 "generate_dep_d_files.m"
}

#line 373 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_6_p_0(
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_22,
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_7,
#line 373 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_8,
#line 373 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__A_9,
#line 373 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__B_10)
#line 373 "generate_dep_d_files.m"
{
#line 376 "generate_dep_d_files.m"
  {
#line 376 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 376 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_14_14;
#line 376 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_18_18;
#line 377 "generate_dep_d_files.m"
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_8, (MR_Integer) 1)));
#line 377 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv1_V_14_14;
#line 379 "generate_dep_d_files.m"
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_2)(MR_Box, MR_Box);
#line 379 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv3_V_18_18;

#line 377 "generate_dep_d_files.m"
    {
#line 377 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv1_V_14_14 = parse_tree__generate_dep_d_files__func_0(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_8), parse_tree__generate_dep_d_files__A_9);
    }
#line 377 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_14_14 = ((MR_String) parse_tree__generate_dep_d_files__conv1_V_14_14);
#line 377 "generate_dep_d_files.m"
    {
#line 377 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__V_14_14);
    }
#line 378 "generate_dep_d_files.m"
    {
#line 378 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) " -> ");
    }
#line 379 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_8, (MR_Integer) 1)));
#line 379 "generate_dep_d_files.m"
    {
#line 379 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv3_V_18_18 = parse_tree__generate_dep_d_files__func_2(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_8), parse_tree__generate_dep_d_files__B_10);
    }
#line 379 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_18_18 = ((MR_String) parse_tree__generate_dep_d_files__conv3_V_18_18);
#line 379 "generate_dep_d_files.m"
    {
#line 379 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, parse_tree__generate_dep_d_files__V_18_18);
    }
#line 380 "generate_dep_d_files.m"
    {
#line 380 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_7, (MR_String) ";\n");
#line 380 "generate_dep_d_files.m"
      return;
    }
#line 376 "generate_dep_d_files.m"
  }
#line 373 "generate_dep_d_files.m"
}

#line 365 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_5_p_0(
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__TypeInfo_for_T_16,
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Stream_6,
#line 365 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__GenNodeName_7,
#line 365 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__Node_8)
#line 365 "generate_dep_d_files.m"
{
#line 368 "generate_dep_d_files.m"
  {
#line 368 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 368 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_12_12;
#line 370 "generate_dep_d_files.m"
    MR_Box MR_CALL (* parse_tree__generate_dep_d_files__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__GenNodeName_7, (MR_Integer) 1)));
#line 370 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv1_V_12_12;

#line 370 "generate_dep_d_files.m"
    {
#line 370 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv1_V_12_12 = parse_tree__generate_dep_d_files__func_0(((MR_Box) parse_tree__generate_dep_d_files__GenNodeName_7), parse_tree__generate_dep_d_files__Node_8);
    }
#line 370 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_12_12 = ((MR_String) parse_tree__generate_dep_d_files__conv1_V_12_12);
#line 370 "generate_dep_d_files.m"
    {
#line 370 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_6, parse_tree__generate_dep_d_files__V_12_12);
    }
#line 371 "generate_dep_d_files.m"
    {
#line 371 "generate_dep_d_files.m"
      mercury__io__write_string_4_p_0(parse_tree__generate_dep_d_files__Stream_6, (MR_String) ";\n");
#line 371 "generate_dep_d_files.m"
      return;
    }
#line 368 "generate_dep_d_files.m"
  }
#line 365 "generate_dep_d_files.m"
}

#line 331 "generate_dep_d_files.m"
static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
#line 331 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 331 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsGraph_6)
#line 331 "generate_dep_d_files.m"
{
#line 334 "generate_dep_d_files.m"
  {
#line 334 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 334 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__HeadVar__3_3;
#line 334 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__A_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__B_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 1)));

#line 341 "generate_dep_d_files.m"
    {
#line 341 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(parse_tree__generate_dep_d_files__B_5);
    }
#line 342 "generate_dep_d_files.m"
    if (!(parse_tree__generate_dep_d_files__succeeded))
#line 343 "generate_dep_d_files.m"
      {
#line 343 "generate_dep_d_files.m"
        MR_String parse_tree__generate_dep_d_files__V_7_7;
#line 344 "generate_dep_d_files.m"
        MR_String parse_tree__generate_dep_d_files__V_8_8;

#line 343 "generate_dep_d_files.m"
        {
#line 343 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__generate_dep_d_files__A_4, &parse_tree__generate_dep_d_files__V_7_7);
        }
#line 343 "generate_dep_d_files.m"
        if (parse_tree__generate_dep_d_files__succeeded)
#line 344 "generate_dep_d_files.m"
          {
#line 344 "generate_dep_d_files.m"
            parse_tree__generate_dep_d_files__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__generate_dep_d_files__B_5, &parse_tree__generate_dep_d_files__V_8_8);
          }
#line 343 "generate_dep_d_files.m"
      }
#line 334 "generate_dep_d_files.m"
    if (parse_tree__generate_dep_d_files__succeeded)
#line 347 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__HeadVar__3_3 = parse_tree__generate_dep_d_files__DepsGraph_6;
#line 334 "generate_dep_d_files.m"
    else
#line 349 "generate_dep_d_files.m"
      {
#line 349 "generate_dep_d_files.m"
        {
#line 349 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__HeadVar__3_3 = mercury__digraph__add_vertices_and_edge_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__generate_dep_d_files__A_4)), ((MR_Box) (parse_tree__generate_dep_d_files__B_5)), parse_tree__generate_dep_d_files__DepsGraph_6);
        }
#line 349 "generate_dep_d_files.m"
      }
#line 334 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__HeadVar__3_3;
#line 334 "generate_dep_d_files.m"
  }
#line 331 "generate_dep_d_files.m"
}

#line 311 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_2(
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 311 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 311 "generate_dep_d_files.m"
{
#line 311 "generate_dep_d_files.m"
  {
#line 311 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3;
#line 311 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 311 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

#line 311 "generate_dep_d_files.m"
    {
#line 311 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv2_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
#line 311 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
#line 311 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__wrapper_arg_3;
#line 311 "generate_dep_d_files.m"
  }
#line 311 "generate_dep_d_files.m"
}

#line 309 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0_1(
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 309 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 309 "generate_dep_d_files.m"
{
#line 309 "generate_dep_d_files.m"
  {
#line 309 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_3;
#line 309 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 309 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__3_3;

#line 309 "generate_dep_d_files.m"
    {
#line 309 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv0_HeadVar__3_3 = parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2));
    }
#line 309 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__3_3));
#line 309 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__wrapper_arg_3;
#line 309 "generate_dep_d_files.m"
  }
#line 309 "generate_dep_d_files.m"
}

#line 291 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_7,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Module_8,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_9,
#line 291 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_10)
#line 291 "generate_dep_d_files.m"
{
#line 295 "generate_dep_d_files.m"
  {
#line 295 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 295 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ImportsGraph_12;
#line 295 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Verbose_13;

#line 296 "generate_dep_d_files.m"
    {
#line 296 "generate_dep_d_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__generate_dep_d_files__Globals_7, (MR_Integer) 144, &parse_tree__generate_dep_d_files__ImportsGraph_12);
    }
#line 297 "generate_dep_d_files.m"
    {
#line 297 "generate_dep_d_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__generate_dep_d_files__Globals_7, (MR_Integer) 45, &parse_tree__generate_dep_d_files__Verbose_13);
    }
#line 327 "generate_dep_d_files.m"
#line 327 "generate_dep_d_files.m"
    switch (parse_tree__generate_dep_d_files__ImportsGraph_12) {
#line 327 "generate_dep_d_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 327 "generate_dep_d_files.m"
      case (MR_Integer) 0:
#line 328 "generate_dep_d_files.m"
        {
#line 328 "generate_dep_d_files.m"
        }
#line 327 "generate_dep_d_files.m"
        break;
#line 327 "generate_dep_d_files.m"
      case (MR_Integer) 1:
#line 299 "generate_dep_d_files.m"
        {
#line 299 "generate_dep_d_files.m"
          MR_String parse_tree__generate_dep_d_files__FileName_14;
#line 299 "generate_dep_d_files.m"
          MR_Word parse_tree__generate_dep_d_files__ImpResult_15;

#line 300 "generate_dep_d_files.m"
          {
#line 300 "generate_dep_d_files.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__generate_dep_d_files__Globals_7, parse_tree__generate_dep_d_files__Module_8, (MR_String) ".imports_graph", (MR_Integer) 0, &parse_tree__generate_dep_d_files__FileName_14);
          }
#line 302 "generate_dep_d_files.m"
          {
#line 302 "generate_dep_d_files.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) "% Creating imports graph file \140");
          }
#line 303 "generate_dep_d_files.m"
          {
#line 303 "generate_dep_d_files.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, parse_tree__generate_dep_d_files__FileName_14);
          }
#line 304 "generate_dep_d_files.m"
          {
#line 304 "generate_dep_d_files.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) "\'...");
          }
#line 305 "generate_dep_d_files.m"
          {
#line 305 "generate_dep_d_files.m"
            mercury__io__open_output_4_p_0(parse_tree__generate_dep_d_files__FileName_14, &parse_tree__generate_dep_d_files__ImpResult_15);
          }
#line 318 "generate_dep_d_files.m"
          if (((MR_tag((MR_Word) parse_tree__generate_dep_d_files__ImpResult_15)) == (MR_mktag((MR_Integer) 1))))
#line 319 "generate_dep_d_files.m"
            {
#line 319 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__ImpResult_15, (MR_Integer) 0)));
#line 319 "generate_dep_d_files.m"
              MR_String parse_tree__generate_dep_d_files__IOErrorMessage_20;
#line 319 "generate_dep_d_files.m"
              MR_String parse_tree__generate_dep_d_files__ImpMessage_21;
#line 319 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_38_38;
#line 319 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_40_40;
#line 319 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_41_41;
#line 319 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_43_43;

#line 320 "generate_dep_d_files.m"
              {
#line 320 "generate_dep_d_files.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) " failed.\n");
              }
#line 321 "generate_dep_d_files.m"
              {
#line 321 "generate_dep_d_files.m"
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__generate_dep_d_files__Verbose_13);
              }
#line 322 "generate_dep_d_files.m"
              {
#line 322 "generate_dep_d_files.m"
                mercury__io__error_message_2_p_0(parse_tree__generate_dep_d_files__IOError_19, &parse_tree__generate_dep_d_files__IOErrorMessage_20);
              }
#line 324 "generate_dep_d_files.m"
              {
#line 324 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_43_43, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__IOErrorMessage_20));
#line 324 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "generate_dep_d_files.m"
              }
#line 324 "generate_dep_d_files.m"
              {
#line 324 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_41_41, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 324 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_41_41, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__V_43_43));
#line 324 "generate_dep_d_files.m"
              }
#line 323 "generate_dep_d_files.m"
              {
#line 323 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_40_40, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__FileName_14));
#line 323 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_40_40, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__V_41_41));
#line 323 "generate_dep_d_files.m"
              }
#line 323 "generate_dep_d_files.m"
              {
#line 323 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_38_38, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 323 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_38_38, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__V_40_40));
#line 323 "generate_dep_d_files.m"
              }
#line 323 "generate_dep_d_files.m"
              {
#line 323 "generate_dep_d_files.m"
                mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__V_38_38, &parse_tree__generate_dep_d_files__ImpMessage_21);
              }
#line 325 "generate_dep_d_files.m"
              {
#line 325 "generate_dep_d_files.m"
                libs__file_util__report_error_3_p_0(parse_tree__generate_dep_d_files__ImpMessage_21);
#line 325 "generate_dep_d_files.m"
                return;
              }
#line 319 "generate_dep_d_files.m"
            }
#line 318 "generate_dep_d_files.m"
          else
#line 307 "generate_dep_d_files.m"
            {
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__TypeInfo_57_57 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[1];
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__TypeInfo_58_58 = (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[2];
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_62_62 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__ImpStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ImpResult_15, (MR_Integer) 0)));
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__Deps0_17;
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__Deps_18;
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_47_47;
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_48_48;
#line 307 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__V_50_50;
#line 309 "generate_dep_d_files.m"
              MR_Box parse_tree__generate_dep_d_files__conv1_Deps0_17;
#line 311 "generate_dep_d_files.m"
              MR_Box parse_tree__generate_dep_d_files__conv3_Deps_18;

#line 310 "generate_dep_d_files.m"
              {
#line 310 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_47_47 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62, parse_tree__generate_dep_d_files__IntDepsGraph_9);
              }
#line 310 "generate_dep_d_files.m"
              {
#line 310 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_48_48 = mercury__digraph__init_0_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62);
              }
#line 309 "generate_dep_d_files.m"
              {
#line 309 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__conv1_Deps0_17 = mercury__list__foldl_3_f_0(parse_tree__generate_dep_d_files__TypeInfo_57_57, parse_tree__generate_dep_d_files__TypeInfo_58_58, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[7], parse_tree__generate_dep_d_files__V_47_47, ((MR_Box) (parse_tree__generate_dep_d_files__V_48_48)));
              }
#line 309 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__Deps0_17 = ((MR_Word) parse_tree__generate_dep_d_files__conv1_Deps0_17);
#line 312 "generate_dep_d_files.m"
              {
#line 312 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__V_50_50 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_62_62, parse_tree__generate_dep_d_files__ImpDepsGraph_10);
              }
#line 311 "generate_dep_d_files.m"
              {
#line 311 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__conv3_Deps_18 = mercury__list__foldl_3_f_0(parse_tree__generate_dep_d_files__TypeInfo_57_57, parse_tree__generate_dep_d_files__TypeInfo_58_58, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[8], parse_tree__generate_dep_d_files__V_50_50, ((MR_Box) (parse_tree__generate_dep_d_files__Deps0_17)));
              }
#line 311 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__Deps_18 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_Deps_18);
#line 314 "generate_dep_d_files.m"
              {
#line 314 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__write_graph__ho1_6_p_0(parse_tree__generate_dep_d_files__ImpStream_16, (MR_String) "imports", parse_tree__generate_dep_d_files__Deps_18);
              }
#line 316 "generate_dep_d_files.m"
              {
#line 316 "generate_dep_d_files.m"
                mercury__io__close_output_3_p_0(parse_tree__generate_dep_d_files__ImpStream_16);
              }
#line 317 "generate_dep_d_files.m"
              {
#line 317 "generate_dep_d_files.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__generate_dep_d_files__Verbose_13, (MR_String) " done.\n");
#line 317 "generate_dep_d_files.m"
                return;
              }
#line 307 "generate_dep_d_files.m"
            }
#line 299 "generate_dep_d_files.m"
        }
#line 327 "generate_dep_d_files.m"
        break;
#line 327 "generate_dep_d_files.m"
    }
#line 295 "generate_dep_d_files.m"
  }
#line 291 "generate_dep_d_files.m"
}

#line 282 "generate_dep_d_files.m"
static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(
#line 282 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap_4,
#line 282 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_5)
#line 282 "generate_dep_d_files.m"
{
#line 286 "generate_dep_d_files.m"
  {
#line 286 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 286 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_6;
#line 286 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_8_8;
#line 287 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv0_V_8_8;
#line 287 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_7_7;

#line 287 "generate_dep_d_files.m"
    {
#line 287 "generate_dep_d_files.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__generate_dep_d_files__DepsMap_4, ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_5)), &parse_tree__generate_dep_d_files__conv0_V_8_8);
    }
#line 287 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_8_8 = ((MR_Word) parse_tree__generate_dep_d_files__conv0_V_8_8);
#line 287 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_8_8, (MR_Integer) 0)));
#line 287 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__ModuleAndImports_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_8_8, (MR_Integer) 1)));
#line 286 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__ModuleAndImports_6;
#line 286 "generate_dep_d_files.m"
  }
#line 282 "generate_dep_d_files.m"
}

#line 275 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1(
#line 275 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 275 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
#line 275 "generate_dep_d_files.m"
{
#line 275 "generate_dep_d_files.m"
  {
#line 275 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 275 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 275 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6;

#line 275 "generate_dep_d_files.m"
    {
#line 275 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6 = parse_tree__generate_dep_d_files__lookup_module_and_imports_in_deps_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
#line 275 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_ModuleAndImports_6));
#line 275 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 275 "generate_dep_d_files.m"
  }
#line 275 "generate_dep_d_files.m"
}

#line 264 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__HeadVar__1_1,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap_2,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3,
#line 264 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4,
#line 264 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5,
#line 264 "generate_dep_d_files.m"
  MR_Word * parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6)
#line 264 "generate_dep_d_files.m"
{
#line 267 "generate_dep_d_files.m"
  while (MR_TRUE)
#line 267 "generate_dep_d_files.m"
    {
#line 267 "generate_dep_d_files.m"
      /* tailcall optimized into a loop */
#line 267 "generate_dep_d_files.m"
      {
#line 267 "generate_dep_d_files.m"
        MR_bool parse_tree__generate_dep_d_files__succeeded;

#line 267 "generate_dep_d_files.m"
        if ((parse_tree__generate_dep_d_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "generate_dep_d_files.m"
          {
#line 267 "generate_dep_d_files.m"
            *parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_6 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5;
#line 267 "generate_dep_d_files.m"
            *parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_4 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3;
#line 267 "generate_dep_d_files.m"
          }
#line 267 "generate_dep_d_files.m"
        else
#line 269 "generate_dep_d_files.m"
          {
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_59_59;
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__Deps_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__DepsList_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Deps_14, (MR_Integer) 1)));
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__ModuleErrors_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 23)));
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__FatalModuleErrors_22;
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_27_27;
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29;
#line 269 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30;
#line 270 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__Deps_14, (MR_Integer) 0)));
#line 271 "generate_dep_d_files.m"
            MR_String parse_tree__generate_dep_d_files__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 0)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 1)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 2)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 3)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 4)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 5)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 6)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 7)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 8)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 9)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 10)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 11)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 12)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 13)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 14)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 15)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 16)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 17)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 18)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 19)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 20)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 21)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 22)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 24)));
#line 271 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 25)));
#line 271 "generate_dep_d_files.m"
            MR_String parse_tree__generate_dep_d_files__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_20, (MR_Integer) 26)));

#line 272 "generate_dep_d_files.m"
            {
#line 272 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__V_27_27 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2127 "parse_tree.generate_dep_d_files.c"
            parse_tree__generate_dep_d_files__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 272 "generate_dep_d_files.m"
            {
#line 272 "generate_dep_d_files.m"
              mercury__set__intersect_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_59_59, parse_tree__generate_dep_d_files__ModuleErrors_21, parse_tree__generate_dep_d_files__V_27_27, &parse_tree__generate_dep_d_files__FatalModuleErrors_22);
            }
#line 273 "generate_dep_d_files.m"
            {
#line 273 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__succeeded = mercury__set__is_empty_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_59_59, parse_tree__generate_dep_d_files__FatalModuleErrors_22);
            }
#line 277 "generate_dep_d_files.m"
            if (parse_tree__generate_dep_d_files__succeeded)
#line 274 "generate_dep_d_files.m"
              {
#line 274 "generate_dep_d_files.m"
                MR_Word parse_tree__generate_dep_d_files__V_28_28;

#line 275 "generate_dep_d_files.m"
                {
#line 275 "generate_dep_d_files.m"
                  parse_tree__generate_dep_d_files__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 275 "generate_dep_d_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_28_28, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[1]));
#line 275 "generate_dep_d_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_28_28, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0_1));
#line 275 "generate_dep_d_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 275 "generate_dep_d_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_28_28, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap_2));
#line 275 "generate_dep_d_files.m"
                }
#line 274 "generate_dep_d_files.m"
                {
#line 274 "generate_dep_d_files.m"
                  parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(parse_tree__generate_dep_d_files__ModuleAndImports_20, parse_tree__generate_dep_d_files__V_28_28, parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3, &parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29, parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5, &parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30);
                }
#line 274 "generate_dep_d_files.m"
              }
#line 277 "generate_dep_d_files.m"
            else
#line 278 "generate_dep_d_files.m"
              {
#line 278 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5;
#line 278 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3;
#line 278 "generate_dep_d_files.m"
              }
#line 280 "generate_dep_d_files.m"
            /* direct tailcall eliminated */
#line 280 "generate_dep_d_files.m"
            {
#line 280 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__HeadVar__1__tmp_copy_1 = parse_tree__generate_dep_d_files__DepsList_15;
#line 280 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0__tmp_copy_3 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_29_29;
#line 280 "generate_dep_d_files.m"
              MR_Word parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0__tmp_copy_5 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_30_30;

#line 280 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0_5 = parse_tree__generate_dep_d_files__STATE_VARIABLE_ImplDepsGraph_0__tmp_copy_5;
#line 280 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0_3 = parse_tree__generate_dep_d_files__STATE_VARIABLE_IntDepsGraph_0__tmp_copy_3;
#line 280 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__HeadVar__1_1 = parse_tree__generate_dep_d_files__HeadVar__1__tmp_copy_1;
#line 280 "generate_dep_d_files.m"
            }
#line 280 "generate_dep_d_files.m"
            continue;
#line 269 "generate_dep_d_files.m"
          }
#line 267 "generate_dep_d_files.m"
      }
#line 267 "generate_dep_d_files.m"
      break;
#line 267 "generate_dep_d_files.m"
    }
#line 264 "generate_dep_d_files.m"
}

#line 196 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0_1(
#line 196 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 196 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 196 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 196 "generate_dep_d_files.m"
{
#line 196 "generate_dep_d_files.m"
  {
#line 196 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 196 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__2_108;

#line 196 "generate_dep_d_files.m"
    {
#line 196 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__IntroducedFrom__pred__generate_dependencies__196__1_2_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__2_108);
    }
#line 196 "generate_dep_d_files.m"
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__2_108));
#line 196 "generate_dep_d_files.m"
  }
#line 196 "generate_dep_d_files.m"
}

#line 143 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_8,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Mode_9,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Search_10,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_11,
#line 143 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__DepsMap0_12)
#line 143 "generate_dep_d_files.m"
{
#line 146 "generate_dep_d_files.m"
  {
#line 146 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_104_104;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_105_105;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_106_106;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap_14;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleDep_15;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImports_17;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Errors_18;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__FatalErrors_19;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Target_39;
#line 146 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_44_44;
#line 151 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv0_ModuleDep_15;
#line 152 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_16_16;
#line 153 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_78_78;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_79_79;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_80_80;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_81_81;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_82_82;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_83_83;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_84_84;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_85_85;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_86_86;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_87_87;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_88_88;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_89_89;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_90_90;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_91_91;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_92_92;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_93_93;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_94_94;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_95_95;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_96_96;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_97_97;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_98_98;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_99_99;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_100_100;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_101_101;
#line 153 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_102_102;
#line 153 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__V_103_103;

#line 148 "generate_dep_d_files.m"
    {
#line 148 "generate_dep_d_files.m"
      parse_tree__deps_map__generate_deps_map_7_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__Search_10, parse_tree__generate_dep_d_files__DepsMap0_12, &parse_tree__generate_dep_d_files__DepsMap_14);
    }
#line 2340 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2342 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 151 "generate_dep_d_files.m"
    {
#line 151 "generate_dep_d_files.m"
      mercury__map__lookup_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__TypeCtorInfo_105_105, parse_tree__generate_dep_d_files__DepsMap_14, ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_11)), &parse_tree__generate_dep_d_files__conv0_ModuleDep_15);
    }
#line 151 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__ModuleDep_15 = ((MR_Word) parse_tree__generate_dep_d_files__conv0_ModuleDep_15);
#line 152 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleDep_15, (MR_Integer) 0)));
#line 152 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__ModuleAndImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleDep_15, (MR_Integer) 1)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 0)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 1)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 2)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 3)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 4)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 5)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 6)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 7)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 8)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 9)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 10)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 11)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 12)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 13)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 14)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 15)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 16)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 17)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 18)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 19)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 20)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 21)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 22)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 23)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 24)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 25)));
#line 153 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ModuleAndImports_17, (MR_Integer) 26)));
#line 154 "generate_dep_d_files.m"
    {
#line 154 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_44_44 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 2414 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 154 "generate_dep_d_files.m"
    {
#line 154 "generate_dep_d_files.m"
      mercury__set__intersect_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__Errors_18, parse_tree__generate_dep_d_files__V_44_44, &parse_tree__generate_dep_d_files__FatalErrors_19);
    }
#line 155 "generate_dep_d_files.m"
    {
#line 155 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__FatalErrors_19);
    }
#line 165 "generate_dep_d_files.m"
    if (parse_tree__generate_dep_d_files__succeeded)
#line 156 "generate_dep_d_files.m"
      {
#line 156 "generate_dep_d_files.m"
        MR_String parse_tree__generate_dep_d_files__ModuleString_20;
#line 156 "generate_dep_d_files.m"
        MR_String parse_tree__generate_dep_d_files__Message_21;

#line 156 "generate_dep_d_files.m"
        {
#line 156 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__ModuleString_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__generate_dep_d_files__ModuleName_11);
        }
#line 157 "generate_dep_d_files.m"
        {
#line 157 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__succeeded = mercury__set__contains_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_106_106, parse_tree__generate_dep_d_files__FatalErrors_19, ((MR_Box) ((MR_Integer) 0)));
        }
#line 160 "generate_dep_d_files.m"
        if (parse_tree__generate_dep_d_files__succeeded)
#line 158 "generate_dep_d_files.m"
          {
#line 158 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_46_46;
#line 158 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_48_48;

#line 159 "generate_dep_d_files.m"
            {
#line 159 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_48_48, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleString_20));
#line 159 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__generate_dep_d_files_scalar_common_2[3])));
#line 159 "generate_dep_d_files.m"
            }
#line 158 "generate_dep_d_files.m"
            {
#line 158 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_46_46, 0) = ((MR_Box) ((MR_String) "cannot read source file for module \140"));
#line 158 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_46_46, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__V_48_48));
#line 158 "generate_dep_d_files.m"
            }
#line 158 "generate_dep_d_files.m"
            {
#line 158 "generate_dep_d_files.m"
              mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__V_46_46, &parse_tree__generate_dep_d_files__Message_21);
            }
#line 158 "generate_dep_d_files.m"
          }
#line 160 "generate_dep_d_files.m"
        else
#line 161 "generate_dep_d_files.m"
          {
#line 161 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_52_52;
#line 161 "generate_dep_d_files.m"
            MR_Word parse_tree__generate_dep_d_files__V_54_54;

#line 162 "generate_dep_d_files.m"
            {
#line 162 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_54_54, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleString_20));
#line 162 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__generate_dep_d_files_scalar_common_2[3])));
#line 162 "generate_dep_d_files.m"
            }
#line 161 "generate_dep_d_files.m"
            {
#line 161 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_52_52, 0) = ((MR_Box) ((MR_String) "cannot parse source file for module \140"));
#line 161 "generate_dep_d_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__V_52_52, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__V_54_54));
#line 161 "generate_dep_d_files.m"
            }
#line 161 "generate_dep_d_files.m"
            {
#line 161 "generate_dep_d_files.m"
              mercury__string__append_list_2_p_0(parse_tree__generate_dep_d_files__V_52_52, &parse_tree__generate_dep_d_files__Message_21);
            }
#line 161 "generate_dep_d_files.m"
          }
#line 164 "generate_dep_d_files.m"
        {
#line 164 "generate_dep_d_files.m"
          libs__file_util__report_error_3_p_0(parse_tree__generate_dep_d_files__Message_21);
        }
#line 156 "generate_dep_d_files.m"
      }
#line 165 "generate_dep_d_files.m"
    else
#line 176 "generate_dep_d_files.m"
      {
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__IntDepsGraph0_23;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph0_24;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__DepsList_25;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__IntDepsGraph_26;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__ImpDepsGraph_27;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__ImpDepsOrdering0_28;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__ImpDepsOrdering_29;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__IntermodDirs_31;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__TransOptDepsOrdering_32;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__TransImpDepsGraph_35;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__IndirectDepsGraph_36;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37;
#line 176 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files__DFilesToWrite_38;

#line 181 "generate_dep_d_files.m"
        {
#line 181 "generate_dep_d_files.m"
          mercury__digraph__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, &parse_tree__generate_dep_d_files__IntDepsGraph0_23);
        }
#line 182 "generate_dep_d_files.m"
        {
#line 182 "generate_dep_d_files.m"
          mercury__digraph__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, &parse_tree__generate_dep_d_files__ImpDepsGraph0_24);
        }
#line 183 "generate_dep_d_files.m"
        {
#line 183 "generate_dep_d_files.m"
          mercury__map__values_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__TypeCtorInfo_105_105, parse_tree__generate_dep_d_files__DepsMap_14, &parse_tree__generate_dep_d_files__DepsList_25);
        }
#line 184 "generate_dep_d_files.m"
        {
#line 184 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__deps_list_to_deps_graph_6_p_0(parse_tree__generate_dep_d_files__DepsList_25, parse_tree__generate_dep_d_files__DepsMap_14, parse_tree__generate_dep_d_files__IntDepsGraph0_23, &parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph0_24, &parse_tree__generate_dep_d_files__ImpDepsGraph_27);
        }
#line 194 "generate_dep_d_files.m"
        {
#line 194 "generate_dep_d_files.m"
          mercury__digraph__atsort_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__ImpDepsOrdering0_28);
        }
#line 196 "generate_dep_d_files.m"
        {
#line 196 "generate_dep_d_files.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_2[1], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[6], parse_tree__generate_dep_d_files__ImpDepsOrdering0_28, &parse_tree__generate_dep_d_files__ImpDepsOrdering_29);
        }
#line 197 "generate_dep_d_files.m"
        {
#line 197 "generate_dep_d_files.m"
          mercury__list__condense_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsOrdering_29, &parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30);
        }
#line 198 "generate_dep_d_files.m"
        {
#line 198 "generate_dep_d_files.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__generate_dep_d_files__Globals_8, (MR_Integer) 650, &parse_tree__generate_dep_d_files__IntermodDirs_31);
        }
#line 218 "generate_dep_d_files.m"
        {
#line 218 "generate_dep_d_files.m"
          mercury__digraph__tc_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__TransImpDepsGraph_35);
        }
#line 219 "generate_dep_d_files.m"
        {
#line 219 "generate_dep_d_files.m"
          mercury__digraph__compose_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, parse_tree__generate_dep_d_files__TransImpDepsGraph_35, &parse_tree__generate_dep_d_files__IndirectDepsGraph_36);
        }
#line 230 "generate_dep_d_files.m"
        {
#line 230 "generate_dep_d_files.m"
          mercury__digraph__tc_2_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_104_104, parse_tree__generate_dep_d_files__ImpDepsGraph_27, &parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37);
        }
#line 2612 "parse_tree.generate_dep_d_files.c"
#line 2613 "parse_tree.generate_dep_d_files.c"
        switch (parse_tree__generate_dep_d_files__Mode_9) {
#line 2615 "parse_tree.generate_dep_d_files.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2617 "parse_tree.generate_dep_d_files.c"
          case (MR_Integer) 1:
#line 2619 "parse_tree.generate_dep_d_files.c"
            {
#line 2621 "parse_tree.generate_dep_d_files.c"
              MR_String parse_tree__generate_dep_d_files__SourceFileName_22;

#line 170 "generate_dep_d_files.m"
              {
#line 170 "generate_dep_d_files.m"
                parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__generate_dep_d_files__ModuleAndImports_17, &parse_tree__generate_dep_d_files__SourceFileName_22);
              }
#line 172 "generate_dep_d_files.m"
              {
#line 172 "generate_dep_d_files.m"
                parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__SourceFileName_22, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__DepsMap_14);
              }
#line 174 "generate_dep_d_files.m"
              {
#line 174 "generate_dep_d_files.m"
                parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__SourceFileName_22, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__DepsMap_14);
              }
#line 237 "generate_dep_d_files.m"
              parse_tree__generate_dep_d_files__DFilesToWrite_38 = parse_tree__generate_dep_d_files__DepsList_25;
#line 2641 "parse_tree.generate_dep_d_files.c"
            }
#line 2643 "parse_tree.generate_dep_d_files.c"
            break;
#line 2645 "parse_tree.generate_dep_d_files.c"
          case (MR_Integer) 0:
#line 2647 "parse_tree.generate_dep_d_files.c"
            {
#line 234 "generate_dep_d_files.m"
              {
#line 234 "generate_dep_d_files.m"
                parse_tree__generate_dep_d_files__DFilesToWrite_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__DFilesToWrite_38, 0) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleDep_15));
#line 234 "generate_dep_d_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__generate_dep_d_files__DFilesToWrite_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "generate_dep_d_files.m"
              }
#line 2659 "parse_tree.generate_dep_d_files.c"
            }
#line 2661 "parse_tree.generate_dep_d_files.c"
            break;
#line 2663 "parse_tree.generate_dep_d_files.c"
        }
#line 186 "generate_dep_d_files.m"
        {
#line 186 "generate_dep_d_files.m"
          parse_tree__generate_dep_d_files__maybe_output_imports_graph_6_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph_27);
        }
#line 195 "generate_dep_d_files.m"
        {
#line 195 "generate_dep_d_files.m"
          parse_tree__write_deps_file__maybe_output_module_order_5_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, parse_tree__generate_dep_d_files__ImpDepsOrdering0_28);
        }
#line 200 "generate_dep_d_files.m"
        {
#line 200 "generate_dep_d_files.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__generate_dep_d_files__Globals_8, (MR_Integer) 1, parse_tree__generate_dep_d_files__IntermodDirs_31, (MR_String) ".trans_opt", parse_tree__generate_dep_d_files__TransOptDepsOrdering0_30, &parse_tree__generate_dep_d_files__TransOptDepsOrdering_32);
        }
#line 239 "generate_dep_d_files.m"
        {
#line 239 "generate_dep_d_files.m"
          parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__DFilesToWrite_38, parse_tree__generate_dep_d_files__IntDepsGraph_26, parse_tree__generate_dep_d_files__ImpDepsGraph_27, parse_tree__generate_dep_d_files__IndirectDepsGraph_36, parse_tree__generate_dep_d_files__IndirectOptDepsGraph_37, parse_tree__generate_dep_d_files__TransOptDepsOrdering_32, parse_tree__generate_dep_d_files__DepsMap_14);
        }
#line 176 "generate_dep_d_files.m"
      }
#line 251 "generate_dep_d_files.m"
    {
#line 251 "generate_dep_d_files.m"
      libs__globals__get_target_2_p_0(parse_tree__generate_dep_d_files__Globals_8, &parse_tree__generate_dep_d_files__Target_39);
    }
#line 253 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__Target_39 == (MR_Integer) 3);
#line 253 "generate_dep_d_files.m"
    if (parse_tree__generate_dep_d_files__succeeded)
#line 254 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__succeeded = (parse_tree__generate_dep_d_files__Mode_9 == (MR_Integer) 1);
#line 257 "generate_dep_d_files.m"
    if (parse_tree__generate_dep_d_files__succeeded)
#line 256 "generate_dep_d_files.m"
      {
#line 256 "generate_dep_d_files.m"
        MR_Word parse_tree__generate_dep_d_files___Succeeded_40;

#line 256 "generate_dep_d_files.m"
        {
#line 256 "generate_dep_d_files.m"
          parse_tree__module_cmds__create_java_shell_script_5_p_0(parse_tree__generate_dep_d_files__Globals_8, parse_tree__generate_dep_d_files__ModuleName_11, &parse_tree__generate_dep_d_files___Succeeded_40);
        }
#line 256 "generate_dep_d_files.m"
      }
#line 257 "generate_dep_d_files.m"
    else
#line 257 "generate_dep_d_files.m"
      {
#line 257 "generate_dep_d_files.m"
      }
#line 146 "generate_dep_d_files.m"
  }
#line 143 "generate_dep_d_files.m"
}

#line 135 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_3(
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 135 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
#line 135 "generate_dep_d_files.m"
{
#line 135 "generate_dep_d_files.m"
  {
#line 135 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 135 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

#line 135 "generate_dep_d_files.m"
    {
#line 135 "generate_dep_d_files.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), &parse_tree__generate_dep_d_files__conv2_HeadVar__3_3);
    }
#line 135 "generate_dep_d_files.m"
    *parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
#line 135 "generate_dep_d_files.m"
  }
#line 135 "generate_dep_d_files.m"
}

#line 131 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2(
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 131 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 131 "generate_dep_d_files.m"
{
#line 131 "generate_dep_d_files.m"
  {
#line 131 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 131 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__8_8;

#line 131 "generate_dep_d_files.m"
    {
#line 131 "generate_dep_d_files.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__8_8);
    }
#line 131 "generate_dep_d_files.m"
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__8_8));
#line 131 "generate_dep_d_files.m"
  }
#line 131 "generate_dep_d_files.m"
}

#line 128 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_1(
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
#line 128 "generate_dep_d_files.m"
{
#line 128 "generate_dep_d_files.m"
  {
#line 128 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 128 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 128 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

#line 128 "generate_dep_d_files.m"
    {
#line 128 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
#line 128 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
#line 128 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 128 "generate_dep_d_files.m"
  }
#line 128 "generate_dep_d_files.m"
}

#line 58 "generate_dep_d_files.m"
void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(
#line 58 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
#line 58 "generate_dep_d_files.m"
  MR_String parse_tree__generate_dep_d_files__FileName_6)
#line 58 "generate_dep_d_files.m"
{
#line 107 "generate_dep_d_files.m"
  {
#line 107 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_42_51;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_43_52;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_48_57;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleName_8;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap_9;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ParseTreeSrc_24;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Specs0_25;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Error_26;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__RawCompUnits_27;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Specs_28;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__NestedModuleNames_33;
#line 107 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__SourceFileName_34;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImportsList_35;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap0_36;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_45_45;
#line 107 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_48_48;
#line 119 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_23_23;
#line 124 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_29_29;
#line 124 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_30_30;
#line 126 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files___NumWarnings_31;
#line 126 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files___NumErrors_32;
#line 135 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv3_DepsMap_9;

#line 119 "generate_dep_d_files.m"
    {
#line 119 "generate_dep_d_files.m"
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__generate_dep_d_files__Globals_5, parse_tree__generate_dep_d_files__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_3[0], &parse_tree__generate_dep_d_files__V_23_23, &parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Error_26);
    }
#line 122 "generate_dep_d_files.m"
    {
#line 122 "generate_dep_d_files.m"
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__RawCompUnits_27, parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Specs_28);
    }
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 0)));
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 1)));
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 2)));
#line 126 "generate_dep_d_files.m"
    {
#line 126 "generate_dep_d_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__generate_dep_d_files__Specs_28, parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumWarnings_31, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumErrors_32);
    }
#line 2896 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2898 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 128 "generate_dep_d_files.m"
    {
#line 128 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_45_45 = mercury__list__map_2_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[4], parse_tree__generate_dep_d_files__RawCompUnits_27);
    }
#line 127 "generate_dep_d_files.m"
    {
#line 127 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__NestedModuleNames_33 = mercury__set__list_to_set_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, parse_tree__generate_dep_d_files__V_45_45);
    }
#line 129 "generate_dep_d_files.m"
    {
#line 129 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__FileName_6, (MR_String) ".m");
    }
#line 131 "generate_dep_d_files.m"
    {
#line 131 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0]));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0_2));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__Globals_5));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__SourceFileName_34));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_8));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 6) = ((MR_Box) (parse_tree__generate_dep_d_files__NestedModuleNames_33));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 8) = ((MR_Box) (parse_tree__generate_dep_d_files__Error_26));
#line 131 "generate_dep_d_files.m"
    }
#line 2939 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 130 "generate_dep_d_files.m"
    {
#line 130 "generate_dep_d_files.m"
      mercury__list__map_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, parse_tree__generate_dep_d_files__V_48_48, parse_tree__generate_dep_d_files__RawCompUnits_27, &parse_tree__generate_dep_d_files__ModuleAndImportsList_35);
    }
#line 134 "generate_dep_d_files.m"
    {
#line 134 "generate_dep_d_files.m"
      mercury__map__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap0_36);
    }
#line 135 "generate_dep_d_files.m"
    {
#line 135 "generate_dep_d_files.m"
      mercury__list__foldl_4_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[5], parse_tree__generate_dep_d_files__ModuleAndImportsList_35, ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap0_36)), &parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    }
#line 135 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__DepsMap_9 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_DepsMap_9);
#line 109 "generate_dep_d_files.m"
    {
#line 109 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__generate_dep_d_files__ModuleName_8, parse_tree__generate_dep_d_files__DepsMap_9);
#line 109 "generate_dep_d_files.m"
      return;
    }
#line 107 "generate_dep_d_files.m"
  }
#line 58 "generate_dep_d_files.m"
}

#line 50 "generate_dep_d_files.m"
void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(
#line 50 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
#line 50 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_6)
#line 50 "generate_dep_d_files.m"
{
#line 102 "generate_dep_d_files.m"
  {
#line 102 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 102 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap_8;

#line 103 "generate_dep_d_files.m"
    {
#line 103 "generate_dep_d_files.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap_8);
    }
#line 104 "generate_dep_d_files.m"
    {
#line 104 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__generate_dep_d_files__ModuleName_6, parse_tree__generate_dep_d_files__DepsMap_8);
#line 104 "generate_dep_d_files.m"
      return;
    }
#line 102 "generate_dep_d_files.m"
  }
#line 50 "generate_dep_d_files.m"
}

#line 135 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_3(
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 135 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2,
#line 135 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_3)
#line 135 "generate_dep_d_files.m"
{
#line 135 "generate_dep_d_files.m"
  {
#line 135 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 135 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv2_HeadVar__3_3;

#line 135 "generate_dep_d_files.m"
    {
#line 135 "generate_dep_d_files.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_2), &parse_tree__generate_dep_d_files__conv2_HeadVar__3_3);
    }
#line 135 "generate_dep_d_files.m"
    *parse_tree__generate_dep_d_files__wrapper_arg_3 = ((MR_Box) (parse_tree__generate_dep_d_files__conv2_HeadVar__3_3));
#line 135 "generate_dep_d_files.m"
  }
#line 135 "generate_dep_d_files.m"
}

#line 131 "generate_dep_d_files.m"
static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2(
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 131 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1,
#line 131 "generate_dep_d_files.m"
  MR_Box * parse_tree__generate_dep_d_files__wrapper_arg_2)
#line 131 "generate_dep_d_files.m"
{
#line 131 "generate_dep_d_files.m"
  {
#line 131 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 131 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv1_HeadVar__8_8;

#line 131 "generate_dep_d_files.m"
    {
#line 131 "generate_dep_d_files.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1), &parse_tree__generate_dep_d_files__conv1_HeadVar__8_8);
    }
#line 131 "generate_dep_d_files.m"
    *parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv1_HeadVar__8_8));
#line 131 "generate_dep_d_files.m"
  }
#line 131 "generate_dep_d_files.m"
}

#line 128 "generate_dep_d_files.m"
static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_1(
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__closure_arg,
#line 128 "generate_dep_d_files.m"
  MR_Box parse_tree__generate_dep_d_files__wrapper_arg_1)
#line 128 "generate_dep_d_files.m"
{
#line 128 "generate_dep_d_files.m"
  {
#line 128 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 128 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__closure = parse_tree__generate_dep_d_files__closure_arg;
#line 128 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__conv0_HeadVar__2_2;

#line 128 "generate_dep_d_files.m"
    {
#line 128 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__generate_dep_d_files__wrapper_arg_1));
    }
#line 128 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__wrapper_arg_2 = ((MR_Box) (parse_tree__generate_dep_d_files__conv0_HeadVar__2_2));
#line 128 "generate_dep_d_files.m"
    return parse_tree__generate_dep_d_files__wrapper_arg_2;
#line 128 "generate_dep_d_files.m"
  }
#line 128 "generate_dep_d_files.m"
}

#line 42 "generate_dep_d_files.m"
void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(
#line 42 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
#line 42 "generate_dep_d_files.m"
  MR_String parse_tree__generate_dep_d_files__FileName_6)
#line 42 "generate_dep_d_files.m"
{
#line 97 "generate_dep_d_files.m"
  {
#line 97 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_42_51;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_43_52;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__TypeCtorInfo_48_57;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleName_8;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap_9;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ParseTreeSrc_24;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Specs0_25;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Error_26;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__RawCompUnits_27;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__Specs_28;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__NestedModuleNames_33;
#line 97 "generate_dep_d_files.m"
    MR_String parse_tree__generate_dep_d_files__SourceFileName_34;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__ModuleAndImportsList_35;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap0_36;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_45_45;
#line 97 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_48_48;
#line 119 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_23_23;
#line 124 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_29_29;
#line 124 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__V_30_30;
#line 126 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files___NumWarnings_31;
#line 126 "generate_dep_d_files.m"
    MR_Integer parse_tree__generate_dep_d_files___NumErrors_32;
#line 135 "generate_dep_d_files.m"
    MR_Box parse_tree__generate_dep_d_files__conv3_DepsMap_9;

#line 119 "generate_dep_d_files.m"
    {
#line 119 "generate_dep_d_files.m"
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__generate_dep_d_files__Globals_5, parse_tree__generate_dep_d_files__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_3[0], &parse_tree__generate_dep_d_files__V_23_23, &parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Error_26);
    }
#line 122 "generate_dep_d_files.m"
    {
#line 122 "generate_dep_d_files.m"
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__generate_dep_d_files__ParseTreeSrc_24, &parse_tree__generate_dep_d_files__RawCompUnits_27, parse_tree__generate_dep_d_files__Specs0_25, &parse_tree__generate_dep_d_files__Specs_28);
    }
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 0)));
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 1)));
#line 124 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__ParseTreeSrc_24, (MR_Integer) 2)));
#line 126 "generate_dep_d_files.m"
    {
#line 126 "generate_dep_d_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__generate_dep_d_files__Specs_28, parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumWarnings_31, (MR_Integer) 0, &parse_tree__generate_dep_d_files___NumErrors_32);
    }
#line 3176 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 3178 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 128 "generate_dep_d_files.m"
    {
#line 128 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_45_45 = mercury__list__map_2_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[2], parse_tree__generate_dep_d_files__RawCompUnits_27);
    }
#line 127 "generate_dep_d_files.m"
    {
#line 127 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__NestedModuleNames_33 = mercury__set__list_to_set_1_f_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, parse_tree__generate_dep_d_files__V_45_45);
    }
#line 129 "generate_dep_d_files.m"
    {
#line 129 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__generate_dep_d_files__FileName_6, (MR_String) ".m");
    }
#line 131 "generate_dep_d_files.m"
    {
#line 131 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0]));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0_2));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 3) = ((MR_Box) (parse_tree__generate_dep_d_files__Globals_5));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 4) = ((MR_Box) (parse_tree__generate_dep_d_files__SourceFileName_34));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 5) = ((MR_Box) (parse_tree__generate_dep_d_files__ModuleName_8));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 6) = ((MR_Box) (parse_tree__generate_dep_d_files__NestedModuleNames_33));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "generate_dep_d_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__generate_dep_d_files__V_48_48, 8) = ((MR_Box) (parse_tree__generate_dep_d_files__Error_26));
#line 131 "generate_dep_d_files.m"
    }
#line 3219 "parse_tree.generate_dep_d_files.c"
    parse_tree__generate_dep_d_files__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 130 "generate_dep_d_files.m"
    {
#line 130 "generate_dep_d_files.m"
      mercury__list__map_3_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_43_52, parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, parse_tree__generate_dep_d_files__V_48_48, parse_tree__generate_dep_d_files__RawCompUnits_27, &parse_tree__generate_dep_d_files__ModuleAndImportsList_35);
    }
#line 134 "generate_dep_d_files.m"
    {
#line 134 "generate_dep_d_files.m"
      mercury__map__init_1_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap0_36);
    }
#line 135 "generate_dep_d_files.m"
    {
#line 135 "generate_dep_d_files.m"
      mercury__list__foldl_4_p_0(parse_tree__generate_dep_d_files__TypeCtorInfo_48_57, (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[0], (MR_Word) &parse_tree__generate_dep_d_files_scalar_common_1[3], parse_tree__generate_dep_d_files__ModuleAndImportsList_35, ((MR_Box) (parse_tree__generate_dep_d_files__DepsMap0_36)), &parse_tree__generate_dep_d_files__conv3_DepsMap_9);
    }
#line 135 "generate_dep_d_files.m"
    parse_tree__generate_dep_d_files__DepsMap_9 = ((MR_Word) parse_tree__generate_dep_d_files__conv3_DepsMap_9);
#line 99 "generate_dep_d_files.m"
    {
#line 99 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__generate_dep_d_files__ModuleName_8, parse_tree__generate_dep_d_files__DepsMap_9);
#line 99 "generate_dep_d_files.m"
      return;
    }
#line 97 "generate_dep_d_files.m"
  }
#line 42 "generate_dep_d_files.m"
}

#line 34 "generate_dep_d_files.m"
void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(
#line 34 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__Globals_5,
#line 34 "generate_dep_d_files.m"
  MR_Word parse_tree__generate_dep_d_files__ModuleName_6)
#line 34 "generate_dep_d_files.m"
{
#line 92 "generate_dep_d_files.m"
  {
#line 92 "generate_dep_d_files.m"
    MR_bool parse_tree__generate_dep_d_files__succeeded;
#line 92 "generate_dep_d_files.m"
    MR_Word parse_tree__generate_dep_d_files__DepsMap_8;

#line 93 "generate_dep_d_files.m"
    {
#line 93 "generate_dep_d_files.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__generate_dep_d_files__DepsMap_8);
    }
#line 94 "generate_dep_d_files.m"
    {
#line 94 "generate_dep_d_files.m"
      parse_tree__generate_dep_d_files__generate_dependencies_7_p_0(parse_tree__generate_dep_d_files__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__generate_dep_d_files__ModuleName_6, parse_tree__generate_dep_d_files__DepsMap_8);
#line 94 "generate_dep_d_files.m"
      return;
    }
#line 92 "generate_dep_d_files.m"
  }
#line 34 "generate_dep_d_files.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.generate_dep_d_files. */
