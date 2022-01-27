/*
** Automatically generated from `module_deps_graph.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module parse_tree.module_deps_graph. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_deps_graph__init
ENDINIT
*/

#include "parse_tree.module_deps_graph.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 142 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 145 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 148 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 151 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 154 "parse_tree.module_deps_graph.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 157 "parse_tree.module_deps_graph.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 160 "parse_tree.module_deps_graph.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 163 "parse_tree.module_deps_graph.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 166 "parse_tree.module_deps_graph.c"
static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 169 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
#line 172 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 174 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

#line 177 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
#line 180 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 182 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 184 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

#line 187 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
#line 190 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 192 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

#line 195 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
#line 198 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 200 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 202 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

#line 205 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____gen_node_name_1_0_10001(
#line 208 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 210 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 212 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

#line 215 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____gen_node_name_1_0_10001(
#line 218 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 220 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_2,
#line 222 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3,
#line 224 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_4);

#line 227 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
#line 230 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 232 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

#line 235 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
#line 238 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 240 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 242 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_2(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_1(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 122 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0(
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_7,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_8,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18);

#line 290 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 290 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3);

#line 290 "module_deps_graph.m"
static MR_bool MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2);

#line 300 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_3(
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3,
#line 300 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_4);

#line 299 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_2(
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 299 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 329 "parse_tree.module_deps_graph.c"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_1(
#line 332 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 334 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1);

#line 292 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0(
#line 292 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_7,
#line 292 "module_deps_graph.m"
  MR_String parse_tree__module_deps_graph__Name_8,
#line 292 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Graph_10);

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_impl_deps__187__1_4_p_0(
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_14,
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_15,
#line 187 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_16);

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__171__1_4_p_0(
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_55,
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_56,
#line 171 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_57);

#line 225 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__get_dependencies_from_graph__225__1_4_p_0(
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsGraph_8,
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_15,
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_16,
#line 225 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_17);

#line 290 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____gen_node_name_1_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_6,
#line 290 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3);

#line 290 "module_deps_graph.m"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____gen_node_name_1_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_5,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2);

#line 320 "module_deps_graph.m"
static MR_String MR_CALL 
parse_tree__module_deps_graph__sym_name_to_node_id_1_f_0(
#line 320 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Name_3);

#line 311 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_edge_6_p_0(
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_22,
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_7,
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__GenNodeName_8,
#line 311 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__A_9,
#line 311 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__B_10);

#line 303 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_node_5_p_0(
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_16,
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_6,
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__GenNodeName_7,
#line 303 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__Node_8);

#line 269 "module_deps_graph.m"
static MR_Word MR_CALL 
parse_tree__module_deps_graph__filter_imports_graph_2_f_0(
#line 269 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 269 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsGraph_6);

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_2(
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 187 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 192 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Parent_8,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11,
#line 192 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12);

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0_2(
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 187 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 178 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0(
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
#line 178 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10);

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 167 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
#line 167 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10);

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_2(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 122 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_7,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_8,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18);

#line 114 "module_deps_graph.m"
static MR_Word MR_CALL 
parse_tree__module_deps_graph__lookup_module_and_imports_in_deps_map_2_f_0(
#line 114 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsMap_4,
#line 114 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleName_5);

#line 249 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_2(
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

#line 247 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_1(
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

#line 225 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0_1(
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 225 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

#line 107 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0_1(
#line 107 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 107 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_7[1][5];

static /* final */ const MR_Integer parse_tree__module_deps_graph_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_9[1][9];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_10[1][10];




static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
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
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_deps_graph__write_graph__ho1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_deps_graph__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_deps_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer parse_tree__module_deps_graph_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__module_deps_graph____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__module_deps_graph____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 841 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 850 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 858 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 866 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 874 "parse_tree.module_deps_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 883 "parse_tree.module_deps_graph.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 893 "parse_tree.module_deps_graph.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 903 "parse_tree.module_deps_graph.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 911 "parse_tree.module_deps_graph.c"
const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 928 "parse_tree.module_deps_graph.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 936 "parse_tree.module_deps_graph.c"
const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 953 "parse_tree.module_deps_graph.c"
const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_gen_node_name_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____gen_node_name_1_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____gen_node_name_1_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "gen_node_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph____vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 970 "parse_tree.module_deps_graph.c"
static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 980 "parse_tree.module_deps_graph.c"
const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_and_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "lookup_module_and_imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 997 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
#line 1000 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 1002 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
#line 1004 "parse_tree.module_deps_graph.c"
{
#line 1006 "parse_tree.module_deps_graph.c"
  {
#line 1008 "parse_tree.module_deps_graph.c"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 1011 "parse_tree.module_deps_graph.c"
    {
#line 1013 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____deps_graph_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
#line 1016 "parse_tree.module_deps_graph.c"
    return parse_tree__module_deps_graph__succeeded;
#line 1018 "parse_tree.module_deps_graph.c"
  }
#line 1020 "parse_tree.module_deps_graph.c"
}

#line 1023 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
#line 1026 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 1028 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 1030 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
#line 1032 "parse_tree.module_deps_graph.c"
{
#line 1034 "parse_tree.module_deps_graph.c"
  {
#line 1036 "parse_tree.module_deps_graph.c"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

#line 1039 "parse_tree.module_deps_graph.c"
    {
#line 1041 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph____Compare____deps_graph_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
#line 1044 "parse_tree.module_deps_graph.c"
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
#line 1046 "parse_tree.module_deps_graph.c"
  }
#line 1048 "parse_tree.module_deps_graph.c"
}

#line 1051 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
#line 1054 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 1056 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
#line 1058 "parse_tree.module_deps_graph.c"
{
#line 1060 "parse_tree.module_deps_graph.c"
  {
#line 1062 "parse_tree.module_deps_graph.c"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 1065 "parse_tree.module_deps_graph.c"
    {
#line 1067 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
#line 1070 "parse_tree.module_deps_graph.c"
    return parse_tree__module_deps_graph__succeeded;
#line 1072 "parse_tree.module_deps_graph.c"
  }
#line 1074 "parse_tree.module_deps_graph.c"
}

#line 1077 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
#line 1080 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 1082 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 1084 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
#line 1086 "parse_tree.module_deps_graph.c"
{
#line 1088 "parse_tree.module_deps_graph.c"
  {
#line 1090 "parse_tree.module_deps_graph.c"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

#line 1093 "parse_tree.module_deps_graph.c"
    {
#line 1095 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
#line 1098 "parse_tree.module_deps_graph.c"
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
#line 1100 "parse_tree.module_deps_graph.c"
  }
#line 1102 "parse_tree.module_deps_graph.c"
}

#line 1105 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____gen_node_name_1_0_10001(
#line 1108 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 1110 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 1112 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
#line 1114 "parse_tree.module_deps_graph.c"
{
#line 1116 "parse_tree.module_deps_graph.c"
  {
#line 1118 "parse_tree.module_deps_graph.c"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 1121 "parse_tree.module_deps_graph.c"
    {
#line 1123 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____gen_node_name_1_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
#line 1126 "parse_tree.module_deps_graph.c"
    return parse_tree__module_deps_graph__succeeded;
#line 1128 "parse_tree.module_deps_graph.c"
  }
#line 1130 "parse_tree.module_deps_graph.c"
}

#line 1133 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____gen_node_name_1_0_10001(
#line 1136 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 1138 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_2,
#line 1140 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3,
#line 1142 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_4)
#line 1144 "parse_tree.module_deps_graph.c"
{
#line 1146 "parse_tree.module_deps_graph.c"
  {
#line 1148 "parse_tree.module_deps_graph.c"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

#line 1151 "parse_tree.module_deps_graph.c"
    {
#line 1153 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph____Compare____gen_node_name_1_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), &parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_4));
    }
#line 1156 "parse_tree.module_deps_graph.c"
    *parse_tree__module_deps_graph__wrapper_arg_2 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
#line 1158 "parse_tree.module_deps_graph.c"
  }
#line 1160 "parse_tree.module_deps_graph.c"
}

#line 1163 "parse_tree.module_deps_graph.c"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
#line 1166 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 1168 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
#line 1170 "parse_tree.module_deps_graph.c"
{
#line 1172 "parse_tree.module_deps_graph.c"
  {
#line 1174 "parse_tree.module_deps_graph.c"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 1177 "parse_tree.module_deps_graph.c"
    {
#line 1179 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
#line 1182 "parse_tree.module_deps_graph.c"
    return parse_tree__module_deps_graph__succeeded;
#line 1184 "parse_tree.module_deps_graph.c"
  }
#line 1186 "parse_tree.module_deps_graph.c"
}

#line 1189 "parse_tree.module_deps_graph.c"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
#line 1192 "parse_tree.module_deps_graph.c"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
#line 1194 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 1196 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
#line 1198 "parse_tree.module_deps_graph.c"
{
#line 1200 "parse_tree.module_deps_graph.c"
  {
#line 1202 "parse_tree.module_deps_graph.c"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

#line 1205 "parse_tree.module_deps_graph.c"
    {
#line 1207 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
#line 1210 "parse_tree.module_deps_graph.c"
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
#line 1212 "parse_tree.module_deps_graph.c"
  }
#line 1214 "parse_tree.module_deps_graph.c"
}

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_2(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 208 "module_deps_graph.m"
{
#line 208 "module_deps_graph.m"
  {
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 208 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12;

#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12));
#line 208 "module_deps_graph.m"
  }
#line 208 "module_deps_graph.m"
}

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_1(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 208 "module_deps_graph.m"
{
#line 208 "module_deps_graph.m"
  {
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 208 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12;

#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12));
#line 208 "module_deps_graph.m"
  }
#line 208 "module_deps_graph.m"
}

#line 122 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0(
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_7,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_8,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18)
#line 122 "module_deps_graph.m"
{
#line 127 "module_deps_graph.m"
  {
#line 127 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_65_65 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 2)));
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ParentDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 3)));
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__IntModuleKey_13;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ImplModuleKey_14;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_73_73;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_86_86;
#line 145 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 0)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 1)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 4)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 5)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 6)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 7)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 8)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 9)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 10)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 11)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 12)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 13)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 14)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 15)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 16)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 17)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 18)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 19)));
#line 145 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 20)));
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16;
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18;

#line 147 "module_deps_graph.m"
    {
#line 147 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_65_65, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19);
    }
#line 148 "module_deps_graph.m"
    {
#line 148 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_int_deps_4_p_0(parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20);
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_73_73, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_6[0]));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_73_73, 1) = ((MR_Box) (parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_1));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_73_73, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_8));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_73_73, 4) = ((MR_Box) (parse_tree__module_deps_graph__IntModuleKey_13));
#line 208 "module_deps_graph.m"
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_73_73, parse_tree__module_deps_graph__ParentDeps_12, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
#line 160 "module_deps_graph.m"
    {
#line 160 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_65_65, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__ImplModuleKey_14, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17, &parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22);
    }
#line 161 "module_deps_graph.m"
    {
#line 161 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_impl_deps_4_p_0(parse_tree__module_deps_graph__ImplModuleKey_14, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22, &parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23);
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_86_86, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_6[0]));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_86_86, 1) = ((MR_Box) (parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0_2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_86_86, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_8));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_86_86, 4) = ((MR_Box) (parse_tree__module_deps_graph__ImplModuleKey_14));
#line 208 "module_deps_graph.m"
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_86_86, parse_tree__module_deps_graph__ParentDeps_12, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23)), &parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18 = ((MR_Word) parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18);
#line 127 "module_deps_graph.m"
  }
#line 122 "module_deps_graph.m"
}

#line 290 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 290 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
#line 290 "module_deps_graph.m"
{
#line 290 "module_deps_graph.m"
  {
#line 290 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 290 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
#line 290 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

#line 290 "module_deps_graph.m"
    {
#line 290 "module_deps_graph.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__module_deps_graph__HeadVar__1_1, (MR_Word) parse_tree__module_deps_graph__Cast_HeadVar1_4, (MR_Word) parse_tree__module_deps_graph__Cast_HeadVar2_5);
#line 290 "module_deps_graph.m"
      return;
    }
#line 290 "module_deps_graph.m"
  }
#line 290 "module_deps_graph.m"
}

#line 290 "module_deps_graph.m"
static MR_bool MR_CALL 
parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
#line 290 "module_deps_graph.m"
{
#line 290 "module_deps_graph.m"
  {
#line 290 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 290 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
#line 290 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

#line 290 "module_deps_graph.m"
    {
#line 290 "module_deps_graph.m"
      return parse_tree__module_deps_graph__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__module_deps_graph__Cast_HeadVar1_3, (MR_Word) parse_tree__module_deps_graph__Cast_HeadVar2_4);
    }
#line 290 "module_deps_graph.m"
    return parse_tree__module_deps_graph__succeeded;
#line 290 "module_deps_graph.m"
  }
#line 290 "module_deps_graph.m"
}

#line 300 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_3(
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 300 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3,
#line 300 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_4)
#line 300 "module_deps_graph.m"
{
#line 300 "module_deps_graph.m"
  {
#line 300 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;

#line 300 "module_deps_graph.m"
    {
#line 300 "module_deps_graph.m"
      parse_tree__module_deps_graph__write_edge_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 5))), parse_tree__module_deps_graph__wrapper_arg_1, parse_tree__module_deps_graph__wrapper_arg_2);
#line 300 "module_deps_graph.m"
      return;
    }
#line 300 "module_deps_graph.m"
  }
