/*
** Automatically generated from `unused_types.m'
** by the Mercury compiler,
** version rotd-2026-07-23
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


// :- module check_hlds.unused_types.
// :- implementation.

/*
INIT mercury__check_hlds__unused_types__init
ENDINIT
*/

#include "check_hlds.unused_types.mih"


#include "analysis.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
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
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__unused_types__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_types__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0;

static void MR_CALL 
check_hlds__unused_types__report_unused_type_ctor_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_foreign_export_enum_info_3_p_0(
  MR_Word FEEInfo_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_7,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_8);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_arg_3_p_0(
  MR_Word CtorArg_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_9,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_10);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0(
  MR_Word Ctor_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_12,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_13);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_vte_3_p_0(
  MR_Word VarTableEntry_4,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_9,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_10);

static void MR_CALL 
check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0(
  MR_Word PredUnusedTypeCtorSet_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_3,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_4);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_18);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_3);

static void MR_CALL 
check_hlds__unused_types__collect_should_be_used_type_ctors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_3,
  MR_Word STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ShouldBeUsedDuTypeCtors_5);


static /* final */ const MR_Box check_hlds__unused_types_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_3[4][6];

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_5[1][7];




static /* final */ const MR_Box check_hlds__unused_types_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: type constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_types_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unused."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_types_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 166U) },
};

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_3[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_4[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__unused_types_scalar_common_3[0])),
    ((MR_Box) (check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__unused_types_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unused_types_scalar_common_3[2])),
    ((MR_Box) (check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unused_types_scalar_common_3[3])),
    ((MR_Box) (check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__unused_types_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unused_types_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__unused_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unused_types__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__unused_types__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_types__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unused_types__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&check_hlds__unused_types__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_types__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static void MR_CALL 
check_hlds__unused_types__report_unused_type_ctor_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_Word TypeDefn_8;
  MR_Word Context_9;
  MR_Word Pieces_10;
  MR_Word Spec_12;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_24;
  MR_Word Var_25;

  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_6, &TypeDefn_8);
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_8, &Context_9);
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_types_scalar_common_1[4])));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_types_scalar_common_1[2])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__unused_types_scalar_common_1[6])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &check_hlds__unused_types_scalar_common_1[7])));
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_24);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.unused_types.report_unused_type_ctor\'/4"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_types_scalar_common_2[0])));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_foreign_export_enum_info_3_p_0(
  MR_Word FEEInfo_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_7,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_8)
{
  MR_Word TypeCtor_6 = ((MR_Word) ((MR_hl_field(0, FEEInfo_4, 1))));

  mercury__set_tree234__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_UnusedTypeCtorSet_0_7, STATE_VARIABLE_UnusedTypeCtorSet_8);
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_arg_3_p_0(
  MR_Word CtorArg_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_9,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_10)
{
  MR_Word ArgType_7 = ((MR_Word) ((MR_hl_field(0, CtorArg_4, 1))));

  check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(ArgType_7, STATE_VARIABLE_UnusedTypeCtorSet_0_9, STATE_VARIABLE_UnusedTypeCtorSet_10);
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnusedTypeCtorSet_10;

  check_hlds__unused_types__record_type_ctors_used_in_data_ctor_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UnusedTypeCtorSet_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UnusedTypeCtorSet_10));
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0(
  MR_Word Ctor_4,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_12,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_13)
{
  MR_Word CtorArgs_9 = ((MR_Word) ((MR_hl_field(0, Ctor_4, 3))));
  MR_Box conv1_STATE_VARIABLE_UnusedTypeCtorSet_13;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__unused_types_scalar_common_1[0]), (MR_Word) (&check_hlds__unused_types_scalar_common_4[4]), CtorArgs_9, ((MR_Box) (STATE_VARIABLE_UnusedTypeCtorSet_0_12)), &conv1_STATE_VARIABLE_UnusedTypeCtorSet_13);
  *STATE_VARIABLE_UnusedTypeCtorSet_13 = ((MR_Word) (conv1_STATE_VARIABLE_UnusedTypeCtorSet_13));
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_vte_3_p_0(
  MR_Word VarTableEntry_4,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_9,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_10)
{
  MR_Word Type_7 = ((MR_Word) ((MR_hl_field(0, VarTableEntry_4, 1))));

  check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(Type_7, STATE_VARIABLE_ShouldBeUsedTypeCtors_0_9, STATE_VARIABLE_ShouldBeUsedTypeCtors_10);
}

static void MR_CALL 
check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Specs_14;

  check_hlds__unused_types__report_unused_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_14));
}

