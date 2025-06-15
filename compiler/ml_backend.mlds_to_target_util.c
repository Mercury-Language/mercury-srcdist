/*
** Automatically generated from `mlds_to_target_util.m'
** by the Mercury compiler,
** version rotd-2025-06-15
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_break_context_0[3];

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

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_exit_method_0[5];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_exit_method_0[5];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_exit_method_0[5];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0[1];

static const MR_NotagFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_initializer_starts_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_initializer_starts_0[2];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_initializer_starts_0[2];

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

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_output_generics_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_output_generics_0[2];

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_generics_0[2];

static void MR_CALL 
ml_backend__mlds_to_target_util__replace_all_stars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_44,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_45);

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
  MR_Word CodeAddrsInConsts_5,
  MR_Word * CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_typed_rvals_3_p_0(
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
ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_rval_deps_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_DepGraph_0_21,
  MR_Word * STATE_VARIABLE_DepGraph_22);

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
ml_backend__mlds_to_target_util____Unify____initializer_starts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____initializer_starts_0_0_10001(
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


static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_5[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_6[1][6];


struct ml_backend__mlds_to_target_util__vector_common_type_4_0_s {
  const MR_Word ml_backend__mlds_to_target_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_4_0_s ml_backend__mlds_to_target_util_vector_common_4[4];



static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_4_0_s ml_backend__mlds_to_target_util_vector_common_4[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_0 = {
  (MR_String) "bc_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_1 = {
  (MR_String) "bc_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_break_context_0_2 = {
  (MR_String) "bc_loop",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_break_context_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____break_context_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____break_context_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "break_context",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_break_context_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_break_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_break_context_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0) }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_target_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds_to_target_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0) }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_code_addrs_in_consts_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0 = {
  (MR_String) "code_addrs_in_consts",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_code_addrs_in_consts_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_code_addrs_in_consts_0_0[1] = { &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0 };

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_code_addrs_in_consts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_code_addrs_in_consts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_code_addrs_in_consts_0[1] = { &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_code_addrs_in_consts_0_0 };

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_code_addrs_in_consts_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "code_addrs_in_consts",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_code_addrs_in_consts_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_code_addrs_in_consts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_code_addrs_in_consts_0,

};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_0 = {
  (MR_String) "can_break",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_1 = {
  (MR_String) "can_continue",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_2 = {
  (MR_String) "can_return",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_3 = {
  (MR_String) "can_throw",
  INT32_C(3)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_exit_method_0_4 = {
  (MR_String) "can_fall_through",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_exit_method_0[5] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "exit_method",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_exit_method_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_exit_method_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_exit_method_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0) }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_methods_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "exit_methods",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 = {
  (MR_String) "func_info_csj",
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0),
  (MR_String) "func_info_params",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_func_info_csj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "func_info_csj",
  { &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 },
  { &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__notag_functor_desc_func_info_csj_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_func_info_csj_0,

};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_0 = {
  (MR_String) "not_at_start_of_line",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_1 = {
  (MR_String) "at_start_of_line",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_initializer_starts_0[2] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_initializer_starts_0[2] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_1,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_initializer_starts_0_0
};

static const MR_Integer ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_initializer_starts_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_initializer_starts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____initializer_starts_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____initializer_starts_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "initializer_starts",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_initializer_starts_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_initializer_starts_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_initializer_starts_0,

};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0 = {
  (MR_String) "oa_none",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1 = {
  (MR_String) "oa_cname",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2 = {
  (MR_String) "oa_alloc_only",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3 = {
  (MR_String) "oa_force_init",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_0[3] = {
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_0,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_2,
  &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_3
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_1[1] = { &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1 };

static const MR_DuPtagLayout ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_output_aux_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_stag_ordered_output_aux_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "output_aux",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_name_ordered_output_aux_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_ptag_ordered_output_aux_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_aux_0,

};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_0 = {
  (MR_String) "do_output_generics",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_functor_desc_output_generics_0_1 = {
  (MR_String) "do_not_output_generics",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_output_generics_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_target_util",
  (MR_String) "output_generics",
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_name_ordered_output_generics_0 },
  { ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__enum_ordinal_ordered_output_generics_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__functor_number_map_output_generics_0,

};

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0(
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
ml_backend__mlds_to_target_util____Unify____output_generics_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_7 > ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____initializer_starts_0_0(
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
ml_backend__mlds_to_target_util____Unify____initializer_starts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    ml_backend__mlds____Compare____mlds_func_params_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0(
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
ml_backend__mlds_to_target_util____Unify____exit_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____break_context_0_0(
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
ml_backend__mlds_to_target_util____Unify____break_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util__replace_all_stars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Char HeadChar0_3 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
    MR_Word TailChars0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailChars_6;

    ml_backend__mlds_to_target_util__replace_all_stars_2_p_0(TailChars0_4, &TailChars_6);
    succeeded = (HeadChar0_3 == (MR_Char) 42);
    if (succeeded)
    {
      MR_Word Var_8;
      MR_Word Var_10;
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 114));
        MR_hl_field(1, Var_12, 1) = ((MR_Box) (TailChars_6));
      }
      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Char) 97));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Char) 116));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 115));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (HeadChar0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailChars_6));
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CodeAddrsInConsts_10;

  ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CodeAddrsInConsts_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CodeAddrsInConsts_10));
}

void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(
  MR_Word Cord_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_6,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_7)
{
  MR_Box conv1_STATE_VARIABLE_CodeAddrsInConsts_7;

  mercury__cord__foldl_pred_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_2[4]), Cord_4, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_0_6)), &conv1_STATE_VARIABLE_CodeAddrsInConsts_7);
  *STATE_VARIABLE_CodeAddrsInConsts_7 = ((MR_Word) (conv1_STATE_VARIABLE_CodeAddrsInConsts_7));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word ClassDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ClassDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word MemberFields_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 8))));
      MR_Word MemberClasses_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 9))));
      MR_Word MemberMethods_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 10))));
      MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 11))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_25;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_2_26;
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_3_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_field_var_defns_3_p_0(MemberFields_21, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_25);
      ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(MemberClasses_22, STATE_VARIABLE_CodeAddrsInConsts_1_25, &STATE_VARIABLE_CodeAddrsInConsts_2_26);
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(MemberMethods_23, STATE_VARIABLE_CodeAddrsInConsts_2_26, &STATE_VARIABLE_CodeAddrsInConsts_3_27);
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(Ctors_24, STATE_VARIABLE_CodeAddrsInConsts_3_27, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ClassDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word FieldVarDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word FieldVarDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word Initializer_17 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_7, 4))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_17, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = FieldVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_44,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_45)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_6 = ((MR_Word) ((MR_hl_field(0, Stmt_4, 0))));
          MR_Word FuncDefns_7 = ((MR_Word) ((MR_hl_field(0, Stmt_4, 1))));
          MR_Word SubStmts_8 = ((MR_Word) ((MR_hl_field(0, Stmt_4, 2))));
          MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_46;
          MR_Word STATE_VARIABLE_CodeAddrsInConsts_2_47;

          ml_backend__mlds_to_target_util__method_ptrs_in_local_var_defns_3_p_0(LocalVarDefns_6, STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_1_46);
          ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(FuncDefns_7, STATE_VARIABLE_CodeAddrsInConsts_1_46, &STATE_VARIABLE_CodeAddrsInConsts_2_47);
          ml_backend__mlds_to_target_util__method_ptrs_in_statements_3_p_0(SubStmts_8, STATE_VARIABLE_CodeAddrsInConsts_2_47, STATE_VARIABLE_CodeAddrsInConsts_45);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(1, Stmt_4, 1))));
          MR_Word SubStmt_12 = ((MR_Word) ((MR_hl_field(1, Stmt_4, 2))));
          MR_Word STATE_VARIABLE_CodeAddrsInConsts_4_49;
          MR_Word next_value_of_Stmt_4;
          MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;

          ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_11, STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_4_49);
          // direct tailcall eliminated
          ;
          next_value_of_Stmt_4 = SubStmt_12;
          next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44 = STATE_VARIABLE_CodeAddrsInConsts_4_49;
          Stmt_4 = next_value_of_Stmt_4;
          STATE_VARIABLE_CodeAddrsInConsts_0_44 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_14 = ((MR_Word) ((MR_hl_field(2, Stmt_4, 0))));
          MR_Word ThenStmt_15 = ((MR_Word) ((MR_hl_field(2, Stmt_4, 1))));
          MR_Word MaybeElseStmt_16 = ((MR_Word) ((MR_hl_field(2, Stmt_4, 2))));
          MR_Word STATE_VARIABLE_CodeAddrsInConsts_6_51;
          MR_Word STATE_VARIABLE_CodeAddrsInConsts_7_52;

          ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_14, STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_6_51);
          ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(ThenStmt_15, STATE_VARIABLE_CodeAddrsInConsts_6_51, &STATE_VARIABLE_CodeAddrsInConsts_7_52);
          if ((MaybeElseStmt_16 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_7_52;
          else
          {
            MR_Word ElseStmt_17 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt_16, 0))));
            MR_Word next_value_of_Stmt_4 = ElseStmt_17;
            MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44 = STATE_VARIABLE_CodeAddrsInConsts_7_52;

            // direct tailcall eliminated
            ;
            Stmt_4 = next_value_of_Stmt_4;
            STATE_VARIABLE_CodeAddrsInConsts_0_44 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 4))));
              MR_Word Default_21 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 5))));
              MR_Word STATE_VARIABLE_CodeAddrsInConsts_9_54;
              MR_Word STATE_VARIABLE_CodeAddrsInConsts_10_55;
              MR_Word SubRval_77 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 2))));

              ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRval_77, STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_9_54);
              ml_backend__mlds_to_target_util__method_ptrs_in_switch_cases_3_p_0(Cases_20, STATE_VARIABLE_CodeAddrsInConsts_9_54, &STATE_VARIABLE_CodeAddrsInConsts_10_55);
              switch (MR_tag((MR_Word) Default_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_21)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_10_55;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_10_55;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stmt_111 = ((MR_Word) ((MR_hl_field(1, Default_21, 0))));
                    MR_Word next_value_of_Stmt_4 = Stmt_111;
                    MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44 = STATE_VARIABLE_CodeAddrsInConsts_10_55;

                    // direct tailcall eliminated
                    ;
                    Stmt_4 = next_value_of_Stmt_4;
                    STATE_VARIABLE_CodeAddrsInConsts_0_44 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "labels are not supported in C# or Java.");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_23 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 1))));

              switch (MR_tag((MR_Word) Target_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_23)) {
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
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "goto label is not supported in C# or Java.");
                    return;
                  }
                  break;
              }
              *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_0_44;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.method_ptrs_in_statement\'/3", (MR_String) "computed gotos are not supported in C# or Java.");
              return;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rvals_94 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 3))));

              ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_94, STATE_VARIABLE_CodeAddrsInConsts_0_44, STATE_VARIABLE_CodeAddrsInConsts_45);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rvals_31 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 1))));

              ml_backend__mlds_to_target_util__method_ptrs_in_rvals_3_p_0(Rvals_31, STATE_VARIABLE_CodeAddrsInConsts_0_44, STATE_VARIABLE_CodeAddrsInConsts_45);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BodyStmt_28 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 2))));
              MR_Word HandlerStmt_29 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 3))));
              MR_Word STATE_VARIABLE_CodeAddrsInConsts_12_63;
              MR_Word next_value_of_Stmt_4;
              MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;

              ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(BodyStmt_28, STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_12_63);
              // direct tailcall eliminated
              ;
              next_value_of_Stmt_4 = HandlerStmt_29;
              next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44 = STATE_VARIABLE_CodeAddrsInConsts_12_63;
              Stmt_4 = next_value_of_Stmt_4;
              STATE_VARIABLE_CodeAddrsInConsts_0_44 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_44;
              continue;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_0_44;
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_35 = ((MR_Word) ((MR_hl_field(3, Stmt_4, 1))));
              MR_Word TypedRvals_41;

              succeeded = ((((MR_tag((MR_Word) AtomicStmt_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicStmt_35, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                TypedRvals_41 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_35, 7))));
                ml_backend__mlds_to_target_util__method_ptrs_in_typed_rvals_3_p_0(TypedRvals_41, STATE_VARIABLE_CodeAddrsInConsts_0_44, STATE_VARIABLE_CodeAddrsInConsts_45);
              }
              else
              {
                MR_Word Rval_97;

                succeeded = ((MR_tag((MR_Word) AtomicStmt_35)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Rval_97 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_35, 1))));
                  {
                    MR_Word STATE_VARIABLE_CodeAddrsInConsts_18_69;

                    ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_CodeAddrsInConsts_0_44, &STATE_VARIABLE_CodeAddrsInConsts_18_69);
                    ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_97, STATE_VARIABLE_CodeAddrsInConsts_18_69, STATE_VARIABLE_CodeAddrsInConsts_45);
                  }
                }
                else
                  *STATE_VARIABLE_CodeAddrsInConsts_45 = STATE_VARIABLE_CodeAddrsInConsts_0_44;
              }
            }
            break;
        }
        break;
    }
    break;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Stmt_12 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_12, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_15;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Stmt_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Stmts_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Stmts_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word FuncDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word FuncDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word Body_18 = ((MR_Word) ((MR_hl_field(0, FuncDefn_7, 5))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      if ((Body_18 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CodeAddrsInConsts_1_12 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
      else
      {
        MR_Word Stmt_21 = ((MR_Word) ((MR_hl_field(1, Body_18, 0))));

        ml_backend__mlds_to_target_util__method_ptrs_in_statement_3_p_0(Stmt_21, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = FuncDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(
  MR_Word CodeAddrsInConsts_5,
  MR_Word * CodeAddrsInConsts_3)
{
  *CodeAddrsInConsts_3 = CodeAddrsInConsts_5;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Rvals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rvals_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrsInConsts_0_2 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__method_ptrs_in_typed_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word TypedRval_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TypedRvals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(0, TypedRval_7, 0))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_10, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypedRvals_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_14;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word LocalVarDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word LocalVarDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_7, 3))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_16, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LocalVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word GlobalVarDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GlobalVarDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word Initializer_17 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_7, 4))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_17, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = GlobalVarDefns_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
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
        MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(1, Initializer_4, 0))));

        ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(Rval_8, STATE_VARIABLE_CodeAddrsInConsts_0_9, STATE_VARIABLE_CodeAddrsInConsts_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SubInitializers_7 = ((MR_Word) ((MR_hl_field(2, Initializer_4, 1))));

        ml_backend__mlds_to_target_util__method_ptrs_in_initializers_3_p_0(SubInitializers_7, STATE_VARIABLE_CodeAddrsInConsts_0_9, STATE_VARIABLE_CodeAddrsInConsts_10);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word SubInitializers_14 = ((MR_Word) ((MR_hl_field(3, Initializer_4, 0))));

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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrsInConsts_3 = STATE_VARIABLE_CodeAddrsInConsts_0_2;
    else
    {
      MR_Word Initializer_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Initializers_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CodeAddrsInConsts_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;

      ml_backend__mlds_to_target_util__method_ptrs_in_initializer_3_p_0(Initializer_7, STATE_VARIABLE_CodeAddrsInConsts_0_2, &STATE_VARIABLE_CodeAddrsInConsts_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Initializers_8;
      next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = STATE_VARIABLE_CodeAddrsInConsts_1_12;
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
    ;
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
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_8;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RvalConst_9 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));

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
                    MR_Word CodeAddr_10 = (MR_Word) (MR_body((MR_Word) (RvalConst_9), (MR_Integer) 1));
                    MR_Word Seen0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_0_57, 0))));
                    MR_Word Counter0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_0_57, 1))));
                    MR_Word Rev0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_0_57, 2))));
                    MR_Word Seen_14;

                    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), ((MR_Box) (CodeAddr_10)), Seen0_11, &Seen_14);
                    if (succeeded)
                    {
                      MR_Integer SeqNum_15;
                      MR_Word Counter_16;
                      MR_Word Rev_17;
                      MR_Word Var_61;

                      mercury__counter__allocate_3_p_0(&SeqNum_15, Counter0_12, &Counter_16);
                      {
                        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_61, 0) = ((MR_Box) (SeqNum_15));
                        MR_hl_field(0, Var_61, 1) = ((MR_Box) (CodeAddr_10));
                      }
                      {
                        Rev_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Rev_17, 0) = ((MR_Box) (Var_61));
                        MR_hl_field(1, Rev_17, 1) = ((MR_Box) (Rev0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_CodeAddrsInConsts_58 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Seen_14));
                        MR_hl_field(0, base, 1) = ((MR_Box) (Counter_16));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Rev_17));
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
                  switch (((MR_Integer) ((MR_hl_field(3, RvalConst_9, 0))))) {
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
              MR_Word SubRval_69 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_69;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_73 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_73;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_72 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_72;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_74 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_74;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalA_50 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word SubRvalB_51 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_CodeAddrsInConsts_5_64;
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57;

              ml_backend__mlds_to_target_util__method_ptrs_in_rval_3_p_0(SubRvalA_50, STATE_VARIABLE_CodeAddrsInConsts_0_57, &STATE_VARIABLE_CodeAddrsInConsts_5_64);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_4 = SubRvalB_51;
              next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57 = STATE_VARIABLE_CodeAddrsInConsts_5_64;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_CodeAddrsInConsts_0_57 = next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_57;
              continue;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_CodeAddrsInConsts_58 = STATE_VARIABLE_CodeAddrsInConsts_0_57;
            break;
          case (MR_Integer) 8:
            {
              MR_Word RowRval_53 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = RowRval_53;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 9:
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
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;

  Var_2 = mercury__set_tree234__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0));
  Var_3 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

void MR_CALL 
ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(
  MR_Word FuncDefn_4,
  MR_Word STATE_VARIABLE_EnvVarNames_0_13,
  MR_Word * STATE_VARIABLE_EnvVarNames_14)
{
  MR_Word EnvVarNames_5 = ((MR_Word) ((MR_hl_field(0, FuncDefn_4, 6))));

  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNames_5, STATE_VARIABLE_EnvVarNames_0_13, STATE_VARIABLE_EnvVarNames_14);
}

void MR_CALL 
ml_backend__mlds_to_target_util__record_scalar_inits_build_dep_graph_10_p_0(
  MR_Word MLDS_ModuleName_1,
  MR_Word Type_2,
  MR_Word TypeNum_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_RowNum_0_5,
  MR_Integer * STATE_VARIABLE_RowNum_6,
  MR_Word STATE_VARIABLE_InitMap_0_7,
  MR_Word * STATE_VARIABLE_InitMap_8,
  MR_Word STATE_VARIABLE_DepGraph_0_9,
  MR_Word * STATE_VARIABLE_DepGraph_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DepGraph_10 = STATE_VARIABLE_DepGraph_0_9;
      *STATE_VARIABLE_InitMap_8 = STATE_VARIABLE_InitMap_0_7;
      *STATE_VARIABLE_RowNum_6 = STATE_VARIABLE_RowNum_0_5;
    }
    else
    {
      MR_Word Initializer_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Initializers_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Scalar_31;
      MR_Word STATE_VARIABLE_InitMap_1_39;
      MR_Word STATE_VARIABLE_DepGraph_1_40;
      MR_Word STATE_VARIABLE_DepGraph_2_41;
      MR_Integer STATE_VARIABLE_RowNum_1_42;
      MR_Word _Key_32;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Integer next_value_of_STATE_VARIABLE_RowNum_0_5;
      MR_Word next_value_of_STATE_VARIABLE_InitMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_9;

      {
        Scalar_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Scalar_31, 0) = ((MR_Box) (MLDS_ModuleName_1));
        MR_hl_field(0, Scalar_31, 1) = ((MR_Box) (Type_2));
        MR_hl_field(0, Scalar_31, 2) = ((MR_Box) (TypeNum_3));
        MR_hl_field(0, Scalar_31, 3) = ((MR_Box) (STATE_VARIABLE_RowNum_0_5));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Scalar_31)), ((MR_Box) (Initializer_26)), STATE_VARIABLE_InitMap_0_7, &STATE_VARIABLE_InitMap_1_39);
      mercury__digraph__add_vertex_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), ((MR_Box) (Scalar_31)), &_Key_32, STATE_VARIABLE_DepGraph_0_9, &STATE_VARIABLE_DepGraph_1_40);
      switch (MR_tag((MR_Word) Initializer_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DepGraph_2_41 = STATE_VARIABLE_DepGraph_1_40;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_46 = ((MR_Word) ((MR_hl_field(1, Initializer_26, 0))));

            ml_backend__mlds_to_target_util__add_scalar_rval_deps_4_p_0(Scalar_31, Rval_46, STATE_VARIABLE_DepGraph_1_40, &STATE_VARIABLE_DepGraph_2_41);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Initializers_49 = ((MR_Word) ((MR_hl_field(2, Initializer_26, 1))));

            ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(Scalar_31, Initializers_49, STATE_VARIABLE_DepGraph_1_40, &STATE_VARIABLE_DepGraph_2_41);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Initializers_48 = ((MR_Word) ((MR_hl_field(3, Initializer_26, 0))));

            ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(Scalar_31, Initializers_48, STATE_VARIABLE_DepGraph_1_40, &STATE_VARIABLE_DepGraph_2_41);
          }
          break;
      }
      STATE_VARIABLE_RowNum_1_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RowNum_0_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Initializers_27;
      next_value_of_STATE_VARIABLE_RowNum_0_5 = STATE_VARIABLE_RowNum_1_42;
      next_value_of_STATE_VARIABLE_InitMap_0_7 = STATE_VARIABLE_InitMap_1_39;
      next_value_of_STATE_VARIABLE_DepGraph_0_9 = STATE_VARIABLE_DepGraph_2_41;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RowNum_0_5 = next_value_of_STATE_VARIABLE_RowNum_0_5;
      STATE_VARIABLE_InitMap_0_7 = next_value_of_STATE_VARIABLE_InitMap_0_7;
      STATE_VARIABLE_DepGraph_0_9 = next_value_of_STATE_VARIABLE_DepGraph_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DepGraph_4 = STATE_VARIABLE_DepGraph_0_3;
    else
    {
      MR_Word Initializer_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Initializers_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_DepGraph_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_3;

      switch (MR_tag((MR_Word) Initializer_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DepGraph_1_15 = STATE_VARIABLE_DepGraph_0_3;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(1, Initializer_10, 0))));

            ml_backend__mlds_to_target_util__add_scalar_rval_deps_4_p_0(HeadVar__1_1, Rval_16, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_1_15);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Initializers_19 = ((MR_Word) ((MR_hl_field(2, Initializer_10, 1))));

            ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(HeadVar__1_1, Initializers_19, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_1_15);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Initializers_18 = ((MR_Word) ((MR_hl_field(3, Initializer_10, 0))));

            ml_backend__mlds_to_target_util__add_scalar_initializers_deps_4_p_0(HeadVar__1_1, Initializers_18, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_1_15);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Initializers_11;
      next_value_of_STATE_VARIABLE_DepGraph_0_3 = STATE_VARIABLE_DepGraph_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DepGraph_0_3 = next_value_of_STATE_VARIABLE_DepGraph_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_rval_deps_4_p_0(
  MR_Word FromScalar_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_DepGraph_0_21,
  MR_Word * STATE_VARIABLE_DepGraph_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ToScalar_17 = (MR_Word) ((MR_Word) (Rval_6));

          mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), ((MR_Box) (FromScalar_5)), ((MR_Box) (ToScalar_17)), STATE_VARIABLE_DepGraph_0_21, STATE_VARIABLE_DepGraph_22);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ToScalar_34 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));

          mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), ((MR_Box) (FromScalar_5)), ((MR_Box) (ToScalar_34)), STATE_VARIABLE_DepGraph_0_21, STATE_VARIABLE_DepGraph_22);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.add_scalar_rval_deps\'/4", (MR_String) "lval or mem_addr");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRvalA_33 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_33;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DepGraph_22 = STATE_VARIABLE_DepGraph_0_21;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRvalA_9 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_9;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalA_36 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_36;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_32 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_32;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRvalA_37 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_37;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, Rval_6, 3))));
              MR_Word STATE_VARIABLE_DepGraph_2_24;
              MR_Word SubRvalA_29 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6;
              MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_21;

              ml_backend__mlds_to_target_util__add_scalar_rval_deps_4_p_0(FromScalar_5, SubRvalA_29, STATE_VARIABLE_DepGraph_0_21, &STATE_VARIABLE_DepGraph_2_24);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_6 = SubRvalB_16;
              next_value_of_STATE_VARIABLE_DepGraph_0_21 = STATE_VARIABLE_DepGraph_2_24;
              Rval_6 = next_value_of_Rval_6;
              STATE_VARIABLE_DepGraph_0_21 = next_value_of_STATE_VARIABLE_DepGraph_0_21;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.add_scalar_rval_deps\'/4", (MR_String) "lval or mem_addr");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRvalA_38 = ((MR_Word) ((MR_hl_field(3, Rval_6, 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_38;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_DepGraph_22 = STATE_VARIABLE_DepGraph_0_21;
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_auto_gen_comment_4_p_0(
  MR_Word Stream_5,
  MR_String SourceFileName_6)
{
  MR_String Version_8;
  MR_String Fullarch_9;

  mercury__library__version_2_p_0(&Version_8, &Fullarch_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "//\n//\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// Automatically generated from ");
  mercury__io__write_string_4_p_0(Stream_5, SourceFileName_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " by ");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "the Mercury Compiler");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// version ");
  mercury__io__write_string_4_p_0(Stream_5, Version_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// configured for ");
  mercury__io__write_string_4_p_0(Stream_5, Fullarch_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "//\n//\n\n");
}

void MR_CALL 
ml_backend__mlds_to_target_util__scope_indent_3_p_0(
  MR_Word Stmt_4,
  MR_Unsigned CurIndent_5,
  MR_Unsigned * ScopeIndent_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Stmt_4)) == (MR_Integer) 0);

  if (succeeded)
    *ScopeIndent_6 = CurIndent_5;
  else
    *ScopeIndent_6 = (CurIndent_5 + (MR_Unsigned) 1U);
}

void MR_CALL 
ml_backend__mlds_to_target_util__write_indentstr_line_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_String Line_8)
{
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_7);
  mercury__io__write_string_4_p_0(Stream_6, Line_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

void MR_CALL 
ml_backend__mlds_to_target_util__maybe_output_pre_function_comment_8_p_0(
  MR_Word Stream_9,
  MR_Word AutoComments_10,
  MR_String IndentStr_11,
  MR_String SC_12,
  MR_String EC_13,
  MR_Word FunctionDefn_14)
{
  switch (AutoComments_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FuncName_16 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_14, 0))));
        MR_Word Source_19 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_14, 3))));

        switch (MR_tag((MR_Word) Source_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Source_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "constructor");
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "continuation");
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "trace");
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "wrapper");
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredProcId_25 = ((MR_Word) ((MR_hl_field(1, Source_19, 0))));
              MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(0, PredProcId_25, 0))));
              MR_Integer ProcId_27 = ((MR_Integer) ((MR_hl_field(0, PredProcId_25, 1))));
              MR_Integer PredIdNum_28;
              MR_Integer ProcIdNum_29;
              MR_String Var_166;
              MR_String Var_176;

              PredIdNum_28 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_26);
              ProcIdNum_29 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_27);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
              mercury__io__write_string_4_p_0(Stream_9, SC_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "pred_id: ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_3[0]), PredIdNum_28, &Var_166);
              mercury__io__write_string_4_p_0(Stream_9, Var_166);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", proc_id: ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_3[0]), ProcIdNum_29, &Var_176);
              mercury__io__write_string_4_p_0(Stream_9, Var_176);
              mercury__io__write_string_4_p_0(Stream_9, EC_13);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              if (((MR_tag((MR_Word) FuncName_16)) == (MR_Integer) 1))
              {
                MR_String Name_47 = ((MR_String) ((MR_hl_field(1, FuncName_16, 0))));

                mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                mercury__io__write_string_4_p_0(Stream_9, SC_12);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "export ");
                mercury__io__write_string_4_p_0(Stream_9, Name_47);
                mercury__io__write_string_4_p_0(Stream_9, EC_13);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              }
              else
              {
                MR_Word PlainFuncName_30 = (MR_Word) ((MR_Word) (FuncName_16));
                MR_Word FuncLabel_31 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_30, 0))));
                MR_Word ProcLabel_33 = ((MR_Word) ((MR_hl_field(0, FuncLabel_31, 0))));
                MR_Word PredLabel_35 = ((MR_Word) ((MR_hl_field(0, ProcLabel_33, 0))));

                if (((MR_tag((MR_Word) PredLabel_35)) == (MR_Integer) 1))
                {
                  MR_String TypeName_45 = ((MR_String) ((MR_hl_field(1, PredLabel_35, 2))));
                  MR_Integer TypeArity_46 = ((MR_Integer) ((MR_hl_field(1, PredLabel_35, 3))));
                  MR_String PredName_117 = ((MR_String) ((MR_hl_field(1, PredLabel_35, 0))));
                  MR_String Var_212;

                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, PredName_117);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " for ");
                  mercury__io__write_string_4_p_0(Stream_9, TypeName_45);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_3[0]), TypeArity_46, &Var_212);
                  mercury__io__write_string_4_p_0(Stream_9, Var_212);
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                else
                {
                  MR_Word PorF_37 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_35, 0))) & (MR_Integer) 1);
                  MR_Word PredFormArity_40 = ((MR_Word) ((MR_hl_field(0, PredLabel_35, 3))));
                  MR_String PredName_41 = ((MR_String) ((MR_hl_field(0, PredLabel_35, 2))));
                  MR_String PorFStr_42;
                  MR_Word UserArity_43;
                  MR_Integer Arity_44;
                  MR_String Var_194;

                  PorFStr_42 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PorF_37);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PorF_37, &UserArity_43, PredFormArity_40);
                  Arity_44 = (MR_Integer) (UserArity_43);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_11);
                  mercury__io__write_string_4_p_0(Stream_9, SC_12);
                  mercury__io__write_string_4_p_0(Stream_9, PorFStr_42);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, PredName_41);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_3[0]), Arity_44, &Var_194);
                  mercury__io__write_string_4_p_0(Stream_9, Var_194);
                  mercury__io__write_string_4_p_0(Stream_9, EC_13);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
              }
            }
            break;
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(
  MR_Word Stream_5,
  MR_Word Vars_6)
{
  MR_String VarNamesStr_8;

  VarNamesStr_8 = ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(Vars_6);
  mercury__io__write_string_4_p_0(Stream_5, VarNamesStr_8);
}

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_VarName_4;

  conv0_VarName_4 = ml_backend__mlds_to_target_util__generic_tvar_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_VarName_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(
  MR_Word Vars_3)
{
  MR_String VarNamesStr_4;

  if ((Vars_3 == (MR_Word) ((MR_Unsigned) 0U)))
    VarNamesStr_4 = (MR_String) "";
  else
  {
    MR_Word VarNameStrs_7;
    MR_String Var_12;
    MR_String Var_20;

    VarNameStrs_7 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_2[3]), Vars_3);
    Var_12 = mercury__string__join_list_2_f_0((MR_String) ", ", VarNameStrs_7);
    Var_20 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ">");
    VarNamesStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
  return VarNamesStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_target_util__generic_tvar_to_string_1_f_0(
  MR_Word Var_3)
{
  MR_String VarName_4;
  MR_Word Var_5;

  Var_5 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  mercury__varset__lookup_name_default_prefix_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var_5, Var_3, (MR_String) "MR_tvar_", &VarName_4);
  return VarName_4;
}

void MR_CALL 
ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(
  MR_Word ArrayDims_4,
  MR_String * LParen_5,
  MR_String * RParen_6)
{
  if ((ArrayDims_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *LParen_5 = (MR_String) "(";
    *RParen_6 = (MR_String) ")";
  }
  else
  {
    *LParen_5 = (MR_String) " {";
    *RParen_6 = (MR_String) "}";
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__make_last_dimension_known_size_3_p_0(
  MR_Word ArrayDims0_4,
  MR_Integer Size_5,
  MR_Word * ArrayDims_6)
{
  MR_bool succeeded;
  MR_Word InitDims_7;
  MR_Integer Var_15;
  MR_Box conv0_Var_15;

  succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims0_4, &InitDims_7, &conv0_Var_15);
  if (succeeded)
  {
    Var_15 = ((MR_Integer) (conv0_Var_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((MR_Integer) 0 == Var_15);
  if (succeeded)
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (Size_5));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *ArrayDims_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), InitDims_7, Var_9);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.make_last_dimension_known_size\'/3", (MR_String) "missing unknown array dimension");
      return;
    }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__mlds_to_target_util__array_dimension_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0(
  MR_String TypeName_4,
  MR_Word ArrayDims_5)
{
  MR_String ArrayTypeName_6;

  if ((ArrayDims_5 == (MR_Word) ((MR_Unsigned) 0U)))
    ArrayTypeName_6 = TypeName_4;
  else
  {
    MR_String Var_9;
    MR_Word ArrayDimStrs_10;
    MR_Word RevArrayDimStrs_11;

    ArrayDimStrs_10 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_2[2]), ArrayDims_5);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArrayDimStrs_10, &RevArrayDimStrs_11);
    mercury__string__append_list_2_p_0(RevArrayDimStrs_11, &Var_9);
    ArrayTypeName_6 = mercury__string__f_43_43_2_f_0(TypeName_4, Var_9);
  }
  return ArrayTypeName_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__mlds_to_target_util__array_dimension_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(
  MR_Word ArrayDims_3)
{
  MR_String ArrayDimsStr_4;
  MR_Word ArrayDimStrs_5;
  MR_Word RevArrayDimStrs_6;

  ArrayDimStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_2[1]), ArrayDims_3);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArrayDimStrs_5, &RevArrayDimStrs_6);
  mercury__string__append_list_2_p_0(RevArrayDimStrs_6, &ArrayDimsStr_4);
  return ArrayDimsStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_target_util__array_dimension_to_string_1_f_0(
  MR_Integer ArrayDim_3)
{
  MR_bool succeeded = (ArrayDim_3 == (MR_Integer) 0);
  MR_String String_4;

  if (succeeded)
    String_4 = (MR_String) "[]";
  else
  {
    MR_String Var_10;
    MR_String Var_17;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util_scalar_common_3[0]), ArrayDim_3, &Var_10);
    Var_17 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "]");
    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_17);
  }
  return String_4;
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(
  MR_Word CtorCat_3)
{
  MR_Word IsArray_4;

  switch (MR_tag((MR_Word) CtorCat_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IsArray_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          IsArray_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          IsArray_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          IsArray_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          IsArray_4 = (MR_Integer) 0;
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
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_3, 1))) & (MR_Integer) 3);

            IsArray_4 = ((&ml_backend__mlds_to_target_util_vector_common_4[0 + Var_12]))->ml_backend__mlds_to_target_util__vector_common_type_4_0__vct_4_f_0;
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

void MR_CALL 
ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(
  MR_Word SymName0_4,
  MR_Word Prefix_5,
  MR_Word * SymName_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName0_4)) == (MR_Integer) 1))
  {
    MR_Word Qual_7 = ((MR_Word) ((MR_hl_field(1, SymName0_4, 0))));
    MR_String Name_8 = ((MR_String) ((MR_hl_field(1, SymName0_4, 1))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Qual_7, Prefix_5);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *SymName_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Name_8));
      }
    else
    {
      MR_Word SymName1_9;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(Qual_7, Prefix_5, &SymName1_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SymName_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName1_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (Name_8));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_target_util.remove_sym_name_prefix\'/3", (MR_String) "prefix not found");
      return;
    }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__local_var_defn_is_commit_type_1_p_0(
  MR_Word LocalVarDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_2, 2))));

  succeeded = (Var_3 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__class_defn_is_private_1_p_0(
  MR_Word ClassDefn_2)
{
  MR_bool succeeded;
  MR_Word Access_3;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, ClassDefn_2, 3))));

  Access_3 = ((((MR_Unsigned) ((MR_hl_field(0, Var_6, 0))) >> 2)) & (MR_Integer) 1);
  succeeded = (Access_3 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(
  MR_Word FuncDefn_2)
{
  MR_bool succeeded;
  MR_Word Access_3;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, FuncDefn_2, 2))));

  Access_3 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 0))) >> 1)) & (MR_Integer) 1);
  succeeded = (Access_3 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(
  MR_Word GlobalVarDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_2, 2))));

  Var_3 = ((((MR_Unsigned) ((MR_hl_field(0, Var_4, 0))) >> 1)) & (MR_Integer) 1);
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util__global_var_defn_is_type_ctor_info_1_p_0(
  MR_Word GlobalVarDefn_2)
{
  MR_bool succeeded;
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_2, 3))));
  MR_Word RttiId_9;
  MR_Word RttiName_11;
  MR_Word Var_12;

  succeeded = ((((MR_tag((MR_Word) Type_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_6, 0)))) == (MR_Integer) 11)));
  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      RttiId_9 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
      succeeded = ((MR_tag((MR_Word) RttiId_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        RttiName_11 = ((MR_Word) ((MR_hl_field(0, RttiId_9, 1))));
        succeeded = (RttiName_11 == (MR_Word) ((MR_Unsigned) 44U));
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____break_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____break_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____break_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____break_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____code_addrs_in_consts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____code_addrs_in_consts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____exit_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____exit_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____initializer_starts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____initializer_starts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____initializer_starts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____initializer_starts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____output_aux_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____output_aux_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_target_util____Unify____output_generics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_target_util____Compare____output_generics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_initializer_starts_0);
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
