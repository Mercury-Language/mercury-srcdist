/*
** Automatically generated from `d_file_deps.m'
** by the Mercury compiler,
** version rotd-2026-05-11
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


// :- module parse_tree.d_file_deps.
// :- implementation.

/*
INIT mercury__parse_tree__d_file_deps__init
ENDINIT
*/

#include "parse_tree.d_file_deps.mih"


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
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.opt_deps_spec.mih"
#include "parse_tree.output_imports_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__d_file_deps__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_avail_module_sets_0_0[6];

static const MR_ConstString parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_avail_module_sets_0_0[6];

static const MR_DuFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_avail_module_sets_0_0;

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_avail_module_sets_0_0[1];

static const MR_DuPtagLayout parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_avail_module_sets_0[1];

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_avail_module_sets_0[1];

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_avail_module_sets_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_dep_graphs_0_0[7];

static const MR_ConstString parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_dep_graphs_0_0[7];

static const MR_DuFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_dep_graphs_0_0;

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_dep_graphs_0_0[1];

static const MR_DuPtagLayout parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_dep_graphs_0[1];

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_dep_graphs_0[1];

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_dep_graphs_0[1];

static const MR_EnumFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_0;

static const MR_EnumFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_1;

static const MR_EnumFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__enum_ordinal_ordered_maybe_look_for_src_0[2];

static const MR_EnumFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__enum_name_ordered_maybe_look_for_src_0[2];

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_maybe_look_for_src_0[2];

static void MR_CALL 
parse_tree__d_file_deps__IntroducedFrom__pred__get_dependencies_from_graph__400__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static void MR_CALL 
parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static MR_bool MR_CALL 
parse_tree__d_file_deps__fim_spec_to_maybe_fim_import_4_p_0(
  MR_Word BackendLangs_5,
  MR_Word SourceFileTopModuleName_6,
  MR_Word FIMSpec_7,
  MR_Word * ImportModuleName_8);

static MR_Word MR_CALL 
parse_tree__d_file_deps__lookup_burdened_module_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5);

static void MR_CALL 
parse_tree__d_file_deps__get_plain_trans_opt_deps_9_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0(
  MR_Word Globals_5,
  MR_Word SourceFileTopModuleName_6,
  MR_Word FIMSpecSet_7,
  MR_Word * ImportModuleNameSet_8);

static MR_bool MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__compute_allowable_trans_opt_deps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__d_file_deps__compute_reachable_modules_from_dep_graphs_3_p_0(
  MR_Word DepGraphs_4,
  MR_Word ModuleName_5,
  MR_Word * ReachableModules_6);

static void MR_CALL 
parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6);

static void MR_CALL 
parse_tree__d_file_deps__get_ext_opt_deps_7_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word Ext_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0(
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_4,
  MR_Word * STATE_VARIABLE_IntDepsGraph_5,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_6,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_7);

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____avail_module_sets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__d_file_deps____Compare____avail_module_sets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____dep_graphs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__d_file_deps____Compare____dep_graphs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_1[7][3];

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_2[7][2];

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_3[6][6];

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_4[2][7];