#line 300 "module_deps_graph.m"
}

#line 299 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_2(
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 299 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 299 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 299 "module_deps_graph.m"
{
#line 299 "module_deps_graph.m"
  {
#line 299 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;

#line 299 "module_deps_graph.m"
    {
#line 299 "module_deps_graph.m"
      parse_tree__module_deps_graph__write_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 5))), parse_tree__module_deps_graph__wrapper_arg_1);
#line 299 "module_deps_graph.m"
      return;
    }
#line 299 "module_deps_graph.m"
  }
#line 299 "module_deps_graph.m"
}

#line 1562 "parse_tree.module_deps_graph.c"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0_1(
#line 1565 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 1567 "parse_tree.module_deps_graph.c"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1)
#line 1569 "parse_tree.module_deps_graph.c"
{
#line 1571 "parse_tree.module_deps_graph.c"
  {
#line 1573 "parse_tree.module_deps_graph.c"
    MR_Box parse_tree__module_deps_graph__wrapper_arg_2;
#line 1575 "parse_tree.module_deps_graph.c"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 1577 "parse_tree.module_deps_graph.c"
    MR_String parse_tree__module_deps_graph__conv0_HeadVar__2_2;

#line 1580 "parse_tree.module_deps_graph.c"
    {
#line 1582 "parse_tree.module_deps_graph.c"
      parse_tree__module_deps_graph__conv0_HeadVar__2_2 = parse_tree__module_deps_graph__sym_name_to_node_id_1_f_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1));
    }
#line 1585 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__wrapper_arg_2 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__2_2));
#line 1587 "parse_tree.module_deps_graph.c"
    return parse_tree__module_deps_graph__wrapper_arg_2;
#line 1589 "parse_tree.module_deps_graph.c"
  }
#line 1591 "parse_tree.module_deps_graph.c"
}

#line 292 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_graph__ho1_6_p_0(
#line 292 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_7,
#line 292 "module_deps_graph.m"
  MR_String parse_tree__module_deps_graph__Name_8,
#line 292 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Graph_10)
#line 292 "module_deps_graph.m"
{
#line 295 "module_deps_graph.m"
  {
#line 295 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 295 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_31 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 295 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__GenNodeName_9 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_2[4];
#line 295 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_14_14;
#line 295 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_17_17;
#line 295 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_19_19;
#line 295 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_22_22;
#line 295 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_26_26;
#line 295 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_27_27;
#line 299 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IO_28_28;

#line 296 "module_deps_graph.m"
    {
#line 296 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_17_17 = mercury__string__f_43_43_2_f_0(parse_tree__module_deps_graph__Name_8, (MR_String) " {\n");
    }
#line 296 "module_deps_graph.m"
    {
#line 296 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "digraph ", parse_tree__module_deps_graph__V_17_17);
    }
#line 296 "module_deps_graph.m"
    {
#line 296 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, parse_tree__module_deps_graph__V_14_14);
    }
#line 297 "module_deps_graph.m"
    {
#line 297 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_22_22 = mercury__string__f_43_43_2_f_0(parse_tree__module_deps_graph__Name_8, (MR_String) "\";\n");
    }
#line 297 "module_deps_graph.m"
    {
#line 297 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "label=\"", parse_tree__module_deps_graph__V_22_22);
    }
#line 297 "module_deps_graph.m"
    {
#line 297 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, parse_tree__module_deps_graph__V_19_19);
    }
#line 298 "module_deps_graph.m"
    {
#line 298 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, (MR_String) "center=true;\n");
    }
#line 299 "module_deps_graph.m"
    {
#line 299 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_9[0]));
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 1) = ((MR_Box) (parse_tree__module_deps_graph__write_graph__ho1_6_p_0_2));
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 3) = ((MR_Box) (parse_tree__module_deps_graph__TypeInfo_for_T_31));
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 4) = ((MR_Box) (parse_tree__module_deps_graph__Stream_7));
#line 299 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_26_26, 5) = ((MR_Box) (parse_tree__module_deps_graph__GenNodeName_9));
#line 299 "module_deps_graph.m"
    }
