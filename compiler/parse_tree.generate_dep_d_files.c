/*
** Automatically generated from `generate_dep_d_files.m'
** by the Mercury compiler,
** version rotd-2024-09-25
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
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
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.opt_deps_spec.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_deps_file.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_dep_d_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_dep_d_files__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_parent_or_ancestor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_parent_or_ancestor_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_parent_or_ancestor_0[2];

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_0;

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_1;

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_which_dot_dx_files_0[2];

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_which_dot_dx_files_0[2];

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_which_dot_dx_files_0[2];

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_5_p_0(
  MR_Word Stream_6,
  MR_Word A_7,
  MR_Word B_8);

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_4_p_0(
  MR_Word Stream_5,
  MR_Word Node_6);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__filter_imports_graph_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsGraph_6);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__wrap_module_name_1_f_0(
  MR_Word ModuleName_3);

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_burdened_module_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Mode_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_Word DepsMap0_16,
  MR_Word * DepsMap_17,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0(
  MR_Word ReadModules_5,
  MR_Word UnreadModules0_6,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
parse_tree__generate_dep_d_files__find_read_ancestors_of_unread_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Parents_0_3,
  MR_Word * STATE_VARIABLE_Parents_4,
  MR_Word STATE_VARIABLE_Ancestors_0_5,
  MR_Word * STATE_VARIABLE_Ancestors_6,
  MR_Word STATE_VARIABLE_BadUnreads_0_7,
  MR_Word * STATE_VARIABLE_BadUnreads_8);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__find_first_read_ancestor_5_p_0(
  MR_Word ReadModules_6,
  MR_Word Module_7,
  MR_Word CurPoA_8,
  MR_Word * AncestorModule_9,
  MR_Word * PoA_10);

static void MR_CALL 
parse_tree__generate_dep_d_files__compute_deps_for_d_files_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word DepsMap_19,
  MR_Word * IntDepsGraph_20,
  MR_Word * ImpDepsGraph_21,
  MR_Word * IndirectDepsGraph_22,
  MR_Word * IndirectOptDepsGraph_23,
  MR_Word * TransOptDepsGraph_24,
  MR_Word * TransOptOrder_25,
  MR_Word * BurdenedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntDepsGraph_11,
  MR_Word ImpDepsGraph_12);

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0(
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_4,
  MR_Word * STATE_VARIABLE_IntDepsGraph_5,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_6,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_7);

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_dv_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word Baggage_12);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[8][3];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[37][2];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][5];

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[2][4];




static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_2[37][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[3])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specifically"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[5])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the current directory,"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which the compiler could not find"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is usually done using a command such as"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You need to rebuild it."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is either missing or out-of-date."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which contains the module name to source file name map,"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This usually indicates that the Mercury.modules file,"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[31])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which the compiler *did* find in the current directory."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[34])))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 9U) },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_4[2][6] = {
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
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_maybe_dummy_burdened_module_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__generate_dep_d_files__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_dep_d_files_scalar_common_8[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_dep_file_for_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_dep_d_files__generate_d_file_for_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
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
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_0 = {
  (MR_String) "parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_1 = {
  (MR_String) "ancestor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_0,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_1,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_parent_or_ancestor_0_0
};

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_parent_or_ancestor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_parent_or_ancestor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "parent_or_ancestor",
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_parent_or_ancestor_0 },
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_parent_or_ancestor_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_parent_or_ancestor_0,

};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_0 = {
  (MR_String) "output_module_dot_d_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_1 = {
  (MR_String) "output_all_program_dot_dx_files",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_which_dot_dx_files_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_0,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_which_dot_dx_files_0[2] = {
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_1,
  &parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_functor_desc_which_dot_dx_files_0_0
};

static const MR_Integer parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_which_dot_dx_files_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_which_dot_dx_files_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0_10001)),
  ((MR_Box) (parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0_10001)),
  (MR_String) "parse_tree.generate_dep_d_files",
  (MR_String) "which_dot_dx_files",
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_name_ordered_which_dot_dx_files_0 },
  { parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__enum_ordinal_ordered_which_dot_dx_files_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__functor_number_map_which_dot_dx_files_0,

};

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0(
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
parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0(
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
parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_edge_5_p_0(
  MR_Word Stream_6,
  MR_Word A_7,
  MR_Word B_8)
{
  MR_String Var_16;
  MR_String Var_19;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Var_32;
  MR_String Var_33;

  Var_28 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(A_7, (MR_String) "__");
  Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\"");
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_27);
  Var_33 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(B_8, (MR_String) "__");
  Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) "\"");
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_32);
  mercury__io__write_string_4_p_0(Stream_6, Var_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
  mercury__io__write_string_4_p_0(Stream_6, Var_19);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ";\n");
}

static void MR_CALL 
parse_tree__generate_dep_d_files__write_node_4_p_0(
  MR_Word Stream_5,
  MR_Word Node_6)
{
  MR_String Var_14;
  MR_String Var_19;
  MR_String Var_20;

  Var_20 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(Node_6, (MR_String) "__");
  Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) "\"");
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ";\n");
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
parse_tree__generate_dep_d_files__wrap_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__generate_dep_d_files__lookup_burdened_module_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word BurdenedModule_9;
  MR_Word Var_10;
  MR_Box conv0_Var_10;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Var_10);
  Var_10 = ((MR_Word) (conv0_Var_10));
  BurdenedModule_9 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  {
    ModuleDepInfo_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModuleDepInfo_6, 0) = ((MR_Box) (BurdenedModule_9));
  }
  return ModuleDepInfo_6;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__deps_map__insert_into_deps_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word * DepsMap_11,
  MR_Word * Specs_12)
{
  MR_Word ModuleName_14;
  MR_Word DepsMap0_15;
  MR_Word InitialSpecs_16;
  MR_Word LaterSpecs_17;
  MR_String FileNameDotM_24;
  MR_Word HaveReadModuleSrc_25;
  MR_Word BurdenedModules_33;
  MR_Word DepsMap0_35;
  MR_Box conv1_DepsMap0_15;

  FileNameDotM_24 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) ".m");
  parse_tree__read_modules__read_module_src_from_file_10_p_0(ProgressStream_8, Globals_9, FileName_10, FileNameDotM_24, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[0]), &HaveReadModuleSrc_25);
  if (((MR_tag((MR_Word) HaveReadModuleSrc_25)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeSrc_27 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_25, (MR_Integer) 1))));
    MR_Word Source_28 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_25, (MR_Integer) 2))));
    MR_Word MaybeTimestamp_29 = ((MR_Word) ((MR_hl_field(1, Source_28, (MR_Integer) 0))));
    MR_Word ReadModuleErrors_30 = ((MR_Word) ((MR_hl_field(1, Source_28, (MR_Integer) 1))));

    ModuleName_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_27, (MR_Integer) 0))));
    parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_9, FileNameDotM_24, ReadModuleErrors_30, MaybeTimestamp_29, ParseTreeSrc_27, &InitialSpecs_16, &BurdenedModules_33);
  }
  else
  {
    MR_Word ReadModuleErrors_43 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_25, (MR_Integer) 1))));

    parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_10, FileNameDotM_24, &ModuleName_14);
    InitialSpecs_16 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_43);
    BurdenedModules_33 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_35);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_8[1]), BurdenedModules_33, ((MR_Box) (DepsMap0_35)), &conv1_DepsMap0_15);
  DepsMap0_15 = ((MR_Word) (conv1_DepsMap0_15));
  parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(ProgressStream_8, Globals_9, (MR_Integer) 0, (MR_Integer) 1, ModuleName_14, DepsMap0_15, DepsMap_11, &LaterSpecs_17);
  *Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InitialSpecs_16, LaterSpecs_17);
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_d_file_for_module_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * DepsMap_11,
  MR_Word * Specs_12)
{
  MR_Word DepsMap0_14;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_14);
  parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(ProgressStream_8, Globals_9, (MR_Integer) 0, (MR_Integer) 1, ModuleName_10, DepsMap0_14, DepsMap_11, Specs_12);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__deps_map__insert_into_deps_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word * DepsMap_11,
  MR_Word * Specs_12)
{
  MR_Word ModuleName_14;
  MR_Word DepsMap0_15;
  MR_Word InitialSpecs_16;
  MR_Word LaterSpecs_17;
  MR_String FileNameDotM_24;
  MR_Word HaveReadModuleSrc_25;
  MR_Word BurdenedModules_33;
  MR_Word DepsMap0_35;
  MR_Box conv1_DepsMap0_15;

  FileNameDotM_24 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) ".m");
  parse_tree__read_modules__read_module_src_from_file_10_p_0(ProgressStream_8, Globals_9, FileName_10, FileNameDotM_24, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_3[0]), &HaveReadModuleSrc_25);
  if (((MR_tag((MR_Word) HaveReadModuleSrc_25)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeSrc_27 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_25, (MR_Integer) 1))));
    MR_Word Source_28 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_25, (MR_Integer) 2))));
    MR_Word MaybeTimestamp_29 = ((MR_Word) ((MR_hl_field(1, Source_28, (MR_Integer) 0))));
    MR_Word ReadModuleErrors_30 = ((MR_Word) ((MR_hl_field(1, Source_28, (MR_Integer) 1))));

    ModuleName_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_27, (MR_Integer) 0))));
    parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_9, FileNameDotM_24, ReadModuleErrors_30, MaybeTimestamp_29, ParseTreeSrc_27, &InitialSpecs_16, &BurdenedModules_33);
  }
  else
  {
    MR_Word ReadModuleErrors_43 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_25, (MR_Integer) 1))));

    parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_10, FileNameDotM_24, &ModuleName_14);
    InitialSpecs_16 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_43);
    BurdenedModules_33 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_35);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_8[0]), BurdenedModules_33, ((MR_Box) (DepsMap0_35)), &conv1_DepsMap0_15);
  DepsMap0_15 = ((MR_Word) (conv1_DepsMap0_15));
  parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(ProgressStream_8, Globals_9, (MR_Integer) 1, (MR_Integer) 0, ModuleName_14, DepsMap0_15, DepsMap_11, &LaterSpecs_17);
  *Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InitialSpecs_16, LaterSpecs_17);
}

void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_file_for_module_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * DepsMap_11,
  MR_Word * Specs_12)
{
  MR_Word DepsMap0_14;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_14);
  parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(ProgressStream_8, Globals_9, (MR_Integer) 1, (MR_Integer) 0, ModuleName_10, DepsMap0_14, DepsMap_11, Specs_12);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_generate_dot_dx_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Mode_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_Word DepsMap0_16,
  MR_Word * DepsMap_17,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word ReadModules_20;
  MR_Word UnreadModules_21;
  MR_Word ModuleDep_27;
  MR_Word BurdenedModule_30;
  MR_Word Baggage_31;
  MR_Word Errors_33;
  MR_Word FatalErrors_34;
  MR_Word STATE_VARIABLE_Specs_51_51;
  MR_Word STATE_VARIABLE_Specs_53_53;
  MR_Box conv0_ModuleDep_27;

  parse_tree__deps_map__generate_deps_map_12_p_0(ProgressStream_11, Globals_12, Search_14, ModuleName_15, &ReadModules_20, &UnreadModules_21, DepsMap0_16, DepsMap_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_51_51);
  parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0(ReadModules_20, UnreadModules_21, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_53_53);
  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *DepsMap_17, ((MR_Box) (ModuleName_15)), &conv0_ModuleDep_27);
  ModuleDep_27 = ((MR_Word) (conv0_ModuleDep_27));
  BurdenedModule_30 = ((MR_Word) ((MR_hl_field(0, ModuleDep_27, (MR_Integer) 1))));
  Baggage_31 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_30, (MR_Integer) 0))));
  Errors_33 = ((MR_Word) ((MR_hl_field(0, Baggage_31, (MR_Integer) 7))));
  FatalErrors_34 = ((MR_Word) ((MR_hl_field(0, Errors_33, (MR_Integer) 0))));
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_34);
  if (succeeded)
  {
    MR_Word FatalErrorSpecs_35 = ((MR_Word) ((MR_hl_field(0, Errors_33, (MR_Integer) 1))));

    if ((FatalErrorSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String UnexpectedMsg_36;
      MR_String Var_72;
      MR_String Var_112;

      Var_72 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[0]), ((MR_Box) (FatalErrors_34)));
      Var_112 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) "\n");
      UnexpectedMsg_36 = mercury__string__f_43_43_2_f_0((MR_String) "FatalErrorSpecs = [], with FatalErrors = ", Var_112);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_dep_d_files.maybe_generate_dot_dx_files\'/10", UnexpectedMsg_36);
        return;
      }
    }
    else
      *STATE_VARIABLE_Specs_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs_35, STATE_VARIABLE_Specs_53_53);
  }
  else
  {
    MR_Word IntDepsGraph_39;
    MR_Word ImpDepsGraph_40;
    MR_Word IndirectDepsGraph_41;
    MR_Word IndirectOptDepsGraph_42;
    MR_Word TransOptDepsGraph_43;
    MR_Word TransOptOrder_44;
    MR_Word BurdenedModules_45;
    MR_Word DFilesToWrite_46;

    switch (Mode_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__generate_dep_d_files__generate_dep_dv_files_7_p_0(ProgressStream_11, Globals_12, ModuleName_15, *DepsMap_17, Baggage_31);
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    parse_tree__generate_dep_d_files__compute_deps_for_d_files_15_p_0(ProgressStream_11, Globals_12, ModuleName_15, *DepsMap_17, &IntDepsGraph_39, &ImpDepsGraph_40, &IndirectDepsGraph_41, &IndirectOptDepsGraph_42, &TransOptDepsGraph_43, &TransOptOrder_44, &BurdenedModules_45, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_47);
    switch (Mode_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        DFilesToWrite_46 = BurdenedModules_45;
        break;
      case (MR_Integer) 0:
        {
          DFilesToWrite_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DFilesToWrite_46, 0) = ((MR_Box) (BurdenedModule_30));
          MR_hl_field(1, DFilesToWrite_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
    }
    parse_tree__write_deps_file__generate_dependencies_write_d_files_11_p_0(ProgressStream_11, Globals_12, DFilesToWrite_46, IntDepsGraph_39, ImpDepsGraph_40, IndirectDepsGraph_41, IndirectOptDepsGraph_42, TransOptDepsGraph_43, TransOptOrder_44);
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = parse_tree__generate_dep_d_files__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__generate_dep_d_files__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__generate_dep_d_files__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__warn_about_any_unread_modules_with_read_ancestors_4_p_0(
  MR_Word ReadModules_5,
  MR_Word UnreadModules0_6,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_Word UnreadModules_8;
  MR_Word UnreadModuleList_9;
  MR_Word Parents_10;
  MR_Word Ancestors_11;
  MR_Word BadUnreads_12;
  MR_Word BadUnreadList_13;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;

  mercury__set_tree234__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnreadModules0_6, ReadModules_5, &UnreadModules_8);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnreadModules_8, &UnreadModuleList_9);
  Var_45 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_47 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__generate_dep_d_files__find_read_ancestors_of_unread_modules_8_p_0(ReadModules_5, UnreadModuleList_9, Var_45, &Parents_10, Var_46, &Ancestors_11, Var_47, &BadUnreads_12);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadUnreads_12, &BadUnreadList_13);
  if ((BadUnreadList_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
  else
  {
    MR_Word BadUnreadModulePieces_16;
    MR_Word BadUnreadModuleListPieces_17;
    MR_String TheModules_18;
    MR_Word BadUnreadPieces_19;
    MR_Word ParentList_20;
    MR_Word AncestorList_21;
    MR_Word ParentModulePieces_22;
    MR_Word AncestorModulePieces_23;
    MR_Word ParentPieces_24;
    MR_Word AncestorPieces_31;
    MR_Word Pieces_41;
    MR_Word Spec_42;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_60;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Box conv1_TheModules_18;

    BadUnreadModulePieces_16 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[5]), BadUnreadList_13);
    mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 8U)), BadUnreadModulePieces_16, &BadUnreadModuleListPieces_17);
    conv1_TheModules_18 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadUnreadList_13, ((MR_Box) ((MR_String) "the module")), ((MR_Box) ((MR_String) "the modules")));
    TheModules_18 = ((MR_String) (conv1_TheModules_18));
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (TheModules_18));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[5])));
    }
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadUnreadModuleListPieces_17, (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[7])));
    BadUnreadPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_60);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parents_10, &ParentList_20);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_11, &AncestorList_21);
    ParentModulePieces_22 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[6]), ParentList_20);
    AncestorModulePieces_23 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[7]), AncestorList_21);
    if ((ParentModulePieces_22 == (MR_Word) ((MR_Unsigned) 0U)))
      ParentPieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TailParentModulePieces_26 = ((MR_Word) ((MR_hl_field(1, ParentModulePieces_22, (MR_Integer) 1))));
      MR_String ParentWords_27;
      MR_Word ParentModuleListPieces_30;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_81;

      if ((TailParentModulePieces_26 == (MR_Word) ((MR_Unsigned) 0U)))
        ParentWords_27 = (MR_String) "a parent module,";
      else
        ParentWords_27 = (MR_String) "parent modules,";
      mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 8U)), ParentModulePieces_22, &ParentModuleListPieces_30);
      {
        Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_71, 1) = ((MR_Box) (ParentWords_27));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[9])));
      }
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ParentModuleListPieces_30, (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[7])));
      ParentPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_81);
    }
    if ((AncestorModulePieces_23 == (MR_Word) ((MR_Unsigned) 0U)))
      AncestorPieces_31 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TailAncestorModulePieces_33 = ((MR_Word) ((MR_hl_field(1, AncestorModulePieces_23, (MR_Integer) 1))));
      MR_String AncestorWords_34;
      MR_Word AncestorModuleListPieces_37;
      MR_Word AncestorPieces0_38;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_100;

      if ((TailAncestorModulePieces_33 == (MR_Word) ((MR_Unsigned) 0U)))
        AncestorWords_34 = (MR_String) "an ancestor module,";
      else
        AncestorWords_34 = (MR_String) "ancestor modules,";
      mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 8U)), AncestorModulePieces_23, &AncestorModuleListPieces_37);
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) (AncestorWords_34));
      }
      {
        Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[9])));
      }
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AncestorModuleListPieces_37, (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[7])));
      AncestorPieces0_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_100);
      if ((ParentModulePieces_22 == (MR_Word) ((MR_Unsigned) 0U)))
        AncestorPieces_31 = AncestorPieces0_38;
      else
        {
          AncestorPieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AncestorPieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[10])));
          MR_hl_field(1, AncestorPieces_31, 1) = ((MR_Box) (AncestorPieces0_38));
        }
    }
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AncestorPieces_31, (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[36])));
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ParentPieces_24, Var_126);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[18])), Var_125);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadUnreadPieces_19, Var_114);
    Pieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_2[12])), Var_113);
    {
      Spec_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.generate_dep_d_files.warn_about_any_unread_modules_with_read_ancestors\'/4"));
      MR_hl_field(1, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_42, 3) = ((MR_Box) (Pieces_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_44 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_42));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__find_read_ancestors_of_unread_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Parents_0_3,
  MR_Word * STATE_VARIABLE_Parents_4,
  MR_Word STATE_VARIABLE_Ancestors_0_5,
  MR_Word * STATE_VARIABLE_Ancestors_6,
  MR_Word STATE_VARIABLE_BadUnreads_0_7,
  MR_Word * STATE_VARIABLE_BadUnreads_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BadUnreads_8 = STATE_VARIABLE_BadUnreads_0_7;
      *STATE_VARIABLE_Ancestors_6 = STATE_VARIABLE_Ancestors_0_5;
      *STATE_VARIABLE_Parents_4 = STATE_VARIABLE_Parents_0_3;
    }
    else
    {
      MR_Word UnreadModule_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word UnreadModules_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BadUnreads_37_37;
      MR_Word STATE_VARIABLE_Parents_38_38;
      MR_Word STATE_VARIABLE_Ancestors_39_39;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Parents_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Ancestors_0_5;
      MR_Word next_value_of_STATE_VARIABLE_BadUnreads_0_7;

      if (((MR_tag((MR_Word) UnreadModule_20)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_26 = ((MR_Word) ((MR_hl_field(1, UnreadModule_20, (MR_Integer) 0))));
        MR_Word AncestorModule_28;
        MR_Word PoA_29;

        succeeded = parse_tree__generate_dep_d_files__find_first_read_ancestor_5_p_0(HeadVar__1_1, ParentModule_26, (MR_Integer) 0, &AncestorModule_28, &PoA_29);
        if (succeeded)
        {
          mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (UnreadModule_20)), STATE_VARIABLE_BadUnreads_0_7, &STATE_VARIABLE_BadUnreads_37_37);
          switch (PoA_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AncestorModule_28)), STATE_VARIABLE_Ancestors_0_5, &STATE_VARIABLE_Ancestors_39_39);
                STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AncestorModule_28)), STATE_VARIABLE_Parents_0_3, &STATE_VARIABLE_Parents_38_38);
                STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
              }
              break;
          }
        }
        else
        {
          STATE_VARIABLE_BadUnreads_37_37 = STATE_VARIABLE_BadUnreads_0_7;
          STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
          STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
        }
      }
      else
      {
        STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
        STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
        STATE_VARIABLE_BadUnreads_37_37 = STATE_VARIABLE_BadUnreads_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = UnreadModules_21;
      next_value_of_STATE_VARIABLE_Parents_0_3 = STATE_VARIABLE_Parents_38_38;
      next_value_of_STATE_VARIABLE_Ancestors_0_5 = STATE_VARIABLE_Ancestors_39_39;
      next_value_of_STATE_VARIABLE_BadUnreads_0_7 = STATE_VARIABLE_BadUnreads_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Parents_0_3 = next_value_of_STATE_VARIABLE_Parents_0_3;
      STATE_VARIABLE_Ancestors_0_5 = next_value_of_STATE_VARIABLE_Ancestors_0_5;
      STATE_VARIABLE_BadUnreads_0_7 = next_value_of_STATE_VARIABLE_BadUnreads_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files__find_first_read_ancestor_5_p_0(
  MR_Word ReadModules_6,
  MR_Word Module_7,
  MR_Word CurPoA_8,
  MR_Word * AncestorModule_9,
  MR_Word * PoA_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReadModules_6, ((MR_Box) (Module_7)));
    if (succeeded)
    {
      *AncestorModule_9 = Module_7;
      *PoA_10 = CurPoA_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ParentModule_11;
      MR_Word Var_13;
      MR_Word next_value_of_Module_7;
      MR_Word next_value_of_CurPoA_8;

      succeeded = ((MR_tag((MR_Word) Module_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        ParentModule_11 = ((MR_Word) ((MR_hl_field(1, Module_7, (MR_Integer) 0))));
        Var_13 = (MR_Integer) 1;
        // direct tailcall eliminated
        ;
        next_value_of_Module_7 = ParentModule_11;
        next_value_of_CurPoA_8 = Var_13;
        Module_7 = next_value_of_Module_7;
        CurPoA_8 = next_value_of_CurPoA_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__compute_deps_for_d_files_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word DepsMap_19,
  MR_Word * IntDepsGraph_20,
  MR_Word * ImpDepsGraph_21,
  MR_Word * IndirectDepsGraph_22,
  MR_Word * IndirectOptDepsGraph_23,
  MR_Word * TransOptDepsGraph_24,
  MR_Word * TransOptOrder_25,
  MR_Word * BurdenedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_Word IntDepsGraph0_29;
  MR_Word ImpDepsGraph0_30;
  MR_Word DepsList_31;
  MR_Word TransOptDepsOrdering_35;
  MR_Word TransImpDepsGraph_36;
  MR_Word IntermodDirs_37;

  mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntDepsGraph0_29);
  mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpDepsGraph0_30);
  mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_19, &DepsList_31);
  parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0(DepsMap_19, DepsList_31, BurdenedModules_26, IntDepsGraph0_29, IntDepsGraph_20, ImpDepsGraph0_30, ImpDepsGraph_21);
  parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0(ProgressStream_16, Globals_17, ModuleName_18, *IntDepsGraph_20, *ImpDepsGraph_21);
  parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0(ProgressStream_16, Globals_17, ModuleName_18, *ImpDepsGraph_21, IndirectOptDepsGraph_23, TransOptDepsGraph_24, &TransOptDepsOrdering_35, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
  mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *ImpDepsGraph_21, &TransImpDepsGraph_36);
  mercury__digraph__compose_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *ImpDepsGraph_21, TransImpDepsGraph_36, IndirectDepsGraph_22);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_17, (MR_Integer) 711, &IntermodDirs_37);
  parse_tree__write_deps_file__get_ext_opt_deps_8_p_0(Globals_17, (MR_Integer) 1, IntermodDirs_37, (MR_Word) (MR_mkword(3, &parse_tree__generate_dep_d_files_scalar_common_2[2])), TransOptDepsOrdering_35, TransOptOrder_25);
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__generate_dep_d_files__write_edge_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__generate_dep_d_files__write_node_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_2(
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
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_1(
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
parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntDepsGraph_11,
  MR_Word ImpDepsGraph_12)
{
  MR_Word ImportsGraph_14;
  MR_Word Verbose_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 210, &ImportsGraph_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 76, &Verbose_15);
  switch (ImportsGraph_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ImportsGraphFileName_16;
        MR_Word ImportsGraphOpenResult_17;

        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 5, ModuleName_10, &ImportsGraphFileName_16);
        switch (Verbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Creating imports graph file \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, ImportsGraphFileName_16);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'...");
            }
            break;
        }
        mercury__io__open_output_4_p_0(ImportsGraphFileName_16, &ImportsGraphOpenResult_17);
        if (((MR_tag((MR_Word) ImportsGraphOpenResult_17)) == (MR_Integer) 1))
        {
          MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(1, ImportsGraphOpenResult_17, (MR_Integer) 0))));
          MR_String IOErrorMessage_22;
          MR_String ImpMessage_23;
          MR_String Var_68;
          MR_String Var_70;
          MR_String Var_71;

          switch (Verbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " failed.\n");
                mercury__io__flush_output_3_p_0(ProgressStream_8);
              }
              break;
          }
          mercury__io__error_message_2_p_0(IOError_21, &IOErrorMessage_22);
          Var_68 = mercury__string__f_43_43_2_f_0(IOErrorMessage_22, (MR_String) "\n");
          Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_68);
          Var_71 = mercury__string__f_43_43_2_f_0(ImportsGraphFileName_16, Var_70);
          ImpMessage_23 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_71);
          libs__file_util__report_error_4_p_0(ProgressStream_8, ImpMessage_23);
        }
        else
        {
          MR_Word ImportsGraphStream_18 = ((MR_Word) ((MR_hl_field(0, ImportsGraphOpenResult_17, (MR_Integer) 0))));
          MR_Word Deps0_19;
          MR_Word Deps_20;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_39;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Box conv1_Deps0_19;
          MR_Box conv3_Deps_20;
          MR_Box conv4_STATE_VARIABLE_IO_26_87;

          Var_36 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_11);
          Var_37 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          conv1_Deps0_19 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[3]), Var_36, ((MR_Box) (Var_37)));
          Deps0_19 = ((MR_Word) (conv1_Deps0_19));
          Var_39 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_12);
          conv3_Deps_20 = mercury__list__foldl_3_f_0((MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[2]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_2[1]), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[4]), Var_39, ((MR_Box) (Deps0_19)));
          Deps_20 = ((MR_Word) (conv3_Deps_20));
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "digraph imports {\n");
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "label=\"imports\";\n");
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "center=true;\n");
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_85, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_5[0]));
            MR_hl_field(0, Var_85, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_3));
            MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_85, 3) = ((MR_Box) (ImportsGraphStream_18));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_6[0]));
            MR_hl_field(0, Var_86, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__maybe_output_imports_graph_7_p_0_4));
            MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_86, 3) = ((MR_Box) (ImportsGraphStream_18));
          }
          mercury__digraph__traverse_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Deps_20, Var_85, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_26_87);
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "}\n");
          mercury__io__close_output_3_p_0(ImportsGraphStream_18);
          switch (Verbose_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " done.\n");
              break;
          }
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = parse_tree__generate_dep_d_files__lookup_burdened_module_in_deps_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0(
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_4,
  MR_Word * STATE_VARIABLE_IntDepsGraph_5,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_6,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpDepsGraph_7 = STATE_VARIABLE_ImpDepsGraph_0_6;
    *STATE_VARIABLE_IntDepsGraph_5 = STATE_VARIABLE_IntDepsGraph_0_4;
  }
  else
  {
    MR_Word Deps_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word DepsList_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word BurdenedModule_18 = ((MR_Word) ((MR_hl_field(0, Deps_16, (MR_Integer) 1))));
    MR_Word BurdenedModules_19;
    MR_Word Baggage_24 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_18, (MR_Integer) 0))));
    MR_Word Errors_25 = ((MR_Word) ((MR_hl_field(0, Baggage_24, (MR_Integer) 7))));
    MR_Word FatalErrors_26 = ((MR_Word) ((MR_hl_field(0, Errors_25, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_IntDepsGraph_33_33;
    MR_Word STATE_VARIABLE_ImpDepsGraph_34_34;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_26);
    if (succeeded)
    {
      MR_Word ModuleDepInfo_27;
      MR_Word Var_32;

      {
        ModuleDepInfo_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModuleDepInfo_27, 0) = ((MR_Box) (BurdenedModule_18));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__generate_dep_d_files_scalar_common_4[0]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0_1));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (DepsMap_1));
      }
      parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_27, Var_32, STATE_VARIABLE_IntDepsGraph_0_4, &STATE_VARIABLE_IntDepsGraph_33_33, STATE_VARIABLE_ImpDepsGraph_0_6, &STATE_VARIABLE_ImpDepsGraph_34_34);
    }
    else
    {
      STATE_VARIABLE_ImpDepsGraph_34_34 = STATE_VARIABLE_ImpDepsGraph_0_6;
      STATE_VARIABLE_IntDepsGraph_33_33 = STATE_VARIABLE_IntDepsGraph_0_4;
    }
    parse_tree__generate_dep_d_files__deps_list_to_deps_graph_7_p_0(DepsMap_1, DepsList_17, &BurdenedModules_19, STATE_VARIABLE_IntDepsGraph_33_33, STATE_VARIABLE_IntDepsGraph_5, STATE_VARIABLE_ImpDepsGraph_34_34, STATE_VARIABLE_ImpDepsGraph_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BurdenedModule_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (BurdenedModules_19));
    }
  }
}

static void MR_CALL 
parse_tree__generate_dep_d_files__generate_dep_dv_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word Baggage_12)
{
  MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(0, Baggage_12, (MR_Integer) 0))));
  MR_Word Cache0_15;
  MR_Word MmakeFileDv_16;
  MR_Word MmakeFileDep_18;
  MR_String MmakeFileStrDv_19;
  MR_String MmakeFileStrDep_20;
  MR_String FileNameDv_21;
  MR_String FileNameDep_23;
  MR_Word Target_27;
  MR_Word _Cache_17;
  MR_String _FileNameDvProposed_22;
  MR_String _FileNameDepProposed_24;
  MR_Word _SucceededDv_25;
  MR_Word _SucceededDep_26;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__generate_dep_d_files_scalar_common_1[1]), &Cache0_15);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0(Globals_9, SourceFileName_14, ModuleName_10, DepsMap_11, &MmakeFileDv_16, Cache0_15, &_Cache_17);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0(Globals_9, SourceFileName_14, ModuleName_10, DepsMap_11, &MmakeFileDep_18);
  MmakeFileStrDv_19 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDv_16);
  MmakeFileStrDep_20 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDep_18);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.generate_dep_d_files.generate_dep_dv_files\'/7", (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_3[1])), ModuleName_10, &FileNameDv_21, &_FileNameDvProposed_22);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.generate_dep_d_files.generate_dep_dv_files\'/7", (MR_Word) (MR_mkword(1, &parse_tree__generate_dep_d_files_scalar_common_3[2])), ModuleName_10, &FileNameDep_23, &_FileNameDepProposed_24);
  libs__file_util__write_string_to_file_8_p_0(ProgressStream_8, Globals_9, (MR_String) "Writing auto-dependency file", FileNameDv_21, MmakeFileStrDv_19, &_SucceededDv_25);
  libs__file_util__write_string_to_file_8_p_0(ProgressStream_8, Globals_9, (MR_String) "Writing auto-dependency file", FileNameDep_23, MmakeFileStrDep_20, &_SucceededDep_26);
  libs__globals__get_target_2_p_0(Globals_9, &Target_27);
  switch (Target_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word _Succeeded_28;

        parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_8, Globals_9, ModuleName_10, &_Succeeded_28);
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_dep_d_files____Unify____which_dot_dx_files_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_dep_d_files____Compare____which_dot_dx_files_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_parent_or_ancestor_0);
	MR_register_type_ctor_info(&parse_tree__generate_dep_d_files__parse_tree__generate_dep_d_files__type_ctor_info_which_dot_dx_files_0);
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