static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[2])),
    ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[3])),
    ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[4])),
    ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[5])),
    ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_2[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_3[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__d_file_deps__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__d_file_deps_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__d_file_deps__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__d_file_deps__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__d_file_deps__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__d_file_deps__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__d_file_deps__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__d_file_deps__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__d_file_deps__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_avail_module_sets_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_avail_module_sets_0_0[6] = {
  (MR_String) "am_ancestors",
  (MR_String) "am_direct_imports",
  (MR_String) "am_indirect_imports",
  (MR_String) "am_imports_in_ancestors",
  (MR_String) "am_int_for_opt_imports",
  (MR_String) "am_implicit_imports"
};

static const MR_DuFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_avail_module_sets_0_0 = {
  (MR_String) "avail_module_sets",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_avail_module_sets_0_0,
  parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_avail_module_sets_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_avail_module_sets_0_0[1] = { &parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_avail_module_sets_0_0 };

static const MR_DuPtagLayout parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_avail_module_sets_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_avail_module_sets_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_avail_module_sets_0[1] = { &parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_avail_module_sets_0_0 };

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_avail_module_sets_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_avail_module_sets_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__d_file_deps____Unify____avail_module_sets_0_0_10001)),
  ((MR_Box) (parse_tree__d_file_deps____Compare____avail_module_sets_0_0_10001)),
  (MR_String) "parse_tree.d_file_deps",
  (MR_String) "avail_module_sets",
  { parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_avail_module_sets_0 },
  { parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_avail_module_sets_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_avail_module_sets_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__d_file_deps__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_dep_graphs_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__d_file_deps__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_dep_graphs_0_0[7] = {
  (MR_String) "int_deps_graph",
  (MR_String) "imp_deps_graph",
  (MR_String) "indirect_deps_graph",
  (MR_String) "indirect_opt_deps_graph",
  (MR_String) "trans_opt_deps_graph",
  (MR_String) "trans_opt_order",
  (MR_String) "all_deps_graph"
};

static const MR_DuFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_dep_graphs_0_0 = {
  (MR_String) "dep_graphs",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__d_file_deps__parse_tree__d_file_deps__field_types_dep_graphs_0_0,
  parse_tree__d_file_deps__parse_tree__d_file_deps__field_names_dep_graphs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_dep_graphs_0_0[1] = { &parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_dep_graphs_0_0 };

static const MR_DuPtagLayout parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_dep_graphs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__d_file_deps__parse_tree__d_file_deps__du_stag_ordered_dep_graphs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_dep_graphs_0[1] = { &parse_tree__d_file_deps__parse_tree__d_file_deps__du_functor_desc_dep_graphs_0_0 };

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_dep_graphs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_dep_graphs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__d_file_deps____Unify____dep_graphs_0_0_10001)),
  ((MR_Box) (parse_tree__d_file_deps____Compare____dep_graphs_0_0_10001)),
  (MR_String) "parse_tree.d_file_deps",
  (MR_String) "dep_graphs",
  { parse_tree__d_file_deps__parse_tree__d_file_deps__du_name_ordered_dep_graphs_0 },
  { parse_tree__d_file_deps__parse_tree__d_file_deps__du_ptag_ordered_dep_graphs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_dep_graphs_0,

};

static const MR_EnumFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_0 = {
  (MR_String) "do_not_look_for_src",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_1 = {
  (MR_String) "look_for_src",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__enum_ordinal_ordered_maybe_look_for_src_0[2] = {
  &parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_0,
  &parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__d_file_deps__parse_tree__d_file_deps__enum_name_ordered_maybe_look_for_src_0[2] = {
  &parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_0,
  &parse_tree__d_file_deps__parse_tree__d_file_deps__enum_functor_desc_maybe_look_for_src_0_1
};

static const MR_Integer parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_maybe_look_for_src_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_maybe_look_for_src_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0_10001)),
  ((MR_Box) (parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0_10001)),
  (MR_String) "parse_tree.d_file_deps",
  (MR_String) "maybe_look_for_src",
  { parse_tree__d_file_deps__parse_tree__d_file_deps__enum_name_ordered_maybe_look_for_src_0 },
  { parse_tree__d_file_deps__parse_tree__d_file_deps__enum_ordinal_ordered_maybe_look_for_src_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__d_file_deps__parse_tree__d_file_deps__functor_number_map_maybe_look_for_src_0,

};

static void MR_CALL 
parse_tree__d_file_deps__IntroducedFrom__pred__get_dependencies_from_graph__400__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  MR_Word Dep_13;
  MR_Box conv0_Dep_13;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, LambdaHeadVar__1_15, &conv0_Dep_13);
  Dep_13 = ((MR_Word) (conv0_Dep_13));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_17 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Dep_13));
    MR_hl_field(1, base, 1) = ((MR_Box) (LambdaHeadVar__2_16));
  }
}

static void MR_CALL 
parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0(
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
parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__d_file_deps____Compare____dep_graphs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____dep_graphs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__d_file_deps____Compare____avail_module_sets_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____avail_module_sets_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 3))));

  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_8, STATE_VARIABLE_FIMSpecs_0_6, STATE_VARIABLE_FIMSpecs_7);
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13)
{
  switch (MR_tag((MR_Word) IntForOptSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, 0))));
        MR_Word IntFIMS_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 5))));
        MR_Word ImpFIMS_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 6))));
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (ImpFIMS_15));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (IntFIMS_14));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_16);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, 0))));

        parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_int1_3_p_0(ParseTreeInt1_8, STATE_VARIABLE_FIMSpecs_0_12, STATE_VARIABLE_FIMSpecs_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, 0))));
        MR_Word IntFIMS_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, 5))));
        MR_Word ImpFIMS_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, 6))));
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (ImpFIMS_68));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (IntFIMS_67));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_69);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word IntFIMS_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, 5))));
  MR_Word ImpFIMS_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, 6))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ImpFIMS_7));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (IntFIMS_6));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_11);
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static void MR_CALL 
parse_tree__d_file_deps__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static MR_bool MR_CALL 
parse_tree__d_file_deps__fim_spec_to_maybe_fim_import_4_p_0(
  MR_Word BackendLangs_5,
  MR_Word SourceFileTopModuleName_6,
  MR_Word FIMSpec_7,
  MR_Word * ImportModuleName_8)
{
  MR_bool succeeded;
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_7, 0))) & (MR_Integer) 3);
  MR_String Var_10;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_9)), BackendLangs_5);
  if (succeeded)
  {
    *ImportModuleName_8 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(FIMSpec_7, SourceFileTopModuleName_6);
    succeeded = ((MR_tag((MR_Word) *ImportModuleName_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_10 = ((MR_String) ((MR_hl_field(0, *ImportModuleName_8, 0))));
      succeeded = (strcmp(Var_10, (MR_String) "mercury") == 0);
    }
    succeeded = !(succeeded);
  }
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__d_file_deps__lookup_burdened_module_in_deps_map_2_f_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word BurdenedModule_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  BurdenedModule_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  {
    ModuleDepInfo_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModuleDepInfo_6, 0) = ((MR_Box) (BurdenedModule_8));
  }
  return ModuleDepInfo_6;
}