static void MR_CALL 
check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnusedTypeCtorSet_8;

  check_hlds__unused_types__record_type_ctors_used_in_foreign_export_enum_info_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UnusedTypeCtorSet_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UnusedTypeCtorSet_8));
}

void MR_CALL 
check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_10,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_11)
{
  MR_bool succeeded;
  MR_Word SpecsSoFar_6;
  MR_Word Globals_7;
  MR_Word ErrorsSoFar_8;

  SpecsSoFar_6 = parse_tree__error_util__maybe_written_specs_to_specs_1_f_0(STATE_VARIABLE_MaybeWrittenSpecs_0_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
  ErrorsSoFar_8 = parse_tree__error_util__contains_errors_2_f_0(Globals_7, SpecsSoFar_6);
  switch (ErrorsSoFar_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UnusedTypeSpecs_9;
        MR_Word Globals_13;
        MR_Word WarnUnusedTypes_14;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_13);
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 166, &WarnUnusedTypes_14);
        switch (WarnUnusedTypes_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            UnusedTypeSpecs_9 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeTable_15;
              MR_Word TypeCtorsDefns_16;
              MR_Word ShouldBeUsedEqvTypeCtors_17;
              MR_Word ShouldBeUsedDuTypeCtors_18;
              MR_Word ShouldBeUsedEqvTypeCtorsSet_19;
              MR_Word ShouldBeUsedDuTypeCtorsSet_20;
              MR_Word UsedEqvModules_21;
              MR_Word ExpandedInIntTypeCtorSet_22;
              MR_Word ExpandedInImpTypeCtorSet_23;
              MR_Word ExpandedTypeCtorsSet_25;
              MR_Word UnusedEqvTypeCtorSet_26;
              MR_Word PredTable_27;
              MR_Word PredIdTable_28;
              MR_Word PredInfos_29;
              MR_Word UnusedDuTypeCtorSet0_30;
              MR_Word UnusedDuTypeCtorSet1_31;
              MR_Word UnusedDuTypeCtorSet_34;
              MR_Word UnusedTypeCtorSet_35;
              MR_Word Var_40;
              MR_Box conv3_UnusedTypeSpecs_9;

              hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_15);
              hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_15, &TypeCtorsDefns_16);
              check_hlds__unused_types__collect_should_be_used_type_ctors_5_p_0(TypeCtorsDefns_16, (MR_Word) ((MR_Unsigned) 0U), &ShouldBeUsedEqvTypeCtors_17, (MR_Word) ((MR_Unsigned) 0U), &ShouldBeUsedDuTypeCtors_18);
              mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ShouldBeUsedEqvTypeCtors_17, &ShouldBeUsedEqvTypeCtorsSet_19);
              mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ShouldBeUsedDuTypeCtors_18, &ShouldBeUsedDuTypeCtorsSet_20);
              hlds__hlds_module__module_info_get_used_eqv_modules_2_p_0(ModuleInfo_4, &UsedEqvModules_21);
              ExpandedInIntTypeCtorSet_22 = ((MR_Word) ((MR_hl_field(0, UsedEqvModules_21, 0))));
              ExpandedInImpTypeCtorSet_23 = ((MR_Word) ((MR_hl_field(0, UsedEqvModules_21, 1))));
              mercury__set_tree234__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ExpandedInIntTypeCtorSet_22, ExpandedInImpTypeCtorSet_23, &ExpandedTypeCtorsSet_25);
              mercury__set_tree234__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ShouldBeUsedEqvTypeCtorsSet_19, ExpandedTypeCtorsSet_25, &UnusedEqvTypeCtorSet_26);
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_4, &PredTable_27);
              hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_27, &PredIdTable_28);
              mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_28, &PredInfos_29);
              check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0(PredInfos_29, ShouldBeUsedDuTypeCtorsSet_20, &UnusedDuTypeCtorSet0_30);
              succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), UnusedDuTypeCtorSet0_30);
              if (succeeded)
                UnusedDuTypeCtorSet1_31 = UnusedDuTypeCtorSet0_30;
              else
              {
                MR_Word DecisionData_32;
                MR_Word FEEInfos_33;
                MR_Box conv1_UnusedDuTypeCtorSet1_31;

                hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(ModuleInfo_4, &DecisionData_32);
                FEEInfos_33 = ((MR_Word) ((MR_hl_field(0, DecisionData_32, 3))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&check_hlds__unused_types_scalar_common_1[0]), (MR_Word) (&check_hlds__unused_types_scalar_common_4[3]), FEEInfos_33, ((MR_Box) (UnusedDuTypeCtorSet0_30)), &conv1_UnusedDuTypeCtorSet1_31);
                UnusedDuTypeCtorSet1_31 = ((MR_Word) (conv1_UnusedDuTypeCtorSet1_31));
              }
              succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), UnusedDuTypeCtorSet1_31);
              if (succeeded)
                UnusedDuTypeCtorSet_34 = UnusedDuTypeCtorSet1_31;
              else
                check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0(UnusedDuTypeCtorSet1_31, TypeCtorsDefns_16, UnusedDuTypeCtorSet1_31, &UnusedDuTypeCtorSet_34);
              mercury__set_tree234__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), UnusedEqvTypeCtorSet_26, UnusedDuTypeCtorSet_34, &UnusedTypeCtorSet_35);
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__unused_types_scalar_common_5[0]));
                MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__unused_types__maybe_warn_about_unused_types_3_p_0_2));
                MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_40, 3) = ((MR_Box) (TypeTable_15));
              }
              mercury__set_tree234__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__unused_types_scalar_common_1[1]), Var_40, UnusedTypeCtorSet_35, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_UnusedTypeSpecs_9);
              UnusedTypeSpecs_9 = ((MR_Word) (conv3_UnusedTypeSpecs_9));
            }
            break;
        }
        parse_tree__error_util__add_to_be_written_specs_3_p_0(UnusedTypeSpecs_9, STATE_VARIABLE_MaybeWrittenSpecs_0_10, STATE_VARIABLE_MaybeWrittenSpecs_11);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_MaybeWrittenSpecs_11 = STATE_VARIABLE_MaybeWrittenSpecs_0_10;
      break;
  }
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UnusedTypeCtorSet_13;

  check_hlds__unused_types__record_type_ctors_used_in_data_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UnusedTypeCtorSet_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UnusedTypeCtorSet_13));
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnusedTypeCtorSet_10;

  check_hlds__unused_types__record_type_ctors_used_in_data_ctor_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UnusedTypeCtorSet_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UnusedTypeCtorSet_10));
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_defns_4_p_0(
  MR_Word PredUnusedTypeCtorSet_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnusedTypeCtorSet_0_3,
  MR_Word * STATE_VARIABLE_UnusedTypeCtorSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnusedTypeCtorSet_4 = STATE_VARIABLE_UnusedTypeCtorSet_0_3;
    else
    {
      MR_Word TypeCtorDefn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TypeCtorsDefns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_10, 0))));
      MR_Word TypeDefn_14 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_10, 1))));
      MR_Word TypeStatus_15;
      MR_Word STATE_VARIABLE_UnusedTypeCtorSet_3_42;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_UnusedTypeCtorSet_0_3;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_14, &TypeStatus_15);
      {
        MR_Word Var_38;

        Var_38 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_15);
        succeeded = (Var_38 == (MR_Integer) 0);
      }
      if (!(succeeded))
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), PredUnusedTypeCtorSet_1, ((MR_Box) (TypeCtor_13)));
      if (succeeded)
        STATE_VARIABLE_UnusedTypeCtorSet_3_42 = STATE_VARIABLE_UnusedTypeCtorSet_0_3;
      else
      {
        MR_Word TypeBody_16;

        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_16);
        switch (MR_tag((MR_Word) TypeBody_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_16));
              MR_Word OoMCtors_18 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 0))));
              MR_Word MaybeSubType_20 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 2))));
              MR_Word HeadCtor_24 = ((MR_Word) ((MR_hl_field(0, OoMCtors_18, 0))));
              MR_Word TailCtors_25 = ((MR_Word) ((MR_hl_field(0, OoMCtors_18, 1))));
              MR_Word STATE_VARIABLE_UnusedTypeCtorSet_1_39;
              MR_Word STATE_VARIABLE_UnusedTypeCtorSet_2_41;
              MR_Word CtorArgs_56 = ((MR_Word) ((MR_hl_field(0, HeadCtor_24, 3))));
              MR_Box conv1_STATE_VARIABLE_UnusedTypeCtorSet_1_39;
              MR_Box conv3_STATE_VARIABLE_UnusedTypeCtorSet_2_41;

              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__unused_types_scalar_common_1[0]), (MR_Word) (&check_hlds__unused_types_scalar_common_4[1]), CtorArgs_56, ((MR_Box) (STATE_VARIABLE_UnusedTypeCtorSet_0_3)), &conv1_STATE_VARIABLE_UnusedTypeCtorSet_1_39);
              STATE_VARIABLE_UnusedTypeCtorSet_1_39 = ((MR_Word) (conv1_STATE_VARIABLE_UnusedTypeCtorSet_1_39));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__unused_types_scalar_common_1[0]), (MR_Word) (&check_hlds__unused_types_scalar_common_4[2]), TailCtors_25, ((MR_Box) (STATE_VARIABLE_UnusedTypeCtorSet_1_39)), &conv3_STATE_VARIABLE_UnusedTypeCtorSet_2_41);
              STATE_VARIABLE_UnusedTypeCtorSet_2_41 = ((MR_Word) (conv3_STATE_VARIABLE_UnusedTypeCtorSet_2_41));
              if ((MaybeSubType_20 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_UnusedTypeCtorSet_3_42 = STATE_VARIABLE_UnusedTypeCtorSet_2_41;
              else
              {
                MR_Word SuperType_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubType_20, 0))));

                check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(SuperType_26, STATE_VARIABLE_UnusedTypeCtorSet_2_41, &STATE_VARIABLE_UnusedTypeCtorSet_3_42);
              }
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_UnusedTypeCtorSet_3_42 = STATE_VARIABLE_UnusedTypeCtorSet_0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_27 = ((MR_Word) ((MR_hl_field(2, TypeBody_16, 0))));

              check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(EqvType_27, STATE_VARIABLE_UnusedTypeCtorSet_0_3, &STATE_VARIABLE_UnusedTypeCtorSet_3_42);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_16, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeDetailsSolver_28 = ((MR_Word) ((MR_hl_field(3, TypeBody_16, 1))));
                  MR_Word Details_29 = ((MR_Word) ((MR_hl_field(0, TypeDetailsSolver_28, 0))));
                  MR_Word RepnType_30 = ((MR_Word) ((MR_hl_field(0, Details_29, 0))));

                  check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(RepnType_30, STATE_VARIABLE_UnusedTypeCtorSet_0_3, &STATE_VARIABLE_UnusedTypeCtorSet_3_42);
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_UnusedTypeCtorSet_3_42 = STATE_VARIABLE_UnusedTypeCtorSet_0_3;
                break;
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeCtorsDefns_11;
      next_value_of_STATE_VARIABLE_UnusedTypeCtorSet_0_3 = STATE_VARIABLE_UnusedTypeCtorSet_3_42;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_UnusedTypeCtorSet_0_3 = next_value_of_STATE_VARIABLE_UnusedTypeCtorSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ShouldBeUsedTypeCtors_18 = STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Type_4, 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_4, 1))));
          MR_Integer Arity_11;
          MR_Word TypeCtor_12;
          MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_1_19;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_10, &Arity_11);
          {
            TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (SymName_9));
            MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) (Arity_11));
          }
          mercury__set_tree234__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17, &STATE_VARIABLE_ShouldBeUsedTypeCtors_1_19);
          check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(ArgTypes_10, STATE_VARIABLE_ShouldBeUsedTypeCtors_1_19, STATE_VARIABLE_ShouldBeUsedTypeCtors_18);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ShouldBeUsedTypeCtors_18 = STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_37 = ((MR_Word) ((MR_hl_field(3, Type_4, 1))));

              check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(ArgTypes_37, STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17, STATE_VARIABLE_ShouldBeUsedTypeCtors_18);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(3, Type_4, 2))));

              check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(ArgTypes_36, STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17, STATE_VARIABLE_ShouldBeUsedTypeCtors_18);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_32 = ((MR_Word) ((MR_hl_field(3, Type_4, 2))));

              check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(ArgTypes_32, STATE_VARIABLE_ShouldBeUsedTypeCtors_0_17, STATE_VARIABLE_ShouldBeUsedTypeCtors_18);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_16 = ((MR_Word) ((MR_hl_field(3, Type_4, 1))));
              MR_Word next_value_of_Type_4 = SubType_16;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ShouldBeUsedTypeCtors_3 = STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;

      check_hlds__unused_types__record_type_ctors_used_in_type_3_p_0(Type_7, STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2, &STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_8;
      next_value_of_STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2 = STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2 = next_value_of_STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ShouldBeUsedTypeCtors_10;

  check_hlds__unused_types__record_type_ctors_used_in_vte_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ShouldBeUsedTypeCtors_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ShouldBeUsedTypeCtors_10));
}