#line 300 "module_deps_graph.m"
    {
#line 300 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_10[0]));
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 1) = ((MR_Box) (parse_tree__module_deps_graph__write_graph__ho1_6_p_0_3));
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 3) = ((MR_Box) (parse_tree__module_deps_graph__TypeInfo_for_T_31));
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 4) = ((MR_Box) (parse_tree__module_deps_graph__Stream_7));
#line 300 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_27_27, 5) = ((MR_Box) (parse_tree__module_deps_graph__GenNodeName_9));
#line 300 "module_deps_graph.m"
    }
#line 299 "module_deps_graph.m"
    {
#line 299 "module_deps_graph.m"
      mercury__digraph__traverse_5_p_0(parse_tree__module_deps_graph__TypeInfo_for_T_31, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_deps_graph__Graph_10, parse_tree__module_deps_graph__V_26_26, parse_tree__module_deps_graph__V_27_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 301 "module_deps_graph.m"
    {
#line 301 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, (MR_String) "}\n");
#line 301 "module_deps_graph.m"
      return;
    }
#line 295 "module_deps_graph.m"
  }
#line 292 "module_deps_graph.m"
}

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_impl_deps__187__1_4_p_0(
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_14,
#line 187 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_15,
#line 187 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_16)
#line 187 "module_deps_graph.m"
{
#line 187 "module_deps_graph.m"
  {
#line 187 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 187 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 187 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__DepKey_25;
#line 187 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26;

#line 217 "module_deps_graph.m"
    {
#line 217 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_17_17, ((MR_Box) (parse_tree__module_deps_graph__HeadVar__2_14)), &parse_tree__module_deps_graph__DepKey_25, parse_tree__module_deps_graph__HeadVar__3_15, &parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26);
    }
#line 218 "module_deps_graph.m"
    {
#line 218 "module_deps_graph.m"
      mercury__digraph__add_edge_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_17_17, parse_tree__module_deps_graph__ModuleKey_5, parse_tree__module_deps_graph__DepKey_25, parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26, parse_tree__module_deps_graph__HeadVar__4_16);
#line 218 "module_deps_graph.m"
      return;
    }
#line 187 "module_deps_graph.m"
  }
#line 187 "module_deps_graph.m"
}

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__171__1_4_p_0(
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_55,
#line 171 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_56,
#line 171 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_57)
#line 171 "module_deps_graph.m"
{
#line 171 "module_deps_graph.m"
  {
#line 171 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_58_58 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__DepKey_66;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_67;

#line 217 "module_deps_graph.m"
    {
#line 217 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_58_58, ((MR_Box) (parse_tree__module_deps_graph__HeadVar__2_55)), &parse_tree__module_deps_graph__DepKey_66, parse_tree__module_deps_graph__HeadVar__3_56, &parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_67);
    }
#line 218 "module_deps_graph.m"
    {
#line 218 "module_deps_graph.m"
      mercury__digraph__add_edge_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_58_58, parse_tree__module_deps_graph__ModuleKey_5, parse_tree__module_deps_graph__DepKey_66, parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_67, parse_tree__module_deps_graph__HeadVar__4_57);
#line 218 "module_deps_graph.m"
      return;
    }
#line 171 "module_deps_graph.m"
  }
#line 171 "module_deps_graph.m"
}

#line 225 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__get_dependencies_from_graph__225__1_4_p_0(
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsGraph_8,
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_15,
#line 225 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_16,
#line 225 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_17)
#line 225 "module_deps_graph.m"
{
#line 225 "module_deps_graph.m"
  {
#line 225 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 225 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Dep_20;
#line 227 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv0_Dep_20;

#line 227 "module_deps_graph.m"
    {
#line 227 "module_deps_graph.m"
      mercury__digraph__lookup_vertex_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__module_deps_graph__DepsGraph_8, parse_tree__module_deps_graph__HeadVar__2_15, &parse_tree__module_deps_graph__conv0_Dep_20);
    }
#line 227 "module_deps_graph.m"
    parse_tree__module_deps_graph__Dep_20 = ((MR_Word) parse_tree__module_deps_graph__conv0_Dep_20);
#line 226 "module_deps_graph.m"
    {
#line 226 "module_deps_graph.m"
      MR_Word base;
#line 226 "module_deps_graph.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "module_deps_graph.m"
      *parse_tree__module_deps_graph__HeadVar__4_17 = base;
#line 226 "module_deps_graph.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_deps_graph__Dep_20));
#line 226 "module_deps_graph.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_deps_graph__HeadVar__3_16));
#line 226 "module_deps_graph.m"
    }
#line 225 "module_deps_graph.m"
  }
#line 225 "module_deps_graph.m"
}

#line 38 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(
#line 38 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 38 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 38 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
#line 38 "module_deps_graph.m"
{
#line 38 "module_deps_graph.m"
  {
#line 38 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 38 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
#line 38 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

#line 38 "module_deps_graph.m"
    {
#line 38 "module_deps_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_3[0], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
#line 38 "module_deps_graph.m"
      return;
    }
#line 38 "module_deps_graph.m"
  }
#line 38 "module_deps_graph.m"
}

#line 38 "module_deps_graph.m"
MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(
#line 38 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 38 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
#line 38 "module_deps_graph.m"
{
#line 38 "module_deps_graph.m"
  {
#line 38 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 38 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
#line 38 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

#line 38 "module_deps_graph.m"
    {
#line 38 "module_deps_graph.m"
      return parse_tree__module_deps_graph__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__module_deps_graph__Cast_HeadVar1_3, (MR_Word) parse_tree__module_deps_graph__Cast_HeadVar2_4);
    }
#line 38 "module_deps_graph.m"
    return parse_tree__module_deps_graph__succeeded;
#line 38 "module_deps_graph.m"
  }
#line 38 "module_deps_graph.m"
}

#line 290 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph____Compare____gen_node_name_1_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_6,
#line 290 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
#line 290 "module_deps_graph.m"
{
#line 290 "module_deps_graph.m"
  {
#line 290 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 290 "module_deps_graph.m"
    {
#line 290 "module_deps_graph.m"
      parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__module_deps_graph__HeadVar__1_1, parse_tree__module_deps_graph__HeadVar__2_2, parse_tree__module_deps_graph__HeadVar__3_3);
#line 290 "module_deps_graph.m"
      return;
    }
#line 290 "module_deps_graph.m"
  }
#line 290 "module_deps_graph.m"
}

#line 290 "module_deps_graph.m"
static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____gen_node_name_1_0(
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_5,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 290 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
#line 290 "module_deps_graph.m"
{
#line 290 "module_deps_graph.m"
  {
#line 290 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;

#line 290 "module_deps_graph.m"
    {
#line 290 "module_deps_graph.m"
      return parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_95_100_101_112_115_95_103_114_97_112_104_95_95_103_101_110_95_110_111_100_101_95_110_97_109_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__module_deps_graph__HeadVar__1_1, parse_tree__module_deps_graph__HeadVar__2_2);
    }
#line 290 "module_deps_graph.m"
    return parse_tree__module_deps_graph__succeeded;
#line 290 "module_deps_graph.m"
  }
#line 290 "module_deps_graph.m"
}

#line 34 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
#line 34 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 34 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 34 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
#line 34 "module_deps_graph.m"
{
#line 34 "module_deps_graph.m"
  {
#line 34 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 34 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
#line 34 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

#line 34 "module_deps_graph.m"
    {
#line 34 "module_deps_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
#line 34 "module_deps_graph.m"
      return;
    }
#line 34 "module_deps_graph.m"
  }
#line 34 "module_deps_graph.m"
}

#line 34 "module_deps_graph.m"
MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
#line 34 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 34 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
#line 34 "module_deps_graph.m"
{
#line 34 "module_deps_graph.m"
  {
#line 34 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 34 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
#line 34 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

#line 34 "module_deps_graph.m"
    {
#line 34 "module_deps_graph.m"
      return parse_tree__module_deps_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_4)));
    }
#line 34 "module_deps_graph.m"
    return parse_tree__module_deps_graph__succeeded;
#line 34 "module_deps_graph.m"
  }
#line 34 "module_deps_graph.m"
}

#line 33 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0(
#line 33 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
#line 33 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
#line 33 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
#line 33 "module_deps_graph.m"
{
#line 33 "module_deps_graph.m"
  {
#line 33 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 33 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
#line 33 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

#line 33 "module_deps_graph.m"
    {
#line 33 "module_deps_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
#line 33 "module_deps_graph.m"
      return;
    }
#line 33 "module_deps_graph.m"
  }
#line 33 "module_deps_graph.m"
}