void MR_CALL 
parse_tree__d_file_deps__construct_intermod_deps_8_p_0(
  MR_Word Globals_9,
  MR_Word ParseTreeModuleSrc_10,
  MR_Word DFileDeps_11,
  MR_Word * IntermodDeps_12,
  MR_Word STATE_VARIABLE_Cache_0_27,
  MR_Word * STATE_VARIABLE_Cache_28)
{
  MR_bool succeeded;
  MR_Word Intermod_15;
  MR_Word UsePlainOpt_16;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 428, &Intermod_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 429, &UsePlainOpt_16);
  succeeded = (Intermod_15 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (UsePlainOpt_16 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word UseTransOpt_17;
    MR_Word TransOpt_18;
    MR_Word LookForSrc_19;
    MR_Word DirectDeps_20;
    MR_Word ModuleName_21;
    MR_Word BaseDeps_22;
    MR_Word PlainOptDeps_23;
    MR_Word MaybeTransOptDeps_25;
    MR_Word Var_35;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 432, &UseTransOpt_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 431, &TransOpt_18);
    switch (UseTransOpt_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LookForSrc_19 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        LookForSrc_19 = (MR_Integer) 0;
        break;
    }
    DirectDeps_20 = ((MR_Word) ((MR_hl_field(0, DFileDeps_11, 0))));
    ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 0))));
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DirectDeps_20);
    {
      BaseDeps_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseDeps_22, 0) = ((MR_Box) (ModuleName_21));
      MR_hl_field(1, BaseDeps_22, 1) = ((MR_Box) (Var_35));
    }
    succeeded = (TransOpt_18 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseTransOpt_17 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOptDeps_24;

      parse_tree__d_file_deps__get_plain_trans_opt_deps_9_p_0(Globals_9, LookForSrc_19, BaseDeps_22, &PlainOptDeps_23, &TransOptDeps_24, STATE_VARIABLE_Cache_0_27, STATE_VARIABLE_Cache_28);
      {
        MaybeTransOptDeps_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTransOptDeps_25, 0) = ((MR_Box) (TransOptDeps_24));
      }
    }
    else
    {
      parse_tree__d_file_deps__get_ext_opt_deps_7_p_0(Globals_9, LookForSrc_19, (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[6])), BaseDeps_22, &PlainOptDeps_23);
      MaybeTransOptDeps_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Cache_28 = STATE_VARIABLE_Cache_0_27;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IntermodDeps_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PlainOptDeps_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeTransOptDeps_25));
    }
  }
  else
  {
    *IntermodDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_28 = STATE_VARIABLE_Cache_0_27;
  }
}

