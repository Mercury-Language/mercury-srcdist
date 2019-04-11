/*
** Automatically generated from `hlds_code_util.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module hlds.hlds_code_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#include "hlds.hlds_code_util.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.prog_mode.mih"
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




static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box hlds__hlds_code_util__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word hlds__hlds_code_util__A_4,
  MR_Word hlds__hlds_code_util__A_2,
  MR_Word * hlds__hlds_code_util__A_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word hlds__hlds_code_util__RenamingA_4,
  MR_Word hlds__hlds_code_util__RenamingB_5,
  MR_Word * hlds__hlds_code_util__Result_6);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
  MR_Word hlds__hlds_code_util__InstNameA_6,
  MR_Word hlds__hlds_code_util__InstNameB_7,
  MR_Word * hlds__hlds_code_util__Renaming_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
  MR_Word hlds__hlds_code_util__InstA_6,
  MR_Word hlds__hlds_code_util__InstB_7,
  MR_Word * hlds__hlds_code_util__Renaming_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word * hlds__hlds_code_util__HeadVar__4_4,
  MR_Word hlds__hlds_code_util__ModuleInfo_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModesA_5,
  MR_Word hlds__hlds_code_util__ModesB_6,
  MR_Word * hlds__hlds_code_util__Renaming_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__Modes_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
  MR_Integer * hlds__hlds_code_util__OurProcId_9);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__ModuleInfo_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__Modes_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
  MR_Integer * hlds__hlds_code_util__OurProcId_9);

static void MR_CALL 
hlds__hlds_code_util__type_to_string_2_p_0(
  MR_Word hlds__hlds_code_util__Type_3,
  MR_String * hlds__hlds_code_util__String_4);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);


static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[10][3];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][6];




static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_code_util__make_instance_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renamings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util____Unify____inst_var_renaming_0_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2));
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_code_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_code_util____Compare____inst_var_renaming_0_0(&hlds__hlds_code_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), ((MR_Word) hlds__hlds_code_util__wrapper_arg_3));
    }
    *hlds__hlds_code_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util____Unify____inst_var_renamings_0_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2));
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_code_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_code_util____Compare____inst_var_renamings_0_0(&hlds__hlds_code_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), ((MR_Word) hlds__hlds_code_util__wrapper_arg_3));
    }
    *hlds__hlds_code_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_4 = hlds__hlds_code_util__HeadVar__2_2;
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_5 = hlds__hlds_code_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[2], hlds__hlds_code_util__HeadVar__1_1, ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_3 = hlds__hlds_code_util__HeadVar__1_1;
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_4 = hlds__hlds_code_util__HeadVar__2_2;

    {
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[2], ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_4)));
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_4 = hlds__hlds_code_util__HeadVar__2_2;
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_5 = hlds__hlds_code_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_2[0], hlds__hlds_code_util__HeadVar__1_1, ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_3 = hlds__hlds_code_util__HeadVar__1_1;
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_4 = hlds__hlds_code_util__HeadVar__2_2;

    {
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_2[0], ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_4)));
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word hlds__hlds_code_util__A_4,
  MR_Word hlds__hlds_code_util__A_2,
  MR_Word * hlds__hlds_code_util__A_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;

    {
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[1], ((MR_Box) (hlds__hlds_code_util__A_2)), ((MR_Box) (hlds__hlds_code_util__A_4)));
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__A_3 = hlds__hlds_code_util__A_4;
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_A_3;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word hlds__hlds_code_util__RenamingA_4,
  MR_Word hlds__hlds_code_util__RenamingB_5,
  MR_Word * hlds__hlds_code_util__Result_6)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__TypeInfo_11_11 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];

    {
      hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_11, hlds__hlds_code_util__TypeInfo_11_11, (MR_Word) &hlds__hlds_code_util_scalar_common_2[9], hlds__hlds_code_util__RenamingA_4, hlds__hlds_code_util__RenamingB_5, hlds__hlds_code_util__Result_6);
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
  MR_Word hlds__hlds_code_util__InstNameA_6,
  MR_Word hlds__hlds_code_util__InstNameB_7,
  MR_Word * hlds__hlds_code_util__Renaming_8)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_code_util__InstNameA_6)) {
      default:
        hlds__hlds_code_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_code_util__TypeInfo_29_29;
          MR_Word hlds__hlds_code_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 0)));
          MR_Word hlds__hlds_code_util__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_code_util__ArgsB_11;
          MR_Word hlds__hlds_code_util__Var_28;
          MR_Word hlds__hlds_code_util__Var_31;

          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstNameB_7)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__hlds_code_util__succeeded)
            {
              hlds__hlds_code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameB_7, (MR_Integer) 0)));
              hlds__hlds_code_util__ArgsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameB_7, (MR_Integer) 1)));
              {
                hlds__hlds_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_code_util__Name_9, hlds__hlds_code_util__Var_31);
              }
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__TypeInfo_29_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    hlds__hlds_code_util__Var_28 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_29_29, hlds__hlds_code_util__TypeInfo_29_29);
                  }
                  {
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ArgsA_10, hlds__hlds_code_util__ArgsB_11, hlds__hlds_code_util__Var_28, hlds__hlds_code_util__Renaming_8);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_code_util__TypeInfo_30_30;

          {
            hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__hlds_code_util__InstNameB_7, hlds__hlds_code_util__InstNameA_6);
          }
          if (hlds__hlds_code_util__succeeded)
            {
              hlds__hlds_code_util__TypeInfo_30_30 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
              {
                *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_30_30, hlds__hlds_code_util__TypeInfo_30_30);
              }
              hlds__hlds_code_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 0)))) {
          default:
            hlds__hlds_code_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_30_30;

              {
                hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__hlds_code_util__InstNameB_7, hlds__hlds_code_util__InstNameA_6);
              }
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__TypeInfo_30_30 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_30_30, hlds__hlds_code_util__TypeInfo_30_30);
                  }
                  hlds__hlds_code_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
  MR_Word hlds__hlds_code_util__InstA_6,
  MR_Word hlds__hlds_code_util__InstB_7,
  MR_Word * hlds__hlds_code_util__Renaming_8)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_code_util__InstA_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_code_util__InstA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_48_48;

              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__TypeInfo_48_48 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_48_48, hlds__hlds_code_util__TypeInfo_48_48, hlds__hlds_code_util__Renaming_8);
                  }
                  hlds__hlds_code_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_47_47;

              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__TypeInfo_47_47 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_47_47, hlds__hlds_code_util__TypeInfo_47_47, hlds__hlds_code_util__Renaming_8);
                  }
                  hlds__hlds_code_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_code_util__TypeInfo_49_49;
          MR_Word hlds__hlds_code_util__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)));
          MR_Word hlds__hlds_code_util__Var_54;

          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hlds_code_util__succeeded)
            {
              hlds__hlds_code_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)));
              {
                hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_code_util__Type_9, hlds__hlds_code_util__Var_54);
              }
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__TypeInfo_49_49 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_49_49, hlds__hlds_code_util__TypeInfo_49_49, hlds__hlds_code_util__Renaming_8);
                  }
                  hlds__hlds_code_util__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_code_util__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)));
          MR_Word hlds__hlds_code_util__HOInstInfoA_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_code_util__HOInstInfoB_12;
          MR_Word hlds__hlds_code_util__Var_55;

          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__hlds_code_util__succeeded)
            {
              hlds__hlds_code_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)));
              hlds__hlds_code_util__HOInstInfoB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_10 == hlds__hlds_code_util__Var_55);
              if (hlds__hlds_code_util__succeeded)
                {
                  if ((hlds__hlds_code_util__HOInstInfoA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word hlds__hlds_code_util__TypeInfo_17_74;

                      hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HOInstInfoB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__hlds_code_util__succeeded)
                        {
                          hlds__hlds_code_util__TypeInfo_17_74 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                          {
                            *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_17_74, hlds__hlds_code_util__TypeInfo_17_74);
                          }
                          hlds__hlds_code_util__succeeded = MR_TRUE;
                        }
                    }
                  else
                    {
                      MR_Word hlds__hlds_code_util__PredInstInfoA_66 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoA_11), (MR_Integer) 1);
                      MR_Word hlds__hlds_code_util__PredInstInfoB_67;
                      MR_Word hlds__hlds_code_util__PredOrFunc_68;
                      MR_Word hlds__hlds_code_util__ModesA_69;
                      MR_Word hlds__hlds_code_util__Detism_71;
                      MR_Word hlds__hlds_code_util__ModesB_72;
                      MR_Word hlds__hlds_code_util__Var_75;
                      MR_Word hlds__hlds_code_util__Var_76;
                      MR_Word hlds__hlds_code_util__Var_70;
                      MR_Word hlds__hlds_code_util__Var_73;

                      hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HOInstInfoB_12)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__hlds_code_util__succeeded)
                        {
                          hlds__hlds_code_util__PredInstInfoB_67 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoB_12), (MR_Integer) 1);
                          hlds__hlds_code_util__PredOrFunc_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_66, (MR_Integer) 0)));
                          hlds__hlds_code_util__ModesA_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_66, (MR_Integer) 1)));
                          hlds__hlds_code_util__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_66, (MR_Integer) 2)));
                          hlds__hlds_code_util__Detism_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_66, (MR_Integer) 3)));
                          hlds__hlds_code_util__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_67, (MR_Integer) 0)));
                          hlds__hlds_code_util__ModesB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_67, (MR_Integer) 1)));
                          hlds__hlds_code_util__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_67, (MR_Integer) 2)));
                          hlds__hlds_code_util__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_67, (MR_Integer) 3)));
                          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__PredOrFunc_68 == hlds__hlds_code_util__Var_75);
                          if (hlds__hlds_code_util__succeeded)
                            {
                              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Detism_71 == hlds__hlds_code_util__Var_76);
                              if (hlds__hlds_code_util__succeeded)
                                {
                                  hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(hlds__hlds_code_util__ModesA_69, hlds__hlds_code_util__ModesB_72, hlds__hlds_code_util__Renaming_8, hlds__hlds_code_util__ModuleInfo_5);
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_50_50;
              MR_Word hlds__hlds_code_util__BoundInstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 3)));
              MR_Word hlds__hlds_code_util__BoundInstsB_16;
              MR_Word hlds__hlds_code_util__Var_40;
              MR_Word hlds__hlds_code_util__Uniq_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__Var_57;
              MR_Word hlds__hlds_code_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_code_util__Var_15;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  hlds__hlds_code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
                  hlds__hlds_code_util__BoundInstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 3)));
                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_44 == hlds__hlds_code_util__Var_57);
                  if (hlds__hlds_code_util__succeeded)
                    {
                      hlds__hlds_code_util__TypeInfo_50_50 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                      {
                        hlds__hlds_code_util__Var_40 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_50_50, hlds__hlds_code_util__TypeInfo_50_50);
                      }
                      {
                        hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__BoundInstsA_14, hlds__hlds_code_util__BoundInstsB_16, hlds__hlds_code_util__Var_40, hlds__hlds_code_util__Renaming_8);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_code_util__Uniq_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__HOInstInfoA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_code_util__HOInstInfoB_43;
              MR_Word hlds__hlds_code_util__Var_56;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  hlds__hlds_code_util__HOInstInfoB_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_41 == hlds__hlds_code_util__Var_56);
                  if (hlds__hlds_code_util__succeeded)
                    {
                      if ((hlds__hlds_code_util__HOInstInfoA_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word hlds__hlds_code_util__TypeInfo_17_89;

                          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HOInstInfoB_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (hlds__hlds_code_util__succeeded)
                            {
                              hlds__hlds_code_util__TypeInfo_17_89 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                              {
                                *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_17_89, hlds__hlds_code_util__TypeInfo_17_89);
                              }
                              hlds__hlds_code_util__succeeded = MR_TRUE;
                            }
                        }
                      else
                        {
                          MR_Word hlds__hlds_code_util__PredInstInfoA_81 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoA_42), (MR_Integer) 1);
                          MR_Word hlds__hlds_code_util__PredInstInfoB_82;
                          MR_Word hlds__hlds_code_util__PredOrFunc_83;
                          MR_Word hlds__hlds_code_util__ModesA_84;
                          MR_Word hlds__hlds_code_util__Detism_86;
                          MR_Word hlds__hlds_code_util__ModesB_87;
                          MR_Word hlds__hlds_code_util__Var_90;
                          MR_Word hlds__hlds_code_util__Var_91;
                          MR_Word hlds__hlds_code_util__Var_85;
                          MR_Word hlds__hlds_code_util__Var_88;

                          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HOInstInfoB_43)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__hlds_code_util__succeeded)
                            {
                              hlds__hlds_code_util__PredInstInfoB_82 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoB_43), (MR_Integer) 1);
                              hlds__hlds_code_util__PredOrFunc_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_81, (MR_Integer) 0)));
                              hlds__hlds_code_util__ModesA_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_81, (MR_Integer) 1)));
                              hlds__hlds_code_util__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_81, (MR_Integer) 2)));
                              hlds__hlds_code_util__Detism_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_81, (MR_Integer) 3)));
                              hlds__hlds_code_util__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_82, (MR_Integer) 0)));
                              hlds__hlds_code_util__ModesB_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_82, (MR_Integer) 1)));
                              hlds__hlds_code_util__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_82, (MR_Integer) 2)));
                              hlds__hlds_code_util__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_82, (MR_Integer) 3)));
                              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__PredOrFunc_83 == hlds__hlds_code_util__Var_90);
                              if (hlds__hlds_code_util__succeeded)
                                {
                                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Detism_86 == hlds__hlds_code_util__Var_91);
                                  if (hlds__hlds_code_util__succeeded)
                                    {
                                      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(hlds__hlds_code_util__ModesA_84, hlds__hlds_code_util__ModesB_87, hlds__hlds_code_util__Renaming_8, hlds__hlds_code_util__ModuleInfo_5);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_51_51;
              MR_Word hlds__hlds_code_util__VarA_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__VarB_18;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__VarB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  hlds__hlds_code_util__TypeInfo_51_51 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                  {
                    *hlds__hlds_code_util__Renaming_8 = mercury__map__singleton_2_f_0(hlds__hlds_code_util__TypeInfo_51_51, hlds__hlds_code_util__TypeInfo_51_51, ((MR_Box) (hlds__hlds_code_util__VarA_17)), ((MR_Box) (hlds__hlds_code_util__VarB_18)));
                  }
                  hlds__hlds_code_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_52_52;
              MR_Word hlds__hlds_code_util__InstVarSetA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__SpecInstA_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_code_util__InstVarSetB_21;
              MR_Word hlds__hlds_code_util__SpecInstB_22;
              MR_Word hlds__hlds_code_util__Renaming0_23;
              MR_Word hlds__hlds_code_util__ListVarA_24;
              MR_Word hlds__hlds_code_util__ListVarB_25;
              MR_Word hlds__hlds_code_util__VarA_45;
              MR_Word hlds__hlds_code_util__VarB_46;
              MR_Word hlds__hlds_code_util__VarA0_26;
              MR_Word hlds__hlds_code_util__VarB0_27;
              MR_Word hlds__hlds_code_util__Var_35;
              MR_Word hlds__hlds_code_util__Var_36;
              MR_Word hlds__hlds_code_util__SpecVarB_28;
              MR_Box hlds__hlds_code_util__conv0_SpecVarB_28;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__InstVarSetB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  hlds__hlds_code_util__SpecInstB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
                  {
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__SpecInstA_20, hlds__hlds_code_util__SpecInstB_22, &hlds__hlds_code_util__Renaming0_23);
                  }
                  if (hlds__hlds_code_util__succeeded)
                    {
                      hlds__hlds_code_util__TypeInfo_52_52 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                      {
                        hlds__hlds_code_util__ListVarA_24 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__InstVarSetA_19);
                      }
                      {
                        hlds__hlds_code_util__ListVarB_25 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__InstVarSetB_21);
                      }
                      hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__ListVarA_24)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__hlds_code_util__succeeded)
                        {
                          hlds__hlds_code_util__VarA0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarA_24, (MR_Integer) 0)));
                          hlds__hlds_code_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarA_24, (MR_Integer) 1)));
                          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (hlds__hlds_code_util__succeeded)
                            {
                              hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__ListVarB_25)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__hlds_code_util__succeeded)
                                {
                                  hlds__hlds_code_util__VarB0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarB_25, (MR_Integer) 0)));
                                  hlds__hlds_code_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarB_25, (MR_Integer) 1)));
                                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Var_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                            }
                        }
                      if (hlds__hlds_code_util__succeeded)
                        {
                          hlds__hlds_code_util__VarA_45 = hlds__hlds_code_util__VarA0_26;
                          hlds__hlds_code_util__VarB_46 = hlds__hlds_code_util__VarB0_27;
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "predicate \140hlds.hlds_code_util.match_insts_with_renaming\'/4", (MR_String) "non-singleton sets");
                          }
                        }
                      {
                        hlds__hlds_code_util__succeeded = mercury__map__search_3_p_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__Renaming0_23, ((MR_Box) (hlds__hlds_code_util__VarA_45)), &hlds__hlds_code_util__conv0_SpecVarB_28);
                      }
                      if (hlds__hlds_code_util__succeeded)
                        {
                          hlds__hlds_code_util__SpecVarB_28 = ((MR_Word) hlds__hlds_code_util__conv0_SpecVarB_28);
                          hlds__hlds_code_util__succeeded = MR_TRUE;
                        }
                      if (hlds__hlds_code_util__succeeded)
                        {
                          {
                            hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[1], ((MR_Box) (hlds__hlds_code_util__VarB_46)), ((MR_Box) (hlds__hlds_code_util__SpecVarB_28)));
                          }
                          if (hlds__hlds_code_util__succeeded)
                            {
                              *hlds__hlds_code_util__Renaming_8 = hlds__hlds_code_util__Renaming0_23;
                              hlds__hlds_code_util__succeeded = MR_TRUE;
                            }
                        }
                      else
                        {
                          {
                            mercury__map__det_insert_4_p_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__TypeInfo_52_52, ((MR_Box) (hlds__hlds_code_util__VarA_45)), ((MR_Box) (hlds__hlds_code_util__VarB_46)), hlds__hlds_code_util__Renaming0_23, hlds__hlds_code_util__Renaming_8);
                          }
                          hlds__hlds_code_util__succeeded = MR_TRUE;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_code_util__InstNameA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__InstNameB_30;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__InstNameB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  {
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstNameA_29, hlds__hlds_code_util__InstNameB_30, hlds__hlds_code_util__Renaming_8);
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hlds_code_util__TypeInfo_53_53;
              MR_Word hlds__hlds_code_util__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__ArgsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_code_util__ArgsB_33;
              MR_Word hlds__hlds_code_util__Var_34;
              MR_Word hlds__hlds_code_util__Var_58;

              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__hlds_code_util__succeeded)
                {
                  hlds__hlds_code_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
                  hlds__hlds_code_util__ArgsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
                  {
                    hlds__hlds_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_code_util__Name_31, hlds__hlds_code_util__Var_58);
                  }
                  if (hlds__hlds_code_util__succeeded)
                    {
                      hlds__hlds_code_util__TypeInfo_53_53 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                      {
                        hlds__hlds_code_util__Var_34 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_53_53, hlds__hlds_code_util__TypeInfo_53_53);
                      }
                      {
                        hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ArgsA_32, hlds__hlds_code_util__ArgsB_33, hlds__hlds_code_util__Var_34, hlds__hlds_code_util__Renaming_8);
                      }
                    }
                }
            }
            break;
        }
        break;
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_A_3;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded;

        if ((hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_code_util__succeeded)
              {
                *hlds__hlds_code_util__STATE_VARIABLE_Renaming_5 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4;
                hlds__hlds_code_util__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word hlds__hlds_code_util__TypeInfo_25_25;
            MR_Word hlds__hlds_code_util__TypeInfo_11_35;
            MR_Word hlds__hlds_code_util__A_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_code_util__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_code_util__B_13;
            MR_Word hlds__hlds_code_util__Bs_14;
            MR_Word hlds__hlds_code_util__ConsId_16;
            MR_Word hlds__hlds_code_util__ArgsA_17;
            MR_Word hlds__hlds_code_util__ArgsB_18;
            MR_Word hlds__hlds_code_util__Renaming0_19;
            MR_Word hlds__hlds_code_util__Var_22;
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23;
            MR_Word hlds__hlds_code_util__Var_26;
            MR_Word hlds__hlds_code_util__Var_31;

            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_code_util__succeeded)
              {
                hlds__hlds_code_util__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 0)));
                hlds__hlds_code_util__Bs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 1)));
                hlds__hlds_code_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__A_11, (MR_Integer) 0)));
                hlds__hlds_code_util__ArgsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__A_11, (MR_Integer) 1)));
                hlds__hlds_code_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__B_13, (MR_Integer) 0)));
                hlds__hlds_code_util__ArgsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__B_13, (MR_Integer) 1)));
                {
                  hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__hlds_code_util__ConsId_16, hlds__hlds_code_util__Var_26);
                }
                if (hlds__hlds_code_util__succeeded)
                  {
                    hlds__hlds_code_util__TypeInfo_25_25 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                    {
                      hlds__hlds_code_util__Var_22 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_25_25, hlds__hlds_code_util__TypeInfo_25_25);
                    }
                    {
                      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_1, hlds__hlds_code_util__ArgsA_17, hlds__hlds_code_util__ArgsB_18, hlds__hlds_code_util__Var_22, &hlds__hlds_code_util__Renaming0_19);
                    }
                    if (hlds__hlds_code_util__succeeded)
                      {
                        hlds__hlds_code_util__Var_31 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[8];
                        hlds__hlds_code_util__TypeInfo_11_35 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                        {
                          hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_35, hlds__hlds_code_util__TypeInfo_11_35, hlds__hlds_code_util__Var_31, hlds__hlds_code_util__Renaming0_19, hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4, &hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23);
                        }
                        if (hlds__hlds_code_util__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__hlds_code_util__next_value_of_HeadVar__2_2 = hlds__hlds_code_util__As_12;
                              MR_Word hlds__hlds_code_util__next_value_of_HeadVar__3_3 = hlds__hlds_code_util__Bs_14;
                              MR_Word hlds__hlds_code_util__next_value_of_STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23;

                              hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__next_value_of_STATE_VARIABLE_Renaming_0_4;
                              hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__next_value_of_HeadVar__3_3;
                              hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__next_value_of_HeadVar__2_2;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_A_3;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded;

        if ((hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_code_util__succeeded)
              {
                *hlds__hlds_code_util__STATE_VARIABLE_Renaming_5 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4;
                hlds__hlds_code_util__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word hlds__hlds_code_util__TypeInfo_11_28;
            MR_Word hlds__hlds_code_util__A_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_code_util__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_code_util__B_13;
            MR_Word hlds__hlds_code_util__Bs_14;
            MR_Word hlds__hlds_code_util__Renaming0_16;
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19;
            MR_Word hlds__hlds_code_util__Var_24;

            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_code_util__succeeded)
              {
                hlds__hlds_code_util__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 0)));
                hlds__hlds_code_util__Bs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 1)));
                {
                  hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_1, hlds__hlds_code_util__A_11, hlds__hlds_code_util__B_13, &hlds__hlds_code_util__Renaming0_16);
                }
                if (hlds__hlds_code_util__succeeded)
                  {
                    hlds__hlds_code_util__Var_24 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[7];
                    hlds__hlds_code_util__TypeInfo_11_28 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                    {
                      hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_28, hlds__hlds_code_util__TypeInfo_11_28, hlds__hlds_code_util__Var_24, hlds__hlds_code_util__Renaming0_16, hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4, &hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19);
                    }
                    if (hlds__hlds_code_util__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_code_util__next_value_of_HeadVar__2_2 = hlds__hlds_code_util__As_12;
                          MR_Word hlds__hlds_code_util__next_value_of_HeadVar__3_3 = hlds__hlds_code_util__Bs_14;
                          MR_Word hlds__hlds_code_util__next_value_of_STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19;

                          hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__next_value_of_STATE_VARIABLE_Renaming_0_4;
                          hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__next_value_of_HeadVar__3_3;
                          hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
  MR_Word * hlds__hlds_code_util__HeadVar__4_4,
  MR_Word hlds__hlds_code_util__ModuleInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded;

        if ((hlds__hlds_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_code_util__succeeded)
              {
                *hlds__hlds_code_util__HeadVar__4_4 = hlds__hlds_code_util__HeadVar__3_3;
                hlds__hlds_code_util__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word hlds__hlds_code_util__TypeInfo_29_29;
            MR_Word hlds__hlds_code_util__ModeA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_code_util__ModesA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_code_util__ModeB_12;
            MR_Word hlds__hlds_code_util__ModesB_13;
            MR_Word hlds__hlds_code_util__InstAInitial_16;
            MR_Word hlds__hlds_code_util__InstAFinal_17;
            MR_Word hlds__hlds_code_util__InstBInitial_18;
            MR_Word hlds__hlds_code_util__InstBFinal_19;
            MR_Word hlds__hlds_code_util__InitialSubst_20;
            MR_Word hlds__hlds_code_util__FinalSubst_21;
            MR_Word hlds__hlds_code_util__Var_24;
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25;
            MR_Word hlds__hlds_code_util__Var_26;
            MR_Word hlds__hlds_code_util__Var_27;

            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_code_util__succeeded)
              {
                hlds__hlds_code_util__ModeB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
                hlds__hlds_code_util__ModesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
                {
                  hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ModeA_10, &hlds__hlds_code_util__InstAInitial_16, &hlds__hlds_code_util__InstAFinal_17);
                }
                if (hlds__hlds_code_util__succeeded)
                  {
                    {
                      hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ModeB_12, &hlds__hlds_code_util__InstBInitial_18, &hlds__hlds_code_util__InstBFinal_19);
                    }
                    if (hlds__hlds_code_util__succeeded)
                      {
                        {
                          hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstAInitial_16, hlds__hlds_code_util__InstBInitial_18, &hlds__hlds_code_util__InitialSubst_20);
                        }
                        if (hlds__hlds_code_util__succeeded)
                          {
                            {
                              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstAFinal_17, hlds__hlds_code_util__InstBFinal_19, &hlds__hlds_code_util__FinalSubst_21);
                            }
                            if (hlds__hlds_code_util__succeeded)
                              {
                                hlds__hlds_code_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                hlds__hlds_code_util__TypeInfo_29_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
                                {
                                  hlds__hlds_code_util__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Var_26, 0) = ((MR_Box) (hlds__hlds_code_util__FinalSubst_21));
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Var_26, 1) = ((MR_Box) (hlds__hlds_code_util__Var_27));
                                }
                                {
                                  hlds__hlds_code_util__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Var_24, 0) = ((MR_Box) (hlds__hlds_code_util__InitialSubst_20));
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Var_24, 1) = ((MR_Box) (hlds__hlds_code_util__Var_26));
                                }
                                {
                                  mercury__list__append_3_p_1(hlds__hlds_code_util__TypeInfo_29_29, hlds__hlds_code_util__Var_24, hlds__hlds_code_util__HeadVar__3_3, &hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25);
                                }
                                /* direct tailcall eliminated */
                                {
                                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__1_1 = hlds__hlds_code_util__ModesA_11;
                                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__2_2 = hlds__hlds_code_util__ModesB_13;
                                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__3_3 = hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25;

                                  hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__next_value_of_HeadVar__3_3;
                                  hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__next_value_of_HeadVar__2_2;
                                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_Result_6;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_Result_6);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_Result_6));
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__ModesA_5,
  MR_Word hlds__hlds_code_util__ModesB_6,
  MR_Word * hlds__hlds_code_util__Renaming_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__TypeInfo_16_16;
    MR_Word hlds__hlds_code_util__TypeInfo_17_17;
    MR_Word hlds__hlds_code_util__Renamings_9;
    MR_Word hlds__hlds_code_util__Var_11;
    MR_Word hlds__hlds_code_util__Var_12;
    MR_Box hlds__hlds_code_util__conv1_Renaming_7;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(hlds__hlds_code_util__ModesA_5, hlds__hlds_code_util__ModesB_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_code_util__Renamings_9, hlds__hlds_code_util__ModuleInfo_8);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        hlds__hlds_code_util__Var_11 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[6];
        hlds__hlds_code_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
        {
          hlds__hlds_code_util__Var_12 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_16_16, hlds__hlds_code_util__TypeInfo_16_16);
        }
        hlds__hlds_code_util__TypeInfo_17_17 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
        {
          hlds__hlds_code_util__succeeded = mercury__list__foldl_4_p_3(hlds__hlds_code_util__TypeInfo_17_17, hlds__hlds_code_util__TypeInfo_17_17, hlds__hlds_code_util__Var_11, hlds__hlds_code_util__Renamings_9, ((MR_Box) (hlds__hlds_code_util__Var_12)), &hlds__hlds_code_util__conv1_Renaming_7);
        }
        if (hlds__hlds_code_util__succeeded)
          {
            *hlds__hlds_code_util__Renaming_7 = ((MR_Word) hlds__hlds_code_util__conv1_Renaming_7);
            hlds__hlds_code_util__succeeded = MR_TRUE;
          }
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_Result_6;

    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_Result_6);
    }
    if (hlds__hlds_code_util__succeeded)
      {
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_Result_6));
        hlds__hlds_code_util__succeeded = MR_TRUE;
      }
    return hlds__hlds_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__Modes_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
  MR_Integer * hlds__hlds_code_util__OurProcId_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word hlds__hlds_code_util__P_5;
        MR_Word hlds__hlds_code_util__Procs_6;
        MR_Integer hlds__hlds_code_util__ProcId_10;
        MR_Word hlds__hlds_code_util__ProcInfo_11;
        MR_Word hlds__hlds_code_util__ArgModes_12;
        MR_Word hlds__hlds_code_util__TypeInfo_16_28;
        MR_Word hlds__hlds_code_util__TypeInfo_17_29;
        MR_Word hlds__hlds_code_util__Renamings_21;
        MR_Word hlds__hlds_code_util__Var_22;
        MR_Word hlds__hlds_code_util__Var_23;
        MR_Word hlds__hlds_code_util__Var_24;
        MR_Word hlds__hlds_code_util__Var_16;
        MR_Box hlds__hlds_code_util__conv1_Var_16;

        if (hlds__hlds_code_util__succeeded)
          {
            hlds__hlds_code_util__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
            hlds__hlds_code_util__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
            hlds__hlds_code_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 0)));
            hlds__hlds_code_util__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 1)));
            {
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_code_util__ProcInfo_11, &hlds__hlds_code_util__ArgModes_12);
            }
            hlds__hlds_code_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(hlds__hlds_code_util__Modes_7, hlds__hlds_code_util__ArgModes_12, hlds__hlds_code_util__Var_22, &hlds__hlds_code_util__Renamings_21, hlds__hlds_code_util__ModuleInfo_8);
            }
            if (hlds__hlds_code_util__succeeded)
              {
                hlds__hlds_code_util__Var_23 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[5];
                hlds__hlds_code_util__TypeInfo_16_28 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
                {
                  hlds__hlds_code_util__Var_24 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_16_28, hlds__hlds_code_util__TypeInfo_16_28);
                }
                hlds__hlds_code_util__TypeInfo_17_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
                {
                  hlds__hlds_code_util__succeeded = mercury__list__foldl_4_p_3(hlds__hlds_code_util__TypeInfo_17_29, hlds__hlds_code_util__TypeInfo_17_29, hlds__hlds_code_util__Var_23, hlds__hlds_code_util__Renamings_21, ((MR_Box) (hlds__hlds_code_util__Var_24)), &hlds__hlds_code_util__conv1_Var_16);
                }
                if (hlds__hlds_code_util__succeeded)
                  {
                    hlds__hlds_code_util__Var_16 = ((MR_Word) hlds__hlds_code_util__conv1_Var_16);
                    hlds__hlds_code_util__succeeded = MR_TRUE;
                  }
              }
            if (hlds__hlds_code_util__succeeded)
              {
                *hlds__hlds_code_util__OurProcId_9 = hlds__hlds_code_util__ProcId_10;
                hlds__hlds_code_util__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__1_1 = hlds__hlds_code_util__Procs_6;

                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
  MR_Word hlds__hlds_code_util__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded;

        if ((hlds__hlds_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word hlds__hlds_code_util__Mode1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_code_util__Modes1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_code_util__Mode2_7;
            MR_Word hlds__hlds_code_util__Modes2_8;
            MR_Word hlds__hlds_code_util__Inst1_10;
            MR_Word hlds__hlds_code_util__Inst2_11;
            MR_Word hlds__hlds_code_util__Var_12;
            MR_Word hlds__hlds_code_util__Var_13;

            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_code_util__succeeded)
              {
                hlds__hlds_code_util__Mode2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
                hlds__hlds_code_util__Modes2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
                {
                  hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_3, hlds__hlds_code_util__Mode1_5, &hlds__hlds_code_util__Inst1_10, &hlds__hlds_code_util__Inst2_11);
                }
                if (hlds__hlds_code_util__succeeded)
                  {
                    {
                      hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_3, hlds__hlds_code_util__Mode2_7, &hlds__hlds_code_util__Var_12, &hlds__hlds_code_util__Var_13);
                    }
                    if (hlds__hlds_code_util__succeeded)
                      {
                        {
                          hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_code_util__Inst1_10, hlds__hlds_code_util__Var_12);
                        }
                        if (hlds__hlds_code_util__succeeded)
                          {
                            {
                              hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_code_util__Inst2_11, hlds__hlds_code_util__Var_13);
                            }
                            if (hlds__hlds_code_util__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__1_1 = hlds__hlds_code_util__Modes1_6;
                                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__2_2 = hlds__hlds_code_util__Modes2_8;

                                  hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__next_value_of_HeadVar__2_2;
                                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
  MR_Word hlds__hlds_code_util__Modes_7,
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
  MR_Integer * hlds__hlds_code_util__OurProcId_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word hlds__hlds_code_util__P_5;
        MR_Word hlds__hlds_code_util__Procs_6;
        MR_Integer hlds__hlds_code_util__ProcId_10;
        MR_Word hlds__hlds_code_util__ProcInfo_11;
        MR_Word hlds__hlds_code_util__ArgModes_12;

        if (hlds__hlds_code_util__succeeded)
          {
            hlds__hlds_code_util__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
            hlds__hlds_code_util__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
            hlds__hlds_code_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 0)));
            hlds__hlds_code_util__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 1)));
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_code_util__ProcInfo_11, &hlds__hlds_code_util__ArgModes_12);
            }
            {
              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_3_p_0(hlds__hlds_code_util__Modes_7, hlds__hlds_code_util__ArgModes_12, hlds__hlds_code_util__ModuleInfo_8);
            }
            if (hlds__hlds_code_util__succeeded)
              {
                *hlds__hlds_code_util__OurProcId_9 = hlds__hlds_code_util__ProcId_10;
                hlds__hlds_code_util__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_code_util__next_value_of_HeadVar__1_1 = hlds__hlds_code_util__Procs_6;

                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return hlds__hlds_code_util__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_code_util__type_to_string_2_p_0(
  MR_Word hlds__hlds_code_util__Type_3,
  MR_String * hlds__hlds_code_util__String_4)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__TypeCtor_5;
    MR_Word hlds__hlds_code_util__TypeName_6;
    MR_Integer hlds__hlds_code_util__TypeArity_7;
    MR_String hlds__hlds_code_util__TypeNameString_8;
    MR_String hlds__hlds_code_util__TypeArityString_9;
    MR_String hlds__hlds_code_util__Var_11;
    MR_String hlds__hlds_code_util__Var_13;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(hlds__hlds_code_util__Type_3, &hlds__hlds_code_util__TypeCtor_5);
    }
    hlds__hlds_code_util__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__TypeCtor_5, (MR_Integer) 0)));
    hlds__hlds_code_util__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__TypeCtor_5, (MR_Integer) 1)));
    {
      hlds__hlds_code_util__TypeNameString_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(hlds__hlds_code_util__TypeName_6, (MR_String) "__");
    }
    {
      mercury__string__int_to_string_2_p_0(hlds__hlds_code_util__TypeArity_7, &hlds__hlds_code_util__TypeArityString_9);
    }
    {
      hlds__hlds_code_util__Var_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_code_util__TypeArityString_9, (MR_String) "__");
    }
    {
      hlds__hlds_code_util__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", hlds__hlds_code_util__Var_13);
    }
    {
      *hlds__hlds_code_util__String_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_code_util__TypeNameString_8, hlds__hlds_code_util__Var_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_HeadVar__2_2;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_HeadVar__2_2);
    }
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__2_2));
  }
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(
  MR_Word hlds__hlds_code_util__Procs_5,
  MR_Word hlds__hlds_code_util__Modes0_6,
  MR_Word hlds__hlds_code_util__ModuleInfo_7,
  MR_Integer * hlds__hlds_code_util__ProcId_8)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    MR_Word hlds__hlds_code_util__Modes_9;

    {
      mercury__list__map_3_p_0(hlds__hlds_code_util__TypeCtorInfo_13_13, hlds__hlds_code_util__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_code_util_scalar_common_2[4], hlds__hlds_code_util__Modes0_6, &hlds__hlds_code_util__Modes_9);
    }
    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(hlds__hlds_code_util__Procs_5, hlds__hlds_code_util__Modes_9, hlds__hlds_code_util__ModuleInfo_7, hlds__hlds_code_util__ProcId_8);
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_Word hlds__hlds_code_util__conv0_HeadVar__2_2;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_HeadVar__2_2);
    }
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__2_2));
  }
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(
  MR_Word hlds__hlds_code_util__Procs_5,
  MR_Word hlds__hlds_code_util__Modes0_6,
  MR_Word hlds__hlds_code_util__ModuleInfo_7,
  MR_Integer * hlds__hlds_code_util__ProcId_8)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    MR_Word hlds__hlds_code_util__Modes_9;

    {
      mercury__list__map_3_p_0(hlds__hlds_code_util__TypeCtorInfo_13_13, hlds__hlds_code_util__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_code_util_scalar_common_2[3], hlds__hlds_code_util__Modes0_6, &hlds__hlds_code_util__Modes_9);
    }
    {
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(hlds__hlds_code_util__Procs_5, hlds__hlds_code_util__Modes_9, hlds__hlds_code_util__ModuleInfo_7, hlds__hlds_code_util__ProcId_8);
    }
    return hlds__hlds_code_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_String hlds__hlds_code_util__conv2_String_4;

    {
      hlds__hlds_code_util__type_to_string_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv2_String_4);
    }
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv2_String_4));
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(
  MR_Word hlds__hlds_code_util__InstanceTable_6,
  MR_Word hlds__hlds_code_util__Constraint_7,
  MR_Integer hlds__hlds_code_util__InstanceNum_8,
  MR_Word hlds__hlds_code_util__InstanceTypes_9)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__ConsId_10;
    MR_Word hlds__hlds_code_util__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Constraint_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_code_util__ConstraintArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Constraint_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_code_util__ClassId_13;
    MR_Word hlds__hlds_code_util__InstanceList_14;
    MR_Word hlds__hlds_code_util__InstanceDefn_15;
    MR_Word hlds__hlds_code_util__InstanceModuleName_16;
    MR_String hlds__hlds_code_util__InstanceString_17;
    MR_Integer hlds__hlds_code_util__Var_18;
    MR_Word hlds__hlds_code_util__InstanceStrings_34;
    MR_Box hlds__hlds_code_util__conv0_InstanceList_14;
    MR_Box hlds__hlds_code_util__conv1_InstanceDefn_15;
    MR_Word hlds__hlds_code_util__Var_19;
    MR_Word hlds__hlds_code_util__Var_20;
    MR_Word hlds__hlds_code_util__Var_21;
    MR_Word hlds__hlds_code_util__Var_22;
    MR_Word hlds__hlds_code_util__Var_23;
    MR_Word hlds__hlds_code_util__Var_24;
    MR_Word hlds__hlds_code_util__Var_25;
    MR_Word hlds__hlds_code_util__Var_26;
    MR_Word hlds__hlds_code_util__Var_27;

    {
      hlds__hlds_code_util__Var_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_code_util__ConstraintArgTypes_12);
    }
    {
      hlds__hlds_code_util__ClassId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_code_util__ClassId_13, 0) = ((MR_Box) (hlds__hlds_code_util__ClassName_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_code_util__ClassId_13, 1) = ((MR_Box) (hlds__hlds_code_util__Var_18));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_code_util_scalar_common_1[0], hlds__hlds_code_util__InstanceTable_6, ((MR_Box) (hlds__hlds_code_util__ClassId_13)), &hlds__hlds_code_util__conv0_InstanceList_14);
    }
    hlds__hlds_code_util__InstanceList_14 = ((MR_Word) hlds__hlds_code_util__conv0_InstanceList_14);
    {
      mercury__list__det_index1_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_code_util__InstanceList_14, hlds__hlds_code_util__InstanceNum_8, &hlds__hlds_code_util__conv1_InstanceDefn_15);
    }
    hlds__hlds_code_util__InstanceDefn_15 = ((MR_Word) hlds__hlds_code_util__conv1_InstanceDefn_15);
    hlds__hlds_code_util__InstanceModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 0)));
    hlds__hlds_code_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 1)));
    hlds__hlds_code_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 2)));
    hlds__hlds_code_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 3)));
    hlds__hlds_code_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 4)));
    hlds__hlds_code_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 5)));
    hlds__hlds_code_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 6)));
    hlds__hlds_code_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 7)));
    hlds__hlds_code_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 8)));
    hlds__hlds_code_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 9)));
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_code_util_scalar_common_2[2], hlds__hlds_code_util__InstanceTypes_9, &hlds__hlds_code_util__InstanceStrings_34);
    }
    {
      mercury__string__append_list_2_p_0(hlds__hlds_code_util__InstanceStrings_34, &hlds__hlds_code_util__InstanceString_17);
    }
    {
      hlds__hlds_code_util__ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 1) = ((MR_Box) (hlds__hlds_code_util__InstanceModuleName_16));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 2) = ((MR_Box) (hlds__hlds_code_util__ClassId_13));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 3) = ((MR_Box) (hlds__hlds_code_util__InstanceNum_8));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 4) = ((MR_Box) (hlds__hlds_code_util__InstanceString_17));
    }
    return hlds__hlds_code_util__ConsId_10;
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(
  MR_Word hlds__hlds_code_util__TypeCtor_3)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__ConsId_4;
    MR_Word hlds__hlds_code_util__ModuleName_5;
    MR_String hlds__hlds_code_util__Name_6;
    MR_Integer hlds__hlds_code_util__Arity_7;

    {
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(hlds__hlds_code_util__TypeCtor_3, &hlds__hlds_code_util__ModuleName_5, &hlds__hlds_code_util__Name_6, &hlds__hlds_code_util__Arity_7);
    }
    {
      hlds__hlds_code_util__ConsId_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_5));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 2) = ((MR_Box) (hlds__hlds_code_util__Name_6));
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 3) = ((MR_Box) (hlds__hlds_code_util__Arity_7));
    }
    return hlds__hlds_code_util__ConsId_4;
  }
}