#line 33 "module_deps_graph.m"
MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0(
#line 33 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 33 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
#line 33 "module_deps_graph.m"
{
#line 33 "module_deps_graph.m"
  {
#line 33 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 33 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
#line 33 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

#line 33 "module_deps_graph.m"
    {
#line 33 "module_deps_graph.m"
      return parse_tree__module_deps_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_4)));
    }
#line 33 "module_deps_graph.m"
    return parse_tree__module_deps_graph__succeeded;
#line 33 "module_deps_graph.m"
  }
#line 33 "module_deps_graph.m"
}

#line 320 "module_deps_graph.m"
static MR_String MR_CALL 
parse_tree__module_deps_graph__sym_name_to_node_id_1_f_0(
#line 320 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Name_3)
#line 320 "module_deps_graph.m"
{
#line 322 "module_deps_graph.m"
  {
#line 322 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 322 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__HeadVar__2_2;
#line 322 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_5_5;
#line 322 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_6_6;

#line 323 "module_deps_graph.m"
    {
#line 323 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__module_deps_graph__Name_3);
    }
#line 323 "module_deps_graph.m"
    {
#line 323 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__module_deps_graph__V_6_6, (MR_String) "\"");
    }
#line 323 "module_deps_graph.m"
    {
#line 323 "module_deps_graph.m"
      return parse_tree__module_deps_graph__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__module_deps_graph__V_5_5);
    }
#line 322 "module_deps_graph.m"
    return parse_tree__module_deps_graph__HeadVar__2_2;
#line 322 "module_deps_graph.m"
  }
#line 320 "module_deps_graph.m"
}

#line 311 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_edge_6_p_0(
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_22,
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_7,
#line 311 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__GenNodeName_8,
#line 311 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__A_9,
#line 311 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__B_10)
#line 311 "module_deps_graph.m"
{
#line 314 "module_deps_graph.m"
  {
#line 314 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 314 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_14_14;
#line 314 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_18_18;
#line 315 "module_deps_graph.m"
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__GenNodeName_8, (MR_Integer) 1)));
#line 315 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_V_14_14;
#line 317 "module_deps_graph.m"
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_2)(MR_Box, MR_Box);
#line 317 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv3_V_18_18;

#line 315 "module_deps_graph.m"
    {
#line 315 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv1_V_14_14 = parse_tree__module_deps_graph__func_0(((MR_Box) parse_tree__module_deps_graph__GenNodeName_8), parse_tree__module_deps_graph__A_9);
    }
#line 315 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_14_14 = ((MR_String) parse_tree__module_deps_graph__conv1_V_14_14);
#line 315 "module_deps_graph.m"
    {
#line 315 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, parse_tree__module_deps_graph__V_14_14);
    }
#line 316 "module_deps_graph.m"
    {
#line 316 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, (MR_String) " -> ");
    }
#line 317 "module_deps_graph.m"
    parse_tree__module_deps_graph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__GenNodeName_8, (MR_Integer) 1)));
#line 317 "module_deps_graph.m"
    {
#line 317 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv3_V_18_18 = parse_tree__module_deps_graph__func_2(((MR_Box) parse_tree__module_deps_graph__GenNodeName_8), parse_tree__module_deps_graph__B_10);
    }
#line 317 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_18_18 = ((MR_String) parse_tree__module_deps_graph__conv3_V_18_18);
#line 317 "module_deps_graph.m"
    {
#line 317 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, parse_tree__module_deps_graph__V_18_18);
    }
#line 318 "module_deps_graph.m"
    {
#line 318 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_7, (MR_String) ";\n");
#line 318 "module_deps_graph.m"
      return;
    }
#line 314 "module_deps_graph.m"
  }
#line 311 "module_deps_graph.m"
}

#line 303 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__write_node_5_p_0(
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__TypeInfo_for_T_16,
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Stream_6,
#line 303 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__GenNodeName_7,
#line 303 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__Node_8)
#line 303 "module_deps_graph.m"
{
#line 306 "module_deps_graph.m"
  {
#line 306 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 306 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_12_12;
#line 308 "module_deps_graph.m"
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__GenNodeName_7, (MR_Integer) 1)));
#line 308 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_V_12_12;

#line 308 "module_deps_graph.m"
    {
#line 308 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv1_V_12_12 = parse_tree__module_deps_graph__func_0(((MR_Box) parse_tree__module_deps_graph__GenNodeName_7), parse_tree__module_deps_graph__Node_8);
    }
#line 308 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_12_12 = ((MR_String) parse_tree__module_deps_graph__conv1_V_12_12);
#line 308 "module_deps_graph.m"
    {
#line 308 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_6, parse_tree__module_deps_graph__V_12_12);
    }
#line 309 "module_deps_graph.m"
    {
#line 309 "module_deps_graph.m"
      mercury__io__write_string_4_p_0(parse_tree__module_deps_graph__Stream_6, (MR_String) ";\n");
#line 309 "module_deps_graph.m"
      return;
    }
#line 306 "module_deps_graph.m"
  }
#line 303 "module_deps_graph.m"
}

#line 269 "module_deps_graph.m"
static MR_Word MR_CALL 
parse_tree__module_deps_graph__filter_imports_graph_2_f_0(
#line 269 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 269 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsGraph_6)
#line 269 "module_deps_graph.m"
{
#line 272 "module_deps_graph.m"
  {
#line 272 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 272 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__HeadVar__3_3;
#line 272 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__A_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__B_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 279 "module_deps_graph.m"
    {
#line 279 "module_deps_graph.m"
      parse_tree__module_deps_graph__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(parse_tree__module_deps_graph__B_5);
    }
#line 280 "module_deps_graph.m"
    if (!(parse_tree__module_deps_graph__succeeded))
#line 281 "module_deps_graph.m"
      {
#line 281 "module_deps_graph.m"
        MR_String parse_tree__module_deps_graph__V_7_7;
#line 282 "module_deps_graph.m"
        MR_String parse_tree__module_deps_graph__V_8_8;

#line 281 "module_deps_graph.m"
        {
#line 281 "module_deps_graph.m"
          parse_tree__module_deps_graph__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__module_deps_graph__A_4, &parse_tree__module_deps_graph__V_7_7);
        }
#line 281 "module_deps_graph.m"
        if (parse_tree__module_deps_graph__succeeded)
#line 282 "module_deps_graph.m"
          {
#line 282 "module_deps_graph.m"
            parse_tree__module_deps_graph__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(parse_tree__module_deps_graph__B_5, &parse_tree__module_deps_graph__V_8_8);
          }
#line 281 "module_deps_graph.m"
      }
#line 272 "module_deps_graph.m"
    if (parse_tree__module_deps_graph__succeeded)
#line 285 "module_deps_graph.m"
      parse_tree__module_deps_graph__HeadVar__3_3 = parse_tree__module_deps_graph__DepsGraph_6;
#line 272 "module_deps_graph.m"
    else
#line 287 "module_deps_graph.m"
      {
#line 287 "module_deps_graph.m"
        {
#line 287 "module_deps_graph.m"
          parse_tree__module_deps_graph__HeadVar__3_3 = mercury__digraph__add_vertices_and_edge_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_deps_graph__A_4)), ((MR_Box) (parse_tree__module_deps_graph__B_5)), parse_tree__module_deps_graph__DepsGraph_6);
        }
#line 287 "module_deps_graph.m"
      }
#line 272 "module_deps_graph.m"
    return parse_tree__module_deps_graph__HeadVar__3_3;
#line 272 "module_deps_graph.m"
  }
#line 269 "module_deps_graph.m"
}

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_2(
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 187 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 187 "module_deps_graph.m"
{
#line 187 "module_deps_graph.m"
  {
#line 187 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 187 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv5_HeadVar__4_16;

#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_impl_deps__187__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv5_HeadVar__4_16);
    }
#line 187 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv5_HeadVar__4_16));
#line 187 "module_deps_graph.m"
  }
#line 187 "module_deps_graph.m"
}

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 171 "module_deps_graph.m"
{
#line 171 "module_deps_graph.m"
  {
#line 171 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv2_HeadVar__4_57;

#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__171__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv2_HeadVar__4_57);
    }
#line 171 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv2_HeadVar__4_57));
#line 171 "module_deps_graph.m"
  }
#line 171 "module_deps_graph.m"
}

