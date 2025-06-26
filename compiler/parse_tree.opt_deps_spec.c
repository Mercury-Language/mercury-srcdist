/*
** Automatically generated from `opt_deps_spec.m'
** by the Mercury compiler,
** version rotd-2025-06-26
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


// :- module parse_tree.opt_deps_spec.
// :- implementation.

/*
INIT mercury__parse_tree__opt_deps_spec__init
ENDINIT
*/

#include "parse_tree.opt_deps_spec.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__opt_deps_spec__pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__opt_deps_spec__list__ti_list_1pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_0[2];

static const MR_DuFunctorDesc parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0;

static const MR_PseudoTypeInfo parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_1[2];

static const MR_DuFunctorDesc parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_name_ordered_allow_or_disallow_trans_opt_deps_0[2];

static const MR_Integer parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__functor_number_map_allow_or_disallow_trans_opt_deps_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__opt_deps_spec__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0;

static void MR_CALL 
parse_tree__opt_deps_spec__IntroducedFrom__pred__compute_opt_trans_opt_deps_graph__148__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51);

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__opt_deps_spec__write_module_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_module_disallow_deps_5_p_0(
  MR_Word DisallowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_module_allow_deps_5_p_0(
  MR_Word AllowSet_6,
  MR_Word SourceKey_7,
  MR_Word TargetKey_8,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0(
  MR_Word SourceKey_6,
  MR_Word EdgesToRemove_7,
  MR_Word * EdgesToRemove_3,
  MR_Word STATE_VARIABLE_Graph_0_19,
  MR_Word * STATE_VARIABLE_Graph_20);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_9,
  MR_Word * STATE_VARIABLE_EdgesToRemove_10,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
parse_tree__opt_deps_spec__report_unknown_module_names_in_allow_disallow_5_p_0(
  MR_Word KnownModules_6,
  MR_Word Module_7,
  MR_Word AllowOrDisallow_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__opt_deps_spec__report_unknown_module_names_in_module_names_7_p_0(
  MR_Word KnownModules_1,
  MR_String AoD_2,
  MR_Integer N_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__output_module_order_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__output_module_order_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word ExtCur_11,
  MR_Word DepsOrdering_12);

static void MR_CALL 
parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_file_9_p_0(
  MR_String FileName_10,
  MR_String Contents_11,
  MR_Integer ContentsLen_12,
  MR_Word STATE_VARIABLE_Pos_0_24,
  MR_Word * STATE_VARIABLE_Pos_25,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_26,
  MR_Word * STATE_VARIABLE_EdgesToRemove_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_term_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_36,
  MR_Word * STATE_VARIABLE_EdgesToRemove_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_list_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_ModuleNameCord_0_15,
  MR_Word * STATE_VARIABLE_ModuleNameCord_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_names_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleNameCord_0_3,
  MR_Word * STATE_VARIABLE_ModuleNameCord_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_1[38][2];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_6[4][8];

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_7[1][5];




static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_1[38][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_2[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: cannot open"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Ignoring"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "due to the presence of errors."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[10])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Read error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: duplicate entry for source module"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The original entry is here."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[10])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "module_allow_deps(module_name, module_name_list)"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "module_disallow_deps(module_name, module_name_list)"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a list, got"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a module name, got"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the module name"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not occur in the dependency graph."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[10])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module name"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the same as the"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module name."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[10])))
  },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 42U)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_4[0])),
    ((MR_Box) (parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_6[1])),
    ((MR_Box) (parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_7[0])),
    ((MR_Box) (parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_6[2])),
    ((MR_Box) (parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "builtin")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "private_builtin")) },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_6[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__opt_deps_spec_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__opt_deps_spec__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__opt_deps_spec__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__opt_deps_spec__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__opt_deps_spec__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__opt_deps_spec__pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__opt_deps_spec__list__ti_list_1pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__opt_deps_spec__pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__opt_deps_spec__list__ti_list_1pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0 = {
  (MR_String) "module_allow_deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__opt_deps_spec__list__ti_list_1pair__ti_pair_2term_context__type_ctor_info_term_context_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1 = {
  (MR_String) "module_disallow_deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__field_types_allow_or_disallow_trans_opt_deps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0[1] = { &parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1[1] = { &parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1 };

static const MR_DuPtagLayout parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_stag_ordered_allow_or_disallow_trans_opt_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_name_ordered_allow_or_disallow_trans_opt_deps_0[2] = {
  &parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_0,
  &parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_functor_desc_allow_or_disallow_trans_opt_deps_0_1
};

static const MR_Integer parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__functor_number_map_allow_or_disallow_trans_opt_deps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0_10001)),
  ((MR_Box) (parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0_10001)),
  (MR_String) "parse_tree.opt_deps_spec",
  (MR_String) "allow_or_disallow_trans_opt_deps",
  { parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_name_ordered_allow_or_disallow_trans_opt_deps_0 },
  { parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__du_ptag_ordered_allow_or_disallow_trans_opt_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__functor_number_map_allow_or_disallow_trans_opt_deps_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__opt_deps_spec__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_trans_opt_deps_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0_10001)),
  ((MR_Box) (parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0_10001)),
  (MR_String) "parse_tree.opt_deps_spec",
  (MR_String) "trans_opt_deps_spec",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__opt_deps_spec__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__opt_deps_spec__IntroducedFrom__pred__compute_opt_trans_opt_deps_graph__148__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_50, HeadVar__2_51);
}

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word SubResult1_6;

      mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_11;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
    succeeded = (SubResult1_11 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_11;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_12)), ((MR_Box) (ArgY2_13)));
  }
}

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__opt_deps_spec__write_module_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_sym_name__write_escaped_sym_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__opt_deps_spec__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6)
{
  MR_Word SCC_8;
  MR_Word Var_12;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SCC0_6, &SCC_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_5[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__opt_deps_spec__write_module_scc_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Stream_5));
  }
  mercury__io__write_list_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Stream_5, SCC_8, (MR_String) "\n", Var_12);
}

