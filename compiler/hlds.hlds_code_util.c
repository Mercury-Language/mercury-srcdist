/*
** Automatically generated from `hlds_code_util.m'
** by the Mercury compiler,
** version rotd-2022-01-03
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


// :- module hlds.hlds_code_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#include "hlds.hlds_code_util.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word A_4,
  MR_Word A_2,
  MR_Word * A_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word RenamingA_4,
  MR_Word RenamingB_5,
  MR_Word * Result_6);

static void MR_CALL 
hlds__hlds_code_util__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * String_4);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word Modes_8,
  MR_Integer * MatchingProcId_9);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word * Renaming_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstNameA_6,
  MR_Word InstNameB_7,
  MR_Word * Renaming_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ModuleInfo_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word ModesA_5,
  MR_Word ModesB_6,
  MR_Word * Renaming_7,
  MR_Word ModuleInfo_8);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Modes_7,
  MR_Word ModuleInfo_8,
  MR_Integer * OurProcId_9);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3);

static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[10][3];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_5[2][6];




static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_code_util_scalar_common_3[2])))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__make_instance_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renamings",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word A_4,
  MR_Word A_2,
  MR_Word * A_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), ((MR_Box) (A_2)), ((MR_Box) (A_4)));
    if (succeeded)
    {
      *A_3 = A_4;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_A_3;

    succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word RenamingA_4,
  MR_Word RenamingB_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__union_4_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[9]), RenamingA_4, RenamingB_5, Result_6);
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * String_4)
{
  {
    MR_Word TypeCtor_5;
    MR_Word TypeName_6;
    MR_Integer TypeArity_7;
    MR_String TypeNameString_8;
    MR_String TypeArityString_9;
    MR_String Var_11;
    MR_String Var_13;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_3, &TypeCtor_5);
    TypeName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    TypeArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
    TypeNameString_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeName_6, (MR_String) "__");
    mercury__string__int_to_string_2_p_0(TypeArity_7, &TypeArityString_9);
    Var_13 = mercury__string__f_43_43_2_f_0(TypeArityString_9, (MR_String) "__");
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_13);
    *String_4 = mercury__string__f_43_43_2_f_0(TypeNameString_8, Var_11);
  }
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Procs_6,
  MR_Word Modes0_7,
  MR_Integer * ProcId_8)
{
  {
    MR_bool succeeded;
    MR_Word Modes_9;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[8]), Modes0_7, &Modes_9);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(ModuleInfo_5, Procs_6, Modes_9, ProcId_8);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word Modes_8,
  MR_Integer * MatchingProcId_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Proc_6;
    MR_Word Procs_7;
    MR_Integer ProcId_10;
    MR_Word ProcInfo_11;
    MR_Word ArgModes_12;
    MR_Word TypeInfo_16_28;
    MR_Word TypeInfo_17_29;
    MR_Word Renamings_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Box conv1_Var_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Proc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Procs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_6, (MR_Integer) 0))));
      ProcInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_6, (MR_Integer) 1))));
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_11, &ArgModes_12);
      Var_22 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(Modes_8, ArgModes_12, Var_22, &Renamings_21, ModuleInfo_5);
      if (succeeded)
      {
        Var_23 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[7]);
        TypeInfo_16_28 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
        Var_24 = mercury__map__init_0_f_0(TypeInfo_16_28, TypeInfo_16_28);
        TypeInfo_17_29 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
        succeeded = mercury__list__foldl_4_p_3(TypeInfo_17_29, TypeInfo_17_29, Var_23, Renamings_21, ((MR_Box) (Var_24)), &conv1_Var_16);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *MatchingProcId_9 = ProcId_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Procs_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word * Renaming_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstA_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_47_47;

              succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeInfo_47_47 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                mercury__map__init_1_p_0(TypeInfo_47_47, TypeInfo_47_47, Renaming_8);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_46_46;

              succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                TypeInfo_46_46 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                mercury__map__init_1_p_0(TypeInfo_46_46, TypeInfo_46_46, Renaming_8);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_48_48;
          MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstA_6, (MR_Integer) 0))));
          MR_Word Var_53;

          succeeded = ((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstB_7, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_53);
            if (succeeded)
            {
              TypeInfo_48_48 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
              mercury__map__init_1_p_0(TypeInfo_48_48, TypeInfo_48_48, Renaming_8);
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
          MR_Word HOInstInfoB_12;
          MR_Word Var_54;

          succeeded = ((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
            HOInstInfoB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
            succeeded = (Uniq_10 == Var_54);
            if (succeeded)
            {
              if ((HOInstInfoA_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word TypeInfo_17_73;

                succeeded = (HOInstInfoB_12 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeInfo_17_73 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                  *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_17_73, TypeInfo_17_73);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word PredInstInfoA_65 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_11), (MR_Integer) 1));
                MR_Word PredInstInfoB_66;
                MR_Word PredOrFunc_67;
                MR_Word ModesA_68;
                MR_Word Detism_70;
                MR_Word ModesB_71;
                MR_Word Var_74;
                MR_Word Var_75;

                succeeded = (HOInstInfoB_12 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PredInstInfoB_66 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_12), (MR_Integer) 1));
                  PredOrFunc_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoA_65, (MR_Integer) 0))) & (MR_Integer) 1);
                  ModesA_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfoA_65, (MR_Integer) 1))));
                  Detism_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoA_65, (MR_Integer) 3))) & (MR_Integer) 7);
                  Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoB_66, (MR_Integer) 0))) & (MR_Integer) 1);
                  ModesB_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfoB_66, (MR_Integer) 1))));
                  Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoB_66, (MR_Integer) 3))) & (MR_Integer) 7);
                  succeeded = (PredOrFunc_67 == Var_74);
                  if (succeeded)
                  {
                    succeeded = (Detism_70 == Var_75);
                    if (succeeded)
                      succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(ModesA_68, ModesB_71, Renaming_8, ModuleInfo_5);
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_49_49;
              MR_Word BoundInstsA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
              MR_Word BoundInstsB_16;
              MR_Word Var_39;
              MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_56;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                BoundInstsB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                succeeded = (Uniq_43 == Var_56);
                if (succeeded)
                {
                  TypeInfo_49_49 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                  Var_39 = mercury__map__init_0_f_0(TypeInfo_49_49, TypeInfo_49_49);
                  succeeded = hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(ModuleInfo_5, BoundInstsA_14, BoundInstsB_16, Var_39, Renaming_8);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
              MR_Word HOInstInfoB_42;
              MR_Word Var_55;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                HOInstInfoB_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                succeeded = (Uniq_40 == Var_55);
                if (succeeded)
                {
                  if ((HOInstInfoA_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word TypeInfo_17_88;

                    succeeded = (HOInstInfoB_42 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      TypeInfo_17_88 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                      *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_17_88, TypeInfo_17_88);
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word PredInstInfoA_80 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_41), (MR_Integer) 1));
                    MR_Word PredInstInfoB_81;
                    MR_Word PredOrFunc_82;
                    MR_Word ModesA_83;
                    MR_Word Detism_85;
                    MR_Word ModesB_86;
                    MR_Word Var_89;
                    MR_Word Var_90;

                    succeeded = (HOInstInfoB_42 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredInstInfoB_81 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_42), (MR_Integer) 1));
                      PredOrFunc_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoA_80, (MR_Integer) 0))) & (MR_Integer) 1);
                      ModesA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfoA_80, (MR_Integer) 1))));
                      Detism_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoA_80, (MR_Integer) 3))) & (MR_Integer) 7);
                      Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoB_81, (MR_Integer) 0))) & (MR_Integer) 1);
                      ModesB_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfoB_81, (MR_Integer) 1))));
                      Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfoB_81, (MR_Integer) 3))) & (MR_Integer) 7);
                      succeeded = (PredOrFunc_82 == Var_89);
                      if (succeeded)
                      {
                        succeeded = (Detism_85 == Var_90);
                        if (succeeded)
                          succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(ModesA_83, ModesB_86, Renaming_8, ModuleInfo_5);
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_50_50;
              MR_Word VarA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
              MR_Word VarB_18;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                VarB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                TypeInfo_50_50 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                *Renaming_8 = mercury__map__singleton_2_f_0(TypeInfo_50_50, TypeInfo_50_50, ((MR_Box) (VarA_17)), ((MR_Box) (VarB_18)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_51_51;
              MR_Word InstVarSetA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
              MR_Word SpecInstA_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
              MR_Word InstVarSetB_21;
              MR_Word SpecInstB_22;
              MR_Word Renaming0_23;
              MR_Word ListVarA_24;
              MR_Word ListVarB_25;
              MR_Word VarA_44;
              MR_Word VarB_45;
              MR_Word VarA0_26;
              MR_Word VarB0_27;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word SpecVarB_28;
              MR_Box conv0_SpecVarB_28;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                InstVarSetB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                SpecInstB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_5, SpecInstA_20, SpecInstB_22, &Renaming0_23);
                if (succeeded)
                {
                  TypeInfo_51_51 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                  ListVarA_24 = mercury__set__to_sorted_list_1_f_0(TypeInfo_51_51, InstVarSetA_19);
                  ListVarB_25 = mercury__set__to_sorted_list_1_f_0(TypeInfo_51_51, InstVarSetB_21);
                  succeeded = (ListVarA_24 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    VarA0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListVarA_24, (MR_Integer) 0))));
                    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListVarA_24, (MR_Integer) 1))));
                    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ListVarB_25 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        VarB0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListVarB_25, (MR_Integer) 0))));
                        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListVarB_25, (MR_Integer) 1))));
                        succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    VarA_44 = VarA0_26;
                    VarB_45 = VarB0_27;
                  }
                  else
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_code_util.match_insts_with_renaming\'/4", (MR_String) "non-singleton sets");
                  succeeded = mercury__map__search_3_p_0(TypeInfo_51_51, TypeInfo_51_51, Renaming0_23, ((MR_Box) (VarA_44)), &conv0_SpecVarB_28);
                  if (succeeded)
                  {
                    SpecVarB_28 = ((MR_Word) (conv0_SpecVarB_28));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), ((MR_Box) (VarB_45)), ((MR_Box) (SpecVarB_28)));
                    if (succeeded)
                    {
                      *Renaming_8 = Renaming0_23;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    mercury__map__det_insert_4_p_0(TypeInfo_51_51, TypeInfo_51_51, ((MR_Box) (VarA_44)), ((MR_Box) (VarB_45)), Renaming0_23, Renaming_8);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstNameA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
              MR_Word InstNameB_30;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                InstNameB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                succeeded = hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(ModuleInfo_5, InstNameA_29, InstNameB_30, Renaming_8);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_52_52;
              MR_Word Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
              MR_Word ArgsA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
              MR_Word ArgsB_33;
              MR_Word Var_34;
              MR_Word Var_57;

              succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                ArgsB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_31, Var_57);
                if (succeeded)
                {
                  TypeInfo_52_52 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                  Var_34 = mercury__map__init_0_f_0(TypeInfo_52_52, TypeInfo_52_52);
                  succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(ModuleInfo_5, ArgsA_32, ArgsB_33, Var_34, Renaming_8);
                }
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstNameA_6,
  MR_Word InstNameB_7,
  MR_Word * Renaming_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstNameA_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_29_29;
          MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstNameA_6, (MR_Integer) 0))));
          MR_Word ArgsA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstNameA_6, (MR_Integer) 1))));
          MR_Word ArgsB_11;
          MR_Word Var_28;
          MR_Word Var_31;

          succeeded = ((MR_tag((MR_Word) InstNameB_7)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstNameB_7, (MR_Integer) 0))));
            ArgsB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstNameB_7, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_9, Var_31);
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
              Var_28 = mercury__map__init_0_f_0(TypeInfo_29_29, TypeInfo_29_29);
              succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(ModuleInfo_5, ArgsA_10, ArgsB_11, Var_28, Renaming_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_30_30;

          succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstNameB_7, InstNameA_6);
          if (succeeded)
          {
            TypeInfo_30_30 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
            *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_30_30, TypeInfo_30_30);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstNameA_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_30_30;

              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstNameB_7, InstNameA_6);
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_30_30, TypeInfo_30_30);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_A_3;

    succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Renaming_5 = STATE_VARIABLE_Renaming_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_11_35;
      MR_Word A_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word B_13;
      MR_Word Bs_14;
      MR_Word ConsId_16;
      MR_Word ArgsA_17;
      MR_Word ArgsB_18;
      MR_Word Renaming0_19;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_Renaming_23_23;
      MR_Word Var_26;
      MR_Word Var_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Bs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_11, (MR_Integer) 0))));
        ArgsA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_11, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_13, (MR_Integer) 0))));
        ArgsB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_13, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_26);
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
          Var_22 = mercury__map__init_0_f_0(TypeInfo_25_25, TypeInfo_25_25);
          succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(ModuleInfo_1, ArgsA_17, ArgsB_18, Var_22, &Renaming0_19);
          if (succeeded)
          {
            Var_31 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[6]);
            TypeInfo_11_35 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
            succeeded = mercury__map__union_4_p_0(TypeInfo_11_35, TypeInfo_11_35, Var_31, Renaming0_19, STATE_VARIABLE_Renaming_0_4, &STATE_VARIABLE_Renaming_23_23);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = As_12;
              next_value_of_HeadVar__3_3 = Bs_14;
              next_value_of_STATE_VARIABLE_Renaming_0_4 = STATE_VARIABLE_Renaming_23_23;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Renaming_0_4 = next_value_of_STATE_VARIABLE_Renaming_0_4;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_A_3;

    succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Renaming_5 = STATE_VARIABLE_Renaming_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_11_28;
      MR_Word A_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word As_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word B_13;
      MR_Word Bs_14;
      MR_Word Renaming0_16;
      MR_Word STATE_VARIABLE_Renaming_19_19;
      MR_Word Var_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Bs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_1, A_11, B_13, &Renaming0_16);
        if (succeeded)
        {
          Var_24 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[5]);
          TypeInfo_11_28 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
          succeeded = mercury__map__union_4_p_0(TypeInfo_11_28, TypeInfo_11_28, Var_24, Renaming0_16, STATE_VARIABLE_Renaming_0_4, &STATE_VARIABLE_Renaming_19_19);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = As_12;
            next_value_of_HeadVar__3_3 = Bs_14;
            next_value_of_STATE_VARIABLE_Renaming_0_4 = STATE_VARIABLE_Renaming_19_19;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Renaming_0_4 = next_value_of_STATE_VARIABLE_Renaming_0_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ModuleInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = HeadVar__3_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_29_29;
      MR_Word ModeA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModesA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModeB_12;
      MR_Word ModesB_13;
      MR_Word InstAInitial_16;
      MR_Word InstAFinal_17;
      MR_Word InstBInitial_18;
      MR_Word InstBFinal_19;
      MR_Word InitialSubst_20;
      MR_Word FinalSubst_21;
      MR_Word Var_24;
      MR_Word STATE_VARIABLE_Substs_25_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModeB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ModesB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, ModeA_10, &InstAInitial_16, &InstAFinal_17);
        if (succeeded)
        {
          succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, ModeB_12, &InstBInitial_18, &InstBFinal_19);
          if (succeeded)
          {
            succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_5, InstAInitial_16, InstBInitial_18, &InitialSubst_20);
            if (succeeded)
            {
              succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_5, InstAFinal_17, InstBFinal_19, &FinalSubst_21);
              if (succeeded)
              {
                Var_27 = (MR_Word) ((MR_Unsigned) 0U);
                TypeInfo_29_29 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
                {
                  Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (FinalSubst_21));
                  MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
                }
                {
                  Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (InitialSubst_20));
                  MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
                }
                mercury__list__append_3_p_1(TypeInfo_29_29, Var_24, HeadVar__3_3, &STATE_VARIABLE_Substs_25_25);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ModesA_11;
                next_value_of_HeadVar__2_2 = ModesB_13;
                next_value_of_HeadVar__3_3 = STATE_VARIABLE_Substs_25_25;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word ModesA_5,
  MR_Word ModesB_6,
  MR_Word * Renaming_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word Renamings_9;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Box conv1_Renaming_7;

    succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(ModesA_5, ModesB_6, (MR_Word) ((MR_Unsigned) 0U), &Renamings_9, ModuleInfo_8);
    if (succeeded)
    {
      Var_11 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[4]);
      TypeInfo_16_16 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
      Var_12 = mercury__map__init_0_f_0(TypeInfo_16_16, TypeInfo_16_16);
      TypeInfo_17_17 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
      succeeded = mercury__list__foldl_4_p_3(TypeInfo_17_17, TypeInfo_17_17, Var_11, Renamings_9, ((MR_Box) (Var_12)), &conv1_Renaming_7);
      if (succeeded)
      {
        *Renaming_7 = ((MR_Word) (conv1_Renaming_7));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(
  MR_Word Procs_5,
  MR_Word Modes0_6,
  MR_Word ModuleInfo_7,
  MR_Integer * ProcId_8)
{
  {
    MR_bool succeeded;
    MR_Word Modes_9;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[3]), Modes0_6, &Modes_9);
    succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(Procs_5, Modes_9, ModuleInfo_7, ProcId_8);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Modes_7,
  MR_Word ModuleInfo_8,
  MR_Integer * OurProcId_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word P_5;
    MR_Word Procs_6;
    MR_Integer ProcId_10;
    MR_Word ProcInfo_11;
    MR_Word ArgModes_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      P_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Procs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 0))));
      ProcInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_11, &ArgModes_12);
      succeeded = hlds__hlds_code_util__mode_list_matches_3_p_0(Modes_7, ArgModes_12, ModuleInfo_8);
      if (succeeded)
      {
        *OurProcId_9 = ProcId_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Procs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Mode1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Mode2_7;
      MR_Word Modes2_8;
      MR_Word Inst1_10;
      MR_Word Inst2_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Modes2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_3, Mode1_5, &Inst1_10, &Inst2_11);
        if (succeeded)
        {
          succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_3, Mode2_7, &Var_12, &Var_13);
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst1_10, Var_12);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst2_11, Var_13);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Modes1_6;
                next_value_of_HeadVar__2_2 = Modes2_8;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_String_4;

    hlds__hlds_code_util__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_String_4));
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(
  MR_Word InstanceTable_6,
  MR_Word Constraint_7,
  MR_Integer InstanceNum_8,
  MR_Word InstanceTypes_9)
{
  {
    MR_Word ConsId_10;
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
    MR_Word ConstraintArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 1))));
    MR_Word ClassId_13;
    MR_Word InstanceList_14;
    MR_Word InstanceDefn_15;
    MR_Word InstanceModuleName_16;
    MR_String InstanceString_17;
    MR_Integer Var_18;
    MR_Word InstanceStrings_34;
    MR_Box conv0_InstanceList_14;
    MR_Box conv1_InstanceDefn_15;

    Var_18 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstraintArgTypes_12);
    {
      ClassId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_13, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), ClassId_13, 1) = ((MR_Box) (Var_18));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_1[0]), InstanceTable_6, ((MR_Box) (ClassId_13)), &conv0_InstanceList_14);
    InstanceList_14 = ((MR_Word) (conv0_InstanceList_14));
    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_14, InstanceNum_8, &conv1_InstanceDefn_15);
    InstanceDefn_15 = ((MR_Word) (conv1_InstanceDefn_15));
    InstanceModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_15, (MR_Integer) 0))));
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[2]), InstanceTypes_9, &InstanceStrings_34);
    mercury__string__append_list_2_p_0(InstanceStrings_34, &InstanceString_17);
    {
      ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), ConsId_10, 1) = ((MR_Box) (InstanceModuleName_16));
      MR_hl_field(MR_mktag(3), ConsId_10, 2) = ((MR_Box) (ClassId_13));
      MR_hl_field(MR_mktag(3), ConsId_10, 3) = ((MR_Box) (InstanceNum_8));
      MR_hl_field(MR_mktag(3), ConsId_10, 4) = ((MR_Box) (InstanceString_17));
    }
    return ConsId_10;
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(
  MR_Word TypeCtor_3)
{
  {
    MR_Word ConsId_4;
    MR_Word ModuleName_5;
    MR_String Name_6;
    MR_Integer Arity_7;

    check_hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_3, &ModuleName_5, &Name_6, &Arity_7);
    {
      ConsId_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_4, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), ConsId_4, 1) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(3), ConsId_4, 2) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(3), ConsId_4, 3) = ((MR_Box) (Arity_7));
    }
    return ConsId_4;
  }
}

static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    hlds__hlds_code_util__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  }
}

void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0(
  MR_Word InstanceTypes_3,
  MR_String * InstanceString_4)
{
  {
    MR_Word InstanceStrings_5;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[1]), InstanceTypes_3, &InstanceStrings_5);
    mercury__string__append_list_2_p_0(InstanceStrings_5, InstanceString_4);
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__cons_id_to_tag_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_6;

    switch (MR_tag((MR_Word) ConsId_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsTag_6 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]));
        break;
      case (MR_Integer) 1:
        ConsTag_6 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_51;
          MR_Word ShroudedPredProcId_70 = (MR_Word) (MR_body((MR_Word) (ConsId_5), (MR_Integer) 2));
          MR_Word PredId_71;
          MR_Integer ProcId_72;

          Var_51 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_70);
          PredId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
          ProcId_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
          {
            ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (PredId_71));
            MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (ProcId_72));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_49;
              MR_Word ShroudedPredProcId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word PredId_77;
              MR_Integer ProcId_78;

              Var_49 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_76);
              PredId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
              ProcId_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (PredId_77));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (ProcId_78));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_50;
              MR_Word ShroudedPredProcId_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word PredId_74;
              MR_Integer ProcId_75;

              Var_50 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_73);
              PredId_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
              ProcId_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (PredId_74));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (ProcId_75));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConsRepn_44;

              check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_4, ConsId_5, &ConsRepn_44);
              ConsTag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepn_44, (MR_Integer) 3))));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Globals_39;
              MR_Word TargetLang_40;
              MR_Integer Arity_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_39);
              libs__globals__get_target_2_p_0(Globals_39, &TargetLang_40);
              switch (TargetLang_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = (Arity_79 == (MR_Integer) 0);
                    if (succeeded)
                      ConsTag_6 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_code_util_scalar_common_3[1]));
                    else
                      ConsTag_6 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[3]));
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ConsTag_6 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[3]));
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word PredId_25;
              MR_Integer ProcId_26;
              MR_Word Var_55;

              Var_55 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_23);
              PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
              ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));
              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (PredId_25));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (ProcId_26));
                MR_hl_field(MR_mktag(3), ConsTag_6, 3) = NULL;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word IntConst_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) IntConst_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntConst_7, (MR_Integer) 0))));
                    MR_Word Var_68;

                    {
                      Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Int_8));
                    }
                    {
                      ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_68));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned UInt_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntConst_7, (MR_Integer) 0))));
                    MR_Word Var_67;

                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (UInt_9));
                    }
                    {
                      ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_67));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int8_t Int8_10 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntConst_7, (MR_Integer) 0)));
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (MR_Word) (Int8_10));
                    }
                    {
                      ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_66));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        uint8_t UInt8_11 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_65;

                        {
                          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (MR_Word) (UInt8_11));
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_65));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        int16_t Int16_12 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_64;

                        {
                          Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (MR_Word) (Int16_12));
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_64));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        uint16_t UInt16_13 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_63;

                        {
                          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (MR_Word) (UInt16_13));
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_63));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        int32_t Int32_14 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_62;

                        {
                          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (MR_Word) (Int32_14));
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_62));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        uint32_t UInt32_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_61;

                        {
                          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (MR_Word) (UInt32_15));
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_61));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        int64_t Int64_16 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_60;

                        {
                          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), Var_60, 1) = MR_box_int64(Int64_16);
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_60));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        uint64_t UInt64_17 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntConst_7, (MR_Integer) 1)));
                        MR_Word Var_59;

                        {
                          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), Var_59, 1) = MR_box_uint64(UInt64_17);
                        }
                        {
                          ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_59));
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ConsTag_6, 0) = MR_box_float(Float_18);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char Char_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));
              MR_Integer CharCode_20;
              MR_Word Var_58;

              mercury__char__to_int_2_p_0(Char_19, &CharCode_20);
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (CharCode_20));
              }
              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ConsTag_6, 0) = ((MR_Box) (Var_58));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String String_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (String_21));
              }
            }
            break;
          case (MR_Integer) 9:
            mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "implementation_defined_const");
            break;
          case (MR_Integer) 10:
            {
              MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_String TypeName_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 3))));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (ModuleName_27));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (TypeName_28));
                MR_hl_field(MR_mktag(3), ConsTag_6, 3) = ((MR_Box) (Arity_29));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ClassName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_String EncodedArgs_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 4))));
              MR_Word ModuleName_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (ModuleName_69));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (ClassName_30));
                MR_hl_field(MR_mktag(3), ConsTag_6, 3) = ((MR_Box) (EncodedArgs_32));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer TIConstNum_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (TIConstNum_34));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer TCIConstNum_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (TCIConstNum_35));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ConstNum_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word SubConsId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_Word SubConsTag_38;

              SubConsTag_38 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_4, SubConsId_37);
              {
                ConsTag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), ConsTag_6, 1) = ((MR_Box) (ConstNum_36));
                MR_hl_field(MR_mktag(3), ConsTag_6, 2) = ((MR_Box) (SubConsTag_38));
              }
            }
            break;
        }
        break;
    }
    return ConsTag_6;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_code_util____Unify____inst_var_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_code_util____Compare____inst_var_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_code_util____Unify____inst_var_renamings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_code_util____Compare____inst_var_renamings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_code_util__init(void)
{
}

void mercury__hlds__hlds_code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0);
	MR_register_type_ctor_info(&hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0);
}

void mercury__hlds__hlds_code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_code_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_code_util.