#line 192 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Parent_8,
#line 192 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11,
#line 192 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12)
#line 192 "module_deps_graph.m"
{
#line 197 "module_deps_graph.m"
  {
#line 197 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_59_83;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeInfo_60_84;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ParentModuleImports_10;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ImplDeps_19;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_21_21;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__AddDep_34;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_35_35;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36;
#line 197 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_37_37;
#line 198 "module_deps_graph.m"
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__LookupModuleImports_6, (MR_Integer) 1)));
#line 198 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_ParentModuleImports_10;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_39_39;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_40_40;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_41_41;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_42_42;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_43_43;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_44_44;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_45_45;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_46_46;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_47_47;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_48_48;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_49_49;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_50_50;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_51_51;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_52_52;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_53_53;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_54_54;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_55_55;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_56_56;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_57_57;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_58_58;
#line 172 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_59_59;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_60_60;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_61_61;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_62_62;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_63_63;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_64_64;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_65_65;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_66_66;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_67_67;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_68_68;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_69_69;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_70_70;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_71_71;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_72_72;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_73_73;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_74_74;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_75_75;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_76_76;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_77_77;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_78_78;
#line 173 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20;
#line 187 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12;

#line 198 "module_deps_graph.m"
    {
#line 198 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv1_ParentModuleImports_10 = parse_tree__module_deps_graph__func_0(((MR_Box) parse_tree__module_deps_graph__LookupModuleImports_6), ((MR_Box) (parse_tree__module_deps_graph__Parent_8)));
    }
#line 198 "module_deps_graph.m"
    parse_tree__module_deps_graph__ParentModuleImports_10 = ((MR_Word) parse_tree__module_deps_graph__conv1_ParentModuleImports_10);
#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__AddDep_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[1]));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_7));
#line 171 "module_deps_graph.m"
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 0)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 1)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 2)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 3)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 4)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 5)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 6)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 7)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 8)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 9)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 10)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 11)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 12)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 13)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 14)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 15)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 16)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 17)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 18)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 19)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 20)));
#line 2580 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeCtorInfo_59_83 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2582 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeInfo_60_84 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2];
#line 172 "module_deps_graph.m"
    {
#line 172 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_83, parse_tree__module_deps_graph__TypeInfo_60_84, parse_tree__module_deps_graph__AddDep_34, parse_tree__module_deps_graph__V_35_35, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11)), &parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36);
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36 = ((MR_Word) parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36);
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 0)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 1)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 2)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 3)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 4)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 5)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 6)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 7)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 8)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 9)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 10)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 11)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 12)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 13)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 14)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 15)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 16)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 17)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 18)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 19)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 20)));
#line 173 "module_deps_graph.m"
    {
#line 173 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_83, parse_tree__module_deps_graph__TypeInfo_60_84, parse_tree__module_deps_graph__AddDep_34, parse_tree__module_deps_graph__V_37_37, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36)), &parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20);
    }
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20 = ((MR_Word) parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20);
#line 186 "module_deps_graph.m"
    {
#line 186 "module_deps_graph.m"
      parse_tree__module_imports__module_and_imports_get_impl_deps_2_p_0(parse_tree__module_deps_graph__ParentModuleImports_10, &parse_tree__module_deps_graph__ImplDeps_19);
    }
#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[1]));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0_2));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_7));
#line 187 "module_deps_graph.m"
    }
#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_21_21, parse_tree__module_deps_graph__ImplDeps_19, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20)), &parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12);
    }
#line 187 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12 = ((MR_Word) parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12);
#line 197 "module_deps_graph.m"
  }
#line 192 "module_deps_graph.m"
}

#line 187 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0_2(
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 187 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 187 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 187 "module_deps_graph.m"
{
#line 187 "module_deps_graph.m"
  {
#line 187 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 187 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv3_HeadVar__4_16;

#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_impl_deps__187__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv3_HeadVar__4_16);
    }
#line 187 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv3_HeadVar__4_16));
#line 187 "module_deps_graph.m"
  }
#line 187 "module_deps_graph.m"
}

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 171 "module_deps_graph.m"
{
#line 171 "module_deps_graph.m"
  {
#line 171 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__4_57;

#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__171__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_HeadVar__4_57);
    }
#line 171 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__4_57));
#line 171 "module_deps_graph.m"
  }
#line 171 "module_deps_graph.m"
}

#line 178 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_impl_deps_4_p_0(
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
#line 178 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
#line 178 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10)
#line 178 "module_deps_graph.m"
{
#line 181 "module_deps_graph.m"
  {
#line 181 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_59_74;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeInfo_60_75;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ImplDeps_8;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_12_12;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__AddDep_25;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_26_26;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27;
#line 181 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_28_28;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_30_30;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_31_31;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_32_32;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_33_33;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_34_34;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_35_35;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_36_36;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_37_37;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_38_38;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_39_39;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_40_40;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_41_41;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_42_42;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_43_43;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_44_44;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_45_45;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_46_46;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_47_47;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_48_48;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_49_49;
#line 172 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_50_50;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_51_51;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_52_52;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_53_53;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_54_54;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_55_55;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_56_56;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_57_57;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_58_58;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_59_59;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_60_60;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_61_61;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_62_62;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_63_63;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_64_64;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_65_65;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_66_66;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_67_67;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_68_68;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_69_69;
#line 173 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11;
#line 187 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10;

#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__AddDep_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[1]));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_impl_deps_4_p_0_1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
#line 171 "module_deps_graph.m"
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
#line 2913 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeCtorInfo_59_74 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2915 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeInfo_60_75 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2];
#line 172 "module_deps_graph.m"
    {
#line 172 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_74, parse_tree__module_deps_graph__TypeInfo_60_75, parse_tree__module_deps_graph__AddDep_25, parse_tree__module_deps_graph__V_26_26, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27);
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27);
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
#line 173 "module_deps_graph.m"
    {
#line 173 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_74, parse_tree__module_deps_graph__TypeInfo_60_75, parse_tree__module_deps_graph__AddDep_25, parse_tree__module_deps_graph__V_28_28, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27)), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11);
    }
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11 = ((MR_Word) parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11);
#line 186 "module_deps_graph.m"
    {
#line 186 "module_deps_graph.m"
      parse_tree__module_imports__module_and_imports_get_impl_deps_2_p_0(parse_tree__module_deps_graph__ModuleImports_6, &parse_tree__module_deps_graph__ImplDeps_8);
    }
#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[1]));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_impl_deps_4_p_0_2));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
#line 187 "module_deps_graph.m"
    }
#line 187 "module_deps_graph.m"
    {
#line 187 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_12_12, parse_tree__module_deps_graph__ImplDeps_8, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11)), &parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10);
    }
#line 187 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10 = ((MR_Word) parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10);
#line 181 "module_deps_graph.m"
  }
#line 178 "module_deps_graph.m"
}

#line 171 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 171 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 171 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 171 "module_deps_graph.m"
{
#line 171 "module_deps_graph.m"
  {
#line 171 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 171 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__4_57;

#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__171__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_HeadVar__4_57);
    }
#line 171 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__4_57));
#line 171 "module_deps_graph.m"
  }
#line 171 "module_deps_graph.m"
}

#line 167 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
#line 167 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
#line 167 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10)
#line 167 "module_deps_graph.m"
{
#line 170 "module_deps_graph.m"
  {
#line 170 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_59_59;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeInfo_60_60;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__AddDep_8;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_11_11;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12;
#line 170 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_13_13;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_15_15;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_16_16;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_17_17;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_18_18;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_19_19;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_20_20;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_21_21;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_22_22;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_23_23;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_24_24;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_25_25;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_26_26;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_27_27;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_28_28;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_29_29;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_30_30;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_31_31;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_32_32;
#line 172 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_33_33;
#line 172 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_34_34;
#line 172 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_35_35;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_36_36;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_37_37;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_38_38;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_39_39;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_40_40;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_41_41;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_42_42;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_43_43;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_44_44;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_45_45;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_46_46;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_47_47;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_48_48;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_49_49;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_50_50;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_51_51;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_52_52;
#line 173 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_53_53;
#line 173 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_54_54;
#line 173 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10;

#line 171 "module_deps_graph.m"
    {
#line 171 "module_deps_graph.m"
      parse_tree__module_deps_graph__AddDep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[1]));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_int_deps_4_p_0_1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
#line 171 "module_deps_graph.m"
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
#line 3206 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeCtorInfo_59_59 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 3208 "parse_tree.module_deps_graph.c"
    parse_tree__module_deps_graph__TypeInfo_60_60 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2];
#line 172 "module_deps_graph.m"
    {
#line 172 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_59, parse_tree__module_deps_graph__TypeInfo_60_60, parse_tree__module_deps_graph__AddDep_8, parse_tree__module_deps_graph__V_11_11, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12);
    }
#line 172 "module_deps_graph.m"
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12);
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
#line 173 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
#line 173 "module_deps_graph.m"
    {
#line 173 "module_deps_graph.m"
      mercury__list__foldl_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_59_59, parse_tree__module_deps_graph__TypeInfo_60_60, parse_tree__module_deps_graph__AddDep_8, parse_tree__module_deps_graph__V_13_13, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12)), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10);
    }
#line 173 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10 = ((MR_Word) parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10);
#line 170 "module_deps_graph.m"
  }