static void MR_CALL 
parse_tree__opt_deps_spec__apply_module_disallow_deps_5_p_0(
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
parse_tree__opt_deps_spec__apply_module_allow_deps_5_p_0(
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
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Graph_12;

  parse_tree__opt_deps_spec__apply_module_disallow_deps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Graph_12;

  parse_tree__opt_deps_spec__apply_module_allow_deps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0(
  MR_Word SourceKey_6,
  MR_Word EdgesToRemove_7,
  MR_Word * EdgesToRemove_3,
  MR_Word STATE_VARIABLE_Graph_0_19,
  MR_Word * STATE_VARIABLE_Graph_20)
{
  MR_bool succeeded;
  MR_Word SourceName_9;
  MR_Box conv0_SourceName_9;
  MR_Word AllowOrDisallow_10;
  MR_Box conv1_AllowOrDisallow_10;

  *EdgesToRemove_3 = EdgesToRemove_7;
  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_19, SourceKey_6, &conv0_SourceName_9);
  SourceName_9 = ((MR_Word) (conv0_SourceName_9));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0), EdgesToRemove_7, ((MR_Box) (SourceName_9)), &conv1_AllowOrDisallow_10);
  if (succeeded)
  {
    AllowOrDisallow_10 = ((MR_Word) (conv1_AllowOrDisallow_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TargetSet_11;

    mercury__digraph__lookup_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Graph_0_19, SourceKey_6, &TargetSet_11);
    if (((MR_tag((MR_Word) AllowOrDisallow_10)) == (MR_Integer) 0))
    {
      MR_Word AllowList_13 = ((MR_Word) ((MR_hl_field(0, AllowOrDisallow_10, 1))));
      MR_Word AllowModuleList_14;
      MR_Word AllowSet_15;
      MR_Word Var_21;
      MR_Box conv3_STATE_VARIABLE_Graph_20;

      mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllowList_13, &AllowModuleList_14);
      mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllowModuleList_14, &AllowSet_15);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_6[3]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (AllowSet_15));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (SourceKey_6));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[6]), Var_21, TargetSet_11, ((MR_Box) (STATE_VARIABLE_Graph_0_19)), &conv3_STATE_VARIABLE_Graph_20);
      *STATE_VARIABLE_Graph_20 = ((MR_Word) (conv3_STATE_VARIABLE_Graph_20));
    }
    else
    {
      MR_Word DisallowList_16 = ((MR_Word) ((MR_hl_field(1, AllowOrDisallow_10, 1))));
      MR_Word DisallowModuleList_17;
      MR_Word DisallowSet_18;
      MR_Word Var_23;
      MR_Box conv5_STATE_VARIABLE_Graph_20;

      mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DisallowList_16, &DisallowModuleList_17);
      mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DisallowModuleList_17, &DisallowSet_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_6[3]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0_2));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (DisallowSet_18));
        MR_hl_field(0, Var_23, 4) = ((MR_Box) (SourceKey_6));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[6]), Var_23, TargetSet_11, ((MR_Box) (STATE_VARIABLE_Graph_0_19)), &conv5_STATE_VARIABLE_Graph_20);
      *STATE_VARIABLE_Graph_20 = ((MR_Word) (conv5_STATE_VARIABLE_Graph_20));
    }
  }
  else
    *STATE_VARIABLE_Graph_20 = STATE_VARIABLE_Graph_0_19;
}

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_EdgesToRemove_3;
  MR_Word conv0_STATE_VARIABLE_Graph_20;

  parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_for_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_EdgesToRemove_3, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Graph_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_EdgesToRemove_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_20));
}