static void MR_CALL 
parse_tree__d_file_deps__get_plain_trans_opt_deps_9_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_7 = STATE_VARIABLE_Cache_0_6;
  }
  else
  {
    MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ModuleNames_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word STATE_VARIABLE_OptDeps_1_52;
    MR_Word STATE_VARIABLE_TransOptDeps_1_53;
    MR_Word STATE_VARIABLE_Cache_1_54;

    parse_tree__d_file_deps__get_plain_trans_opt_deps_9_p_0(Globals_1, LookForSrc_2, ModuleNames_21, &STATE_VARIABLE_OptDeps_1_52, &STATE_VARIABLE_TransOptDeps_1_53, STATE_VARIABLE_Cache_0_6, &STATE_VARIABLE_Cache_1_54);
    switch (LookForSrc_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_33;
          MR_Word SearchAuthDirsPlainOpt_34;
          MR_Word MaybeOptDir_36;
          MR_String TransOptName_40;
          MR_Word SearchAuthDirsTransOpt_41;
          MR_Word MaybeTransOptDir_43;
          MR_Word STATE_VARIABLE_Cache_2_62;
          MR_Word _SearchDirsNotFoundOpt_35;
          MR_Word _SearchDirsNotFoundTransOpt_42;

          parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_plain_trans_opt_deps\'/9", (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[6])), ModuleName_20, &OptName_33, STATE_VARIABLE_Cache_1_54, &STATE_VARIABLE_Cache_2_62);
          SearchAuthDirsPlainOpt_34 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 0, Globals_1);
          parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirsPlainOpt_34, OptName_33, &_SearchDirsNotFoundOpt_35, &MaybeOptDir_36);
          if (((MR_tag((MR_Word) MaybeOptDir_36)) == (MR_Integer) 1))
            *HeadVar__4_4 = STATE_VARIABLE_OptDeps_1_52;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_52));
            }
          parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_plain_trans_opt_deps\'/9", (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[5])), ModuleName_20, &TransOptName_40, STATE_VARIABLE_Cache_2_62, STATE_VARIABLE_Cache_7);
          SearchAuthDirsTransOpt_41 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 1, Globals_1);
          parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirsTransOpt_41, TransOptName_40, &_SearchDirsNotFoundTransOpt_42, &MaybeTransOptDir_43);
          if (((MR_tag((MR_Word) MaybeTransOptDir_43)) == (MR_Integer) 1))
            *HeadVar__5_5 = STATE_VARIABLE_TransOptDeps_1_53;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_1_53));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SearchAuthDirsSrc_26;
          MR_Word MaybeFileName_28;
          MR_Word _SearchDirsLook_27;

          SearchAuthDirsSrc_26 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 7, Globals_1);
          parse_tree__find_module__search_for_module_source_6_p_0(SearchAuthDirsSrc_26, ModuleName_20, &_SearchDirsLook_27, &MaybeFileName_28);
          if (((MR_tag((MR_Word) MaybeFileName_28)) == (MR_Integer) 1))
          {
            MR_String OptName_73;
            MR_Word SearchAuthDirsPlainOpt_74;
            MR_Word MaybeOptDir_76;
            MR_String TransOptName_78;
            MR_Word SearchAuthDirsTransOpt_79;
            MR_Word MaybeTransOptDir_81;
            MR_Word STATE_VARIABLE_Cache_2_83;
            MR_Word _SearchDirsNotFoundOpt_70;
            MR_Word _SearchDirsNotFoundTransOpt_71;

            parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_plain_trans_opt_deps\'/9", (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[6])), ModuleName_20, &OptName_73, STATE_VARIABLE_Cache_1_54, &STATE_VARIABLE_Cache_2_83);
            SearchAuthDirsPlainOpt_74 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 0, Globals_1);
            parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirsPlainOpt_74, OptName_73, &_SearchDirsNotFoundOpt_70, &MaybeOptDir_76);
            if (((MR_tag((MR_Word) MaybeOptDir_76)) == (MR_Integer) 1))
              *HeadVar__4_4 = STATE_VARIABLE_OptDeps_1_52;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_52));
              }
            parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_plain_trans_opt_deps\'/9", (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[5])), ModuleName_20, &TransOptName_78, STATE_VARIABLE_Cache_2_83, STATE_VARIABLE_Cache_7);
            SearchAuthDirsTransOpt_79 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 1, Globals_1);
            parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirsTransOpt_79, TransOptName_78, &_SearchDirsNotFoundTransOpt_71, &MaybeTransOptDir_81);
            if (((MR_tag((MR_Word) MaybeTransOptDir_81)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_TransOptDeps_1_53;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_1_53));
              }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_52));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_1_53));
            }
            *STATE_VARIABLE_Cache_7 = STATE_VARIABLE_Cache_1_54;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_FIMSpecs_13;

  parse_tree__d_file_deps__gather_fim_specs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_FIMSpecs_13);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FIMSpecs_13));
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_FIMSpecs_7;

  parse_tree__d_file_deps__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_FIMSpecs_7);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_FIMSpecs_7));
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__d_file_deps__gather_fim_specs_in_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__d_file_deps__gather_fim_specs_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__d_file_deps__gather_fim_specs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMSpecs_9));
}

