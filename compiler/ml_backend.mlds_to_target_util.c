/*
** Automatically generated from `mlds_to_target_util.m'
** by the Mercury compiler,
** version rotd-2018-02-18
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


// :- module ml_backend.mlds_to_target_util.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_target_util__init
ENDINIT
*/

#include "ml_backend.mlds_to_target_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_break_context_0[3];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_break_context_0[3];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_break_context_0[3];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_target_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_code_addrs_in_consts_0_0[3];

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_code_addrs_in_consts_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_code_addrs_in_consts_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_code_addrs_in_consts_0[1];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_code_addrs_in_consts_0[1];

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_2;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_3;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_4;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_exit_method_0[5];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_exit_method_0[5];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_exit_method_0[5];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0[1];

static const MR_NotagFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0;

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1[2];

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1;

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2;

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_0[3];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_1[1];

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_output_aux_0[2];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_output_aux_0[4];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_aux_0[4];

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_output_generics_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_output_generics_0[2];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_generics_0[2];

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(
  MR_Word Var_4);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_field_var_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(
  MR_Word tscc_proc_1_input_1_Stmt_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_switch_default_3_p_0(
  MR_Word tscc_proc_2_input_1_Default_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_switch_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_statements_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_14,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_15);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_local_var_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(
  MR_Word Initializer_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_9,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_10);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_initializers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_57,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_58);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_Graph_0_18,
  MR_Word * STATE_VARIABLE_Graph_19);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____break_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____break_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[5][2];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_5[3][6];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_6[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_7[1][7];


/* sealed */ struct ml_backend__mlds_to_target_util__vector_common_type_3_0_s {
  const MR_Word ml_backend__mlds_to_target_util__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_3_0_s ml_backend__mlds_to_target_util_vector_common_3[4];



static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_4[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_3_0_s ml_backend__mlds_to_target_util_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0 = {
  (MR_String) "bc_none",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1 = {
  (MR_String) "bc_switch",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2 = {
  (MR_String) "bc_loop",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_break_context_0[3] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_break_context_0[3] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_break_context_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____break_context_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____break_context_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "break_context",
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_break_context_0 },
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_break_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_break_context_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_target_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_target_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_code_addrs_in_consts_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0 = {
  (MR_String) "code_addrs_in_consts",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_code_addrs_in_consts_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_code_addrs_in_consts_0_0[1] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_code_addrs_in_consts_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_code_addrs_in_consts_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_code_addrs_in_consts_0[1] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_code_addrs_in_consts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "code_addrs_in_consts",
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_code_addrs_in_consts_0 },
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_code_addrs_in_consts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_code_addrs_in_consts_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_0 = {
  (MR_String) "can_break",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_1 = {
  (MR_String) "can_continue",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_2 = {
  (MR_String) "can_return",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_3 = {
  (MR_String) "can_throw",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_4 = {
  (MR_String) "can_fall_through",
  (MR_Integer) 4
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_exit_method_0[5] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_3,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_4
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_exit_method_0[5] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_4,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_3
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_exit_method_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "exit_method",
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_exit_method_0 },
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_exit_method_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_exit_method_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_methods_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "exit_methods",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 = {
  (MR_String) "func_info_csj",
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_String) "func_info_params",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_func_info_csj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "func_info_csj",
  {     &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 },
  {     &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____indent_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____indent_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "indent",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0 = {
  (MR_String) "oa_none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1 = {
  (MR_String) "oa_cname",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2 = {
  (MR_String) "oa_alloc_only",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3 = {
  (MR_String) "oa_force_init",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_0[3] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_1[1] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1
};

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_output_aux_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_output_aux_0[4] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_aux_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "output_aux",
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_output_aux_0 },
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_output_aux_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_aux_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_0 = {
  (MR_String) "do_output_generics",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_1 = {
  (MR_String) "do_not_output_generics",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_output_generics_0[2] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_output_generics_0[2] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_0
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_generics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "output_generics",
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_output_generics_0 },
  {     ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_value_ordered_output_generics_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_generics_0
};

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_String Var_26 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ArgY2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_12;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&Var_12, Var_26, ArgY1_9);
                  succeeded = (Var_12 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_12;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_25, ArgY2_11);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_12 == CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_6;
            MR_Integer ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      ml_backend__mlds____Compare____mlds_func_params_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[2], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__counter____Compare____counter_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[3];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____break_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____break_context_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(
  MR_Word Var_4)
{
  {
    MR_Word TypeCtorInfo_7_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_String VarName_6;
    MR_Word Var_12;

    Var_12 = mercury__varset__init_0_f_0(TypeCtorInfo_7_14);
    mercury__varset__lookup_name_4_p_0(TypeCtorInfo_7_14, Var_12, Var_4, (MR_String) "MR_tvar_", &VarName_6);
    mercury__io__write_string_3_p_0(VarName_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CodeAddrsInConsts_10;

    ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_CodeAddrsInConsts_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CodeAddrsInConsts_10));
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(
  MR_Word Cord_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_6,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_CodeAddrsInConsts_7;

    mercury__cord__foldl_pred_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_2[4], Cord_4, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_0_6)), &conv1_STATE_VARIABLE_CodeAddrsInConsts_7);
    *STATE_VARIABLE_CodeAddrsInConsts_7 = ((MR_Word) conv1_STATE_VARIABLE_CodeAddrsInConsts_7);
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word ClassDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ClassDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word MemberFields_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 9)));
      MR_Word MemberClasses_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 10)));
      MR_Word MemberMethods_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 11)));
      MR_Word Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 12)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_21_31;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_22_32;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_23_33;
      MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 0)));
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 2)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 3)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 4)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 5)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 6)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 7)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 8)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_field_var_defns_3_p_0(MemberFields_27, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_21_31);
      ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(MemberClasses_28, STATE_VARIABLE_CodeAddrsInConsts_21_31, &STATE_VARIABLE_CodeAddrsInConsts_22_32);
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(MemberMethods_29, STATE_VARIABLE_CodeAddrsInConsts_22_32, &STATE_VARIABLE_CodeAddrsInConsts_23_33);
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(Ctors_30, STATE_VARIABLE_CodeAddrsInConsts_23_33, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ClassDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_field_var_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word FieldVarDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word FieldVarDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word Initializer_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 4)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 2)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 3)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_7, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_22, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = FieldVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(
  MR_Word tscc_proc_1_input_1_Stmt_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44)
{
  {
    MR_Word tscc_proc_2_input_1_Default_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;
    MR_Word tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_target_util.method_ptrs_in_statement/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_target_util.method_ptrs_in_statement/3-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_target_util.method_ptrs_in_switch_default/3-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Stmt_4 = tscc_proc_1_input_1_Stmt_4;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_43 = tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_44;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Stmt_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVarDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 0)));
            MR_Word FuncDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1)));
            MR_Word SubStmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_67_67;
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_68_68;
            MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 3)));

            ml_backend__mlds_to_target_util__method_ptrs_in_local_var_defns_3_p_0(LocalVarDefns_6, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_67_67);
            ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(FuncDefns_7, STATE_VARIABLE_CodeAddrsInConsts_67_67, &STATE_VARIABLE_CodeAddrsInConsts_68_68);
            ml_backend__mlds_to_target_util__method_ptrs_in_statements_3_p_0(SubStmts_8, STATE_VARIABLE_CodeAddrsInConsts_68_68, &STATE_VARIABLE_CodeAddrsInConsts_44);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 1)));
            MR_Word SubStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_65_65;
            MR_Word _Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 0)));
            MR_Word _Context_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 3)));
            MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;

            ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_11, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_65_65);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Stmt_4 = SubStmt_12;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_65_65;
            tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
            tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 0)));
            MR_Word ThenStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 1)));
            MR_Word MaybeElseStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_62_62;
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_63_63;
            MR_Word _Context_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 3)));

            ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_13, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_62_62);
            ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(ThenStmt_14, STATE_VARIABLE_CodeAddrsInConsts_62_62, &STATE_VARIABLE_CodeAddrsInConsts_63_63);
            if ((MaybeElseStmt_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_63_63;
            else
            {
              MR_Word ElseStmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_15, (MR_Integer) 0)));
              MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4 = ElseStmt_16;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_63_63;

              // direct tailcall eliminated
              tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
              tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
              goto top_of_proc_1;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word Default_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_59_59;
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
                MR_Word SubRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word _Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Range_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word _Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
                MR_Word next_value_of_tscc_proc_2_input_1_Default_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;

                ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_76, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_59_59);
                ml_backend__mlds_to_target_util__method_ptrs_in_switch_cases_3_p_0(Cases_19, STATE_VARIABLE_CodeAddrsInConsts_59_59, &STATE_VARIABLE_CodeAddrsInConsts_60_60);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Default_4 = Default_20;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7 = STATE_VARIABLE_CodeAddrsInConsts_60_60;
                tscc_proc_2_input_1_Default_4 = next_value_of_tscc_proc_2_input_1_Default_4;
                tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "labels are not supported in C# or Java.");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Target_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Target_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Target_22)) {
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
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "goto label is not supported in C# or Java.");
                        return;
                      }
                    }
                    break;
                }
                STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "computed gotos are not supported in C# or Java.");
                  return;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rvals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word _FuncSig_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _ReturnVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word _IsTailCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
                MR_Word _Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
                MR_Word _Rval_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_93, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_44);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rvals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_30, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_44);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BodyStmt_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word HandlerStmt_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_51_51;
                MR_Word _Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;

                ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(BodyStmt_27, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_51_51);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Stmt_4 = HandlerStmt_28;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_51_51;
                tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
                tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
              break;
            case (MR_Integer) 8:
              {
                MR_Word AtomicStmt_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word Rvals_100;
                MR_Word Lval_35;
                MR_Word _MaybeTag_36;
                MR_Word _Bool_37;
                MR_Word _MemRval_38;
                MR_Word _MaybeCtorName_39;
                MR_Word _Types_40;
                MR_Word _MayUseAtomic_41;
                MR_Word _AllocId_42;
                MR_Word _Type_95;

                succeeded = ((((MR_tag((MR_Word) AtomicStmt_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Lval_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 1)));
                  _MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 2)));
                  _Bool_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 3)));
                  _Type_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 4)));
                  _MemRval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 5)));
                  _MaybeCtorName_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 6)));
                  Rvals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 7)));
                  _Types_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 8)));
                  _MayUseAtomic_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 9)));
                  _AllocId_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 10)));
                  {
                    MR_Word STATE_VARIABLE_CodeAddrsInConsts_45_45;

                    ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_45_45);
                    ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_100, STATE_VARIABLE_CodeAddrsInConsts_45_45, &STATE_VARIABLE_CodeAddrsInConsts_44);
                  }
                }
                else
                {
                  MR_Word Rval_96;
                  MR_Word Lval_97;

                  succeeded = ((MR_tag((MR_Word) AtomicStmt_34)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Lval_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_34, (MR_Integer) 0)));
                    Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_34, (MR_Integer) 1)));
                    {
                      MR_Word STATE_VARIABLE_CodeAddrsInConsts_47_47;

                      ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_47_47);
                      ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_96, STATE_VARIABLE_CodeAddrsInConsts_47_47, &STATE_VARIABLE_CodeAddrsInConsts_44);
                    }
                  }
                  else
                    STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_44;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Default_4 = tscc_proc_2_input_1_Default_4;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_7 = tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_8;

      switch (MR_tag((MR_Word) Default_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Default_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_CodeAddrsInConsts_8 = STATE_VARIABLE_CodeAddrsInConsts_0_7;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CodeAddrsInConsts_8 = STATE_VARIABLE_CodeAddrsInConsts_0_7;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4 = Stmt_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_0_7;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
            tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44 = tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_switch_default_3_p_0(
  MR_Word tscc_proc_2_input_1_Default_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44)
{
  {
    MR_Word tscc_proc_1_input_1_Stmt_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
    MR_Word tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_target_util.method_ptrs_in_switch_default/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_target_util.method_ptrs_in_statement/3-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_target_util.method_ptrs_in_switch_default/3-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Stmt_4 = tscc_proc_1_input_1_Stmt_4;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_43 = tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_44;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Stmt_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVarDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 0)));
            MR_Word FuncDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1)));
            MR_Word SubStmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_67_67;
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_68_68;
            MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 3)));

            ml_backend__mlds_to_target_util__method_ptrs_in_local_var_defns_3_p_0(LocalVarDefns_6, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_67_67);
            ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(FuncDefns_7, STATE_VARIABLE_CodeAddrsInConsts_67_67, &STATE_VARIABLE_CodeAddrsInConsts_68_68);
            ml_backend__mlds_to_target_util__method_ptrs_in_statements_3_p_0(SubStmts_8, STATE_VARIABLE_CodeAddrsInConsts_68_68, &STATE_VARIABLE_CodeAddrsInConsts_44);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 1)));
            MR_Word SubStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_65_65;
            MR_Word _Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 0)));
            MR_Word _Context_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 3)));
            MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;

            ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_11, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_65_65);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Stmt_4 = SubStmt_12;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_65_65;
            tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
            tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 0)));
            MR_Word ThenStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 1)));
            MR_Word MaybeElseStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_62_62;
            MR_Word STATE_VARIABLE_CodeAddrsInConsts_63_63;
            MR_Word _Context_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 3)));

            ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_13, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_62_62);
            ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(ThenStmt_14, STATE_VARIABLE_CodeAddrsInConsts_62_62, &STATE_VARIABLE_CodeAddrsInConsts_63_63);
            if ((MaybeElseStmt_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_63_63;
            else
            {
              MR_Word ElseStmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_15, (MR_Integer) 0)));
              MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4 = ElseStmt_16;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_63_63;

              // direct tailcall eliminated
              tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
              tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
              goto top_of_proc_1;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word Default_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_59_59;
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
                MR_Word SubRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word _Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Range_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word _Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
                MR_Word next_value_of_tscc_proc_2_input_1_Default_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;

                ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_76, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_59_59);
                ml_backend__mlds_to_target_util__method_ptrs_in_switch_cases_3_p_0(Cases_19, STATE_VARIABLE_CodeAddrsInConsts_59_59, &STATE_VARIABLE_CodeAddrsInConsts_60_60);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Default_4 = Default_20;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7 = STATE_VARIABLE_CodeAddrsInConsts_60_60;
                tscc_proc_2_input_1_Default_4 = next_value_of_tscc_proc_2_input_1_Default_4;
                tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "labels are not supported in C# or Java.");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Target_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Target_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Target_22)) {
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
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "goto label is not supported in C# or Java.");
                        return;
                      }
                    }
                    break;
                }
                STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "computed gotos are not supported in C# or Java.");
                  return;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rvals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word _FuncSig_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _ReturnVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word _IsTailCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
                MR_Word _Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
                MR_Word _Rval_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_93, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_44);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rvals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

                ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_30, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_44);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BodyStmt_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word HandlerStmt_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_CodeAddrsInConsts_51_51;
                MR_Word _Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
                MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;

                ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(BodyStmt_27, STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_51_51);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Stmt_4 = HandlerStmt_28;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_51_51;
                tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
                tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
              break;
            case (MR_Integer) 8:
              {
                MR_Word AtomicStmt_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
                MR_Word _Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
                MR_Word Rvals_100;
                MR_Word Lval_35;
                MR_Word _MaybeTag_36;
                MR_Word _Bool_37;
                MR_Word _MemRval_38;
                MR_Word _MaybeCtorName_39;
                MR_Word _Types_40;
                MR_Word _MayUseAtomic_41;
                MR_Word _AllocId_42;
                MR_Word _Type_95;

                succeeded = ((((MR_tag((MR_Word) AtomicStmt_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Lval_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 1)));
                  _MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 2)));
                  _Bool_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 3)));
                  _Type_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 4)));
                  _MemRval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 5)));
                  _MaybeCtorName_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 6)));
                  Rvals_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 7)));
                  _Types_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 8)));
                  _MayUseAtomic_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 9)));
                  _AllocId_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_34, (MR_Integer) 10)));
                  {
                    MR_Word STATE_VARIABLE_CodeAddrsInConsts_45_45;

                    ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_45_45);
                    ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_100, STATE_VARIABLE_CodeAddrsInConsts_45_45, &STATE_VARIABLE_CodeAddrsInConsts_44);
                  }
                }
                else
                {
                  MR_Word Rval_96;
                  MR_Word Lval_97;

                  succeeded = ((MR_tag((MR_Word) AtomicStmt_34)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Lval_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_34, (MR_Integer) 0)));
                    Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_34, (MR_Integer) 1)));
                    {
                      MR_Word STATE_VARIABLE_CodeAddrsInConsts_47_47;

                      ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_CodeAddrsInConsts_0_43, &STATE_VARIABLE_CodeAddrsInConsts_47_47);
                      ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_96, STATE_VARIABLE_CodeAddrsInConsts_47_47, &STATE_VARIABLE_CodeAddrsInConsts_44);
                    }
                  }
                  else
                    STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_0_43;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_44;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Default_4 = tscc_proc_2_input_1_Default_4;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_7 = tscc_proc_2_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_7;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_8;

      switch (MR_tag((MR_Word) Default_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Default_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_CodeAddrsInConsts_8 = STATE_VARIABLE_CodeAddrsInConsts_0_7;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CodeAddrsInConsts_8 = STATE_VARIABLE_CodeAddrsInConsts_0_7;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Stmt_4 = Stmt_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = STATE_VARIABLE_CodeAddrsInConsts_0_7;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Stmt_4 = next_value_of_tscc_proc_1_input_1_Stmt_4;
            tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_CodeAddrsInConsts_0_43;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44 = STATE_VARIABLE_CodeAddrsInConsts_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_CodeAddrsInConsts_44 = tscc_output_1_STATE_VARIABLE_CodeAddrsInConsts_44;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_switch_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Stmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_15_15;
      MR_Word _FirstCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0)));
      MR_Word _LaterConds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_12, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_statements_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Stmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Stmts_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word FuncDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word FuncDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word Body_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 5)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 2)));
      MR_Word _MaybeID_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 3)));
      MR_Word _Params_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 4)));
      MR_Word _EnvVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 6)));
      MR_Word _MaybeRequireTailrecInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_7, (MR_Integer) 7)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      if ((Body_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_CodeAddrsInConsts_12_12 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
      else
      {
        MR_Word Stmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_23, (MR_Integer) 0)));

        ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_26, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = FuncDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_14,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_15)
{
  *STATE_VARIABLE_CodeAddrsInConsts_15 = STATE_VARIABLE_CodeAddrsInConsts_0_14;
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Rvals_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_local_var_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word LocalVarDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word LocalVarDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word Initializer_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_7, (MR_Integer) 3)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_7, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_7, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_7, (MR_Integer) 2)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_7, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_21, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = LocalVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word GlobalVarDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word GlobalVarDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word Initializer_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 4)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 2)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 3)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_7, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_22, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = GlobalVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(
  MR_Word Initializer_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_9,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_10)
{
  switch (MR_tag((MR_Word) Initializer_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_CodeAddrsInConsts_10 = STATE_VARIABLE_CodeAddrsInConsts_0_9;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Initializer_4, (MR_Integer) 0)));

        ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_8, STATE_VARIABLE_CodeAddrsInConsts_0_9, STATE_VARIABLE_CodeAddrsInConsts_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SubInitializers_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_4, (MR_Integer) 1)));
        MR_Word _Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_4, (MR_Integer) 0)));

        ml_backend__mlds_to_target_util__method_ptrs_in_initializers_3_p_0(SubInitializers_7, STATE_VARIABLE_CodeAddrsInConsts_0_9, STATE_VARIABLE_CodeAddrsInConsts_10);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word SubInitializers_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_4, (MR_Integer) 0)));

        ml_backend__mlds_to_target_util__method_ptrs_in_initializers_3_p_0(SubInitializers_14, STATE_VARIABLE_CodeAddrsInConsts_0_9, STATE_VARIABLE_CodeAddrsInConsts_10);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_initializers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Initializer_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Initializers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Initializers_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_57,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_58)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
              MR_Integer _Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_4 = SubRval_8;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RvalConst_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) RvalConst_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(RvalConst_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CodeAddr_10 = (MR_Word) MR_body(((MR_Word) RvalConst_9), (MR_Integer) 1);
                    MR_Word Seen0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_0_57, (MR_Integer) 0)));
                    MR_Word Counter0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_0_57, (MR_Integer) 1)));
                    MR_Word Rev0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_0_57, (MR_Integer) 2)));
                    MR_Word Seen_14;

                    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, ((MR_Box) (CodeAddr_10)), Seen0_11, &Seen_14);
                    if (succeeded)
                    {
                      MR_Integer SeqNum_15;
                      MR_Word Counter_16;
                      MR_Word Rev_17;
                      MR_Word Var_63;

                      mercury__counter__allocate_3_p_0(&SeqNum_15, Counter0_12, &Counter_16);
                      {
                        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (SeqNum_15));
                        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (CodeAddr_10));
                      }
                      {
                        Rev_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Rev_17, 0) = ((MR_Box) (Var_63));
                        MR_hl_field(MR_mktag(1), Rev_17, 1) = ((MR_Box) (Rev0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_CodeAddrsInConsts_58 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Seen_14));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Counter_16));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Rev_17));
                      }
                    }
                    else
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_9, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 2:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 3:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 4:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 5:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 6:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 7:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 8:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 9:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 10:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 11:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 12:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 13:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 14:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 15:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 16:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 17:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 18:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 19:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                    case (MR_Integer) 20:
                      *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
              MR_Word _UnaryOp_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_4 = SubRval_67;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
              MR_Word SubRvalB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3)));
              MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
              MR_Word _BinaryOp_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57;

              ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRvalA_49, STATE_VARIABLE_CodeAddrsInConsts_0_57, &STATE_VARIABLE_CodeAddrsInConsts_60_60);
              // direct tailcall eliminated
              next_value_of_Rval_4 = SubRvalB_50;
              next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57 = STATE_VARIABLE_CodeAddrsInConsts_60_60;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_CodeAddrsInConsts_0_57 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57;
              continue;
            }
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
            break;
          case (MR_Integer) 5:
            {
              MR_Word RowRval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
              MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_4 = RowRval_52;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
            break;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;

    Var_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0);
    Var_3 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(
  MR_Word FuncDefn_4,
  MR_Word STATE_VARIABLE_EnvVarNames_0_13,
  MR_Word * STATE_VARIABLE_EnvVarNames_14)
{
  {
    MR_Word EnvVarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 7)));

    mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, EnvVarNames_5, STATE_VARIABLE_EnvVarNames_0_13, STATE_VARIABLE_EnvVarNames_14);
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(
  MR_Word MLDS_ModuleName_11,
  MR_Word Type_12,
  MR_Word TypeNum_13,
  MR_Word Initializer_14,
  MR_Integer RowNum_15,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Graph_0_20,
  MR_Word * STATE_VARIABLE_Graph_21,
  MR_Word STATE_VARIABLE_Map_0_22,
  MR_Word * STATE_VARIABLE_Map_23)
{
  {
    MR_Word TypeCtorInfo_28_28;
    MR_Word Scalar_18;
    MR_Word STATE_VARIABLE_Graph_26_26;
    MR_Word _Key_19;

    *HeadVar__6_6 = (RowNum_15 + (MR_Integer) 1);
    {
      Scalar_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Scalar_18, 0) = ((MR_Box) (MLDS_ModuleName_11));
      MR_hl_field(MR_mktag(0), Scalar_18, 1) = ((MR_Box) (Type_12));
      MR_hl_field(MR_mktag(0), Scalar_18, 2) = ((MR_Box) (TypeNum_13));
      MR_hl_field(MR_mktag(0), Scalar_18, 3) = ((MR_Box) (RowNum_15));
    }
    TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    mercury__map__det_insert_4_p_0(TypeCtorInfo_28_28, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (Scalar_18)), ((MR_Box) (Initializer_14)), STATE_VARIABLE_Map_0_22, STATE_VARIABLE_Map_23);
    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_28_28, ((MR_Box) (Scalar_18)), &_Key_19, STATE_VARIABLE_Graph_0_20, &STATE_VARIABLE_Graph_26_26);
    ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(Scalar_18, Initializer_14, STATE_VARIABLE_Graph_26_26, STATE_VARIABLE_Graph_21);
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Graph_12;

    ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Graph_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Graph_12;

    ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Graph_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  switch (MR_tag((MR_Word) Initializer_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Initializer_6, (MR_Integer) 0)));

        ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(FromScalar_5, Rval_8, STATE_VARIABLE_Graph_0_11, STATE_VARIABLE_Graph_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_6, (MR_Integer) 1)));
        MR_Word Var_15;
        MR_Word _Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_6, (MR_Integer) 0)));
        MR_Box conv3_STATE_VARIABLE_Graph_12;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (FromScalar_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[1], Var_15, Initializers_10, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv3_STATE_VARIABLE_Graph_12);
        *STATE_VARIABLE_Graph_12 = ((MR_Word) conv3_STATE_VARIABLE_Graph_12);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_13;
        MR_Word Initializers_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_6, (MR_Integer) 0)));
        MR_Box conv1_STATE_VARIABLE_Graph_12;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (FromScalar_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[1], Var_13, Initializers_18, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv1_STATE_VARIABLE_Graph_12);
        *STATE_VARIABLE_Graph_12 = ((MR_Word) conv1_STATE_VARIABLE_Graph_12);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_Graph_0_18,
  MR_Word * STATE_VARIABLE_Graph_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ToScalar_14 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 0);

          mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (FromScalar_5)), ((MR_Box) (ToScalar_14)), STATE_VARIABLE_Graph_0_18, STATE_VARIABLE_Graph_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ToScalar_30 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 1);

          mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (FromScalar_5)), ((MR_Box) (ToScalar_30)), STATE_VARIABLE_Graph_0_18, STATE_VARIABLE_Graph_19);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_target_util", (MR_String) "predicate \140ml_backend.mlds_to_target_util.add_scalar_deps_rval\'/4", (MR_String) "lval or mem_addr");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
              MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_6 = SubRvalA_9;

              // direct tailcall eliminated
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Graph_19 = STATE_VARIABLE_Graph_0_18;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
              MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_6 = SubRvalA_32;

              // direct tailcall eliminated
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
              MR_Word STATE_VARIABLE_Graph_24_24;
              MR_Word SubRvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
              MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_6;
              MR_Word next_value_of_STATE_VARIABLE_Graph_0_18;

              ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(FromScalar_5, SubRvalA_27, STATE_VARIABLE_Graph_0_18, &STATE_VARIABLE_Graph_24_24);
              // direct tailcall eliminated
              next_value_of_Rval_6 = SubRvalB_13;
              next_value_of_STATE_VARIABLE_Graph_0_18 = STATE_VARIABLE_Graph_24_24;
              Rval_6 = next_value_of_Rval_6;
              STATE_VARIABLE_Graph_0_18 = next_value_of_STATE_VARIABLE_Graph_0_18;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_target_util", (MR_String) "predicate \140ml_backend.mlds_to_target_util.add_scalar_deps_rval\'/4", (MR_String) "lval or mem_addr");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRvalA_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
              MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_6 = SubRvalA_33;

              // direct tailcall eliminated
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_Graph_19 = STATE_VARIABLE_Graph_0_18;
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(
  MR_String SourceFileName_4)
{
  {
    MR_String Version_6;
    MR_String Fullarch_7;

    mercury__library__version_2_p_0(&Version_6, &Fullarch_7);
    mercury__io__write_string_3_p_0((MR_String) "//\n//\n// Automatically generated from ");
    mercury__io__write_string_3_p_0(SourceFileName_4);
    mercury__io__write_string_3_p_0((MR_String) " by the Mercury Compiler,\n");
    mercury__io__write_string_3_p_0((MR_String) "// version ");
    mercury__io__write_string_3_p_0(Version_6);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "// configured for ");
    mercury__io__write_string_3_p_0(Fullarch_7);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "//\n");
    mercury__io__write_string_3_p_0((MR_String) "//\n");
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__scope_indent_3_p_0(
  MR_Word Stmt_4,
  MR_Integer Indent_5,
  MR_Integer * ScopeIndent_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Stmt_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 3)));
      *ScopeIndent_6 = Indent_5;
    }
    else
    {
      *ScopeIndent_6 = (Indent_5 + (MR_Integer) 1);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__write_indented_line_4_p_0(
  MR_Integer Indent_5,
  MR_String Line_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0(Line_6);
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_n_indents_3_p_0(
  MR_Integer N_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (!(succeeded))
    {
      MR_Integer Var_11;
      MR_Integer next_value_of_N_4;

      mercury__io__write_string_3_p_0((MR_String) "  ");
      Var_11 = (N_4 - (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_N_4 = Var_11;
      N_4 = next_value_of_N_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(
  MR_Word AutoComments_5,
  MR_Word PredProcId_6)
{
  switch (AutoComments_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0)));
        MR_Integer ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1)));
        MR_Integer PredIdNum_10;
        MR_Integer ProcIdNum_11;
        MR_String Var_24;
        MR_Word Var_30;
        MR_String Var_34;

        hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_8, &PredIdNum_10);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcIdNum_11);
        mercury__io__write_string_3_p_0((MR_String) "// pred_id: ");
        Var_30 = (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_6[0];
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_30, PredIdNum_10, &Var_24);
        mercury__io__write_string_3_p_0(Var_24);
        mercury__io__write_string_3_p_0((MR_String) ", proc_id: ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_30, ProcIdNum_11, &Var_34);
        mercury__io__write_string_3_p_0(Var_34);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__generic_tvar_to_string_2_p_0(
  MR_Word Var_3,
  MR_String * VarName_4)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_Word Var_5;

    Var_5 = mercury__varset__init_0_f_0(TypeCtorInfo_7_7);
    mercury__varset__lookup_name_4_p_0(TypeCtorInfo_7_7, Var_5, Var_3, (MR_String) "MR_tvar_", VarName_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(
  MR_Word Vars_4)
{
  if (!((Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    mercury__io__write_string_3_p_0((MR_String) "<");
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[0], Vars_4, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_2[3]);
    mercury__io__write_string_3_p_0((MR_String) ">");
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(
  MR_Integer N_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded = (N_3 == (MR_Integer) 0);

    if (succeeded)
      *String_4 = (MR_String) "[]";
    else
    {
      MR_String Var_10;
      MR_String Var_17;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_6[0], N_3, &Var_10);
      Var_17 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "]");
      *String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_17);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(
  MR_Word ArrayDims_4)
{
  {
    MR_Word TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word Strings_6;
    MR_Box conv1_STATE_VARIABLE_IO_8;

    mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_15_15, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_2[1], ArrayDims_4, &Strings_6);
    mercury__list__foldr_4_p_2(TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_2[2], Strings_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(
  MR_Word CtorCat_3)
{
  {
    MR_Word IsArray_4;

    switch (MR_tag((MR_Word) CtorCat_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsArray_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            IsArray_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            IsArray_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            IsArray_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            IsArray_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        IsArray_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        IsArray_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 1)));

              IsArray_4 = ((&ml_backend__mlds_to_target_util_vector_common_3[0 + Var_12]))->ml_backend__mlds_to_target_util__vector_common_type_3_0__vct_3_f_0;
            }
            break;
          case (MR_Integer) 1:
            IsArray_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return IsArray_4;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(
  MR_Word SymName0_4,
  MR_Word Prefix_5,
  MR_Word * SymName_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName0_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Qual_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName0_4, (MR_Integer) 0)));
      MR_String Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName0_4, (MR_Integer) 1)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Qual_7, Prefix_5);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *SymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_8));
        }
      else
      {
        MR_Word SymName1_9;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(Qual_7, Prefix_5, &SymName1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *SymName_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName1_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_8));
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.remove_sym_name_prefix\'/3", (MR_String) "prefix not found");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__local_var_defn_is_commit_type_1_p_0(
  MR_Word LocalVarDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_2, (MR_Integer) 2)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_2, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_2, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_2, (MR_Integer) 3)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_2, (MR_Integer) 4)));

    succeeded = (Var_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__class_defn_is_private_1_p_0(
  MR_Word ClassDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Access_3;
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 3)));
    MR_String Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 0)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 1)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 2)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 7)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 8)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 9)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 10)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 11)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_2, (MR_Integer) 12)));
    MR_Word _Overridability_4;
    MR_Word _Constness_5;

    Access_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    _Overridability_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    _Constness_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    succeeded = (Access_3 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(
  MR_Word FuncDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Access_3;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 2)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 7)));
    MR_Word _PerInstance_4;

    Access_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    _PerInstance_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    succeeded = (Access_3 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(
  MR_Word GlobalVarDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 2)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 3)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 4)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 5)));
    MR_Word Var_10;

    Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 1)));
    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__global_var_defn_is_type_ctor_info_1_p_0(
  MR_Word GlobalVarDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 3)));
    MR_Word RttiId_9;
    MR_Word RttiName_11;
    MR_Word Var_12;
    MR_Word _Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 0)));
    MR_Word _Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 1)));
    MR_Word _Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 4)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_2, (MR_Integer) 5)));
    MR_Word Var_10;

    succeeded = ((((MR_tag((MR_Word) Type_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        RttiId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) RttiId_9)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_9, (MR_Integer) 0)));
          RttiName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_9, (MR_Integer) 1)));
          succeeded = (RttiName_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(
  MR_Word FieldVarDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 2)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 3)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 4)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 5)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0)));

    Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 1)));
    succeeded = (Var_3 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____break_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____break_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____break_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____break_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____exit_method_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____exit_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____indent_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____indent_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____output_aux_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____output_aux_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_target_util____Unify____output_generics_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_target_util____Compare____output_generics_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_target_util__init(void)
{
}

void mercury__ml_backend__mlds_to_target_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_methods_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_func_info_csj_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_indent_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0);
}

void mercury__ml_backend__mlds_to_target_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_target_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_target_util.