static void MR_CALL 
parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_9,
  MR_Word * STATE_VARIABLE_EdgesToRemove_10,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  MR_Box conv3_STATE_VARIABLE_EdgesToRemove_10;
  MR_Box conv2_STATE_VARIABLE_Graph_12;

  mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[1]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[6]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[6]), SCC_6, ((MR_Box) (STATE_VARIABLE_EdgesToRemove_0_9)), &conv3_STATE_VARIABLE_EdgesToRemove_10, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv2_STATE_VARIABLE_Graph_12);
  *STATE_VARIABLE_EdgesToRemove_10 = ((MR_Word) (conv3_STATE_VARIABLE_EdgesToRemove_10));
  *STATE_VARIABLE_Graph_12 = ((MR_Word) (conv2_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__opt_deps_spec__report_unknown_module_names_in_allow_disallow_5_p_0(
  MR_Word KnownModules_6,
  MR_Word Module_7,
  MR_Word AllowOrDisallow_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_bool succeeded;
  MR_Word Context_10;
  MR_Word TargetModules_11;
  MR_String AoD_12;
  MR_Word STATE_VARIABLE_Specs_1_30;
  MR_Word Var_32;

  if (((MR_tag((MR_Word) AllowOrDisallow_8)) == (MR_Integer) 0))
  {
    Context_10 = ((MR_Word) ((MR_hl_field(0, AllowOrDisallow_8, 0))));
    TargetModules_11 = ((MR_Word) ((MR_hl_field(0, AllowOrDisallow_8, 1))));
    AoD_12 = (MR_String) "allowed";
  }
  else
  {
    Context_10 = ((MR_Word) ((MR_hl_field(1, AllowOrDisallow_8, 0))));
    TargetModules_11 = ((MR_Word) ((MR_hl_field(1, AllowOrDisallow_8, 1))));
    AoD_12 = (MR_String) "disallowed";
  }
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), KnownModules_6, ((MR_Box) (Module_7)));
  if (succeeded)
    STATE_VARIABLE_Specs_1_30 = STATE_VARIABLE_Specs_0_15;
  else
  {
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (Module_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[32])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[30])));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.report_unknown_module_names_in_allow_disallow\'/5"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      STATE_VARIABLE_Specs_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_30, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_30, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  parse_tree__opt_deps_spec__report_unknown_module_names_in_module_names_7_p_0(KnownModules_6, AoD_12, (MR_Integer) 1, TargetModules_11, Var_32, STATE_VARIABLE_Specs_1_30, STATE_VARIABLE_Specs_16);
}