#line 167 "module_deps_graph.m"
}

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_2(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 208 "module_deps_graph.m"
{
#line 208 "module_deps_graph.m"
  {
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 208 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12;

#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_12));
#line 208 "module_deps_graph.m"
  }
#line 208 "module_deps_graph.m"
}

#line 208 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 208 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 208 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 208 "module_deps_graph.m"
{
#line 208 "module_deps_graph.m"
  {
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 208 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12;

#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_parent_impl_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12));
#line 208 "module_deps_graph.m"
  }
#line 208 "module_deps_graph.m"
}

#line 122 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleImports_7,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_8,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16,
#line 122 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17,
#line 122 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18)
#line 122 "module_deps_graph.m"
{
#line 127 "module_deps_graph.m"
  {
#line 127 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_65_65 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 2)));
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ParentDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 3)));
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__IntModuleKey_13;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ImplModuleKey_14;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_72_72;
#line 127 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_85_85;
#line 145 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 0)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 1)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 4)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 5)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 6)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 7)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 8)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 9)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 10)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 11)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 12)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 13)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 14)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 15)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 16)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 17)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 18)));
#line 145 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 19)));
#line 145 "module_deps_graph.m"
    MR_String parse_tree__module_deps_graph__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 20)));
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16;
#line 208 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18;

#line 147 "module_deps_graph.m"
    {
#line 147 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_65_65, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19);
    }
#line 148 "module_deps_graph.m"
    {
#line 148 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_int_deps_4_p_0(parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20);
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_72_72, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_6[0]));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_72_72, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_72_72, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_8));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_72_72, 4) = ((MR_Box) (parse_tree__module_deps_graph__IntModuleKey_13));
#line 208 "module_deps_graph.m"
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_72_72, parse_tree__module_deps_graph__ParentDeps_12, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
#line 160 "module_deps_graph.m"
    {
#line 160 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_65_65, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__ImplModuleKey_14, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_17, &parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22);
    }
#line 161 "module_deps_graph.m"
    {
#line 161 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_impl_deps_4_p_0(parse_tree__module_deps_graph__ImplModuleKey_14, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_22_22, &parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23);
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_85_85, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_6[0]));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_85_85, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_85_85, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_8));
#line 208 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_85_85, 4) = ((MR_Box) (parse_tree__module_deps_graph__ImplModuleKey_14));
#line 208 "module_deps_graph.m"
    }
#line 208 "module_deps_graph.m"
    {
#line 208 "module_deps_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2], parse_tree__module_deps_graph__V_85_85, parse_tree__module_deps_graph__ParentDeps_12, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_23_23)), &parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18);
    }
#line 208 "module_deps_graph.m"
    *parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_18 = ((MR_Word) parse_tree__module_deps_graph__conv3_STATE_VARIABLE_ImplDepsGraph_18);
#line 127 "module_deps_graph.m"
  }
#line 122 "module_deps_graph.m"
}

#line 114 "module_deps_graph.m"
static MR_Word MR_CALL 
parse_tree__module_deps_graph__lookup_module_and_imports_in_deps_map_2_f_0(
#line 114 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsMap_4,
#line 114 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleName_5)
#line 114 "module_deps_graph.m"
{
#line 117 "module_deps_graph.m"
  {
#line 117 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 117 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ModuleImports_6;
#line 117 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_8_8;
#line 118 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv0_V_8_8;
#line 118 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_7_7;

#line 118 "module_deps_graph.m"
    {
#line 118 "module_deps_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__module_deps_graph__DepsMap_4, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_5)), &parse_tree__module_deps_graph__conv0_V_8_8);
    }
#line 118 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_8_8 = ((MR_Word) parse_tree__module_deps_graph__conv0_V_8_8);
#line 118 "module_deps_graph.m"
    parse_tree__module_deps_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_8_8, (MR_Integer) 0)));
#line 118 "module_deps_graph.m"
    parse_tree__module_deps_graph__ModuleImports_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_8_8, (MR_Integer) 1)));
#line 117 "module_deps_graph.m"
    return parse_tree__module_deps_graph__ModuleImports_6;
#line 117 "module_deps_graph.m"
  }
#line 114 "module_deps_graph.m"
}

#line 249 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_2(
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 249 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
#line 249 "module_deps_graph.m"
{
#line 249 "module_deps_graph.m"
  {
#line 249 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__wrapper_arg_3;
#line 249 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 249 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv2_HeadVar__3_3;

#line 249 "module_deps_graph.m"
    {
#line 249 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv2_HeadVar__3_3 = parse_tree__module_deps_graph__filter_imports_graph_2_f_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
#line 249 "module_deps_graph.m"
    parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv2_HeadVar__3_3));
#line 249 "module_deps_graph.m"
    return parse_tree__module_deps_graph__wrapper_arg_3;
#line 249 "module_deps_graph.m"
  }
#line 249 "module_deps_graph.m"
}

#line 247 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0_1(
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 247 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
#line 247 "module_deps_graph.m"
{
#line 247 "module_deps_graph.m"
  {
#line 247 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__wrapper_arg_3;
#line 247 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 247 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__3_3;

#line 247 "module_deps_graph.m"
    {
#line 247 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv0_HeadVar__3_3 = parse_tree__module_deps_graph__filter_imports_graph_2_f_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
#line 247 "module_deps_graph.m"
    parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__3_3));
#line 247 "module_deps_graph.m"
    return parse_tree__module_deps_graph__wrapper_arg_3;
#line 247 "module_deps_graph.m"
  }
#line 247 "module_deps_graph.m"
}

#line 66 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0(
#line 66 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Globals_7,
#line 66 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__Module_8,
#line 66 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__IntDepsGraph_9,
#line 66 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ImplDepsGraph_10)
#line 66 "module_deps_graph.m"
{
#line 233 "module_deps_graph.m"
  {
#line 233 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 233 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ImportsGraph_12;
#line 233 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__Verbose_13;

#line 234 "module_deps_graph.m"
    {
#line 234 "module_deps_graph.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_deps_graph__Globals_7, (MR_Integer) 143, &parse_tree__module_deps_graph__ImportsGraph_12);
    }
#line 235 "module_deps_graph.m"
    {
#line 235 "module_deps_graph.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_deps_graph__Globals_7, (MR_Integer) 45, &parse_tree__module_deps_graph__Verbose_13);
    }
#line 265 "module_deps_graph.m"
    if ((parse_tree__module_deps_graph__ImportsGraph_12 == (MR_Integer) 0))
#line 266 "module_deps_graph.m"
      {
#line 266 "module_deps_graph.m"
      }
#line 265 "module_deps_graph.m"
    else
#line 237 "module_deps_graph.m"
      {
#line 237 "module_deps_graph.m"
        MR_String parse_tree__module_deps_graph__FileName_14;
#line 237 "module_deps_graph.m"
        MR_Word parse_tree__module_deps_graph__ImpResult_15;

#line 238 "module_deps_graph.m"
        {
#line 238 "module_deps_graph.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_deps_graph__Globals_7, parse_tree__module_deps_graph__Module_8, (MR_String) ".imports_graph", (MR_Integer) 0, &parse_tree__module_deps_graph__FileName_14);
        }
#line 240 "module_deps_graph.m"
        {
#line 240 "module_deps_graph.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_deps_graph__Verbose_13, (MR_String) "% Creating imports graph file \140");
        }
#line 241 "module_deps_graph.m"
        {
#line 241 "module_deps_graph.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_deps_graph__Verbose_13, parse_tree__module_deps_graph__FileName_14);
        }
#line 242 "module_deps_graph.m"
        {
#line 242 "module_deps_graph.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_deps_graph__Verbose_13, (MR_String) "\'...");
        }
#line 243 "module_deps_graph.m"
        {
#line 243 "module_deps_graph.m"
          mercury__io__open_output_4_p_0(parse_tree__module_deps_graph__FileName_14, &parse_tree__module_deps_graph__ImpResult_15);
        }
#line 256 "module_deps_graph.m"
        if (((MR_tag((MR_Word) parse_tree__module_deps_graph__ImpResult_15)) == (MR_mktag((MR_Integer) 1))))
#line 257 "module_deps_graph.m"
          {
#line 257 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__ImpResult_15, (MR_Integer) 0)));
#line 257 "module_deps_graph.m"
            MR_String parse_tree__module_deps_graph__IOErrorMessage_20;
#line 257 "module_deps_graph.m"
            MR_String parse_tree__module_deps_graph__ImpMessage_21;
#line 257 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_38_38;
#line 257 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_40_40;
#line 257 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_41_41;
#line 257 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_43_43;

#line 258 "module_deps_graph.m"
            {
#line 258 "module_deps_graph.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__module_deps_graph__Verbose_13, (MR_String) " failed.\n");
            }
#line 259 "module_deps_graph.m"
            {
#line 259 "module_deps_graph.m"
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__module_deps_graph__Verbose_13);
            }
#line 260 "module_deps_graph.m"
            {
#line 260 "module_deps_graph.m"
              mercury__io__error_message_2_p_0(parse_tree__module_deps_graph__IOError_19, &parse_tree__module_deps_graph__IOErrorMessage_20);
            }
#line 262 "module_deps_graph.m"
            {
#line 262 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_43_43, 0) = ((MR_Box) (parse_tree__module_deps_graph__IOErrorMessage_20));
#line 262 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "module_deps_graph.m"
            }
#line 262 "module_deps_graph.m"
            {
#line 262 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_41_41, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 262 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_41_41, 1) = ((MR_Box) (parse_tree__module_deps_graph__V_43_43));
#line 262 "module_deps_graph.m"
            }
#line 261 "module_deps_graph.m"
            {
#line 261 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_40_40, 0) = ((MR_Box) (parse_tree__module_deps_graph__FileName_14));
#line 261 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_40_40, 1) = ((MR_Box) (parse_tree__module_deps_graph__V_41_41));
#line 261 "module_deps_graph.m"
            }
#line 261 "module_deps_graph.m"
            {
#line 261 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_38_38, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 261 "module_deps_graph.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__V_38_38, 1) = ((MR_Box) (parse_tree__module_deps_graph__V_40_40));
#line 261 "module_deps_graph.m"
            }
#line 261 "module_deps_graph.m"
            {
#line 261 "module_deps_graph.m"
              mercury__string__append_list_2_p_0(parse_tree__module_deps_graph__V_38_38, &parse_tree__module_deps_graph__ImpMessage_21);
            }
#line 263 "module_deps_graph.m"
            {
#line 263 "module_deps_graph.m"
              libs__file_util__report_error_3_p_0(parse_tree__module_deps_graph__ImpMessage_21);
#line 263 "module_deps_graph.m"
              return;
            }
#line 257 "module_deps_graph.m"
          }
#line 256 "module_deps_graph.m"
        else
#line 245 "module_deps_graph.m"
          {
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__TypeInfo_57_57 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_2[1];
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__TypeInfo_58_58 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[2];
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__TypeCtorInfo_62_62 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__ImpStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ImpResult_15, (MR_Integer) 0)));
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__Deps0_17;
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__Deps_18;
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_47_47;
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_48_48;
#line 245 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_50_50;
#line 247 "module_deps_graph.m"
            MR_Box parse_tree__module_deps_graph__conv1_Deps0_17;
