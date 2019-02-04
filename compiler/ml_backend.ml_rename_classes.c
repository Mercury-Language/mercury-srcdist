/*
** Automatically generated from `ml_rename_classes.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module ml_backend.ml_rename_classes. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_rename_classes__init
ENDINIT
*/

#include "ml_backend.ml_rename_classes.mih"


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
#include "integer.mih"
#include "io.mih"
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




static const MR_FA_TypeInfo_Struct2 ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0[2];

static const MR_ConstString ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0[1];

static const MR_Integer ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0[1];

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Case_0_10,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Case_11);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_0_10,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_11);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__FieldVarDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__FieldVarDefn_6);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__LocalVarDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__LocalVarDefn_6);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Default_9);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29);

static MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001(
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001(
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_2,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_2[12][6];




static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_2[12][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0
};

static const MR_ConstString ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0[2] = {
  (MR_String) "cnr_module",
  (MR_String) "cnr_renaming"
};

static const MR_DuFunctorDesc ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0 = {
  (MR_String) "class_name_renaming",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0,
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0[1] = {
  &ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0
};

static const MR_DuPtagLayout ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0[1] = {
  &ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0
};

static const MR_Integer ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001)),
  ((MR_Box) (ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001)),
  (MR_String) "ml_backend.ml_rename_classes",
  (MR_String) "class_name_renaming",
  {     ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0 },
  {     ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0
};

void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0(
  MR_Word * ml_backend__ml_rename_classes__HeadVar__1_1,
  MR_Word ml_backend__ml_rename_classes__HeadVar__2_2,
  MR_Word ml_backend__ml_rename_classes__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_rename_classes__succeeded;
    MR_Integer ml_backend__ml_rename_classes__CastX_9 = (MR_Integer) ml_backend__ml_rename_classes__HeadVar__2_2;
    MR_Integer ml_backend__ml_rename_classes__CastY_10 = (MR_Integer) ml_backend__ml_rename_classes__HeadVar__3_3;

    ml_backend__ml_rename_classes__succeeded = (ml_backend__ml_rename_classes__CastX_9 == ml_backend__ml_rename_classes__CastY_10);
    if (ml_backend__ml_rename_classes__succeeded)
      *ml_backend__ml_rename_classes__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_rename_classes__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_rename_classes__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_rename_classes__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_rename_classes__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_rename_classes__Var_8;

      ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_rename_classes__Var_8, ml_backend__ml_rename_classes__ArgX1_4, ml_backend__ml_rename_classes__ArgY1_5);
      ml_backend__ml_rename_classes__succeeded = (ml_backend__ml_rename_classes__Var_8 == (MR_Integer) 0);
      ml_backend__ml_rename_classes__succeeded = !(ml_backend__ml_rename_classes__succeeded);
      if (ml_backend__ml_rename_classes__succeeded)
        *ml_backend__ml_rename_classes__HeadVar__1_1 = ml_backend__ml_rename_classes__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_rename_classes_scalar_common_1[0], ml_backend__ml_rename_classes__HeadVar__1_1, ((MR_Box) (ml_backend__ml_rename_classes__ArgX2_6)), ((MR_Box) (ml_backend__ml_rename_classes__ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0(
  MR_Word ml_backend__ml_rename_classes__HeadVar__1_1,
  MR_Word ml_backend__ml_rename_classes__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_rename_classes__succeeded;
    MR_Integer ml_backend__ml_rename_classes__CastX_7 = (MR_Integer) ml_backend__ml_rename_classes__HeadVar__1_1;
    MR_Integer ml_backend__ml_rename_classes__CastY_8 = (MR_Integer) ml_backend__ml_rename_classes__HeadVar__2_2;

    ml_backend__ml_rename_classes__succeeded = (ml_backend__ml_rename_classes__CastX_7 == ml_backend__ml_rename_classes__CastY_8);
    if (ml_backend__ml_rename_classes__succeeded)
      ml_backend__ml_rename_classes__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_rename_classes__TypeInfo_10_10;
      MR_Word ml_backend__ml_rename_classes__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_rename_classes__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_rename_classes__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_rename_classes__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__HeadVar__2_2, (MR_Integer) 1)));

      ml_backend__ml_rename_classes__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_rename_classes__ArgX1_3, ml_backend__ml_rename_classes__ArgY1_4);
      if (ml_backend__ml_rename_classes__succeeded)
      {
        ml_backend__ml_rename_classes__TypeInfo_10_10 = (MR_Word) &ml_backend__ml_rename_classes_scalar_common_1[0];
        ml_backend__ml_rename_classes__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_rename_classes__TypeInfo_10_10, ((MR_Box) (ml_backend__ml_rename_classes__ArgX2_5)), ((MR_Box) (ml_backend__ml_rename_classes__ArgY2_6)));
      }
    }
    return ml_backend__ml_rename_classes__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 1:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 2:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_rename_classes__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval_12;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_11, &ml_backend__ml_rename_classes__Rval_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_12));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_rename_classes__Lval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Lval_14;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_13, &ml_backend__ml_rename_classes__Lval_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_rename_classes__Type0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Type_16;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_15, &ml_backend__ml_rename_classes__Type_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_16));
            }
          }
          break;
        case (MR_Integer) 3:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Component_18 = ml_backend__ml_rename_classes__STATE_VARIABLE_Component_0_17;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Case_0_10,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Case_11)
{
  {
    MR_Word ml_backend__ml_rename_classes__FirstMatchCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Case_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__LaterMatchConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Case_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Case_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__Stmt_9;

    ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Stmt0_8, &ml_backend__ml_rename_classes__Stmt_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Case_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__FirstMatchCond_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__LaterMatchConds_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Stmt_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_0_10,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_11)
{
  {
    MR_Word ml_backend__ml_rename_classes__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Type0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__GCStmt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__Type_9;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_7, &ml_backend__ml_rename_classes__Type_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Argument_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Name_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__GCStmt_8));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__FieldVarDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__FieldVarDefn_6)
{
  {
    MR_Word ml_backend__ml_rename_classes__FieldVarName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__Type0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_rename_classes__Initializer0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_rename_classes__GCStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldVarDefn0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_rename_classes__Type_13;
    MR_Word ml_backend__ml_rename_classes__Initializer_14;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_10, &ml_backend__ml_rename_classes__Type_13);
    ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Initializer0_11, &ml_backend__ml_rename_classes__Initializer_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__FieldVarDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__FieldVarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Flags_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Type_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Initializer_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__GCStmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__LocalVarDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__LocalVarDefn_6)
{
  {
    MR_Word ml_backend__ml_rename_classes__LocalVarName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__LocalVarDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__LocalVarDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Type0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__LocalVarDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__Initializer0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__LocalVarDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_rename_classes__GCStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__LocalVarDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_rename_classes__Type_12;
    MR_Word ml_backend__ml_rename_classes__Initializer_13;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_9, &ml_backend__ml_rename_classes__Type_12);
    ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Initializer0_10, &ml_backend__ml_rename_classes__Initializer_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__LocalVarDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__LocalVarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Type_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Initializer_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__GCStmt_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv2_FuncDefn_6;

    ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv2_FuncDefn_6);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv2_FuncDefn_6));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_ClassDefn_6;

    ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_ClassDefn_6);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_ClassDefn_6));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv0_FieldVarDefn_6;

    ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv0_FieldVarDefn_6);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_FieldVarDefn_6));
  }
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__ClassDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__ClassDefn_6)
{
  {
    MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_29_29;
    MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_32_32;
    MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_35_35;
    MR_Word ml_backend__ml_rename_classes__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__ClassKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_rename_classes__Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_rename_classes__Inherits_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_rename_classes__Implements_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_rename_classes__TypeParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_rename_classes__MemberFields0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 8)));
    MR_Word ml_backend__ml_rename_classes__MemberClasses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 9)));
    MR_Word ml_backend__ml_rename_classes__MemberMethods0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 10)));
    MR_Word ml_backend__ml_rename_classes__Ctors0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__ClassDefn0_5, (MR_Integer) 11)));
    MR_Word ml_backend__ml_rename_classes__MemberFields_19;
    MR_Word ml_backend__ml_rename_classes__MemberClasses_20;
    MR_Word ml_backend__ml_rename_classes__MemberMethods_21;
    MR_Word ml_backend__ml_rename_classes__Ctors_22;
    MR_Word ml_backend__ml_rename_classes__Var_23;
    MR_Word ml_backend__ml_rename_classes__Var_24;
    MR_Word ml_backend__ml_rename_classes__Var_25;

    {
      ml_backend__ml_rename_classes__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_23, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[10]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_23, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_23, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
    }
    ml_backend__ml_rename_classes__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_29_29, ml_backend__ml_rename_classes__TypeCtorInfo_29_29, ml_backend__ml_rename_classes__Var_23, ml_backend__ml_rename_classes__MemberFields0_15, &ml_backend__ml_rename_classes__MemberFields_19);
    {
      ml_backend__ml_rename_classes__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_24, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[11]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_24, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_24, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
    }
    ml_backend__ml_rename_classes__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0;
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_32_32, ml_backend__ml_rename_classes__TypeCtorInfo_32_32, ml_backend__ml_rename_classes__Var_24, ml_backend__ml_rename_classes__MemberClasses0_16, &ml_backend__ml_rename_classes__MemberClasses_20);
    {
      ml_backend__ml_rename_classes__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_25, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_25, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_25, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
    }
    ml_backend__ml_rename_classes__TypeCtorInfo_35_35 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_35_35, ml_backend__ml_rename_classes__TypeCtorInfo_35_35, ml_backend__ml_rename_classes__Var_25, ml_backend__ml_rename_classes__MemberMethods0_17, &ml_backend__ml_rename_classes__MemberMethods_21);
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_35_35, ml_backend__ml_rename_classes__TypeCtorInfo_35_35, ml_backend__ml_rename_classes__Var_25, ml_backend__ml_rename_classes__Ctors0_18, &ml_backend__ml_rename_classes__Ctors_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__ClassDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Flags_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__ClassKind_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Imports_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__Inherits_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_rename_classes__Implements_13));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_rename_classes__TypeParams_14));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_rename_classes__MemberFields_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_rename_classes__MemberClasses_20));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_rename_classes__MemberMethods_21));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_rename_classes__Ctors_22));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Argument_11;

    ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Argument_11);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Argument_11));
  }
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__FuncDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__FuncDefn_6)
{
  {
    MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_17_33;
    MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_20_36;
    MR_Word ml_backend__ml_rename_classes__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__MaybePPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_rename_classes__FuncParams0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_rename_classes__FuncBody0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_rename_classes__Attributes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_rename_classes__EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_rename_classes__MaybeRequireTailrecInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncDefn0_5, (MR_Integer) 8)));
    MR_Word ml_backend__ml_rename_classes__FuncParams_16;
    MR_Word ml_backend__ml_rename_classes__FuncBody_19;
    MR_Word ml_backend__ml_rename_classes__Arguments0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams0_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__RetTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Arguments_26;
    MR_Word ml_backend__ml_rename_classes__RetTypes_27;
    MR_Word ml_backend__ml_rename_classes__Var_28;
    MR_Word ml_backend__ml_rename_classes__Var_29;

    {
      ml_backend__ml_rename_classes__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_28, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_28, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_28, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
    }
    ml_backend__ml_rename_classes__TypeCtorInfo_17_33 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_17_33, ml_backend__ml_rename_classes__TypeCtorInfo_17_33, ml_backend__ml_rename_classes__Var_28, ml_backend__ml_rename_classes__Arguments0_24, &ml_backend__ml_rename_classes__Arguments_26);
    {
      ml_backend__ml_rename_classes__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_29, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_29, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_29, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
    }
    ml_backend__ml_rename_classes__TypeCtorInfo_20_36 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
    mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_20_36, ml_backend__ml_rename_classes__TypeCtorInfo_20_36, ml_backend__ml_rename_classes__Var_29, ml_backend__ml_rename_classes__RetTypes0_25, &ml_backend__ml_rename_classes__RetTypes_27);
    {
      ml_backend__ml_rename_classes__FuncParams_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams_16, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Arguments_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams_16, 1) = ((MR_Box) (ml_backend__ml_rename_classes__RetTypes_27));
    }
    if ((ml_backend__ml_rename_classes__FuncBody0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_rename_classes__FuncBody_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_rename_classes__Stmt0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FuncBody0_12, (MR_Integer) 0)));
      MR_Word ml_backend__ml_rename_classes__Stmt_18;

      ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Stmt0_17, &ml_backend__ml_rename_classes__Stmt_18);
      {
        ml_backend__ml_rename_classes__FuncBody_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FuncBody_19, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Stmt_18));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__FuncDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Flags_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__MaybePPId_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__FuncParams_16));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__FuncBody_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_rename_classes__Attributes_13));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_rename_classes__EnvVarNames_14));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_rename_classes__MaybeRequireTailrecInfo_15));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Default_9)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Default_9 = ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8;
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Default_9 = ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_rename_classes__Stmt0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Default_0_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Stmt_7;

        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Stmt0_6, &ml_backend__ml_rename_classes__Stmt_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Default_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Stmt_7));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv7_STATE_VARIABLE_Case_11;

    ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv7_STATE_VARIABLE_Case_11);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv7_STATE_VARIABLE_Case_11));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv6_STATE_VARIABLE_Rval_26;

    ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv6_STATE_VARIABLE_Rval_26);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv6_STATE_VARIABLE_Rval_26));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv5_STATE_VARIABLE_Lval_23;

    ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv5_STATE_VARIABLE_Lval_23);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv5_STATE_VARIABLE_Lval_23));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Rval_26;

    ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Rval_26);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Rval_26));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Stmt_57;

    ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Stmt_57);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Stmt_57));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_FuncDefn_6;

    ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_FuncDefn_6);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_FuncDefn_6));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv0_LocalVarDefn_6;

    ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv0_LocalVarDefn_6);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_LocalVarDefn_6));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_100_100;
        MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_103_103;
        MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_106_106;
        MR_Word ml_backend__ml_rename_classes__LocalVarDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__FuncDefns0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__SubStmts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
        MR_Word ml_backend__ml_rename_classes__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
        MR_Word ml_backend__ml_rename_classes__LocalVarDefns_10;
        MR_Word ml_backend__ml_rename_classes__FuncDefns_11;
        MR_Word ml_backend__ml_rename_classes__SubStmts_12;
        MR_Word ml_backend__ml_rename_classes__Var_73;
        MR_Word ml_backend__ml_rename_classes__Var_74;
        MR_Word ml_backend__ml_rename_classes__Var_75;

        {
          ml_backend__ml_rename_classes__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_73, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[5]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_73, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_73, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
        }
        ml_backend__ml_rename_classes__TypeCtorInfo_100_100 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
        mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_100_100, ml_backend__ml_rename_classes__TypeCtorInfo_100_100, ml_backend__ml_rename_classes__Var_73, ml_backend__ml_rename_classes__LocalVarDefns0_6, &ml_backend__ml_rename_classes__LocalVarDefns_10);
        {
          ml_backend__ml_rename_classes__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_74, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[6]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_74, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_74, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
        }
        ml_backend__ml_rename_classes__TypeCtorInfo_103_103 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
        mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_103_103, ml_backend__ml_rename_classes__TypeCtorInfo_103_103, ml_backend__ml_rename_classes__Var_74, ml_backend__ml_rename_classes__FuncDefns0_7, &ml_backend__ml_rename_classes__FuncDefns_11);
        {
          ml_backend__ml_rename_classes__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_75, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[7]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_75, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_75, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
        }
        ml_backend__ml_rename_classes__TypeCtorInfo_106_106 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
        mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_106_106, ml_backend__ml_rename_classes__TypeCtorInfo_106_106, ml_backend__ml_rename_classes__Var_75, ml_backend__ml_rename_classes__SubStmts0_8, &ml_backend__ml_rename_classes__SubStmts_12);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__LocalVarDefns_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__FuncDefns_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__SubStmts_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Context_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_rename_classes__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__SubStmt0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
        MR_Word ml_backend__ml_rename_classes__Rval_16;
        MR_Word ml_backend__ml_rename_classes__SubStmt_17;
        MR_Word ml_backend__ml_rename_classes__Context_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_14, &ml_backend__ml_rename_classes__Rval_16);
        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__SubStmt0_15, &ml_backend__ml_rename_classes__SubStmt_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Kind_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__SubStmt_17));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Context_77));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_rename_classes__Then0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__MaybeElse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
        MR_Word ml_backend__ml_rename_classes__Then_20;
        MR_Word ml_backend__ml_rename_classes__MaybeElse_23;
        MR_Word ml_backend__ml_rename_classes__Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
        MR_Word ml_backend__ml_rename_classes__Rval0_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Rval_80;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_79, &ml_backend__ml_rename_classes__Rval_80);
        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Then0_18, &ml_backend__ml_rename_classes__Then_20);
        if ((ml_backend__ml_rename_classes__MaybeElse0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_rename_classes__MaybeElse_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word ml_backend__ml_rename_classes__Else0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__MaybeElse0_19, (MR_Integer) 0)));
          MR_Word ml_backend__ml_rename_classes__Else_22;

          ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Else0_21, &ml_backend__ml_rename_classes__Else_22);
          {
            ml_backend__ml_rename_classes__MaybeElse_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__MaybeElse_23, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Else_22));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_80));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Then_20));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__MaybeElse_23));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Context_78));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_109_109;
            MR_Word ml_backend__ml_rename_classes__Type0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__SwitchRange_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4)));
            MR_Word ml_backend__ml_rename_classes__Default0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 5)));
            MR_Word ml_backend__ml_rename_classes__Type_28;
            MR_Word ml_backend__ml_rename_classes__Cases_29;
            MR_Word ml_backend__ml_rename_classes__Default_30;
            MR_Word ml_backend__ml_rename_classes__Var_69;
            MR_Word ml_backend__ml_rename_classes__Context_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 6)));
            MR_Word ml_backend__ml_rename_classes__Rval0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Rval_83;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_24, &ml_backend__ml_rename_classes__Type_28);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_82, &ml_backend__ml_rename_classes__Rval_83);
            {
              ml_backend__ml_rename_classes__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_69, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[9]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_69, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_69, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_109_109 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_109_109, ml_backend__ml_rename_classes__TypeCtorInfo_109_109, ml_backend__ml_rename_classes__Var_69, ml_backend__ml_rename_classes__Cases0_26, &ml_backend__ml_rename_classes__Cases_29);
            ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Default0_27, &ml_backend__ml_rename_classes__Default_30);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_28));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_83));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__SwitchRange_25));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Cases_29));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__Default_30));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_rename_classes__Context_81));
            }
          }
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56;
          break;
        case (MR_Integer) 2:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56;
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_rename_classes__Labels_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__Rval0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval_86;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_85, &ml_backend__ml_rename_classes__Rval_86);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_86));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Labels_35));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Context_84));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_112_112;
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_117_117;
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_120_120;
            MR_Word ml_backend__ml_rename_classes__Signature0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rvals0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__RetLvals0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4)));
            MR_Word ml_backend__ml_rename_classes__CallKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 5)));
            MR_Word ml_backend__ml_rename_classes__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 6)));
            MR_Word ml_backend__ml_rename_classes__ArgTypes0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Signature0_36, (MR_Integer) 0)));
            MR_Word ml_backend__ml_rename_classes__RetTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Signature0_36, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__ArgTypes_43;
            MR_Word ml_backend__ml_rename_classes__RetTypes_44;
            MR_Word ml_backend__ml_rename_classes__Signature_45;
            MR_Word ml_backend__ml_rename_classes__Rvals_46;
            MR_Word ml_backend__ml_rename_classes__RetLvals_47;
            MR_Word ml_backend__ml_rename_classes__Var_63;
            MR_Word ml_backend__ml_rename_classes__Var_65;
            MR_Word ml_backend__ml_rename_classes__Var_66;
            MR_Word ml_backend__ml_rename_classes__Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 7)));
            MR_Word ml_backend__ml_rename_classes__Rval0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Rval_89;

            {
              ml_backend__ml_rename_classes__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_63, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_63, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_63, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_112_112, ml_backend__ml_rename_classes__TypeCtorInfo_112_112, ml_backend__ml_rename_classes__Var_63, ml_backend__ml_rename_classes__ArgTypes0_41, &ml_backend__ml_rename_classes__ArgTypes_43);
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_112_112, ml_backend__ml_rename_classes__TypeCtorInfo_112_112, ml_backend__ml_rename_classes__Var_63, ml_backend__ml_rename_classes__RetTypes0_42, &ml_backend__ml_rename_classes__RetTypes_44);
            {
              ml_backend__ml_rename_classes__Signature_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Signature_45, 0) = ((MR_Box) (ml_backend__ml_rename_classes__ArgTypes_43));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Signature_45, 1) = ((MR_Box) (ml_backend__ml_rename_classes__RetTypes_44));
            }
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_88, &ml_backend__ml_rename_classes__Rval_89);
            {
              ml_backend__ml_rename_classes__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_65, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_65, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_65, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_117_117 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_117_117, ml_backend__ml_rename_classes__TypeCtorInfo_117_117, ml_backend__ml_rename_classes__Var_65, ml_backend__ml_rename_classes__Rvals0_37, &ml_backend__ml_rename_classes__Rvals_46);
            {
              ml_backend__ml_rename_classes__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_66, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[8]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_66, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_66, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_120_120 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_120_120, ml_backend__ml_rename_classes__TypeCtorInfo_120_120, ml_backend__ml_rename_classes__Var_66, ml_backend__ml_rename_classes__RetLvals0_38, &ml_backend__ml_rename_classes__RetLvals_47);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Signature_45));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_89));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Rvals_46));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__RetLvals_47));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__CallKind_39));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_rename_classes__Markers_40));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_rename_classes__Context_87));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_123_123;
            MR_Word ml_backend__ml_rename_classes__Var_61;
            MR_Word ml_backend__ml_rename_classes__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Rvals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rvals_92;

            {
              ml_backend__ml_rename_classes__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_123_123 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_123_123, ml_backend__ml_rename_classes__TypeCtorInfo_123_123, ml_backend__ml_rename_classes__Var_61, ml_backend__ml_rename_classes__Rvals0_91, &ml_backend__ml_rename_classes__Rvals_92);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rvals_92));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Context_90));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__ml_rename_classes__Lval0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__BodyStmt0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__HandlerStmt0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__Lval_51;
            MR_Word ml_backend__ml_rename_classes__BodyStmt_52;
            MR_Word ml_backend__ml_rename_classes__HandlerStmt_53;
            MR_Word ml_backend__ml_rename_classes__Context_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4)));

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_48, &ml_backend__ml_rename_classes__Lval_51);
            ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__BodyStmt0_49, &ml_backend__ml_rename_classes__BodyStmt_52);
            ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__HandlerStmt0_50, &ml_backend__ml_rename_classes__HandlerStmt_53);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_51));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__BodyStmt_52));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__HandlerStmt_53));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Context_93));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ml_backend__ml_rename_classes__Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Rval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval_96;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_95, &ml_backend__ml_rename_classes__Rval_96);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_96));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Context_94));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ml_backend__ml_rename_classes__AtomicStmt0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__AtomicStmt_55;
            MR_Word ml_backend__ml_rename_classes__Context_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2)));

            ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__AtomicStmt0_54, &ml_backend__ml_rename_classes__AtomicStmt_55);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__AtomicStmt_55));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Context_97));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Rval_26;

    ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Rval_26);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Rval_26));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Component_18;

    ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Component_18);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Component_18));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
      break;
    case (MR_Integer) 1:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_rename_classes__Lval0_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__Lval_8;
        MR_Word ml_backend__ml_rename_classes__Rval_9;

        ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_6, &ml_backend__ml_rename_classes__Lval_8);
        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_7, &ml_backend__ml_rename_classes__Rval_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_8));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_9));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_rename_classes__Lval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Lval_47;
            MR_Word ml_backend__ml_rename_classes__Rval_48;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_45, &ml_backend__ml_rename_classes__Lval_47);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_46, &ml_backend__ml_rename_classes__Rval_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_47));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_48));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_rename_classes__Rval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval_50;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_49, &ml_backend__ml_rename_classes__Rval_50);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_50));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_53_53;
            MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_56_56;
            MR_Word ml_backend__ml_rename_classes__TargetLval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__ExplicitSecTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 4)));
            MR_Word ml_backend__ml_rename_classes__MaybeSize_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 5)));
            MR_Word ml_backend__ml_rename_classes__MaybeCtorName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 6)));
            MR_Word ml_backend__ml_rename_classes__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 7)));
            MR_Word ml_backend__ml_rename_classes__ArgTypes0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 8)));
            MR_Word ml_backend__ml_rename_classes__MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 9)));
            MR_Word ml_backend__ml_rename_classes__AllocId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 10)));
            MR_Word ml_backend__ml_rename_classes__TargetLval_20;
            MR_Word ml_backend__ml_rename_classes__Type_21;
            MR_Word ml_backend__ml_rename_classes__Args_22;
            MR_Word ml_backend__ml_rename_classes__ArgTypes_23;
            MR_Word ml_backend__ml_rename_classes__Var_39;
            MR_Word ml_backend__ml_rename_classes__Var_40;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__TargetLval0_10, &ml_backend__ml_rename_classes__TargetLval_20);
            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_13, &ml_backend__ml_rename_classes__Type_21);
            {
              ml_backend__ml_rename_classes__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_39, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_39, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_39, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_53_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_53_53, ml_backend__ml_rename_classes__TypeCtorInfo_53_53, ml_backend__ml_rename_classes__Var_39, ml_backend__ml_rename_classes__Args0_16, &ml_backend__ml_rename_classes__Args_22);
            {
              ml_backend__ml_rename_classes__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_40, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_40, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_3));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_40, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
            }
            ml_backend__ml_rename_classes__TypeCtorInfo_56_56 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
            mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_56_56, ml_backend__ml_rename_classes__TypeCtorInfo_56_56, ml_backend__ml_rename_classes__Var_40, ml_backend__ml_rename_classes__ArgTypes0_17, &ml_backend__ml_rename_classes__ArgTypes_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__TargetLval_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__MaybeTag_11));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__ExplicitSecTag_12));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Type_21));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__MaybeSize_14));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_rename_classes__MaybeCtorName_15));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_rename_classes__Args_22));
              MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_rename_classes__ArgTypes_23));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ml_backend__ml_rename_classes__MayUseAtomic_18));
              MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ml_backend__ml_rename_classes__AllocId_19));
            }
          }
          break;
        case (MR_Integer) 3:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
          break;
        case (MR_Integer) 4:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
          break;
        case (MR_Integer) 5:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__ml_rename_classes__Lang_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Components0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35, (MR_Integer) 2)));

            switch (ml_backend__ml_rename_classes__Lang_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_59_59;
                  MR_Word ml_backend__ml_rename_classes__Components_26;
                  MR_Word ml_backend__ml_rename_classes__Var_37;

                  {
                    ml_backend__ml_rename_classes__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_37, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[3]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_37, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_37, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
                  }
                  ml_backend__ml_rename_classes__TypeCtorInfo_59_59 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
                  mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_59_59, ml_backend__ml_rename_classes__TypeCtorInfo_59_59, ml_backend__ml_rename_classes__Var_37, ml_backend__ml_rename_classes__Components0_25, &ml_backend__ml_rename_classes__Components_26);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lang_24));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Components_26));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_36 = ml_backend__ml_rename_classes__STATE_VARIABLE_Stmt_0_35;
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_global_var_defn_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__GlobalVarDefn0_5,
  MR_Word * ml_backend__ml_rename_classes__GlobalVarDefn_6)
{
  {
    MR_Word ml_backend__ml_rename_classes__GlobalVarName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_rename_classes__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_rename_classes__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_rename_classes__Type0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_rename_classes__Initializer0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_rename_classes__GCStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__GlobalVarDefn0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_rename_classes__Type_13;
    MR_Word ml_backend__ml_rename_classes__Initializer_14;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_10, &ml_backend__ml_rename_classes__Type_13);
    ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Initializer0_11, &ml_backend__ml_rename_classes__Initializer_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_rename_classes__GlobalVarDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__GlobalVarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Flags_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Type_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__Initializer_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_rename_classes__GCStmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Initializer_13;

    ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Initializer_13);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Initializer_13));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Initializer_13;

    ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Initializer_13);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_STATE_VARIABLE_Initializer_13));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13 = ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_rename_classes__Rval0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Rval_7;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_6, &ml_backend__ml_rename_classes__Rval_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_7));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_23_23;
        MR_Word ml_backend__ml_rename_classes__Type0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Initializers0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__Type_10;
        MR_Word ml_backend__ml_rename_classes__Initializers_11;
        MR_Word ml_backend__ml_rename_classes__Var_16;

        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_8, &ml_backend__ml_rename_classes__Type_10);
        {
          ml_backend__ml_rename_classes__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_16, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_16, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_16, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
        }
        ml_backend__ml_rename_classes__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_23_23, ml_backend__ml_rename_classes__TypeCtorInfo_23_23, ml_backend__ml_rename_classes__Var_16, ml_backend__ml_rename_classes__Initializers0_9, &ml_backend__ml_rename_classes__Initializers_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Type_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Initializers_11));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_26_26;
        MR_Word ml_backend__ml_rename_classes__Var_14;
        MR_Word ml_backend__ml_rename_classes__Initializers0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Initializers_20;

        {
          ml_backend__ml_rename_classes__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_14, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_14, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_14, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
        }
        ml_backend__ml_rename_classes__TypeCtorInfo_26_26 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_26_26, ml_backend__ml_rename_classes__TypeCtorInfo_26_26, ml_backend__ml_rename_classes__Var_14, ml_backend__ml_rename_classes__Initializers0_19, &ml_backend__ml_rename_classes__Initializers_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Initializers_20));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25;
      break;
    case (MR_Integer) 1:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25;
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_rename_classes__Lval0_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Lval_7;

        ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_6, &ml_backend__ml_rename_classes__Lval_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_7));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_rename_classes__Rval_5;
            MR_Integer ml_backend__ml_rename_classes__Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Rval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 2)));

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_9, &ml_backend__ml_rename_classes__Rval_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Tag_8));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_5));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_rename_classes__RvalConst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__RvalConst_11;

            switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__RvalConst0_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__ml_rename_classes__RvalConst0_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 1:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                }
                break;
              case (MR_Integer) 1:
                ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                break;
              case (MR_Integer) 2:
                ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst0_10, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 1:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 2:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 3:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 4:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 5:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 6:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 7:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 8:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 9:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 10:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 11:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word ml_backend__ml_rename_classes__Lang_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst0_10, (MR_Integer) 1)));
                      MR_String ml_backend__ml_rename_classes__String_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst0_10, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_rename_classes__Type0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst0_10, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_rename_classes__Type_47;

                      ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_46, &ml_backend__ml_rename_classes__Type_47);
                      {
                        ml_backend__ml_rename_classes__RvalConst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lang_44));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 2) = ((MR_Box) (ml_backend__ml_rename_classes__String_45));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Type_47));
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 14:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 15:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 16:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 17:
                    ml_backend__ml_rename_classes__RvalConst_11 = ml_backend__ml_rename_classes__RvalConst0_10;
                    break;
                  case (MR_Integer) 18:
                    {
                      MR_Word ml_backend__ml_rename_classes__Type0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst0_10, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_rename_classes__Type_76;

                      ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_75, &ml_backend__ml_rename_classes__Type_76);
                      {
                        ml_backend__ml_rename_classes__RvalConst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__RvalConst_11, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_76));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__RvalConst_11));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_rename_classes__Op0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Op_13;
            MR_Word ml_backend__ml_rename_classes__Rval_35;
            MR_Word ml_backend__ml_rename_classes__Rval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 2)));

            switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__Op0_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_rename_classes__Type0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Op0_12, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_rename_classes__Type_82;

                  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_81, &ml_backend__ml_rename_classes__Type_82);
                  {
                    ml_backend__ml_rename_classes__Op_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Op_13, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Type_82));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_rename_classes__Type0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__Op0_12, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_rename_classes__Type_88;

                  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_87, &ml_backend__ml_rename_classes__Type_88);
                  {
                    ml_backend__ml_rename_classes__Op_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__Op_13, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Type_88));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_rename_classes__Type0_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__Op0_12, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_rename_classes__Type_90;

                  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_89, &ml_backend__ml_rename_classes__Type_90);
                  {
                    ml_backend__ml_rename_classes__Op_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_rename_classes__Op_13, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Type_90));
                  }
                }
                break;
              case (MR_Integer) 3:
                ml_backend__ml_rename_classes__Op_13 = ml_backend__ml_rename_classes__Op0_12;
                break;
            }
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_36, &ml_backend__ml_rename_classes__Rval_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Op_13));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_rename_classes__RvalA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__RvalB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 3)));
            MR_Word ml_backend__ml_rename_classes__RvalA_16;
            MR_Word ml_backend__ml_rename_classes__RvalB_17;
            MR_Word ml_backend__ml_rename_classes__Op_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__RvalA0_14, &ml_backend__ml_rename_classes__RvalA_16);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__RvalB0_15, &ml_backend__ml_rename_classes__RvalB_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Op_37));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__RvalA_16));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__RvalB_17));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__ml_rename_classes__Lval0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Lval_39;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Lval0_38, &ml_backend__ml_rename_classes__Lval_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Lval_39));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__ml_rename_classes__VectorCommon_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__RowRval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__RowRval_22;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__RowRval0_21, &ml_backend__ml_rename_classes__RowRval_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__VectorCommon_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__RowRval_22));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__ml_rename_classes__Type0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_0_25, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Type_24;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_23, &ml_backend__ml_rename_classes__Type_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Rval_26 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_24));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23)
{
  switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__ml_rename_classes__Tag_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Address0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__FieldId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 2)));
        MR_Word ml_backend__ml_rename_classes__FieldType0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 3)));
        MR_Word ml_backend__ml_rename_classes__PtrType0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 4)));
        MR_Word ml_backend__ml_rename_classes__Address_11;
        MR_Word ml_backend__ml_rename_classes__FieldId_12;
        MR_Word ml_backend__ml_rename_classes__FieldType_13;
        MR_Word ml_backend__ml_rename_classes__PtrType_14;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Address0_7, &ml_backend__ml_rename_classes__Address_11);
        if (((MR_tag((MR_Word) ml_backend__ml_rename_classes__FieldId0_8)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word ml_backend__ml_rename_classes__Name_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FieldId0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_rename_classes__Type0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FieldId0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_rename_classes__Type_40;

          ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_39, &ml_backend__ml_rename_classes__Type_40);
          {
            ml_backend__ml_rename_classes__FieldId_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FieldId_12, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Name_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__FieldId_12, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_40));
          }
        }
        else
        {
          MR_Word ml_backend__ml_rename_classes__Rval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldId0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_rename_classes__Rval_37;

          ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_36, &ml_backend__ml_rename_classes__Rval_37);
          {
            ml_backend__ml_rename_classes__FieldId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FieldId_12, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_37));
          }
        }
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__FieldType0_9, &ml_backend__ml_rename_classes__FieldType_13);
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__PtrType0_10, &ml_backend__ml_rename_classes__PtrType_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Tag_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Address_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__FieldId_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__FieldType_13));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_rename_classes__PtrType_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_rename_classes__Rval0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 0)));
        MR_Word ml_backend__ml_rename_classes__Type0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 1)));
        MR_Word ml_backend__ml_rename_classes__Rval_17;
        MR_Word ml_backend__ml_rename_classes__Type_18;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Rval0_15, &ml_backend__ml_rename_classes__Rval_17);
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_16, &ml_backend__ml_rename_classes__Type_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Rval_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_18));
        }
      }
      break;
    case (MR_Integer) 2:
      *ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23 = ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_rename_classes__LocalVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Type_31;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_30, &ml_backend__ml_rename_classes__Type_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__LocalVar_21));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Type_31));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_rename_classes__GlobalVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 1)));
            MR_Word ml_backend__ml_rename_classes__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_0_22, (MR_Integer) 2)));
            MR_Word ml_backend__ml_rename_classes__Type_29;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_28, &ml_backend__ml_rename_classes__Type_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_rename_classes__STATE_VARIABLE_Lval_23 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__GlobalVar_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Type_29));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv4_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv3_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Argument_11;

    ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Argument_11);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv2_STATE_VARIABLE_Argument_11));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1(
  MR_Box ml_backend__ml_rename_classes__closure_arg,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_rename_classes__closure = ml_backend__ml_rename_classes__closure_arg;
    MR_Word ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29;

    ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), &ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29);
    *ml_backend__ml_rename_classes__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_rename_classes__conv1_STATE_VARIABLE_Type_29));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(
  MR_Word ml_backend__ml_rename_classes__Renaming_4,
  MR_Word ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28,
  MR_Word * ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29)
{
  {
    MR_bool ml_backend__ml_rename_classes__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 2:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 3:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 4:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 5:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 6:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 7:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 8:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 9:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 10:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_17_65;
          MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_20_68;
          MR_Word ml_backend__ml_rename_classes__FuncParams0_20 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28), (MR_Integer) 1);
          MR_Word ml_backend__ml_rename_classes__FuncParams_21;
          MR_Word ml_backend__ml_rename_classes__Arguments0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams0_20, (MR_Integer) 0)));
          MR_Word ml_backend__ml_rename_classes__RetTypes0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams0_20, (MR_Integer) 1)));
          MR_Word ml_backend__ml_rename_classes__Arguments_58;
          MR_Word ml_backend__ml_rename_classes__RetTypes_59;
          MR_Word ml_backend__ml_rename_classes__Var_60;
          MR_Word ml_backend__ml_rename_classes__Var_61;

          {
            ml_backend__ml_rename_classes__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_60, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_60, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_60, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
          }
          ml_backend__ml_rename_classes__TypeCtorInfo_17_65 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
          mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_17_65, ml_backend__ml_rename_classes__TypeCtorInfo_17_65, ml_backend__ml_rename_classes__Var_60, ml_backend__ml_rename_classes__Arguments0_56, &ml_backend__ml_rename_classes__Arguments_58);
          {
            ml_backend__ml_rename_classes__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_61, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
          }
          ml_backend__ml_rename_classes__TypeCtorInfo_20_68 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
          mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_20_68, ml_backend__ml_rename_classes__TypeCtorInfo_20_68, ml_backend__ml_rename_classes__Var_61, ml_backend__ml_rename_classes__RetTypes0_57, &ml_backend__ml_rename_classes__RetTypes_59);
          {
            ml_backend__ml_rename_classes__FuncParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams_21, 0) = ((MR_Box) (ml_backend__ml_rename_classes__Arguments_58));
            MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__FuncParams_21, 1) = ((MR_Box) (ml_backend__ml_rename_classes__RetTypes_59));
          }
          *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_rename_classes__FuncParams_21);
        }
        break;
      case (MR_Integer) 2:
        *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_rename_classes__Type_5;
              MR_Word ml_backend__ml_rename_classes__Type0_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));

              ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_6, &ml_backend__ml_rename_classes__Type_5);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_5));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_45_45;
              MR_Word ml_backend__ml_rename_classes__RetTypes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));
              MR_Word ml_backend__ml_rename_classes__RetTypes_8;
              MR_Word ml_backend__ml_rename_classes__Var_36;

              {
                ml_backend__ml_rename_classes__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_36, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_36, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_36, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
              }
              ml_backend__ml_rename_classes__TypeCtorInfo_45_45 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
              mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_45_45, ml_backend__ml_rename_classes__TypeCtorInfo_45_45, ml_backend__ml_rename_classes__Var_36, ml_backend__ml_rename_classes__RetTypes0_7, &ml_backend__ml_rename_classes__RetTypes_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__RetTypes_8));
              }
            }
            break;
          case (MR_Integer) 2:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_rename_classes__QualClassName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_rename_classes__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 2)));
              MR_Word ml_backend__ml_rename_classes__ClassKind_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 3)));
              MR_Word ml_backend__ml_rename_classes__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName0_9, (MR_Integer) 0)));
              MR_Word ml_backend__ml_rename_classes__QualKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName0_9, (MR_Integer) 1)));
              MR_String ml_backend__ml_rename_classes__ClassName0_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName0_9, (MR_Integer) 2)));
              MR_String ml_backend__ml_rename_classes__ClassName_16;
              MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_46_46;
              MR_Word ml_backend__ml_rename_classes__RenamingMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Renaming_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_rename_classes__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Renaming_4, (MR_Integer) 0)));
              MR_Box ml_backend__ml_rename_classes__conv0_ClassName_16;

              ml_backend__ml_rename_classes__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_rename_classes__ModuleName_12, ml_backend__ml_rename_classes__Var_50);
              if (ml_backend__ml_rename_classes__succeeded)
              {
                ml_backend__ml_rename_classes__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                ml_backend__ml_rename_classes__succeeded = mercury__map__search_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_46_46, ml_backend__ml_rename_classes__TypeCtorInfo_46_46, ml_backend__ml_rename_classes__RenamingMap_15, ((MR_Box) (ml_backend__ml_rename_classes__ClassName0_14)), &ml_backend__ml_rename_classes__conv0_ClassName_16);
                if (ml_backend__ml_rename_classes__succeeded)
                {
                  ml_backend__ml_rename_classes__ClassName_16 = ((MR_String) ml_backend__ml_rename_classes__conv0_ClassName_16);
                  ml_backend__ml_rename_classes__succeeded = MR_TRUE;
                }
              }
              if (ml_backend__ml_rename_classes__succeeded)
              {
                MR_Word ml_backend__ml_rename_classes__QualClassName_17;

                {
                  ml_backend__ml_rename_classes__QualClassName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName_17, 0) = ((MR_Box) (ml_backend__ml_rename_classes__ModuleName_12));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName_17, 1) = ((MR_Box) (ml_backend__ml_rename_classes__QualKind_13));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__QualClassName_17, 2) = ((MR_Box) (ml_backend__ml_rename_classes__ClassName_16));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__QualClassName_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_rename_classes__Arity_10));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_rename_classes__ClassKind_11));
                }
              }
              else
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_rename_classes__Type_39;
              MR_Word ml_backend__ml_rename_classes__Type0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));

              ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_40, &ml_backend__ml_rename_classes__Type_39);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_39));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_rename_classes__TypeCtorInfo_49_49;
              MR_Word ml_backend__ml_rename_classes__Types0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));
              MR_Word ml_backend__ml_rename_classes__Types_19;
              MR_Word ml_backend__ml_rename_classes__Var_32;

              {
                ml_backend__ml_rename_classes__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_32, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_32, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_rename_classes__Var_32, 3) = ((MR_Box) (ml_backend__ml_rename_classes__Renaming_4));
              }
              ml_backend__ml_rename_classes__TypeCtorInfo_49_49 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
              mercury__list__map_3_p_0(ml_backend__ml_rename_classes__TypeCtorInfo_49_49, ml_backend__ml_rename_classes__TypeCtorInfo_49_49, ml_backend__ml_rename_classes__Var_32, ml_backend__ml_rename_classes__Types0_18, &ml_backend__ml_rename_classes__Types_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Types_19));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_rename_classes__Type_41;
              MR_Word ml_backend__ml_rename_classes__Type0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28, (MR_Integer) 1)));

              ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(ml_backend__ml_rename_classes__Renaming_4, ml_backend__ml_rename_classes__Type0_42, &ml_backend__ml_rename_classes__Type_41);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_rename_classes__Type_41));
              }
            }
            break;
          case (MR_Integer) 7:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
          case (MR_Integer) 8:
            *ml_backend__ml_rename_classes__STATE_VARIABLE_Type_29 = ml_backend__ml_rename_classes__STATE_VARIABLE_Type_0_28;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001(
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_rename_classes__succeeded;

    ml_backend__ml_rename_classes__succeeded = ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0(((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_1), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_2));
    return ml_backend__ml_rename_classes__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001(
  MR_Box * ml_backend__ml_rename_classes__wrapper_arg_1,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_2,
  MR_Box ml_backend__ml_rename_classes__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_rename_classes__conv0_HeadVar__1_1;

    ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0(&ml_backend__ml_rename_classes__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_2), ((MR_Word) ml_backend__ml_rename_classes__wrapper_arg_3));
    *ml_backend__ml_rename_classes__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_rename_classes__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_rename_classes__init(void)
{
}

void mercury__ml_backend__ml_rename_classes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0);
}

void mercury__ml_backend__ml_rename_classes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_rename_classes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_rename_classes. */