static void MR_CALL 
parse_tree__opt_deps_spec__report_unknown_module_names_in_module_names_7_p_0(
  MR_Word KnownModules_1,
  MR_String AoD_2,
  MR_Integer N_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word Context_18;
      MR_Word Module_19;
      MR_Word ContextModules_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word STATE_VARIABLE_OrdMap_1_31;
      MR_Word STATE_VARIABLE_Specs_1_59;
      MR_Integer Var_81;
      MR_Integer next_value_of_N_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      Context_18 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
      Module_19 = ((MR_Word) ((MR_hl_field(0, Var_30, 1))));
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), KnownModules_1, ((MR_Box) (Module_19)));
      if (succeeded)
      {
        MR_Word MaybeOldN_23;

        mercury__map__search_insert_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Module_19)), ((MR_Box) (N_3)), &MaybeOldN_23, HeadVar__5_5, &STATE_VARIABLE_OrdMap_1_31);
        if ((MaybeOldN_23 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_1_59 = STATE_VARIABLE_Specs_0_6;
        else
        {
          MR_Integer OldN_24 = ((MR_Integer) ((MR_hl_field(1, MaybeOldN_23, 0))));
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;

          {
            Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_35, 1) = ((MR_Box) (N_3));
          }
          {
            Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_37, 1) = ((MR_Box) (AoD_2));
          }
          {
            Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_42, 1) = ((MR_Box) (Module_19));
          }
          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (OldN_24));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_37));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[37])));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[35])));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[34])));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
          }
          {
            Pieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[33])));
            MR_hl_field(1, Pieces_25, 1) = ((MR_Box) (Var_34));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.report_unknown_module_names_in_module_names\'/7"));
            MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_18));
            MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            STATE_VARIABLE_Specs_1_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
          }
        }
      }
      else
      {
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Pieces_84;
        MR_Word Spec_85;

        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (N_3));
        }
        {
          Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_65, 1) = ((MR_Box) (AoD_2));
        }
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (Module_19));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[32])));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[34])));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
        }
        {
          Pieces_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[33])));
          MR_hl_field(1, Pieces_84, 1) = ((MR_Box) (Var_62));
        }
        {
          Spec_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.report_unknown_module_names_in_module_names\'/7"));
          MR_hl_field(0, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, Spec_85, 3) = ((MR_Box) (Context_18));
          MR_hl_field(0, Spec_85, 4) = ((MR_Box) (Pieces_84));
        }
        {
          STATE_VARIABLE_Specs_1_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 0) = ((MR_Box) (Spec_85));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
        STATE_VARIABLE_OrdMap_1_31 = HeadVar__5_5;
      }
      Var_81 = (MR_Integer) ((MR_Unsigned) N_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_3 = Var_81;
      next_value_of_HeadVar__4_4 = ContextModules_20;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_OrdMap_1_31;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_1_59;
      N_3 = next_value_of_N_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_51;

  parse_tree__opt_deps_spec__IntroducedFrom__pred__compute_opt_trans_opt_deps_graph__148__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_51);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_51));
}

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_EdgesToRemove_10;
  MR_Word conv2_STATE_VARIABLE_Graph_12;

  parse_tree__opt_deps_spec__apply_trans_opt_deps_spec_in_scc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_EdgesToRemove_10, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_EdgesToRemove_10));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_16;

  parse_tree__opt_deps_spec__report_unknown_module_names_in_allow_disallow_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__opt_deps_spec__write_module_scc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word ImpDepsGraph_15,
  MR_Word * IndirectOptDepsGraph_16,
  MR_Word * TransOptDepsGraph_17,
  MR_Word * TransOptDepsOrdering_18,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word OutputOrder_21;
  MR_Word MaybeSpecFileName_23;
  MR_Word TransOptDepsOrdering0_30;
  MR_Word TransOptDepsOrdering1_31;

  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 455, &OutputOrder_21);
  switch (OutputOrder_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ImpDepsOrdering_22;
        MR_String OrdFileName_55;
        MR_Word Verbose_56;
        MR_String CreatingMsg_57;
        MR_Word OrdResult_58;
        MR_String Var_76;

        ImpDepsOrdering_22 = mercury__digraph__return_sccs_in_from_to_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_15);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 11, ModuleName_14, &OrdFileName_55);
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 131, &Verbose_56);
        Var_76 = mercury__string__f_43_43_2_f_0(OrdFileName_55, (MR_String) "\'...");
        CreatingMsg_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating module order file \140", Var_76);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_56, CreatingMsg_57);
        mercury__io__open_output_4_p_0(OrdFileName_55, &OrdResult_58);
        if (((MR_tag((MR_Word) OrdResult_58)) == (MR_Integer) 1))
        {
          MR_Word IOError_60 = ((MR_Word) ((MR_hl_field(1, OrdResult_58, 0))));
          MR_String IOErrorMessage_61;
          MR_String OrdMessage_62;
          MR_String Var_79;
          MR_String Var_80;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_56, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_12, Verbose_56);
          mercury__io__error_message_2_p_0(IOError_60, &IOErrorMessage_61);
          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_61);
          Var_80 = mercury__string__f_43_43_2_f_0(OrdFileName_55, Var_79);
          OrdMessage_62 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_80);
          libs__file_util__report_error_4_p_0(ProgressStream_12, OrdMessage_62);
        }
        else
        {
          MR_Word OrdStream_59 = ((MR_Word) ((MR_hl_field(0, OrdResult_58, 0))));
          MR_Word Var_67;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_5[0]));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_1));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_67, 3) = ((MR_Box) (OrdStream_59));
          }
          mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[0]), OrdStream_59, ImpDepsOrdering_22, (MR_String) "\n\n", Var_67);
          mercury__io__close_output_3_p_0(OrdStream_59);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_56, (MR_String) " done.\n");
        }
      }
      break;
  }
  mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_15, IndirectOptDepsGraph_16);
  libs__globals__lookup_maybe_string_option_3_p_0(Globals_13, (MR_Integer) 456, &MaybeSpecFileName_23);
  if ((MaybeSpecFileName_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TransOptDepsGraph_17 = *IndirectOptDepsGraph_16;
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
  }
  else
  {
    MR_String SpecFileName_24 = ((MR_String) ((MR_hl_field(1, MaybeSpecFileName_23, 0))));
    MR_Word MaybeEdgesToRemove_25;

    parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0(SpecFileName_24, &MaybeEdgesToRemove_25);
    if (((MR_tag((MR_Word) MaybeEdgesToRemove_25)) == (MR_Integer) 0))
    {
      MR_Word EdgeSpecs_29 = ((MR_Word) ((MR_hl_field(0, MaybeEdgesToRemove_25, 0))));

      *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EdgeSpecs_29, STATE_VARIABLE_Specs_0_32);
      *TransOptDepsGraph_17 = *IndirectOptDepsGraph_16;
    }
    else
    {
      MR_Word EdgesToRemove_26 = ((MR_Word) ((MR_hl_field(1, MaybeEdgesToRemove_25, 0))));
      MR_Word UnknownModuleSpecs_27;
      MR_Word TransOptDepsGraph0_28;
      MR_Word KnownModules_82;
      MR_Word Var_83;
      MR_Word SCCs_88;
      MR_Word Var_90;
      MR_Box conv1_UnknownModuleSpecs_27;
      MR_Box conv5__EdgesToRemove_89;
      MR_Box conv4_TransOptDepsGraph0_28;

      mercury__digraph__vertices_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_15, &KnownModules_82);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_6[0]));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (parse_tree__opt_deps_spec__compute_opt_trans_opt_deps_graph_11_p_0_2));
        MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_83, 3) = ((MR_Box) (KnownModules_82));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[3]), Var_83, EdgesToRemove_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_UnknownModuleSpecs_27);
      UnknownModuleSpecs_27 = ((MR_Word) (conv1_UnknownModuleSpecs_27));
      *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnknownModuleSpecs_27, STATE_VARIABLE_Specs_0_32);
      Var_90 = mercury__digraph__cliques_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_15);
      SCCs_88 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[5]), Var_90);
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[5]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[1]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[6]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[4]), SCCs_88, ((MR_Box) (EdgesToRemove_26)), &conv5__EdgesToRemove_89, ((MR_Box) (ImpDepsGraph_15)), &conv4_TransOptDepsGraph0_28);
      TransOptDepsGraph0_28 = ((MR_Word) (conv4_TransOptDepsGraph0_28));
      mercury__digraph__tc_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsGraph0_28, TransOptDepsGraph_17);
    }
  }
  TransOptDepsOrdering0_30 = mercury__digraph__return_sccs_in_from_to_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *TransOptDepsGraph_17);
  switch (OutputOrder_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      parse_tree__opt_deps_spec__output_module_order_7_p_0(ProgressStream_12, Globals_13, ModuleName_14, (MR_Integer) 12, TransOptDepsOrdering0_30);
      break;
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[0]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[5]), TransOptDepsOrdering0_30, &TransOptDepsOrdering1_31);
  mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDepsOrdering1_31, TransOptDepsOrdering_18);
}