static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
  MR_Box hlds__hlds_code_util__closure_arg,
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
    MR_String hlds__hlds_code_util__conv0_String_4;

    {
      hlds__hlds_code_util__type_to_string_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_String_4);
    }
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_String_4));
  }
}

void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0(
  MR_Word hlds__hlds_code_util__InstanceTypes_3,
  MR_String * hlds__hlds_code_util__InstanceString_4)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__InstanceStrings_5;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_code_util_scalar_common_2[1], hlds__hlds_code_util__InstanceTypes_3, &hlds__hlds_code_util__InstanceStrings_5);
    }
    {
      mercury__string__append_list_2_p_0(hlds__hlds_code_util__InstanceStrings_5, hlds__hlds_code_util__InstanceString_4);
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__cons_id_to_tag_2_f_0(
  MR_Word hlds__hlds_code_util__ModuleInfo_4,
  MR_Word hlds__hlds_code_util__ConsId_5)
{
  {
    MR_bool hlds__hlds_code_util__succeeded;
    MR_Word hlds__hlds_code_util__Tag_6;

    switch (MR_tag((MR_Word) hlds__hlds_code_util__ConsId_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]);
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_code_util__Var_58;
          MR_Word hlds__hlds_code_util__ShroudedPredProcId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__ConsId_5, (MR_Integer) 0)));
          MR_Word hlds__hlds_code_util__PredId_66;
          MR_Integer hlds__hlds_code_util__ProcId_67;

          {
            hlds__hlds_code_util__Var_58 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_65);
          }
          hlds__hlds_code_util__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_58, (MR_Integer) 0)));
          hlds__hlds_code_util__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_58, (MR_Integer) 1)));
          {
            hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_66));
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_67));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_code_util__Var_56;
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__PredId_72;
              MR_Integer hlds__hlds_code_util__ProcId_73;

              {
                hlds__hlds_code_util__Var_56 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_71);
              }
              hlds__hlds_code_util__PredId_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_56, (MR_Integer) 0)));
              hlds__hlds_code_util__ProcId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_56, (MR_Integer) 1)));
              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_72));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_73));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_code_util__Var_57;
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__PredId_69;
              MR_Integer hlds__hlds_code_util__ProcId_70;

              {
                hlds__hlds_code_util__Var_57 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_68);
              }
              hlds__hlds_code_util__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_57, (MR_Integer) 0)));
              hlds__hlds_code_util__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_57, (MR_Integer) 1)));
              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_69));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_70));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_code_util__TypeCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));
              MR_Word hlds__hlds_code_util__TypeTable_35;
              MR_Word hlds__hlds_code_util__TypeDefn_36;
              MR_Word hlds__hlds_code_util__TypeBody_37;
              MR_Word hlds__hlds_code_util___Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Integer hlds__hlds_code_util___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));

              {
                hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_code_util__ModuleInfo_4, &hlds__hlds_code_util__TypeTable_35);
              }
              {
                hlds__hlds_data__lookup_type_ctor_defn_3_p_0(hlds__hlds_code_util__TypeTable_35, hlds__hlds_code_util__TypeCtor_34, &hlds__hlds_code_util__TypeDefn_36);
              }
              {
                hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_code_util__TypeDefn_36, &hlds__hlds_code_util__TypeBody_37);
              }
              switch (MR_tag((MR_Word) hlds__hlds_code_util__TypeBody_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_code_util__ConsTagTable_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 1)));
                    MR_Word hlds__hlds_code_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 0)));
                    MR_Word hlds__hlds_code_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 2)));
                    MR_Word hlds__hlds_code_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 3)));
                    MR_Word hlds__hlds_code_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 4)));
                    MR_Word hlds__hlds_code_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 5)));
                    MR_Word hlds__hlds_code_util__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 6)))) & (MR_Integer) 1);
                    MR_Word hlds__hlds_code_util__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word hlds__hlds_code_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_37, (MR_Integer) 7)));
                    MR_Box hlds__hlds_code_util__conv0_Tag_6;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_code_util__ConsTagTable_39, ((MR_Box) (hlds__hlds_code_util__ConsId_5)), &hlds__hlds_code_util__conv0_Tag_6);
                    }
                    hlds__hlds_code_util__Tag_6 = ((MR_Word) hlds__hlds_code_util__conv0_Tag_6);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_code_util__Globals_30;
              MR_Word hlds__hlds_code_util__TargetLang_31;
              MR_Integer hlds__hlds_code_util__Arity_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_code_util__ModuleInfo_4, &hlds__hlds_code_util__Globals_30);
              }
              {
                libs__globals__get_target_2_p_0(hlds__hlds_code_util__Globals_30, &hlds__hlds_code_util__TargetLang_31);
              }
              switch (hlds__hlds_code_util__TargetLang_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                  {
                    hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Arity_74 == (MR_Integer) 0);
                    if (hlds__hlds_code_util__succeeded)
                      {
                        hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[3]);
                      }
                    else
                      hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__PredId_16;
              MR_Integer hlds__hlds_code_util__ProcId_17;
              MR_Word hlds__hlds_code_util__Var_60;

              {
                hlds__hlds_code_util__Var_60 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_14);
              }
              hlds__hlds_code_util__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_60, (MR_Integer) 0)));
              hlds__hlds_code_util__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Var_60, (MR_Integer) 1)));
              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_16));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_17));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = NULL;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer hlds__hlds_code_util__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__Int_7));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned hlds__hlds_code_util__UInt_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__UInt_8));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float hlds__hlds_code_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__hlds_code_util__Tag_6, 0) = MR_box_float(hlds__hlds_code_util__Float_9);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Char hlds__hlds_code_util__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Integer hlds__hlds_code_util__CharCode_11;

              {
                mercury__char__to_int_2_p_0(hlds__hlds_code_util__Char_10, &hlds__hlds_code_util__CharCode_11);
              }
              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__CharCode_11));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String hlds__hlds_code_util__String_12 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (hlds__hlds_code_util__String_12));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "implementation_defined_const");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word hlds__hlds_code_util__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_String hlds__hlds_code_util__TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
              MR_Integer hlds__hlds_code_util__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_18));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__TypeName_19));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = ((MR_Box) (hlds__hlds_code_util__Arity_20));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word hlds__hlds_code_util__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
              MR_String hlds__hlds_code_util__EncodedArgs_23 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 4)));
              MR_Word hlds__hlds_code_util__ModuleName_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Integer hlds__hlds_code_util___Instance_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_64));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ClassName_21));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = ((MR_Box) (hlds__hlds_code_util__EncodedArgs_23));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer hlds__hlds_code_util__TIConstNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__TIConstNum_25));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer hlds__hlds_code_util__TCIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__TCIConstNum_26));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer hlds__hlds_code_util__ConstNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
              MR_Word hlds__hlds_code_util__SubConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
              MR_Word hlds__hlds_code_util__SubConsTag_29;

              {
                hlds__hlds_code_util__SubConsTag_29 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(hlds__hlds_code_util__ModuleInfo_4, hlds__hlds_code_util__SubConsId_28);
              }
              {
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ConstNum_27));
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__SubConsTag_29));
              }
            }
            break;
        }
        break;
    }
    return hlds__hlds_code_util__Tag_6;
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

/* :- end_module hlds.hlds_code_util. */
