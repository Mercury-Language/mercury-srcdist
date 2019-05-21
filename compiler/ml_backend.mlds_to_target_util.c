/*
** Automatically generated from `mlds_to_target_util.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module ml_backend.mlds_to_target_util. */
/* :- implementation. */

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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

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

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1[1];

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
ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__Defn_4,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__Var_4);

static void MR_CALL 
ml_backend__mlds_to_target_util__collect_env_var_names_2_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(
  MR_Word ml_backend__mlds_to_target_util__FromScalar_5,
  MR_Word ml_backend__mlds_to_target_util__Initializer_6,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12);

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(
  MR_Word ml_backend__mlds_to_target_util__FromScalar_5,
  MR_Word ml_backend__mlds_to_target_util__Rval_6,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_4[4][3];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_5[3][6];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_6[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_7[1][7];


/* sealed */ struct ml_backend__mlds_to_target_util__vector_common_type_2_0_s {
  const MR_Word ml_backend__mlds_to_target_util__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_2_0_s ml_backend__mlds_to_target_util_vector_common_2[4];



static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_target_util_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_target_util__collect_env_var_names_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
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


static /* final */ const struct ml_backend__mlds_to_target_util__vector_common_type_2_0_s ml_backend__mlds_to_target_util_vector_common_2[4] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_target_util__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
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

static const MR_PseudoTypeInfo ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__field_types_output_aux_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_name_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__du_functor_desc_output_aux_0_1 = {
  (MR_String) "oa_cname",
  (MR_Integer) 1,
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
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar1_4 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar2_5 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_target_util__HeadVar__1_1, ml_backend__mlds_to_target_util__Cast_HeadVar1_4, ml_backend__mlds_to_target_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0(
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__HeadVar__2_1 == ml_backend__mlds_to_target_util__HeadVar__2_2);

    return ml_backend__mlds_to_target_util__succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0(
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__CastX_12 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_target_util__CastY_13 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__3_3;

    ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastX_12 == ml_backend__mlds_to_target_util__CastY_13);
    if (ml_backend__mlds_to_target_util__succeeded)
      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_target_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_target_util__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    ml_backend__mlds____Compare____mlds_type_name_0_0(ml_backend__mlds_to_target_util__HeadVar__1_1, ml_backend__mlds_to_target_util__Var_15, ml_backend__mlds_to_target_util__ArgY1_7);
                  }
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
  MR_Word ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__CastX_11 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_target_util__CastY_12 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;

    ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastX_11 == ml_backend__mlds_to_target_util__CastY_12);
    if (ml_backend__mlds_to_target_util__succeeded)
      ml_backend__mlds_to_target_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__mlds_to_target_util__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ml_backend__mlds_to_target_util__CastX_3 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_target_util__CastY_4 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;

                ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastY_4 == ml_backend__mlds_to_target_util__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ml_backend__mlds_to_target_util__CastX_7 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_target_util__CastY_8 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;

                ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastY_8 == ml_backend__mlds_to_target_util__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ml_backend__mlds_to_target_util__CastX_9 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_target_util__CastY_10 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;

                ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastY_10 == ml_backend__mlds_to_target_util__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_target_util__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_target_util__ArgY1_6;

            ml_backend__mlds_to_target_util__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_target_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__mlds_to_target_util__succeeded)
              {
                ml_backend__mlds_to_target_util__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds____Unify____mlds_type_name_0_0(ml_backend__mlds_to_target_util__ArgX1_5, ml_backend__mlds_to_target_util__ArgY1_6);
                }
              }
          }
          break;
      }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0(
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Integer ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar1_4 = ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar2_5 = ml_backend__mlds_to_target_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_target_util__HeadVar__1_1, ml_backend__mlds_to_target_util__Cast_HeadVar1_4, ml_backend__mlds_to_target_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0(
  MR_Integer ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar1_3 = ml_backend__mlds_to_target_util__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar2_4 = ml_backend__mlds_to_target_util__HeadVar__2_2;

    ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__Cast_HeadVar1_3 == ml_backend__mlds_to_target_util__Cast_HeadVar2_4);
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__CastX_6 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_target_util__CastY_7 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__3_3;

    ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastX_6 == ml_backend__mlds_to_target_util__CastY_7);
    if (ml_backend__mlds_to_target_util__succeeded)
      *ml_backend__mlds_to_target_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__mlds_to_target_util__ArgX1_4 = (MR_Word) ml_backend__mlds_to_target_util__HeadVar__2_2;
        MR_Word ml_backend__mlds_to_target_util__ArgY1_5 = (MR_Word) ml_backend__mlds_to_target_util__HeadVar__3_3;

        {
          ml_backend__mlds____Compare____mlds_func_params_0_0(ml_backend__mlds_to_target_util__HeadVar__1_1, ml_backend__mlds_to_target_util__ArgX1_4, ml_backend__mlds_to_target_util__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(
  MR_Word ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__CastX_5 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_target_util__CastY_6 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;

    ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__CastX_5 == ml_backend__mlds_to_target_util__CastY_6);
    if (ml_backend__mlds_to_target_util__succeeded)
      ml_backend__mlds_to_target_util__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__mlds_to_target_util__ArgX1_3 = (MR_Word) ml_backend__mlds_to_target_util__HeadVar__1_1;
        MR_Word ml_backend__mlds_to_target_util__ArgY1_4 = (MR_Word) ml_backend__mlds_to_target_util__HeadVar__2_2;

        {
          ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__mlds_to_target_util__ArgX1_3, ml_backend__mlds_to_target_util__ArgY1_4);
        }
      }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__Cast_HeadVar1_4 = ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Word ml_backend__mlds_to_target_util__Cast_HeadVar2_5 = ml_backend__mlds_to_target_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[3], ml_backend__mlds_to_target_util__HeadVar__1_1, ((MR_Box) (ml_backend__mlds_to_target_util__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__mlds_to_target_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(
  MR_Word ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__Cast_HeadVar1_3 = ml_backend__mlds_to_target_util__HeadVar__1_1;
    MR_Word ml_backend__mlds_to_target_util__Cast_HeadVar2_4 = ml_backend__mlds_to_target_util__HeadVar__2_2;

    {
      ml_backend__mlds_to_target_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[3], ((MR_Box) (ml_backend__mlds_to_target_util__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__mlds_to_target_util__Cast_HeadVar2_4)));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0(
  MR_Word * ml_backend__mlds_to_target_util__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar1_4 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_target_util__Cast_HeadVar2_5 = (MR_Integer) ml_backend__mlds_to_target_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_target_util__HeadVar__1_1, ml_backend__mlds_to_target_util__Cast_HeadVar1_4, ml_backend__mlds_to_target_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0(
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__HeadVar__2_1 == ml_backend__mlds_to_target_util__HeadVar__2_2);

    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__Defn_4,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__Defn_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19;
        break;
      case (MR_Integer) 1:
        *ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19;
        break;
      case (MR_Integer) 2:
        *ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Defn_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_target_util__EnvVarNames_5;
              MR_Word ml_backend__mlds_to_target_util__FunctionDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Defn_4, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_target_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_target_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_target_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_target_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_target_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_target_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_target_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_target_util__Var_18;

              ml_backend__mlds_to_target_util__EnvVarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 7)));
              ml_backend__mlds_to_target_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__FunctionDefn_10, (MR_Integer) 8)));
              {
                mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_target_util__EnvVarNames_5, ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19, ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20);
              }
            }
            break;
          case (MR_Integer) 1:
            *ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_target_util__STATE_VARIABLE_EnvVarNames_0_19;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__Var_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__TypeCtorInfo_7_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_String ml_backend__mlds_to_target_util__VarName_6;
    MR_Word ml_backend__mlds_to_target_util__Var_12;

    {
      ml_backend__mlds_to_target_util__Var_12 = mercury__varset__init_0_f_0(ml_backend__mlds_to_target_util__TypeCtorInfo_7_14);
    }
    {
      mercury__varset__lookup_name_4_p_0(ml_backend__mlds_to_target_util__TypeCtorInfo_7_14, ml_backend__mlds_to_target_util__Var_12, ml_backend__mlds_to_target_util__Var_4, (MR_String) "MR_tvar_", &ml_backend__mlds_to_target_util__VarName_6);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__VarName_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__collect_env_var_names_2_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;
    MR_Word ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_EnvVarNames_20;

    {
      ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), &ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_EnvVarNames_20);
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_EnvVarNames_20));
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__collect_env_var_names_2_p_0(
  MR_Word ml_backend__mlds_to_target_util__Defns_3,
  MR_Word * ml_backend__mlds_to_target_util__EnvVarNames_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_target_util__EnvVarNamesSet_5;
    MR_Word ml_backend__mlds_to_target_util__Var_7;
    MR_Box ml_backend__mlds_to_target_util__conv1_EnvVarNamesSet_5;

    {
      ml_backend__mlds_to_target_util__Var_7 = mercury__set__init_0_f_0(ml_backend__mlds_to_target_util__TypeCtorInfo_11_11);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[1], (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_4[3], ml_backend__mlds_to_target_util__Defns_3, ((MR_Box) (ml_backend__mlds_to_target_util__Var_7)), &ml_backend__mlds_to_target_util__conv1_EnvVarNamesSet_5);
    }
    ml_backend__mlds_to_target_util__EnvVarNamesSet_5 = ((MR_Word) ml_backend__mlds_to_target_util__conv1_EnvVarNamesSet_5);
    {
      *ml_backend__mlds_to_target_util__EnvVarNames_4 = mercury__set__to_sorted_list_1_f_0(ml_backend__mlds_to_target_util__TypeCtorInfo_11_11, ml_backend__mlds_to_target_util__EnvVarNamesSet_5);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(
  MR_Word ml_backend__mlds_to_target_util__MLDS_ModuleName_11,
  MR_Word ml_backend__mlds_to_target_util__Type_12,
  MR_Word ml_backend__mlds_to_target_util__TypeNum_13,
  MR_Word ml_backend__mlds_to_target_util__Initializer_14,
  MR_Integer ml_backend__mlds_to_target_util__RowNum_15,
  MR_Integer * ml_backend__mlds_to_target_util__HeadVar__6_6,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_20,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_21,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Map_0_22,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Map_23)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__TypeCtorInfo_28_28;
    MR_Word ml_backend__mlds_to_target_util__Scalar_18;
    MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_26_26;
    MR_Word ml_backend__mlds_to_target_util___Key_19;

    *ml_backend__mlds_to_target_util__HeadVar__6_6 = (ml_backend__mlds_to_target_util__RowNum_15 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__Scalar_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Scalar_18, 0) = ((MR_Box) (ml_backend__mlds_to_target_util__MLDS_ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Scalar_18, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__Type_12));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Scalar_18, 2) = ((MR_Box) (ml_backend__mlds_to_target_util__TypeNum_13));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Scalar_18, 3) = ((MR_Box) (ml_backend__mlds_to_target_util__RowNum_15));
    }
    ml_backend__mlds_to_target_util__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    {
      mercury__map__det_insert_4_p_0(ml_backend__mlds_to_target_util__TypeCtorInfo_28_28, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_target_util__Scalar_18)), ((MR_Box) (ml_backend__mlds_to_target_util__Initializer_14)), ml_backend__mlds_to_target_util__STATE_VARIABLE_Map_0_22, ml_backend__mlds_to_target_util__STATE_VARIABLE_Map_23);
    }
    {
      mercury__digraph__add_vertex_4_p_0(ml_backend__mlds_to_target_util__TypeCtorInfo_28_28, ((MR_Box) (ml_backend__mlds_to_target_util__Scalar_18)), &ml_backend__mlds_to_target_util___Key_19, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_20, &ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_26_26);
    }
    {
      ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(ml_backend__mlds_to_target_util__Scalar_18, ml_backend__mlds_to_target_util__Initializer_14, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_26_26, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_21);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;
    MR_Word ml_backend__mlds_to_target_util__conv2_STATE_VARIABLE_Graph_12;

    {
      ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), &ml_backend__mlds_to_target_util__conv2_STATE_VARIABLE_Graph_12);
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_target_util__conv2_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;
    MR_Word ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_Graph_12;

    {
      ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), &ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_Graph_12);
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0(
  MR_Word ml_backend__mlds_to_target_util__FromScalar_5,
  MR_Word ml_backend__mlds_to_target_util__Initializer_6,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__Initializer_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12 = ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_target_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__Initializer_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(ml_backend__mlds_to_target_util__FromScalar_5, ml_backend__mlds_to_target_util__Rval_8, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_target_util__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_target_util__Initializer_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_target_util__Var_15;
          MR_Word ml_backend__mlds_to_target_util___Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_target_util__Initializer_6, (MR_Integer) 0)));
          MR_Box ml_backend__mlds_to_target_util__conv3_STATE_VARIABLE_Graph_12;

          {
            ml_backend__mlds_to_target_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_15, 3) = ((MR_Box) (ml_backend__mlds_to_target_util__FromScalar_5));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[2], ml_backend__mlds_to_target_util__Var_15, ml_backend__mlds_to_target_util__Initializers_10, ((MR_Box) (ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11)), &ml_backend__mlds_to_target_util__conv3_STATE_VARIABLE_Graph_12);
          }
          *ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__mlds_to_target_util__conv3_STATE_VARIABLE_Graph_12);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_target_util__Var_13;
          MR_Word ml_backend__mlds_to_target_util__Initializers_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Initializer_6, (MR_Integer) 0)));
          MR_Box ml_backend__mlds_to_target_util__conv1_STATE_VARIABLE_Graph_12;

          {
            ml_backend__mlds_to_target_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_13, 0) = ((MR_Box) (&ml_backend__mlds_to_target_util_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_13, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__add_scalar_deps_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_13, 3) = ((MR_Box) (ml_backend__mlds_to_target_util__FromScalar_5));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[2], ml_backend__mlds_to_target_util__Var_13, ml_backend__mlds_to_target_util__Initializers_18, ((MR_Box) (ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_11)), &ml_backend__mlds_to_target_util__conv1_STATE_VARIABLE_Graph_12);
          }
          *ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__mlds_to_target_util__conv1_STATE_VARIABLE_Graph_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(
  MR_Word ml_backend__mlds_to_target_util__FromScalar_5,
  MR_Word ml_backend__mlds_to_target_util__Rval_6,
  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18,
  MR_Word * ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_target_util__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__Rval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_target_util__ToScalar_14 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_target_util__Rval_6), (MR_Integer) 0);

              {
                mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__mlds_to_target_util__FromScalar_5)), ((MR_Box) (ml_backend__mlds_to_target_util__ToScalar_14)), ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_target_util__ToScalar_30 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_target_util__Rval_6), (MR_Integer) 1);

              {
                mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__mlds_to_target_util__FromScalar_5)), ((MR_Box) (ml_backend__mlds_to_target_util__ToScalar_30)), ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19);
              }
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
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_target_util__SubRvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 2)));
                  MR_Integer ml_backend__mlds_to_target_util__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_target_util__next_value_of_Rval_6 = ml_backend__mlds_to_target_util__SubRvalA_9;

                    ml_backend__mlds_to_target_util__Rval_6 = ml_backend__mlds_to_target_util__next_value_of_Rval_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                *ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_target_util__SubRvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_target_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_target_util__next_value_of_Rval_6 = ml_backend__mlds_to_target_util__SubRvalA_32;

                    ml_backend__mlds_to_target_util__Rval_6 = ml_backend__mlds_to_target_util__next_value_of_Rval_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__mlds_to_target_util__SubRvalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_24_24;
                  MR_Word ml_backend__mlds_to_target_util__SubRvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_target_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 1)));

                  {
                    ml_backend__mlds_to_target_util__add_scalar_deps_rval_4_p_0(ml_backend__mlds_to_target_util__FromScalar_5, ml_backend__mlds_to_target_util__SubRvalA_27, ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18, &ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_24_24);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_target_util__next_value_of_Rval_6 = ml_backend__mlds_to_target_util__SubRvalB_13;
                    MR_Word ml_backend__mlds_to_target_util__next_value_of_STATE_VARIABLE_Graph_0_18 = ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_24_24;

                    ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18 = ml_backend__mlds_to_target_util__next_value_of_STATE_VARIABLE_Graph_0_18;
                    ml_backend__mlds_to_target_util__Rval_6 = ml_backend__mlds_to_target_util__next_value_of_Rval_6;
                  }
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
                  MR_Word ml_backend__mlds_to_target_util__SubRvalA_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_target_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_target_util__next_value_of_Rval_6 = ml_backend__mlds_to_target_util__SubRvalA_33;

                    ml_backend__mlds_to_target_util__Rval_6 = ml_backend__mlds_to_target_util__next_value_of_Rval_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                *ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_target_util__STATE_VARIABLE_Graph_0_18;
                break;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(
  MR_String ml_backend__mlds_to_target_util__SourceFileName_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_String ml_backend__mlds_to_target_util__Version_6;
    MR_String ml_backend__mlds_to_target_util__Fullarch_7;

    {
      mercury__library__version_2_p_0(&ml_backend__mlds_to_target_util__Version_6, &ml_backend__mlds_to_target_util__Fullarch_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n//\n// Automatically generated from ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__SourceFileName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " by the Mercury Compiler,\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// version ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__Version_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// configured for ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__Fullarch_7);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__write_indented_line_4_p_0(
  MR_Integer ml_backend__mlds_to_target_util__Indent_5,
  MR_String ml_backend__mlds_to_target_util__Line_6)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_target_util__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__Line_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_n_indents_3_p_0(
  MR_Integer ml_backend__mlds_to_target_util__N_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__N_4 <= (MR_Integer) 0);

        if (ml_backend__mlds_to_target_util__succeeded)
          {
          }
        else
          {
            MR_Integer ml_backend__mlds_to_target_util__Var_11;

            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            ml_backend__mlds_to_target_util__Var_11 = (ml_backend__mlds_to_target_util__N_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ml_backend__mlds_to_target_util__next_value_of_N_4 = ml_backend__mlds_to_target_util__Var_11;

              ml_backend__mlds_to_target_util__N_4 = ml_backend__mlds_to_target_util__next_value_of_N_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(
  MR_Word ml_backend__mlds_to_target_util__AutoComments_5,
  MR_Word ml_backend__mlds_to_target_util__PredProcId_6)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    switch (ml_backend__mlds_to_target_util__AutoComments_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_target_util__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__PredProcId_6, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_target_util__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__PredProcId_6, (MR_Integer) 1)));
          MR_Integer ml_backend__mlds_to_target_util__PredIdNum_10;
          MR_Integer ml_backend__mlds_to_target_util__ProcIdNum_11;
          MR_String ml_backend__mlds_to_target_util__Var_24;
          MR_Word ml_backend__mlds_to_target_util__Var_30;
          MR_String ml_backend__mlds_to_target_util__Var_34;

          {
            hlds__hlds_pred__pred_id_to_int_2_p_0(ml_backend__mlds_to_target_util__PredId_8, &ml_backend__mlds_to_target_util__PredIdNum_10);
          }
          {
            hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_target_util__ProcId_9, &ml_backend__mlds_to_target_util__ProcIdNum_11);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "// pred_id: ");
          }
          ml_backend__mlds_to_target_util__Var_30 = (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_6[0];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_target_util__Var_30, ml_backend__mlds_to_target_util__PredIdNum_10, &ml_backend__mlds_to_target_util__Var_24);
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__Var_24);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", proc_id: ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_target_util__Var_30, ml_backend__mlds_to_target_util__ProcIdNum_11, &ml_backend__mlds_to_target_util__Var_34);
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_target_util__Var_34);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__generic_tvar_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_target_util__Var_3,
  MR_String * ml_backend__mlds_to_target_util__VarName_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_Word ml_backend__mlds_to_target_util__Var_5;

    {
      ml_backend__mlds_to_target_util__Var_5 = mercury__varset__init_0_f_0(ml_backend__mlds_to_target_util__TypeCtorInfo_7_7);
    }
    {
      mercury__varset__lookup_name_4_p_0(ml_backend__mlds_to_target_util__TypeCtorInfo_7_7, ml_backend__mlds_to_target_util__Var_5, ml_backend__mlds_to_target_util__Var_3, (MR_String) "MR_tvar_", ml_backend__mlds_to_target_util__VarName_4);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;

    {
      ml_backend__mlds_to_target_util__output_generic_tvar_3_p_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1));
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__Vars_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    if ((ml_backend__mlds_to_target_util__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "<");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_1[0], ml_backend__mlds_to_target_util__Vars_4, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_4[2]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ">");
        }
      }
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(
  MR_Integer ml_backend__mlds_to_target_util__N_3,
  MR_String * ml_backend__mlds_to_target_util__String_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__N_3 == (MR_Integer) 0);

    if (ml_backend__mlds_to_target_util__succeeded)
      *ml_backend__mlds_to_target_util__String_4 = (MR_String) "[]";
    else
      {
        MR_String ml_backend__mlds_to_target_util__Var_10;
        MR_String ml_backend__mlds_to_target_util__Var_17;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_target_util_scalar_common_6[0], ml_backend__mlds_to_target_util__N_3, &ml_backend__mlds_to_target_util__Var_10);
        }
        {
          ml_backend__mlds_to_target_util__Var_17 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_target_util__Var_10, (MR_String) "]");
        }
        {
          *ml_backend__mlds_to_target_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", ml_backend__mlds_to_target_util__Var_17);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_2(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_target_util__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0_1(
  MR_Box ml_backend__mlds_to_target_util__closure_arg,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_target_util__closure = ml_backend__mlds_to_target_util__closure_arg;
    MR_String ml_backend__mlds_to_target_util__conv0_String_4;

    {
      ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) ml_backend__mlds_to_target_util__wrapper_arg_1), &ml_backend__mlds_to_target_util__conv0_String_4);
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_String_4));
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__ArrayDims_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_target_util__Strings_6;
    MR_Box ml_backend__mlds_to_target_util__conv1_STATE_VARIABLE_IO_8;

    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_target_util__TypeCtorInfo_15_15, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_4[0], ml_backend__mlds_to_target_util__ArrayDims_4, &ml_backend__mlds_to_target_util__Strings_6);
    }
    {
      mercury__list__foldr_4_p_2(ml_backend__mlds_to_target_util__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_target_util_scalar_common_4[1], ml_backend__mlds_to_target_util__Strings_6, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_target_util__conv1_STATE_VARIABLE_IO_8);
    }
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(
  MR_Word ml_backend__mlds_to_target_util__CtorCat_3)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__IsArray_4;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_target_util__CtorCat_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_target_util__CtorCat_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__CtorCat_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_target_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_target_util__CtorCat_3, (MR_Integer) 1)));

              ml_backend__mlds_to_target_util__IsArray_4 = ((&ml_backend__mlds_to_target_util_vector_common_2[0 + ml_backend__mlds_to_target_util__Var_12]))->ml_backend__mlds_to_target_util__vector_common_type_2_0__vct_2_f_0;
            }
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_target_util__IsArray_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return ml_backend__mlds_to_target_util__IsArray_4;
  }
}

