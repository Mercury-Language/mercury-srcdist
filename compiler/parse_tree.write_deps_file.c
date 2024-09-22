/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2024-09-22
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


// :- module parse_tree.write_deps_file.
// :- implementation.

/*
INIT mercury__parse_tree__write_deps_file__init
ENDINIT
*/

#include "parse_tree.write_deps_file.mih"


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
#include "dir.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_0;

static const MR_EnumFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__enum_ordinal_ordered_maybe_look_for_src_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__enum_name_ordered_maybe_look_for_src_0[2];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_look_for_src_0[2];

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__555__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__516__1_2_p_0(
  MR_Word ModuleName_27,
  MR_Word LambdaHeadVar__1_57);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__173__1_3_p_0(
  MR_Word SourceFileModuleName_9,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__167__1_2_p_0(
  MR_Word BackendLangs_22,
  MR_Word LambdaHeadVar__1_40);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word IntDepsGraph_4,
  MR_Word ImpDepsGraph_5,
  MR_Word IndirectDepsGraph_6,
  MR_Word IndirectOptDepsGraph_7,
  MR_Word TransOptDepsGraph_8,
  MR_Word TransOptOrder_9,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word BurdenedModule_16,
  MR_Word IntDepsGraph_17,
  MR_Word ImpDepsGraph_18,
  MR_Word IndirectDepsGraph_19,
  MR_Word IndirectOptDepsGraph_20,
  MR_Word TransOptDepsGraph_21,
  MR_Word FullTransOptOrder_22,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_fragment_11_p_0(
  MR_Word Globals_12,
  MR_Word BurdenedAugCompUnit_13,
  MR_Word StdDeps_14,
  MR_Word AllDeps_15,
  MR_Word MaybeInclTransOptRule_16,
  MR_String * FileNameD_17,
  MR_String * FileContentsStrD_18,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29);

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10);

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ParseTreeModuleSrc_11,
  MR_Word StdDeps_12,
  MR_Word AllDeps_13,
  MR_Word * IntermodDeps_14,
  MR_Word STATE_VARIABLE_Cache_0_34,
  MR_Word * STATE_VARIABLE_Cache_35);

static void MR_CALL 
parse_tree__write_deps_file__get_plain_trans_opt_deps_10_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_look_for_src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_look_for_src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[6][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[5][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 7U) },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_EnumFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_0 = {
  (MR_String) "do_not_look_for_src",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_1 = {
  (MR_String) "look_for_src",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__enum_ordinal_ordered_maybe_look_for_src_0[2] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_0,
  &parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__enum_name_ordered_maybe_look_for_src_0[2] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_0,
  &parse_tree__write_deps_file__parse_tree__write_deps_file__enum_functor_desc_maybe_look_for_src_0_1
};

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_look_for_src_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_look_for_src_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_look_for_src_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_look_for_src_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_look_for_src",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__enum_name_ordered_maybe_look_for_src_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__enum_ordinal_ordered_maybe_look_for_src_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_look_for_src_0,

};

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__555__1_4_p_0(
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

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__516__1_2_p_0(
  MR_Word ModuleName_27,
  MR_Word LambdaHeadVar__1_57)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_27, LambdaHeadVar__1_57);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__173__1_3_p_0(
  MR_Word SourceFileModuleName_9,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44)
{
  MR_bool succeeded;
  MR_String Var_45;

  *LambdaHeadVar__2_44 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_43, SourceFileModuleName_9);
  succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_44)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_45 = ((MR_String) ((MR_hl_field(0, *LambdaHeadVar__2_44, (MR_Integer) 0))));
    succeeded = (strcmp(Var_45, (MR_String) "mercury") == 0);
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__167__1_2_p_0(
  MR_Word BackendLangs_22,
  MR_Word LambdaHeadVar__1_40)
{
  MR_bool succeeded;
  MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_40, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_41)), BackendLangs_22);
  return succeeded;
}