void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0(
  MR_Word Globals_6,
  MR_Word BurdenedAugCompUnit_7,
  MR_Word AvailModuleSets_8,
  MR_Word MaybeInclTransOptRule_9,
  MR_Word * DFileDeps_10)
{
  MR_Word Baggage_11 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_7, 0))));
  MR_Word AugCompUnit_12 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_7, 1))));
  MR_Word SourceFileTopModuleName_13 = ((MR_Word) ((MR_hl_field(0, Baggage_11, 2))));
  MR_Word ParseTreeModuleSrc_14 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 0))));
  MR_Word AncestorIntSpecs_15 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 1))));
  MR_Word DirectInt1Specs_16 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 2))));
  MR_Word IndirectInt2Specs_17 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 3))));
  MR_Word PlainOpts_18 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 4))));
  MR_Word IntForOptSpecs_20 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_12, 6))));
  MR_Word DirectDeps_23;
  MR_Word IndirectDeps_24;
  MR_Word OwnFIMSpecs_25;
  MR_Word OwnFIMImports_26;
  MR_Word IntermodFIMSpecs_27;
  MR_Word IntermodFIMImports_28;
  MR_Word OwnFIMDeps_29;
  MR_Word IntermodOnlyFIMDeps_30;
  MR_Word Ancestors_31;
  MR_Word DirectImports_32;
  MR_Word IndirectImports_33;
  MR_Word ImportedInAncestors_34;
  MR_Word IntForOptImports_35;
  MR_Word ImplicitlyImortedModules_36;
  MR_Word AllAvailModules_37;
  MR_Word AllMihDeps_38;
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_14, 3))));
  MR_Word STATE_VARIABLE_IntermodFIMSpecs_1_40;
  MR_Word STATE_VARIABLE_IntermodFIMSpecs_2_42;
  MR_Word STATE_VARIABLE_IntermodFIMSpecs_3_44;
  MR_Word STATE_VARIABLE_IntermodFIMSpecs_4_46;
  MR_Word STATE_VARIABLE_IntermodFIMSpecs_5_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Box conv1_STATE_VARIABLE_IntermodFIMSpecs_2_42;
  MR_Box conv3_STATE_VARIABLE_IntermodFIMSpecs_3_44;
  MR_Box conv5_STATE_VARIABLE_IntermodFIMSpecs_4_46;
  MR_Box conv7_STATE_VARIABLE_IntermodFIMSpecs_5_48;
  MR_Box conv9_IntermodFIMSpecs_27;

  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_39, &DirectDeps_23);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), IndirectInt2Specs_17, &IndirectDeps_24);
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_14, &OwnFIMSpecs_25);
  parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0(Globals_6, SourceFileTopModuleName_13, OwnFIMSpecs_25, &OwnFIMImports_26);
  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &STATE_VARIABLE_IntermodFIMSpecs_1_40);
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[2]), AncestorIntSpecs_15, ((MR_Box) (STATE_VARIABLE_IntermodFIMSpecs_1_40)), &conv1_STATE_VARIABLE_IntermodFIMSpecs_2_42);
  STATE_VARIABLE_IntermodFIMSpecs_2_42 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodFIMSpecs_2_42));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[3]), DirectInt1Specs_16, ((MR_Box) (STATE_VARIABLE_IntermodFIMSpecs_2_42)), &conv3_STATE_VARIABLE_IntermodFIMSpecs_3_44);
  STATE_VARIABLE_IntermodFIMSpecs_3_44 = ((MR_Word) (conv3_STATE_VARIABLE_IntermodFIMSpecs_3_44));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[4]), IndirectInt2Specs_17, ((MR_Box) (STATE_VARIABLE_IntermodFIMSpecs_3_44)), &conv5_STATE_VARIABLE_IntermodFIMSpecs_4_46);
  STATE_VARIABLE_IntermodFIMSpecs_4_46 = ((MR_Word) (conv5_STATE_VARIABLE_IntermodFIMSpecs_4_46));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[5]), PlainOpts_18, ((MR_Box) (STATE_VARIABLE_IntermodFIMSpecs_4_46)), &conv7_STATE_VARIABLE_IntermodFIMSpecs_5_48);
  STATE_VARIABLE_IntermodFIMSpecs_5_48 = ((MR_Word) (conv7_STATE_VARIABLE_IntermodFIMSpecs_5_48));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[6]), IntForOptSpecs_20, ((MR_Box) (STATE_VARIABLE_IntermodFIMSpecs_5_48)), &conv9_IntermodFIMSpecs_27);
  IntermodFIMSpecs_27 = ((MR_Word) (conv9_IntermodFIMSpecs_27));
  parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0(Globals_6, SourceFileTopModuleName_13, IntermodFIMSpecs_27, &IntermodFIMImports_28);
  Var_51 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OwnFIMImports_26, IntermodFIMImports_28);
  OwnFIMDeps_29 = (MR_Word) (Var_51);
  IntermodOnlyFIMDeps_30 = (MR_Word) (IntermodFIMImports_28);
  Ancestors_31 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 0))));
  DirectImports_32 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 1))));
  IndirectImports_33 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 2))));
  ImportedInAncestors_34 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 3))));
  IntForOptImports_35 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 4))));
  ImplicitlyImortedModules_36 = ((MR_Word) ((MR_hl_field(0, AvailModuleSets_8, 5))));
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (ImplicitlyImortedModules_36));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (IntForOptImports_35));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (ImportedInAncestors_34));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (IndirectImports_33));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (DirectImports_32));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Ancestors_31));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  AllAvailModules_37 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_52);
  AllMihDeps_38 = (MR_Word) (AllAvailModules_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *DFileDeps_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (DirectDeps_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (IndirectDeps_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (OwnFIMDeps_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntermodOnlyFIMDeps_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (AllMihDeps_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeInclTransOptRule_9));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_bool MR_CALL 
parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_ImportModuleName_8;

  succeeded = parse_tree__d_file_deps__fim_spec_to_maybe_fim_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_ImportModuleName_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ImportModuleName_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0(
  MR_Word Globals_5,
  MR_Word SourceFileTopModuleName_6,
  MR_Word FIMSpecSet_7,
  MR_Word * ImportModuleNameSet_8)
{
  MR_bool succeeded;
  MR_Word BackendLangs_9;
  MR_Word Var_10;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_5, &BackendLangs_9);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__d_file_deps_scalar_common_4[1]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__d_file_deps__fim_specs_to_fim_imports_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (BackendLangs_9));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (SourceFileTopModuleName_6));
  }
  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_10, FIMSpecSet_7, ImportModuleNameSet_8);
}

static MR_bool MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_ImportModuleName_8;

  succeeded = parse_tree__d_file_deps__fim_spec_to_maybe_fim_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_ImportModuleName_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_ImportModuleName_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__d_file_deps__IntroducedFrom__pred__get_dependencies_from_graph__400__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