static void MR_CALL 
parse_tree__opt_deps_spec__output_module_order_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__opt_deps_spec__write_module_scc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__opt_deps_spec__output_module_order_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word ExtCur_11,
  MR_Word DepsOrdering_12)
{
  MR_String OrdFileName_14;
  MR_Word Verbose_15;
  MR_String CreatingMsg_16;
  MR_Word OrdResult_17;
  MR_String Var_51;

  parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0(ExtCur_11, ModuleName_10, &OrdFileName_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_15);
  Var_51 = mercury__string__f_43_43_2_f_0(OrdFileName_14, (MR_String) "\'...");
  CreatingMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating module order file \140", Var_51);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, CreatingMsg_16);
  mercury__io__open_output_4_p_0(OrdFileName_14, &OrdResult_17);
  if (((MR_tag((MR_Word) OrdResult_17)) == (MR_Integer) 1))
  {
    MR_Word IOError_19 = ((MR_Word) ((MR_hl_field(1, OrdResult_17, 0))));
    MR_String IOErrorMessage_20;
    MR_String OrdMessage_21;
    MR_String Var_54;
    MR_String Var_55;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_15);
    mercury__io__error_message_2_p_0(IOError_19, &IOErrorMessage_20);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_20);
    Var_55 = mercury__string__f_43_43_2_f_0(OrdFileName_14, Var_54);
    OrdMessage_21 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_55);
    libs__file_util__report_error_4_p_0(ProgressStream_8, OrdMessage_21);
  }
  else
  {
    MR_Word OrdStream_18 = ((MR_Word) ((MR_hl_field(0, OrdResult_17, 0))));
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_5[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__opt_deps_spec__output_module_order_7_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (OrdStream_18));
    }
    mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[0]), OrdStream_18, DepsOrdering_12, (MR_String) "\n\n", Var_32);
    mercury__io__close_output_3_p_0(OrdStream_18);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, (MR_String) " done.\n");
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__error_spec__accumulate_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__opt_deps_spec__read_trans_opt_deps_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word ReadResult_8;

  mercury__io__read_named_file_as_string_4_p_0(FileName_5, &ReadResult_8);
  if (((MR_tag((MR_Word) ReadResult_8)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, ReadResult_8, 0))));
    MR_Word Pieces_26;
    MR_Word Spec_27;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_73;

    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (FileName_5));
    }
    Var_63 = mercury__io__error_message_1_f_0(Error_25);
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[9])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Pieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[8])));
      MR_hl_field(1, Pieces_26, 1) = ((MR_Box) (Var_56));
    }
    {
      Spec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.read_trans_opt_deps_spec_file\'/4"));
      MR_hl_field(1, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_27, 3) = ((MR_Box) (Pieces_26));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
    }
  }
  else
  {
    MR_String Contents_9 = ((MR_String) ((MR_hl_field(0, ReadResult_8, 0))));
    MR_Integer ContentsLen_10;
    MR_Word StartPos_11;
    MR_Word EdgesToRemove_13;
    MR_Word FileSpecs0_14;
    MR_Word Var_31;
    MR_Word _EndPos_12;

    mercury__string__length_2_p_0(Contents_9, &ContentsLen_10);
    StartPos_11 = mercury__io__init_posn_0_f_0();
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0));
    parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_file_9_p_0(FileName_5, Contents_9, ContentsLen_10, StartPos_11, &_EndPos_12, Var_31, &EdgesToRemove_13, (MR_Word) ((MR_Unsigned) 0U), &FileSpecs0_14);
    if ((FileSpecs0_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (EdgesToRemove_13));
      }
    else
    {
      MR_Word FileSpecContextsSet_17;
      MR_Word FileSpecContexts_18;
      MR_Word RevFileSpecContexts_19;
      MR_Word LastContext_20;
      MR_Word IgnorePieces_22;
      MR_Word IgnoreSpec_23;
      MR_Word FileSpecs_24;
      MR_Word Var_34;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Box conv1_FileSpecContextsSet_17;

      Var_34 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[3]), FileSpecs0_14, ((MR_Box) (Var_34)), &conv1_FileSpecContextsSet_17);
      FileSpecContextsSet_17 = ((MR_Word) (conv1_FileSpecContextsSet_17));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), FileSpecContextsSet_17, &FileSpecContexts_18);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), FileSpecContexts_18, &RevFileSpecContexts_19);
      if ((RevFileSpecContexts_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.opt_deps_spec.read_trans_opt_deps_spec_file\'/4", (MR_String) "RevFileSpecContexts = []");
          return;
        }
      else
        LastContext_20 = ((MR_Word) ((MR_hl_field(1, RevFileSpecContexts_19, 0))));
      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (FileName_5));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[15])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[13])));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        IgnorePieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IgnorePieces_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_2[2])));
        MR_hl_field(1, IgnorePieces_22, 1) = ((MR_Box) (Var_40));
      }
      {
        IgnoreSpec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IgnoreSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.read_trans_opt_deps_spec_file\'/4"));
        MR_hl_field(0, IgnoreSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, IgnoreSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, IgnoreSpec_23, 3) = ((MR_Box) (LastContext_20));
        MR_hl_field(0, IgnoreSpec_23, 4) = ((MR_Box) (IgnorePieces_22));
      }
      {
        FileSpecs_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FileSpecs_24, 0) = ((MR_Box) (IgnoreSpec_23));
        MR_hl_field(1, FileSpecs_24, 1) = ((MR_Box) (FileSpecs0_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileSpecs_24));
      }
    }
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_file_9_p_0(
  MR_String FileName_10,
  MR_String Contents_11,
  MR_Integer ContentsLen_12,
  MR_Word STATE_VARIABLE_Pos_0_24,
  MR_Word * STATE_VARIABLE_Pos_25,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_26,
  MR_Word * STATE_VARIABLE_EdgesToRemove_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    MR_Word ReadTerm_16;
    MR_Word STATE_VARIABLE_Pos_1_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_substring_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_10, Contents_11, ContentsLen_12, STATE_VARIABLE_Pos_0_24, &STATE_VARIABLE_Pos_1_30, &ReadTerm_16);
    switch (MR_tag((MR_Word) ReadTerm_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Pos_25 = STATE_VARIABLE_Pos_1_30;
          *STATE_VARIABLE_EdgesToRemove_27 = STATE_VARIABLE_EdgesToRemove_0_26;
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Error_17 = ((MR_String) ((MR_hl_field(1, ReadTerm_16, 0))));
          MR_Integer LineNum_18 = ((MR_Integer) ((MR_hl_field(1, ReadTerm_16, 1))));
          MR_Word Pieces_19;
          MR_Word Context_20;
          MR_Word Spec_21;
          MR_Word Var_33;
          MR_Word Var_34;

          {
            Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_34, 1) = ((MR_Box) (Error_17));
          }
          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
          }
          {
            Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[16])));
            MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_33));
          }
          {
            Context_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_20, 0) = ((MR_Box) (FileName_10));
            MR_hl_field(0, Context_20, 1) = ((MR_Box) (LineNum_18));
          }
          {
            Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.parse_trans_opt_deps_spec_file\'/9"));
            MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_20));
            MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_29 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
          }
          *STATE_VARIABLE_Pos_25 = STATE_VARIABLE_Pos_1_30;
          *STATE_VARIABLE_EdgesToRemove_27 = STATE_VARIABLE_EdgesToRemove_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_22 = ((MR_Word) ((MR_hl_field(2, ReadTerm_16, 0))));
          MR_Word Term_23 = ((MR_Word) ((MR_hl_field(2, ReadTerm_16, 1))));
          MR_Word STATE_VARIABLE_EdgesToRemove_1_45;
          MR_Word STATE_VARIABLE_Specs_2_46;
          MR_Word next_value_of_STATE_VARIABLE_Pos_0_24;
          MR_Word next_value_of_STATE_VARIABLE_EdgesToRemove_0_26;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_28;

          parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_term_6_p_0(VarSet_22, Term_23, STATE_VARIABLE_EdgesToRemove_0_26, &STATE_VARIABLE_EdgesToRemove_1_45, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_2_46);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Pos_0_24 = STATE_VARIABLE_Pos_1_30;
          next_value_of_STATE_VARIABLE_EdgesToRemove_0_26 = STATE_VARIABLE_EdgesToRemove_1_45;
          next_value_of_STATE_VARIABLE_Specs_0_28 = STATE_VARIABLE_Specs_2_46;
          STATE_VARIABLE_Pos_0_24 = next_value_of_STATE_VARIABLE_Pos_0_24;
          STATE_VARIABLE_EdgesToRemove_0_26 = next_value_of_STATE_VARIABLE_EdgesToRemove_0_26;
          STATE_VARIABLE_Specs_0_28 = next_value_of_STATE_VARIABLE_Specs_0_28;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_term_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_EdgesToRemove_0_36,
  MR_Word * STATE_VARIABLE_EdgesToRemove_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_String AtomName_11;
  MR_Word LeftTerm_12;
  MR_Word RightTerm_13;
  MR_Word SourceName_15;
  MR_Word TypeCtorInfo_124_124;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;

  if (succeeded)
  {
    Var_40 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
    if (succeeded)
    {
      AtomName_11 = ((MR_String) ((MR_hl_field(0, Var_40, 0))));
      if ((strcmp(AtomName_11, (MR_String) "module_allow_deps") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(AtomName_11, (MR_String) "module_disallow_deps") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_42, 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_124_124 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_124_124, LeftTerm_12, &SourceName_15);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word TargetCord0_16;
    MR_Word EntrySpecs_17;
    MR_Word Var_44;

    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[0]));
    parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_list_6_p_0(VarSet_7, RightTerm_13, Var_44, &TargetCord0_16, (MR_Word) ((MR_Unsigned) 0U), &EntrySpecs_17);
    if ((EntrySpecs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TargetList0_18;
      MR_Word LeftTermContext_19;
      MR_Word AllowOrDisallow_21;
      MR_Word MaybeOldAllowOrDisallow_22;

      TargetList0_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[0]), TargetCord0_16);
      LeftTermContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LeftTerm_12);
      if ((strcmp(AtomName_11, (MR_String) "module_allow_deps") == 0))
      {
        MR_Word TargetList_20;
        MR_String Var_46;
        MR_String Var_47;

        succeeded = ((MR_tag((MR_Word) SourceName_15)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_String) ((MR_hl_field(0, SourceName_15, 0))));
          succeeded = (strcmp(Var_46, (MR_String) "builtin") == 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) SourceName_15)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_47 = ((MR_String) ((MR_hl_field(0, SourceName_15, 0))));
            succeeded = (strcmp(Var_47, (MR_String) "private_builtin") == 0);
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;

          Var_49 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_3[0]));
          }
          Var_54 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(0, Var_53, 1) = ((MR_Box) (&parse_tree__opt_deps_spec_scalar_common_3[1]));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (TargetList0_18));
          }
          {
            TargetList_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetList_20, 0) = ((MR_Box) (Var_48));
            MR_hl_field(1, TargetList_20, 1) = ((MR_Box) (Var_52));
          }
        }
        else
          TargetList_20 = TargetList0_18;
        {
          AllowOrDisallow_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AllowOrDisallow_21, 0) = ((MR_Box) (LeftTermContext_19));
          MR_hl_field(0, AllowOrDisallow_21, 1) = ((MR_Box) (TargetList_20));
        }
      }
      else
        {
          AllowOrDisallow_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllowOrDisallow_21, 0) = ((MR_Box) (LeftTermContext_19));
          MR_hl_field(1, AllowOrDisallow_21, 1) = ((MR_Box) (TargetList0_18));
        }
      mercury__map__search_insert_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0), ((MR_Box) (SourceName_15)), ((MR_Box) (AllowOrDisallow_21)), &MaybeOldAllowOrDisallow_22, STATE_VARIABLE_EdgesToRemove_0_36, STATE_VARIABLE_EdgesToRemove_37);
      if ((MaybeOldAllowOrDisallow_22 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
      else
      {
        MR_Word OldAllowOrDisallow_23 = ((MR_Word) ((MR_hl_field(1, MaybeOldAllowOrDisallow_22, 0))));
        MR_Word OldContext_24;
        MR_Word Pieces1_27;
        MR_Word Msg1_29;
        MR_Word Msg2_30;
        MR_Word Spec_31;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_76;
        MR_Word Var_77;

        if (((MR_tag((MR_Word) OldAllowOrDisallow_23)) == (MR_Integer) 0))
          OldContext_24 = ((MR_Word) ((MR_hl_field(0, OldAllowOrDisallow_23, 0))));
        else
          OldContext_24 = ((MR_Word) ((MR_hl_field(1, OldAllowOrDisallow_23, 0))));
        {
          Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_61, 1) = ((MR_Box) (SourceName_15));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
        }
        {
          Pieces1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces1_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[17])));
          MR_hl_field(1, Pieces1_27, 1) = ((MR_Box) (Var_60));
        }
        {
          Msg1_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Msg1_29, 0) = ((MR_Box) (LeftTermContext_19));
          MR_hl_field(0, Msg1_29, 1) = ((MR_Box) (Pieces1_27));
        }
        {
          Msg2_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Msg2_30, 0) = ((MR_Box) (OldContext_24));
          MR_hl_field(0, Msg2_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[19])));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Msg2_30));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Msg1_29));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Spec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.parse_trans_opt_deps_spec_term\'/6"));
          MR_hl_field(2, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(2, Spec_31, 3) = ((MR_Box) (Var_76));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_39 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
        }
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EntrySpecs_17, STATE_VARIABLE_Specs_0_38);
      *STATE_VARIABLE_EdgesToRemove_37 = STATE_VARIABLE_EdgesToRemove_0_36;
    }
  }
  else
  {
    MR_String TermStr_34;
    MR_Word Pieces_35;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_104;
    MR_Word Var_107;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_121;
    MR_Word Spec_123;

    TermStr_34 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
    Var_84 = (MR_Word) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[21]));
    Var_90 = (MR_Word) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[23]));
    {
      Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_111, 1) = ((MR_Box) (TermStr_34));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
    }
    {
      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_107, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[27])));
      MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[26])));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[25])));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[24])));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[22])));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
    }
    {
      Pieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[20])));
      MR_hl_field(1, Pieces_35, 1) = ((MR_Box) (Var_83));
    }
    Var_121 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
    {
      Spec_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_123, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.parse_trans_opt_deps_spec_term\'/6"));
      MR_hl_field(0, Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_123, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(0, Spec_123, 3) = ((MR_Box) (Var_121));
      MR_hl_field(0, Spec_123, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_39 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_123));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
    }
    *STATE_VARIABLE_EdgesToRemove_37 = STATE_VARIABLE_EdgesToRemove_0_36;
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_list_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_ModuleNameCord_0_15,
  MR_Word * STATE_VARIABLE_ModuleNameCord_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word TermList_11;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_8, &TermList_11);
  if (succeeded)
    parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_names_6_p_0(VarSet_7, TermList_11, STATE_VARIABLE_ModuleNameCord_0_15, STATE_VARIABLE_ModuleNameCord_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_34;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[28])));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_23));
    }
    Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.parse_trans_opt_deps_spec_module_list\'/6"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
    *STATE_VARIABLE_ModuleNameCord_16 = STATE_VARIABLE_ModuleNameCord_0_15;
  }
}