void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_look_for_src_0_0(
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

MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_look_for_src_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 3))));

  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_8, STATE_VARIABLE_FIMSpecs_0_6, STATE_VARIABLE_FIMSpecs_7);
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13)
{
  switch (MR_tag((MR_Word) IntForOptSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word IntFIMS_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 5))));
        MR_Word ImpFIMS_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 6))));
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
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 0))));

        parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(ParseTreeInt1_8, STATE_VARIABLE_FIMSpecs_0_12, STATE_VARIABLE_FIMSpecs_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word IntFIMS_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 5))));
        MR_Word ImpFIMS_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 6))));
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
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word IntFIMS_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, (MR_Integer) 5))));
  MR_Word ImpFIMS_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, (MR_Integer) 6))));
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
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 6))));
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
parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 6))));
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
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 6))));
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

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word BurdenedModules_14,
  MR_Word IntDepsGraph_15,
  MR_Word ImpDepsGraph_16,
  MR_Word IndirectDepsGraph_17,
  MR_Word IndirectOptDepsGraph_18,
  MR_Word TransOptDepsGraph_19,
  MR_Word TransOptOrder_20)
{
  MR_Word Cache0_22;
  MR_Word _Cache_23;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &Cache0_22);
  parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(ProgressStream_12, Globals_13, BurdenedModules_14, IntDepsGraph_15, ImpDepsGraph_16, IndirectDepsGraph_17, IndirectOptDepsGraph_18, TransOptDepsGraph_19, TransOptOrder_20, Cache0_22, &_Cache_23);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word IntDepsGraph_4,
  MR_Word ImpDepsGraph_5,
  MR_Word IndirectDepsGraph_6,
  MR_Word IndirectOptDepsGraph_7,
  MR_Word TransOptDepsGraph_8,
  MR_Word TransOptOrder_9,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cache_11 = STATE_VARIABLE_Cache_0_10;
    else
    {
      MR_Word BurdenedModule_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BurdenedModules_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_10;

      parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(ProgressStream_1, Globals_2, BurdenedModule_30, IntDepsGraph_4, ImpDepsGraph_5, IndirectDepsGraph_6, IndirectOptDepsGraph_7, TransOptDepsGraph_8, TransOptOrder_9, STATE_VARIABLE_Cache_0_10, &STATE_VARIABLE_Cache_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BurdenedModules_31;
      next_value_of_STATE_VARIABLE_Cache_0_10 = STATE_VARIABLE_Cache_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Cache_0_10 = next_value_of_STATE_VARIABLE_Cache_0_10;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__516__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word BurdenedModule_16,
  MR_Word IntDepsGraph_17,
  MR_Word ImpDepsGraph_18,
  MR_Word IndirectDepsGraph_19,
  MR_Word IndirectOptDepsGraph_20,
  MR_Word TransOptDepsGraph_21,
  MR_Word FullTransOptOrder_22,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52)
{
  MR_bool succeeded;
  MR_Word Baggage_25 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 1))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_26, (MR_Integer) 0))));
  MR_Word IndirectOptDeps_28;
  MR_Word Intermod_29;
  MR_Word DirectDeps_30;
  MR_Word IndirectDeps_31;
  MR_Word TransOptDeps0_34;
  MR_Word TransOptDeps_35;
  MR_Word StdDeps_36;
  MR_Word NotThisModule_37;
  MR_Word TailTransOptOrder_39;
  MR_Word TransOptOrder_42;
  MR_Word TransOptRuleInfo_43;
  MR_Word MaybeInclTransOptRule_44;
  MR_Word ModuleErrors_45;
  MR_Word FatalErrors_46;
  MR_Word Var_56;
  MR_Word TransOptOrderList_41;

  parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectOptDepsGraph_20, ModuleName_27, &IndirectOptDeps_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 520, &Intermod_29);
  switch (Intermod_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IntDeps_32;
        MR_Word ImpDeps_33;

        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_17, ModuleName_27, &IntDeps_32);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_18, ModuleName_27, &ImpDeps_33);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_32, ImpDeps_33, &DirectDeps_30);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_19, ModuleName_27, &IndirectDeps_31);
      }
      break;
    case (MR_Integer) 1:
      {
        DirectDeps_30 = IndirectOptDeps_28;
        IndirectDeps_31 = IndirectOptDeps_28;
      }
      break;
  }
  parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(TransOptDepsGraph_21, ModuleName_27, &TransOptDeps0_34);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), TransOptDeps0_34, &TransOptDeps_35);
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (TransOptDeps_35));
  }
  {
    StdDeps_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdDeps_36, 0) = ((MR_Box) (DirectDeps_30));
    MR_hl_field(0, StdDeps_36, 1) = ((MR_Box) (IndirectDeps_31));
    MR_hl_field(0, StdDeps_36, 2) = ((MR_Box) (IndirectOptDeps_28));
    MR_hl_field(0, StdDeps_36, 3) = ((MR_Box) (Var_56));
  }
  {
    NotThisModule_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NotThisModule_37, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
    MR_hl_field(0, NotThisModule_37, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1));
    MR_hl_field(0, NotThisModule_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, NotThisModule_37, 3) = ((MR_Box) (ModuleName_27));
  }
  mercury__list__drop_while_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NotThisModule_37, FullTransOptOrder_22, &TailTransOptOrder_39);
  succeeded = (TailTransOptOrder_39 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TransOptOrderList_41 = ((MR_Word) ((MR_hl_field(1, TailTransOptOrder_39, (MR_Integer) 1))));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrderList_41, &TransOptOrder_42);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &TransOptOrder_42);
  {
    TransOptRuleInfo_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransOptRuleInfo_43, 0) = ((MR_Box) (TransOptOrder_42));
  }
  {
    MaybeInclTransOptRule_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeInclTransOptRule_44, 0) = ((MR_Box) (TransOptRuleInfo_43));
  }
  ModuleErrors_45 = ((MR_Word) ((MR_hl_field(0, Baggage_25, (MR_Integer) 7))));
  FatalErrors_46 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_45, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_46);
  if (succeeded)
  {
    MR_Word AugCompUnit_47;
    MR_Word BurdenedAugCompUnit_48;
    MR_String FileNameD_49;
    MR_String FileContentsStrD_50;

    parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_26, &AugCompUnit_47);
    {
      BurdenedAugCompUnit_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BurdenedAugCompUnit_48, 0) = ((MR_Box) (Baggage_25));
      MR_hl_field(0, BurdenedAugCompUnit_48, 1) = ((MR_Box) (AugCompUnit_47));
    }
    parse_tree__write_deps_file__generate_d_file_fragment_11_p_0(Globals_15, BurdenedAugCompUnit_48, StdDeps_36, IndirectOptDeps_28, MaybeInclTransOptRule_44, &FileNameD_49, &FileContentsStrD_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
    parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_14, Globals_15, FileNameD_49, FileContentsStrD_50);
  }
  else
    *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__555__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
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
      MR_hl_field(0, AddKeyDep_9, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(0, AddKeyDep_9, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(0, AddKeyDep_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_9, 3) = ((MR_Box) (DepsGraph_4));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[2]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), AddKeyDep_9, DepsKeysSet_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_14);
    DependenciesList_14 = ((MR_Word) (conv1_DependenciesList_14));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_14, Dependencies_6);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Dependencies_6);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_fragment_11_p_0(
  MR_Word Globals_12,
  MR_Word BurdenedAugCompUnit_13,
  MR_Word StdDeps_14,
  MR_Word AllDeps_15,
  MR_Word MaybeInclTransOptRule_16,
  MR_String * FileNameD_17,
  MR_String * FileContentsStrD_18,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29)
{
  MR_Word AugCompUnit_22 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_13, (MR_Integer) 1))));
  MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_22, (MR_Integer) 0))));
  MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_23, (MR_Integer) 0))));
  MR_Word IntermodDeps_26;
  MR_Word MmakeFileD_27;
  MR_Word STATE_VARIABLE_Cache_36_36;
  MR_String _FileNameDProposed_25;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file_fragment\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_3[0])), ModuleName_24, FileNameD_17, &_FileNameDProposed_25);
  parse_tree__write_deps_file__construct_intermod_deps_9_p_0(Globals_12, ParseTreeModuleSrc_23, StdDeps_14, AllDeps_15, &IntermodDeps_26, STATE_VARIABLE_Cache_0_28, &STATE_VARIABLE_Cache_36_36);
  parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0(Globals_12, BurdenedAugCompUnit_13, StdDeps_14, IntermodDeps_26, AllDeps_15, MaybeInclTransOptRule_16, &MmakeFileD_27, STATE_VARIABLE_Cache_36_36, STATE_VARIABLE_Cache_29);
  *FileContentsStrD_18 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileD_27);
}