void MR_CALL 
parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0(
  MR_Word Globals_6,
  MR_Word DepGraphs_7,
  MR_Word Baggage_8,
  MR_Word ParseTreeModuleSrc_9,
  MR_Word * DFileDeps_10)
{
  MR_bool succeeded;
  MR_Word IntDepsGraph_11 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 0))));
  MR_Word ImpDepsGraph_12 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 1))));
  MR_Word IndirectDepsGraph_13 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 2))));
  MR_Word IndirectOptDepsGraph_14 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 3))));
  MR_Word TransOptDepsGraph_15 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 4))));
  MR_Word FullTransOptOrder_16 = ((MR_Word) ((MR_hl_field(0, DepGraphs_7, 5))));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, 0))));
  MR_Word IntDeps_19;
  MR_Word ImpDeps_20;
  MR_Word DirectDeps_21;
  MR_Word IndirectOptDeps_22;
  MR_Word Intermod_23;
  MR_Word UsePlainOpt_24;
  MR_Word StdDirectDeps_25;
  MR_Word StdIndirectDeps_26;
  MR_Word SourceFileTopModuleName_27;
  MR_Word OwnFIMSpecs_28;
  MR_Word OwnFIMImports_29;
  MR_Word OwnFIMDeps_30;
  MR_Word TransOptDeps0_31;
  MR_Word TransOptDeps_32;
  MR_Word ReachableModules_33;
  MR_Word IntermodFIMDeps_34;
  MR_Word AllMihDeps_35;
  MR_Word TransOptOrder_36;
  MR_Word TransOptOrderSet_37;
  MR_Word TransOptRuleInfo_38;
  MR_Word MaybeInclTransOptRule_39;
  MR_Word Var_42;
  MR_Word BackendLangs_96;
  MR_Word Var_97;
  MR_Word ModuleKey_86;

  succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_11, ((MR_Box) (ModuleName_18)), &ModuleKey_86);
  if (succeeded)
  {
    MR_Word DepsKeysSet_87;
    MR_Word AddKeyDep_88;
    MR_Word DependenciesList_89;
    MR_Box conv1_DependenciesList_89;

    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_11, ModuleKey_86, &DepsKeysSet_87);
    {
      AddKeyDep_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AddKeyDep_88, 0) = ((MR_Box) (&parse_tree__d_file_deps_scalar_common_4[0]));
      MR_hl_field(0, AddKeyDep_88, 1) = ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_1));
      MR_hl_field(0, AddKeyDep_88, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_88, 3) = ((MR_Box) (IntDepsGraph_11));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[2]), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[1]), AddKeyDep_88, DepsKeysSet_87, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_89);
    DependenciesList_89 = ((MR_Word) (conv1_DependenciesList_89));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_89, &IntDeps_19);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntDeps_19);
  parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(ImpDepsGraph_12, ModuleName_18, &ImpDeps_20);
  mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_19, ImpDeps_20, &DirectDeps_21);
  parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(IndirectOptDepsGraph_14, ModuleName_18, &IndirectOptDeps_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 428, &Intermod_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 429, &UsePlainOpt_24);
  succeeded = (Intermod_23 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (UsePlainOpt_24 == (MR_Integer) 1);
  if (succeeded)
  {
    StdDirectDeps_25 = IndirectOptDeps_22;
    StdIndirectDeps_26 = IndirectOptDeps_22;
  }
  else
  {
    StdDirectDeps_25 = DirectDeps_21;
    parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_13, ModuleName_18, &StdIndirectDeps_26);
  }
  SourceFileTopModuleName_27 = ((MR_Word) ((MR_hl_field(0, Baggage_8, 2))));
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_9, &OwnFIMSpecs_28);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_6, &BackendLangs_96);
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__d_file_deps_scalar_common_4[1]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0_2));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (BackendLangs_96));
    MR_hl_field(0, Var_97, 4) = ((MR_Box) (SourceFileTopModuleName_27));
  }
  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_97, OwnFIMSpecs_28, &OwnFIMImports_29);
  OwnFIMDeps_30 = (MR_Word) (OwnFIMImports_29);
  parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(TransOptDepsGraph_15, ModuleName_18, &TransOptDeps0_31);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), TransOptDeps0_31, &TransOptDeps_32);
  parse_tree__d_file_deps__compute_reachable_modules_from_dep_graphs_3_p_0(DepGraphs_7, ModuleName_18, &ReachableModules_33);
  IntermodFIMDeps_34 = (MR_Word) (ReachableModules_33);
  AllMihDeps_35 = (MR_Word) (ReachableModules_33);
  parse_tree__d_file_deps__compute_allowable_trans_opt_deps_3_p_0(ModuleName_18, FullTransOptOrder_16, &TransOptOrder_36);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrder_36, &TransOptOrderSet_37);
  {
    TransOptRuleInfo_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransOptRuleInfo_38, 0) = ((MR_Box) (TransOptOrderSet_37));
  }
  {
    MaybeInclTransOptRule_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeInclTransOptRule_39, 0) = ((MR_Box) (TransOptRuleInfo_38));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (TransOptDeps_32));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *DFileDeps_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdDirectDeps_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (StdIndirectDeps_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (OwnFIMDeps_30));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntermodFIMDeps_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (AllMihDeps_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeInclTransOptRule_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
parse_tree__d_file_deps__compute_allowable_trans_opt_deps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadModuleName_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailModuleNames_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(HeadModuleName_6, HeadVar__1_1);
      if (succeeded)
        *HeadVar__3_3 = TailModuleNames_7;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = TailModuleNames_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__d_file_deps__compute_reachable_modules_from_dep_graphs_3_p_0(
  MR_Word DepGraphs_4,
  MR_Word ModuleName_5,
  MR_Word * ReachableModules_6)
{
  MR_Word AllDepsGraph_13 = ((MR_Word) ((MR_hl_field(0, DepGraphs_4, 6))));

  mercury__digraph__reachable_vertices_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDepsGraph_13, ((MR_Box) (ModuleName_5)), ReachableModules_6);
}