static void MR_CALL 
check_hlds__unused_types__record_type_ctors_used_in_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedTypeCtors_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ShouldBeUsedTypeCtors_3 = STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;
    else
    {
      MR_Word PredInfo_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredInfos_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;
      MR_Word PredOrigin_14;
      MR_Word Process_15;

      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_7, &PredOrigin_14);
      switch (MR_tag((MR_Word) PredOrigin_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Process_15 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompilerMade_16 = ((MR_Word) ((MR_hl_field(1, PredOrigin_14, 0))));

            switch (MR_tag((MR_Word) CompilerMade_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Process_15 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unused_types.record_type_ctors_used_in_pred\'/3", (MR_String) "later pass predicate");
                  return;
                }
                break;
              case (MR_Integer) 2:
                Process_15 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, CompilerMade_16, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Process_15 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    Process_15 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredTransform_17 = ((MR_Word) ((MR_hl_field(2, PredOrigin_14, 0))));

            switch (MR_tag((MR_Word) PredTransform_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unused_types.record_type_ctors_used_in_pred\'/3", (MR_String) "later transform");
                  return;
                }
                break;
              case (MR_Integer) 1:
                Process_15 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ProcTransform_20 = ((MR_Word) ((MR_hl_field(3, PredOrigin_14, 0))));

            switch (MR_tag((MR_Word) ProcTransform_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unused_types.record_type_ctors_used_in_pred\'/3", (MR_String) "later transform");
                  return;
                }
                break;
              case (MR_Integer) 1:
                Process_15 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      switch (Process_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12 = STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClausesInfo_24;
            MR_Word VarTable_25;
            MR_Box conv1_STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_7, &ClausesInfo_24);
            VarTable_25 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_24, 2))));
            parse_tree__var_table__foldl_var_table_values_4_p_0((MR_Word) (&check_hlds__unused_types_scalar_common_1[0]), (MR_Word) (&check_hlds__unused_types_scalar_common_4[0]), VarTable_25, ((MR_Box) (STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2)), &conv1_STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12);
            STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12 = ((MR_Word) (conv1_STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12));
          }
          break;
      }
      succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12);
      if (succeeded)
        *STATE_VARIABLE_ShouldBeUsedTypeCtors_3 = STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = PredInfos_8;
        MR_Word next_value_of_STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2 = STATE_VARIABLE_ShouldBeUsedTypeCtors_1_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2 = next_value_of_STATE_VARIABLE_ShouldBeUsedTypeCtors_0_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_types__collect_should_be_used_type_ctors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2,
  MR_Word * STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_3,
  MR_Word STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ShouldBeUsedDuTypeCtors_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ShouldBeUsedDuTypeCtors_5 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
      *STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_3 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
    }
    else
    {
      MR_Word Pair_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pairs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word TypeCtor_16 = ((MR_Word) ((MR_hl_field(0, Pair_12, 0))));
      MR_Word TypeDefn_17 = ((MR_Word) ((MR_hl_field(0, Pair_12, 1))));
      MR_Word TypeStatus_18;
      MR_Word TypeBody_19;
      MR_Word STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33;
      MR_Word STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_17, &TypeStatus_18);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_17, &TypeBody_19);
      Var_31 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_18);
      succeeded = (Var_31 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_32 = hlds__status__type_status_is_exported_1_f_0(TypeStatus_18);
        succeeded = (Var_32 == (MR_Integer) 0);
      }
      if (succeeded)
        switch (MR_tag((MR_Word) TypeBody_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_20 = (MR_Word) ((MR_Word) (TypeBody_19));
              MR_Word IsForeignType_21 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_20, 5))));

              if ((IsForeignType_21 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33, 0) = ((MR_Box) (TypeCtor_16));
                  MR_hl_field(1, STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33, 1) = ((MR_Box) (STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4));
                }
              else
                STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
              STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
              STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34, 0) = ((MR_Box) (TypeCtor_16));
                MR_hl_field(1, STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34, 1) = ((MR_Box) (STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2));
              }
              STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_19, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
                  STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
                  STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
                }
                break;
            }
            break;
        }
      else
      {
        STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
        STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pairs_13;
      next_value_of_STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2 = STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_1_34;
      next_value_of_STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4 = STATE_VARIABLE_ShouldBeUsedDuTypeCtors_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2 = next_value_of_STATE_VARIABLE_ShouldBeUsedEqvTypeCtors_0_2;
      STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4 = next_value_of_STATE_VARIABLE_ShouldBeUsedDuTypeCtors_0_4;
      continue;
    }
    break;
  }
}

void mercury__check_hlds__unused_types__init(void)
{
}

void mercury__check_hlds__unused_types__init_type_tables(void)
{
}

void mercury__check_hlds__unused_types__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unused_types__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unused_types.