void MR_CALL 
parse_tree__write_deps_file__write_d_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word BurdenedAugCompUnit_11,
  MR_Word StdDeps_12,
  MR_Word AllDeps_13,
  MR_Word MaybeInclTransOptRule_14)
{
  MR_Word Cache0_16;
  MR_String FileNameD_17;
  MR_String FileContentsStrD_18;
  MR_Word AugCompUnit_26;
  MR_Word ParseTreeModuleSrc_27;
  MR_Word ModuleName_28;
  MR_Word IntermodDeps_30;
  MR_Word MmakeFileD_31;
  MR_Word STATE_VARIABLE_Cache_36_36;
  MR_String _FileNameDProposed_29;
  MR_Word _Cache_19;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &Cache0_16);
  AugCompUnit_26 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_11, (MR_Integer) 1))));
  ParseTreeModuleSrc_27 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_26, (MR_Integer) 0))));
  ModuleName_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_27, (MR_Integer) 0))));
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file_fragment\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_3[0])), ModuleName_28, &FileNameD_17, &_FileNameDProposed_29);
  parse_tree__write_deps_file__construct_intermod_deps_9_p_0(Globals_10, ParseTreeModuleSrc_27, StdDeps_12, AllDeps_13, &IntermodDeps_30, Cache0_16, &STATE_VARIABLE_Cache_36_36);
  parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0(Globals_10, BurdenedAugCompUnit_11, StdDeps_12, IntermodDeps_30, AllDeps_13, MaybeInclTransOptRule_14, &MmakeFileD_31, STATE_VARIABLE_Cache_36_36, &_Cache_19);
  FileContentsStrD_18 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileD_31);
  parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_9, Globals_10, FileNameD_17, FileContentsStrD_18);
}

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10)
{
  MR_Word TmpFileNameDResult_12;
  MR_String Var_30;

  Var_30 = mercury__dir__dirname_1_f_0(FileNameD_9);
  mercury__io__file__make_temp_file_6_p_0(Var_30, (MR_String) "tmp_d", (MR_String) "", &TmpFileNameDResult_12);
  if (((MR_tag((MR_Word) TmpFileNameDResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, TmpFileNameDResult_12, (MR_Integer) 0))));
    MR_String Message_14;
    MR_String Var_35;

    Var_35 = mercury__io__error_message_1_f_0(Error_13);
    Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_35);
    libs__file_util__report_error_4_p_0(ProgressStream_7, Message_14);
  }
  else
  {
    MR_String TmpFileNameD_15 = ((MR_String) ((MR_hl_field(0, TmpFileNameDResult_12, (MR_Integer) 0))));
    MR_Word Verbose_16;
    MR_Word Result_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 76, &Verbose_16);
    switch (Verbose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "% Writing auto-dependency file \140");
          mercury__io__write_string_4_p_0(ProgressStream_7, FileNameD_9);
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'...");
          mercury__io__flush_output_3_p_0(ProgressStream_7);
        }
        break;
    }
    mercury__io__open_output_4_p_0(TmpFileNameD_15, &Result_17);
    if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(1, Result_17, (MR_Integer) 0))));
      MR_String IOErrorMessage_19;
      MR_String Message_86;
      MR_String Var_106;
      MR_String Var_107;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_19);
      Var_107 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_106);
      Message_86 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_107);
      libs__file_util__report_error_4_p_0(ProgressStream_7, Message_86);
    }
    else
    {
      MR_Word DepStream_20 = ((MR_Word) ((MR_hl_field(0, Result_17, (MR_Integer) 0))));
      MR_Word FirstRenameResult_21;

      mercury__io__write_string_4_p_0(DepStream_20, FileContentsStrD_10);
      mercury__io__close_output_3_p_0(DepStream_20);
      mercury__io__file__rename_file_5_p_0(TmpFileNameD_15, FileNameD_9, &FirstRenameResult_21);
      if ((FirstRenameResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " done.\n");
      else
      {
        MR_Word RemoveResult_23;

        mercury__io__file__remove_file_4_p_0(FileNameD_9, &RemoveResult_23);
        if ((RemoveResult_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SecondRenameResult_26;

          mercury__io__file__rename_file_5_p_0(TmpFileNameD_15, FileNameD_9, &SecondRenameResult_26);
          if ((SecondRenameResult_26 == (MR_Word) ((MR_Unsigned) 0U)))
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " done.\n");
          else
          {
            MR_Word Error5_27 = ((MR_Word) ((MR_hl_field(1, SecondRenameResult_26, (MR_Integer) 0))));
            MR_String Message_88;
            MR_String ErrorMsg_89;
            MR_String Var_95;
            MR_String Var_96;
            MR_String Var_98;
            MR_String Var_99;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
            mercury__io__error_message_2_p_0(Error5_27, &ErrorMsg_89);
            Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_89);
            Var_96 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_95);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_96);
            Var_99 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_98);
            Message_88 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_99);
            libs__file_util__report_error_4_p_0(ProgressStream_7, Message_88);
          }
        }
        else
        {
          MR_Word Error4_24 = ((MR_Word) ((MR_hl_field(1, RemoveResult_23, (MR_Integer) 0))));
          MR_String ErrorMsg_25;
          MR_String Message_87;
          MR_String Var_102;
          MR_String Var_103;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
          mercury__io__error_message_2_p_0(Error4_24, &ErrorMsg_25);
          Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_25);
          Var_103 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_102);
          Message_87 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_103);
          libs__file_util__report_error_4_p_0(ProgressStream_7, Message_87);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ParseTreeModuleSrc_11,
  MR_Word StdDeps_12,
  MR_Word AllDeps_13,
  MR_Word * IntermodDeps_14,
  MR_Word STATE_VARIABLE_Cache_0_34,
  MR_Word * STATE_VARIABLE_Cache_35)
{
  MR_bool succeeded;
  MR_Word UsePlainOpt_17;
  MR_Word Intermod_18;
  MR_Word MaybeMhDeps_19;
  MR_Word MaybeOptFileDeps_33;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 522, &UsePlainOpt_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 520, &Intermod_18);
  switch (Intermod_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeMhDeps_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MaybeMhDeps_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMhDeps_19, 0) = ((MR_Box) (AllDeps_13));
      }
      break;
  }
  succeeded = (Intermod_18 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (UsePlainOpt_17 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word UseTransOpt_20;
    MR_Word TransOpt_21;
    MR_Word IntermodDirs_22;
    MR_Word LookForSrc_23;
    MR_Word DirectDeps_24;
    MR_Word ModuleName_28;
    MR_Word BaseDeps_29;
    MR_Word PlainOptDeps_30;
    MR_Word MaybeTransOptDeps_32;
    MR_Word Var_43;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 523, &UseTransOpt_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 524, &TransOpt_21);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 711, &IntermodDirs_22);
    switch (UseTransOpt_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LookForSrc_23 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        LookForSrc_23 = (MR_Integer) 0;
        break;
    }
    DirectDeps_24 = ((MR_Word) ((MR_hl_field(0, StdDeps_12, (MR_Integer) 0))));
    ModuleName_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 0))));
    Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DirectDeps_24);
    {
      BaseDeps_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseDeps_29, 0) = ((MR_Box) (ModuleName_28));
      MR_hl_field(1, BaseDeps_29, 1) = ((MR_Box) (Var_43));
    }
    succeeded = (TransOpt_21 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseTransOpt_20 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOptDeps_31;

      parse_tree__write_deps_file__get_plain_trans_opt_deps_10_p_0(Globals_10, LookForSrc_23, IntermodDirs_22, BaseDeps_29, &PlainOptDeps_30, &TransOptDeps_31, STATE_VARIABLE_Cache_0_34, STATE_VARIABLE_Cache_35);
      {
        MaybeTransOptDeps_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTransOptDeps_32, 0) = ((MR_Box) (TransOptDeps_31));
      }
    }
    else
    {
      parse_tree__write_deps_file__get_ext_opt_deps_8_p_0(Globals_10, LookForSrc_23, IntermodDirs_22, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[3])), BaseDeps_29, &PlainOptDeps_30);
      MaybeTransOptDeps_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Cache_35 = STATE_VARIABLE_Cache_0_34;
    }
    {
      MaybeOptFileDeps_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeOptFileDeps_33, 0) = ((MR_Box) (PlainOptDeps_30));
      MR_hl_field(1, MaybeOptFileDeps_33, 1) = ((MR_Box) (MaybeTransOptDeps_32));
    }
  }
  else
  {
    MaybeOptFileDeps_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_35 = STATE_VARIABLE_Cache_0_34;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *IntermodDeps_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeMhDeps_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeOptFileDeps_33));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_plain_trans_opt_deps_10_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
  }
  else
  {
    MR_Word Dep_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Deps_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OptDeps_47_47;
    MR_Word STATE_VARIABLE_TransOptDeps_48_48;
    MR_Word STATE_VARIABLE_Cache_49_49;

    parse_tree__write_deps_file__get_plain_trans_opt_deps_10_p_0(Globals_1, LookForSrc_2, IntermodDirs_3, Deps_24, &STATE_VARIABLE_OptDeps_47_47, &STATE_VARIABLE_TransOptDeps_48_48, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_49_49);
    switch (LookForSrc_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_33;
          MR_Word MaybeOptDir_34;
          MR_String TransOptName_37;
          MR_Word MaybeTransOptDir_38;
          MR_Word STATE_VARIABLE_Cache_56_56;

          parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_plain_trans_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[3])), Dep_23, &OptName_33, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_56_56);
          parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_33, &MaybeOptDir_34);
          if (((MR_tag((MR_Word) MaybeOptDir_34)) == (MR_Integer) 1))
            *HeadVar__5_5 = STATE_VARIABLE_OptDeps_47_47;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
            }
          parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_plain_trans_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[4])), Dep_23, &TransOptName_37, STATE_VARIABLE_Cache_56_56, STATE_VARIABLE_Cache_8);
          parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_37, &MaybeTransOptDir_38);
          if (((MR_tag((MR_Word) MaybeTransOptDir_38)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_48_48;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeFileName_29;

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_23, &MaybeFileName_29);
          if (((MR_tag((MR_Word) MaybeFileName_29)) == (MR_Integer) 1))
          {
            MR_String OptName_66;
            MR_Word MaybeOptDir_67;
            MR_String TransOptName_68;
            MR_Word MaybeTransOptDir_69;
            MR_Word STATE_VARIABLE_Cache_56_72;

            parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_plain_trans_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[3])), Dep_23, &OptName_66, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_56_72);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_66, &MaybeOptDir_67);
            if (((MR_tag((MR_Word) MaybeOptDir_67)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_47_47;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
              }
            parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_plain_trans_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[4])), Dep_23, &TransOptName_68, STATE_VARIABLE_Cache_56_72, STATE_VARIABLE_Cache_8);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_68, &MaybeTransOptDir_69);
            if (((MR_tag((MR_Word) MaybeTransOptDir_69)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_48_48;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
              }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
            }
            *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_49_49;
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__get_ext_opt_deps_8_p_0(
  MR_Word Globals_1,
  MR_Word LookForSrc_2,
  MR_Word IntermodDirs_3,
  MR_Word Ext_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Dep_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Deps_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OptDeps_36_36;

    parse_tree__write_deps_file__get_ext_opt_deps_8_p_0(Globals_1, LookForSrc_2, IntermodDirs_3, Ext_4, Deps_21, &STATE_VARIABLE_OptDeps_36_36);
    switch (LookForSrc_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_28;
          MR_Word MaybeOptDir_30;
          MR_String _OptNameProposed_29;

          parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_ext_opt_deps\'/8", Ext_4, Dep_20, &OptName_28, &_OptNameProposed_29);
          parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_28, &MaybeOptDir_30);
          if (((MR_tag((MR_Word) MaybeOptDir_30)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_OptDeps_36_36;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_36_36));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result1_24;

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_20, &Result1_24);
          if (((MR_tag((MR_Word) Result1_24)) == (MR_Integer) 1))
          {
            MR_String OptName_42;
            MR_Word MaybeOptDir_44;
            MR_String _OptNameProposed_41;

            parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_ext_opt_deps\'/8", Ext_4, Dep_20, &OptName_42, &_OptNameProposed_41);
            parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_42, &MaybeOptDir_44);
            if (((MR_tag((MR_Word) MaybeOptDir_44)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_OptDeps_36_36;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_36_36));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_36_36));
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv10_LambdaHeadVar__2_44;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__173__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_44);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_44));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_std_deps__167__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_FIMSpecs_13;

  parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_FIMSpecs_13);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FIMSpecs_13));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_FIMSpecs_7;

  parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_FIMSpecs_7);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_FIMSpecs_7));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMSpecs_9));
}