static void MR_CALL 
parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__d_file_deps__IntroducedFrom__pred__get_dependencies_from_graph__400__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6)
{
  MR_bool succeeded;
  MR_Word ModuleKey_7;

  succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, ((MR_Box) (ModuleName_5)), &ModuleKey_7);
  if (succeeded)
  {
    MR_Word DepsKeysSet_8;
    MR_Word AddKeyDep_9;
    MR_Word DependenciesList_14;
    MR_Box conv1_DependenciesList_14;

    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, ModuleKey_7, &DepsKeysSet_8);
    {
      AddKeyDep_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AddKeyDep_9, 0) = ((MR_Box) (&parse_tree__d_file_deps_scalar_common_4[0]));
      MR_hl_field(0, AddKeyDep_9, 1) = ((MR_Box) (parse_tree__d_file_deps__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(0, AddKeyDep_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_9, 3) = ((MR_Box) (DepsGraph_4));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_2[2]), (MR_Word) (&parse_tree__d_file_deps_scalar_common_1[1]), AddKeyDep_9, DepsKeysSet_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_14);
    DependenciesList_14 = ((MR_Word) (conv1_DependenciesList_14));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_14, Dependencies_6);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Dependencies_6);
}

void MR_CALL 
parse_tree__d_file_deps__compute_dep_graphs_gendep_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word DepsMap_14,
  MR_Word * DepGraphs_15,
  MR_Word * BurdenedModules_16,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_Word DepsList_19;
  MR_Word IntDepsGraph0_20;
  MR_Word ImpDepsGraph0_21;
  MR_Word IntDepsGraph_22;
  MR_Word ImpDepsGraph_23;
  MR_Word IndirectOptDepsGraph_27;
  MR_Word TransOptDepsGraph_28;
  MR_Word TransOptDepsOrdering_29;
  MR_Word TransImpDepsGraph_30;
  MR_Word IndirectDepsGraph_31;
  MR_Word TransOptOrder_33;
  MR_Word IntDepsGraphEdges_34;
  MR_Word ImpDepsGraphEdges_35;
  MR_Word IndirectDepsGraphEdges_36;
  MR_Word IndirectOptDepsGraphEdges_37;
  MR_Word TransOptDepsGraphEdges_38;
  MR_Word AllDepsGraphsEdges_39;
  MR_Word AllDepsGraph_40;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;

  mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_14, &DepsList_19);
  mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntDepsGraph0_20);
  mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpDepsGraph0_21);
  parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0(DepsMap_14, DepsList_19, BurdenedModules_16, IntDepsGraph0_20, &IntDepsGraph_22, ImpDepsGraph0_21, &ImpDepsGraph_23);
  parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0(ProgressStream_11, Globals_12, ModuleName_13, IntDepsGraph_22, ImpDepsGraph_23);
  parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0(ProgressStream_11, Globals_12, ModuleName_13, ImpDepsGraph_23, &IndirectOptDepsGraph_27, &TransOptDepsGraph_28, &TransOptDepsOrdering_29, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
  mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_23, &TransImpDepsGraph_30);
  mercury__digraph__compose_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_23, TransImpDepsGraph_30, &IndirectDepsGraph_31);
  parse_tree__d_file_deps__get_ext_opt_deps_7_p_0(Globals_12, (MR_Integer) 1, (MR_Word) (MR_mkword(3, &parse_tree__d_file_deps_scalar_common_2[5])), TransOptDepsOrdering_29, &TransOptOrder_33);
  mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_22, &IntDepsGraphEdges_34);
  mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_23, &ImpDepsGraphEdges_35);
  mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectDepsGraph_31, &IndirectDepsGraphEdges_36);
  mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectOptDepsGraph_27, &IndirectOptDepsGraphEdges_37);
  mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsGraph_28, &TransOptDepsGraphEdges_38);
  Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_1[0]), IndirectOptDepsGraphEdges_37, TransOptDepsGraphEdges_38);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_1[0]), IndirectDepsGraphEdges_36, Var_68);
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_1[0]), ImpDepsGraphEdges_35, Var_67);
  AllDepsGraphsEdges_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__d_file_deps_scalar_common_1[0]), IntDepsGraphEdges_34, Var_66);
  mercury__digraph__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDepsGraphsEdges_39, &AllDepsGraph_40);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *DepGraphs_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntDepsGraph_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (ImpDepsGraph_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (IndirectDepsGraph_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectOptDepsGraph_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (TransOptDepsGraph_28));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOptOrder_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (AllDepsGraph_40));
  }
}