static void MR_CALL 
parse_tree__opt_deps_spec__parse_trans_opt_deps_spec_module_names_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleNameCord_0_3,
  MR_Word * STATE_VARIABLE_ModuleNameCord_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleNameCord_4 = STATE_VARIABLE_ModuleNameCord_0_3;
    }
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ModuleNameCord_1_28;
      MR_Word STATE_VARIABLE_Specs_1_44;
      MR_Word ModuleName_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNameCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_15, &ModuleName_19);
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Word Var_29;

        Var_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_15);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_29));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (ModuleName_19));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__opt_deps_spec_scalar_common_2[0]), ((MR_Box) (Var_27)), STATE_VARIABLE_ModuleNameCord_0_3, &STATE_VARIABLE_ModuleNameCord_1_28);
        STATE_VARIABLE_Specs_1_44 = STATE_VARIABLE_Specs_0_5;
      }
      else
      {
        MR_String TermStr_20;
        MR_Word Pieces_21;
        MR_Word Spec_22;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_43;

        TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_1, Term_15);
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (TermStr_20));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__opt_deps_spec_scalar_common_1[12])));
        }
        {
          Pieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__opt_deps_spec_scalar_common_1[29])));
          MR_hl_field(1, Pieces_21, 1) = ((MR_Box) (Var_32));
        }
        Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_15);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.opt_deps_spec.parse_trans_opt_deps_spec_module_names\'/6"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Var_43));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          STATE_VARIABLE_Specs_1_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
        STATE_VARIABLE_ModuleNameCord_1_28 = STATE_VARIABLE_ModuleNameCord_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms_16;
      next_value_of_STATE_VARIABLE_ModuleNameCord_0_3 = STATE_VARIABLE_ModuleNameCord_1_28;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleNameCord_0_3 = next_value_of_STATE_VARIABLE_ModuleNameCord_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__opt_deps_spec____Unify____allow_or_disallow_trans_opt_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__opt_deps_spec____Compare____allow_or_disallow_trans_opt_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__opt_deps_spec____Unify____trans_opt_deps_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__opt_deps_spec____Compare____trans_opt_deps_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__opt_deps_spec__init(void)
{
}

void mercury__parse_tree__opt_deps_spec__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_allow_or_disallow_trans_opt_deps_0);
  MR_register_type_ctor_info(&parse_tree__opt_deps_spec__parse_tree__opt_deps_spec__type_ctor_info_trans_opt_deps_spec_0);
}

void mercury__parse_tree__opt_deps_spec__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__opt_deps_spec__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.opt_deps_spec.