#line 249 "module_deps_graph.m"
            MR_Box parse_tree__module_deps_graph__conv3_Deps_18;

#line 248 "module_deps_graph.m"
            {
#line 248 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_47_47 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__module_deps_graph__TypeCtorInfo_62_62, parse_tree__module_deps_graph__IntDepsGraph_9);
            }
#line 248 "module_deps_graph.m"
            {
#line 248 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_48_48 = mercury__digraph__init_0_f_0(parse_tree__module_deps_graph__TypeCtorInfo_62_62);
            }
#line 247 "module_deps_graph.m"
            {
#line 247 "module_deps_graph.m"
              parse_tree__module_deps_graph__conv1_Deps0_17 = mercury__list__foldl_3_f_0(parse_tree__module_deps_graph__TypeInfo_57_57, parse_tree__module_deps_graph__TypeInfo_58_58, (MR_Word) &parse_tree__module_deps_graph_scalar_common_2[2], parse_tree__module_deps_graph__V_47_47, ((MR_Box) (parse_tree__module_deps_graph__V_48_48)));
            }
#line 247 "module_deps_graph.m"
            parse_tree__module_deps_graph__Deps0_17 = ((MR_Word) parse_tree__module_deps_graph__conv1_Deps0_17);
#line 250 "module_deps_graph.m"
            {
#line 250 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_50_50 = mercury__digraph__to_assoc_list_1_f_0(parse_tree__module_deps_graph__TypeCtorInfo_62_62, parse_tree__module_deps_graph__ImplDepsGraph_10);
            }
#line 249 "module_deps_graph.m"
            {
#line 249 "module_deps_graph.m"
              parse_tree__module_deps_graph__conv3_Deps_18 = mercury__list__foldl_3_f_0(parse_tree__module_deps_graph__TypeInfo_57_57, parse_tree__module_deps_graph__TypeInfo_58_58, (MR_Word) &parse_tree__module_deps_graph_scalar_common_2[3], parse_tree__module_deps_graph__V_50_50, ((MR_Box) (parse_tree__module_deps_graph__Deps0_17)));
            }
#line 249 "module_deps_graph.m"
            parse_tree__module_deps_graph__Deps_18 = ((MR_Word) parse_tree__module_deps_graph__conv3_Deps_18);
#line 252 "module_deps_graph.m"
            {
#line 252 "module_deps_graph.m"
              parse_tree__module_deps_graph__write_graph__ho1_6_p_0(parse_tree__module_deps_graph__ImpStream_16, (MR_String) "imports", parse_tree__module_deps_graph__Deps_18);
            }
#line 254 "module_deps_graph.m"
            {
#line 254 "module_deps_graph.m"
              mercury__io__close_output_3_p_0(parse_tree__module_deps_graph__ImpStream_16);
            }
#line 255 "module_deps_graph.m"
            {
#line 255 "module_deps_graph.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__module_deps_graph__Verbose_13, (MR_String) " done.\n");
#line 255 "module_deps_graph.m"
              return;
            }
#line 245 "module_deps_graph.m"
          }
#line 237 "module_deps_graph.m"
      }
#line 233 "module_deps_graph.m"
  }
#line 66 "module_deps_graph.m"
}

#line 225 "module_deps_graph.m"
static void MR_CALL 
parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0_1(
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
#line 225 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
#line 225 "module_deps_graph.m"
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
#line 225 "module_deps_graph.m"
{
#line 225 "module_deps_graph.m"
  {
#line 225 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 225 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__4_17;

#line 225 "module_deps_graph.m"
    {
#line 225 "module_deps_graph.m"
      parse_tree__module_deps_graph__IntroducedFrom__pred__get_dependencies_from_graph__225__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_HeadVar__4_17);
    }
#line 225 "module_deps_graph.m"
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__4_17));
#line 225 "module_deps_graph.m"
  }
#line 225 "module_deps_graph.m"
}

#line 61 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(
#line 61 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsGraph0_4,
#line 61 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleName_5,
#line 61 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__Deps_6)
#line 61 "module_deps_graph.m"
{
#line 222 "module_deps_graph.m"
  {
#line 222 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 222 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 222 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ModuleKey_7;
#line 222 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__DepsGraph_8;
#line 222 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__DepsKeysSet_9;
#line 222 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__V_13_13;
#line 225 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_Deps_6;

#line 223 "module_deps_graph.m"
    {
#line 223 "module_deps_graph.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_21_21, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_5)), &parse_tree__module_deps_graph__ModuleKey_7, parse_tree__module_deps_graph__DepsGraph0_4, &parse_tree__module_deps_graph__DepsGraph_8);
    }
#line 224 "module_deps_graph.m"
    {
#line 224 "module_deps_graph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__module_deps_graph__TypeCtorInfo_21_21, parse_tree__module_deps_graph__DepsGraph_8, parse_tree__module_deps_graph__ModuleKey_7, &parse_tree__module_deps_graph__DepsKeysSet_9);
    }
#line 225 "module_deps_graph.m"
    {
#line 225 "module_deps_graph.m"
      parse_tree__module_deps_graph__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_13_13, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_5[0]));
#line 225 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_13_13, 1) = ((MR_Box) (parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0_1));
#line 225 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "module_deps_graph.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_13_13, 3) = ((MR_Box) (parse_tree__module_deps_graph__DepsGraph_8));
#line 225 "module_deps_graph.m"
    }
#line 225 "module_deps_graph.m"
    {
#line 225 "module_deps_graph.m"
      mercury__sparse_bitset__foldl_4_p_1((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[1], (MR_Word) &parse_tree__module_deps_graph_scalar_common_2[0], parse_tree__module_deps_graph__V_13_13, parse_tree__module_deps_graph__DepsKeysSet_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_deps_graph__conv1_Deps_6);
    }
#line 225 "module_deps_graph.m"
    *parse_tree__module_deps_graph__Deps_6 = ((MR_Word) parse_tree__module_deps_graph__conv1_Deps_6);
#line 222 "module_deps_graph.m"
  }
#line 61 "module_deps_graph.m"
}