void MR_CALL 
ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(
  MR_Word ml_backend__mlds_to_target_util__SymName0_4,
  MR_Word ml_backend__mlds_to_target_util__Prefix_5,
  MR_Word * ml_backend__mlds_to_target_util__SymName_6)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_target_util__SymName0_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_target_util__Qual_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__SymName0_4, (MR_Integer) 0)));
        MR_String ml_backend__mlds_to_target_util__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_target_util__SymName0_4, (MR_Integer) 1)));

        {
          ml_backend__mlds_to_target_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_target_util__Qual_7, ml_backend__mlds_to_target_util__Prefix_5);
        }
        if (ml_backend__mlds_to_target_util__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__mlds_to_target_util__SymName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__mlds_to_target_util__Name_8));
          }
        else
          {
            MR_Word ml_backend__mlds_to_target_util__SymName1_9;

            {
              ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(ml_backend__mlds_to_target_util__Qual_7, ml_backend__mlds_to_target_util__Prefix_5, &ml_backend__mlds_to_target_util__SymName1_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__mlds_to_target_util__SymName_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__mlds_to_target_util__SymName1_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_target_util__Name_8));
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
ml_backend__mlds_to_target_util__defn_is_enum_const_2_p_0(
  MR_Word ml_backend__mlds_to_target_util__Defn_3,
  MR_Word * ml_backend__mlds_to_target_util__FieldVarDefn_4)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_target_util__Defn_3)) == (MR_mktag((MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_target_util__Var_5;
    MR_Word ml_backend__mlds_to_target_util__Var_6;
    MR_Word ml_backend__mlds_to_target_util__Var_7;
    MR_Word ml_backend__mlds_to_target_util__Var_8;
    MR_Word ml_backend__mlds_to_target_util__Var_9;
    MR_Word ml_backend__mlds_to_target_util__Var_10;
    MR_Word ml_backend__mlds_to_target_util__Var_11;
    MR_Word ml_backend__mlds_to_target_util__Var_12;

    if (ml_backend__mlds_to_target_util__succeeded)
      {
        *ml_backend__mlds_to_target_util__FieldVarDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_target_util__Defn_3), (MR_Integer) 2);
        ml_backend__mlds_to_target_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 0)));
        ml_backend__mlds_to_target_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 1)));
        ml_backend__mlds_to_target_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 2)));
        ml_backend__mlds_to_target_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 3)));
        ml_backend__mlds_to_target_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 4)));
        ml_backend__mlds_to_target_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__mlds_to_target_util__FieldVarDefn_4, (MR_Integer) 5)));
        ml_backend__mlds_to_target_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_6, (MR_Integer) 0)));
        ml_backend__mlds_to_target_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_target_util__Var_6, (MR_Integer) 1)));
        ml_backend__mlds_to_target_util__succeeded = (ml_backend__mlds_to_target_util__Var_5 == (MR_Integer) 1);
      }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(
  MR_Word ml_backend__mlds_to_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;
    MR_Word ml_backend__mlds_to_target_util__HeadVar__2_2;

    switch (ml_backend__mlds_to_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__mlds_to_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__mlds_to_target_util__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_method_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____exit_method_0_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_method_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____exit_method_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____exit_methods_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____exit_methods_0_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____exit_methods_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____exit_methods_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____func_info_csj_0_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____func_info_csj_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____indent_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____indent_0_0(((MR_Integer) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____indent_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____indent_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Integer) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Integer) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_aux_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____output_aux_0_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_aux_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____output_aux_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_target_util____Unify____output_generics_0_0_10001(
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_target_util__succeeded;

    {
      ml_backend__mlds_to_target_util__succeeded = ml_backend__mlds_to_target_util____Unify____output_generics_0_0(((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2));
    }
    return ml_backend__mlds_to_target_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_target_util____Compare____output_generics_0_0_10001(
  MR_Box * ml_backend__mlds_to_target_util__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_target_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_target_util__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_target_util____Compare____output_generics_0_0(&ml_backend__mlds_to_target_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_target_util__wrapper_arg_3));
    }
    *ml_backend__mlds_to_target_util__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_target_util__conv0_HeadVar__1_1));
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

/* :- end_module ml_backend.mlds_to_target_util. */