MR_Word MR_CALL 
parse_tree__write_deps_file__construct_std_deps_2_f_0(
  MR_Word Globals_4,
  MR_Word BurdenedAugCompUnit_5)
{
  MR_bool succeeded;
  MR_Word StdDeps_6;
  MR_Word Baggage_7 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_5, (MR_Integer) 0))));
  MR_Word AugCompUnit_8 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_5, (MR_Integer) 1))));
  MR_Word SourceFileModuleName_9 = ((MR_Word) ((MR_hl_field(0, Baggage_7, (MR_Integer) 2))));
  MR_Word ParseTreeModuleSrc_10 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_11 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_12 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_13 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 3))));
  MR_Word PlainOpts_14 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 4))));
  MR_Word IntForOptSpecs_16 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_8, (MR_Integer) 6))));
  MR_Word DirectDeps_19;
  MR_Word IndirectDeps_20;
  MR_Word FIMSpecs_21;
  MR_Word BackendLangs_22;
  MR_Word IsBackendFIM_23;
  MR_Word ForeignImportedModuleNamesSet_27;
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_FIMSpecs_29_29;
  MR_Word STATE_VARIABLE_FIMSpecs_31_31;
  MR_Word STATE_VARIABLE_FIMSpecs_33_33;
  MR_Word STATE_VARIABLE_FIMSpecs_35_35;
  MR_Word STATE_VARIABLE_FIMSpecs_37_37;
  MR_Word STATE_VARIABLE_FIMSpecs_39_39;
  MR_Word Var_42;
  MR_Box conv1_STATE_VARIABLE_FIMSpecs_31_31;
  MR_Box conv3_STATE_VARIABLE_FIMSpecs_33_33;
  MR_Box conv5_STATE_VARIABLE_FIMSpecs_35_35;
  MR_Box conv7_STATE_VARIABLE_FIMSpecs_37_37;
  MR_Box conv9_STATE_VARIABLE_FIMSpecs_39_39;

  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_28, &DirectDeps_19);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), IndirectInt2Specs_13, &IndirectDeps_20);
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_10, &STATE_VARIABLE_FIMSpecs_29_29);
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[2]), AncestorIntSpecs_11, ((MR_Box) (STATE_VARIABLE_FIMSpecs_29_29)), &conv1_STATE_VARIABLE_FIMSpecs_31_31);
  STATE_VARIABLE_FIMSpecs_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_FIMSpecs_31_31));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), DirectInt1Specs_12, ((MR_Box) (STATE_VARIABLE_FIMSpecs_31_31)), &conv3_STATE_VARIABLE_FIMSpecs_33_33);
  STATE_VARIABLE_FIMSpecs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_FIMSpecs_33_33));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[4]), IndirectInt2Specs_13, ((MR_Box) (STATE_VARIABLE_FIMSpecs_33_33)), &conv5_STATE_VARIABLE_FIMSpecs_35_35);
  STATE_VARIABLE_FIMSpecs_35_35 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_35_35));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[5]), PlainOpts_14, ((MR_Box) (STATE_VARIABLE_FIMSpecs_35_35)), &conv7_STATE_VARIABLE_FIMSpecs_37_37);
  STATE_VARIABLE_FIMSpecs_37_37 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_37_37));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[6]), IntForOptSpecs_16, ((MR_Box) (STATE_VARIABLE_FIMSpecs_37_37)), &conv9_STATE_VARIABLE_FIMSpecs_39_39);
  STATE_VARIABLE_FIMSpecs_39_39 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_39_39));
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_4, &BackendLangs_22);
  {
    IsBackendFIM_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IsBackendFIM_23, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, IsBackendFIM_23, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_6));
    MR_hl_field(0, IsBackendFIM_23, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, IsBackendFIM_23, 3) = ((MR_Box) (BackendLangs_22));
  }
  mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_23, STATE_VARIABLE_FIMSpecs_39_39, &FIMSpecs_21);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_std_deps_2_f_0_7));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (SourceFileModuleName_9));
  }
  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_42, FIMSpecs_21, &ForeignImportedModuleNamesSet_27);
  {
    StdDeps_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdDeps_6, 0) = ((MR_Box) (DirectDeps_19));
    MR_hl_field(0, StdDeps_6, 1) = ((MR_Box) (IndirectDeps_20));
    MR_hl_field(0, StdDeps_6, 2) = ((MR_Box) (ForeignImportedModuleNamesSet_27));
    MR_hl_field(0, StdDeps_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return StdDeps_6;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_look_for_src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____maybe_look_for_src_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_look_for_src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____maybe_look_for_src_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_look_for_src_0);
}

void mercury__parse_tree__write_deps_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_deps_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_deps_file.