#line 107 "module_deps_graph.m"
static MR_Box MR_CALL 
parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0_1(
#line 107 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__closure_arg,
#line 107 "module_deps_graph.m"
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1)
#line 107 "module_deps_graph.m"
{
#line 107 "module_deps_graph.m"
  {
#line 107 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__wrapper_arg_2;
#line 107 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
#line 107 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__conv0_ModuleImports_6;

#line 107 "module_deps_graph.m"
    {
#line 107 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv0_ModuleImports_6 = parse_tree__module_deps_graph__lookup_module_and_imports_in_deps_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1));
    }
#line 107 "module_deps_graph.m"
    parse_tree__module_deps_graph__wrapper_arg_2 = ((MR_Box) (parse_tree__module_deps_graph__conv0_ModuleImports_6));
#line 107 "module_deps_graph.m"
    return parse_tree__module_deps_graph__wrapper_arg_2;
#line 107 "module_deps_graph.m"
  }
#line 107 "module_deps_graph.m"
}

#line 56 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0(
#line 56 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
#line 56 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__DepsMap_2,
#line 56 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_3,
#line 56 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_4,
#line 56 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_5,
#line 56 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_6)
#line 56 "module_deps_graph.m"
{
#line 99 "module_deps_graph.m"
  while (MR_TRUE)
#line 99 "module_deps_graph.m"
    {
#line 99 "module_deps_graph.m"
      /* tailcall optimized into a loop */
#line 99 "module_deps_graph.m"
      {
#line 99 "module_deps_graph.m"
        MR_bool parse_tree__module_deps_graph__succeeded;

#line 99 "module_deps_graph.m"
        if ((parse_tree__module_deps_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 99 "module_deps_graph.m"
          {
#line 99 "module_deps_graph.m"
            *parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_6 = parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_5;
#line 99 "module_deps_graph.m"
            *parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_4 = parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_3;
#line 99 "module_deps_graph.m"
          }
#line 99 "module_deps_graph.m"
        else
#line 101 "module_deps_graph.m"
          {
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__TypeCtorInfo_53_53;
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__Deps_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__DepsList_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_deps_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__ModuleImports_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__Deps_14, (MR_Integer) 1)));
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__ModuleErrors_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 17)));
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__FatalModuleErrors_22;
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_27_27;
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_29_29;
#line 101 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_30_30;
#line 102 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__Deps_14, (MR_Integer) 0)));
#line 103 "module_deps_graph.m"
            MR_String parse_tree__module_deps_graph__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 0)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 1)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 2)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 3)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 4)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 5)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 6)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 7)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 8)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 9)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 10)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 11)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 12)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 13)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 14)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 15)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 16)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 18)));
#line 103 "module_deps_graph.m"
            MR_Word parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 19)));
#line 103 "module_deps_graph.m"
            MR_String parse_tree__module_deps_graph__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_20, (MR_Integer) 20)));

#line 104 "module_deps_graph.m"
            {
#line 104 "module_deps_graph.m"
              parse_tree__module_deps_graph__V_27_27 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 4078 "parse_tree.module_deps_graph.c"
            parse_tree__module_deps_graph__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 104 "module_deps_graph.m"
            {
#line 104 "module_deps_graph.m"
              mercury__set__intersect_3_p_0(parse_tree__module_deps_graph__TypeCtorInfo_53_53, parse_tree__module_deps_graph__ModuleErrors_21, parse_tree__module_deps_graph__V_27_27, &parse_tree__module_deps_graph__FatalModuleErrors_22);
            }
#line 105 "module_deps_graph.m"
            {
#line 105 "module_deps_graph.m"
              parse_tree__module_deps_graph__succeeded = mercury__set__is_empty_1_p_0(parse_tree__module_deps_graph__TypeCtorInfo_53_53, parse_tree__module_deps_graph__FatalModuleErrors_22);
            }
#line 109 "module_deps_graph.m"
            if (parse_tree__module_deps_graph__succeeded)
#line 106 "module_deps_graph.m"
              {
#line 106 "module_deps_graph.m"
                MR_Word parse_tree__module_deps_graph__V_28_28;

#line 107 "module_deps_graph.m"
                {
#line 107 "module_deps_graph.m"
                  parse_tree__module_deps_graph__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 107 "module_deps_graph.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_28_28, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
#line 107 "module_deps_graph.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_28_28, 1) = ((MR_Box) (parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0_1));
#line 107 "module_deps_graph.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "module_deps_graph.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_28_28, 3) = ((MR_Box) (parse_tree__module_deps_graph__DepsMap_2));
#line 107 "module_deps_graph.m"
                }
#line 106 "module_deps_graph.m"
                {
#line 106 "module_deps_graph.m"
                  parse_tree__module_deps_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_109_111_100_117_108_101_95_97_110_100_95_105_109_112_111_114_116_115_95_116_111_95_100_101_112_115_95_103_114_97_112_104_95_95_104_111_50_95_95_91_49_93_95_48_6_p_0(parse_tree__module_deps_graph__ModuleImports_20, parse_tree__module_deps_graph__V_28_28, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_3, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_29_29, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_5, &parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_30_30);
                }
#line 106 "module_deps_graph.m"
              }
#line 109 "module_deps_graph.m"
            else
#line 110 "module_deps_graph.m"
              {
#line 110 "module_deps_graph.m"
                parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_30_30 = parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_5;
#line 110 "module_deps_graph.m"
                parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_29_29 = parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_3;
#line 110 "module_deps_graph.m"
              }
#line 112 "module_deps_graph.m"
            /* direct tailcall eliminated */
#line 112 "module_deps_graph.m"
            {
#line 112 "module_deps_graph.m"
              MR_Word parse_tree__module_deps_graph__HeadVar__1__tmp_copy_1 = parse_tree__module_deps_graph__DepsList_15;
#line 112 "module_deps_graph.m"
              MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0__tmp_copy_3 = parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_29_29;
#line 112 "module_deps_graph.m"
              MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0__tmp_copy_5 = parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_30_30;

#line 112 "module_deps_graph.m"
              parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_5 = parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0__tmp_copy_5;
#line 112 "module_deps_graph.m"
              parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_3 = parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0__tmp_copy_3;
#line 112 "module_deps_graph.m"
              parse_tree__module_deps_graph__HeadVar__1_1 = parse_tree__module_deps_graph__HeadVar__1__tmp_copy_1;
#line 112 "module_deps_graph.m"
            }
#line 112 "module_deps_graph.m"
            continue;
#line 101 "module_deps_graph.m"
          }
#line 99 "module_deps_graph.m"
      }
#line 99 "module_deps_graph.m"
      break;
#line 99 "module_deps_graph.m"
    }
#line 56 "module_deps_graph.m"
}

#line 48 "module_deps_graph.m"
void MR_CALL 
parse_tree__module_deps_graph__add_module_relations_6_p_0(
#line 48 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_7,
#line 48 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__ModuleName_8,
#line 48 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_12,
#line 48 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_13,
#line 48 "module_deps_graph.m"
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_14,
#line 48 "module_deps_graph.m"
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_15)
#line 48 "module_deps_graph.m"
{
#line 92 "module_deps_graph.m"
  {
#line 92 "module_deps_graph.m"
    MR_bool parse_tree__module_deps_graph__succeeded;
#line 92 "module_deps_graph.m"
    MR_Word parse_tree__module_deps_graph__ModuleImports_11;
#line 93 "module_deps_graph.m"
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__LookupModuleImports_7, (MR_Integer) 1)));
#line 93 "module_deps_graph.m"
    MR_Box parse_tree__module_deps_graph__conv1_ModuleImports_11;

#line 93 "module_deps_graph.m"
    {
#line 93 "module_deps_graph.m"
      parse_tree__module_deps_graph__conv1_ModuleImports_11 = parse_tree__module_deps_graph__func_0(((MR_Box) parse_tree__module_deps_graph__LookupModuleImports_7), ((MR_Box) (parse_tree__module_deps_graph__ModuleName_8)));
    }
#line 93 "module_deps_graph.m"
    parse_tree__module_deps_graph__ModuleImports_11 = ((MR_Word) parse_tree__module_deps_graph__conv1_ModuleImports_11);
#line 94 "module_deps_graph.m"
    {
#line 94 "module_deps_graph.m"
      parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(parse_tree__module_deps_graph__ModuleImports_11, parse_tree__module_deps_graph__LookupModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_12, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_13, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_0_14, parse_tree__module_deps_graph__STATE_VARIABLE_ImplDepsGraph_15);
#line 94 "module_deps_graph.m"
      return;
    }
#line 92 "module_deps_graph.m"
  }
#line 48 "module_deps_graph.m"
}

void mercury__parse_tree__module_deps_graph__init(void)
{
}

void mercury__parse_tree__module_deps_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_0);
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_key_0);
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_gen_node_name_1);
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_and_imports_0);
}

void mercury__parse_tree__module_deps_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_deps_graph. */