static void MR_CALL 
parse_tree__d_file_deps__get_ext_opt_deps_7_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word Ext_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word ModuleNames_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word STATE_VARIABLE_OptDeps_1_38;

    parse_tree__d_file_deps__get_ext_opt_deps_7_p_0(Globals_1, LookForSrc_2, Ext_3, ModuleNames_18, &STATE_VARIABLE_OptDeps_1_38);
    switch (LookForSrc_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SearchAuthDirsExt_28;
          MR_String OptName_29;
          MR_Word MaybeOptDir_32;
          MR_String _OptNameProposed_30;
          MR_Word _SearchDirsNotFound_31;

          parse_tree__file_names__module_name_to_search_file_name_8_p_1(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_ext_opt_deps\'/7", Ext_3, ModuleName_17, (MR_Word) ((MR_Unsigned) 8U), &SearchAuthDirsExt_28, &OptName_29, &_OptNameProposed_30);
          parse_tree__find_module__search_for_file_6_p_0(SearchAuthDirsExt_28, OptName_29, &_SearchDirsNotFound_31, &MaybeOptDir_32);
          if (((MR_tag((MR_Word) MaybeOptDir_32)) == (MR_Integer) 1))
            *HeadVar__5_5 = STATE_VARIABLE_OptDeps_1_38;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_38));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SearchAuthDirsSrc_21;
          MR_Word Result1_23;
          MR_Word _SearchDirsLook_22;

          SearchAuthDirsSrc_21 = parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0((MR_Integer) 7, Globals_1);
          parse_tree__find_module__search_for_module_source_6_p_0(SearchAuthDirsSrc_21, ModuleName_17, &_SearchDirsLook_22, &Result1_23);
          if (((MR_tag((MR_Word) Result1_23)) == (MR_Integer) 1))
          {
            MR_Word SearchAuthDirsExt_47;
            MR_String OptName_48;
            MR_Word MaybeOptDir_51;
            MR_String _OptNameProposed_44;
            MR_Word _SearchDirsNotFound_45;

            parse_tree__file_names__module_name_to_search_file_name_8_p_1(Globals_1, (MR_String) "predicate \140parse_tree.d_file_deps.get_ext_opt_deps\'/7", Ext_3, ModuleName_17, (MR_Word) ((MR_Unsigned) 8U), &SearchAuthDirsExt_47, &OptName_48, &_OptNameProposed_44);
            parse_tree__find_module__search_for_file_6_p_0(SearchAuthDirsExt_47, OptName_48, &_SearchDirsNotFound_45, &MaybeOptDir_51);
            if (((MR_tag((MR_Word) MaybeOptDir_51)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_1_38;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_38));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_1_38));
            }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = parse_tree__d_file_deps__lookup_burdened_module_in_deps_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0(
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
    MR_Word Deps_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word DepsList_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word BurdenedModule_18 = ((MR_Word) ((MR_hl_field(0, Deps_16, 1))));
    MR_Word BurdenedModules_19;
    MR_Word Baggage_23 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_18, 0))));
    MR_Word Errors_25 = ((MR_Word) ((MR_hl_field(0, Baggage_23, 7))));
    MR_Word FatalErrors_26 = ((MR_Word) ((MR_hl_field(0, Errors_25, 0))));
    MR_Word STATE_VARIABLE_IntDepsGraph_1_33;
    MR_Word STATE_VARIABLE_ImpDepsGraph_1_34;

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
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__d_file_deps_scalar_common_3[0]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0_1));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (DepsMap_1));
      }
      parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_27, Var_32, STATE_VARIABLE_IntDepsGraph_0_4, &STATE_VARIABLE_IntDepsGraph_1_33, STATE_VARIABLE_ImpDepsGraph_0_6, &STATE_VARIABLE_ImpDepsGraph_1_34);
    }
    else
    {
      STATE_VARIABLE_ImpDepsGraph_1_34 = STATE_VARIABLE_ImpDepsGraph_0_6;
      STATE_VARIABLE_IntDepsGraph_1_33 = STATE_VARIABLE_IntDepsGraph_0_4;
    }
    parse_tree__d_file_deps__deps_list_to_deps_graph_7_p_0(DepsMap_1, DepsList_17, &BurdenedModules_19, STATE_VARIABLE_IntDepsGraph_1_33, STATE_VARIABLE_IntDepsGraph_5, STATE_VARIABLE_ImpDepsGraph_1_34, STATE_VARIABLE_ImpDepsGraph_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BurdenedModule_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (BurdenedModules_19));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____avail_module_sets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__d_file_deps____Unify____avail_module_sets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps____Compare____avail_module_sets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__d_file_deps____Compare____avail_module_sets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____dep_graphs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__d_file_deps____Unify____dep_graphs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps____Compare____dep_graphs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__d_file_deps____Compare____dep_graphs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__d_file_deps____Unify____maybe_look_for_src_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__d_file_deps____Compare____maybe_look_for_src_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__d_file_deps__init(void)
{
}

void mercury__parse_tree__d_file_deps__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_avail_module_sets_0);
  MR_register_type_ctor_info(&parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_dep_graphs_0);
  MR_register_type_ctor_info(&parse_tree__d_file_deps__parse_tree__d_file_deps__type_ctor_info_maybe_look_for_src_0);
}

void mercury__parse_tree__d_file_deps__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__d_file_deps__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.d_file_deps.
