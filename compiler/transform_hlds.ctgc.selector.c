/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module transform_hlds.ctgc.selector. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__selector__init
ENDINIT
*/

#include "transform_hlds.ctgc.selector.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "exception.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s {
  MR_Box * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont;
  void * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1];

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1];

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2];

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2];

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_arg_types_3_p_0[2];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_arg_types_3_p_0[2];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_arg_types_3_p_0[2];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_arg_types_3_p_0[2];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_arg_types_3_p_0[2];

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0;

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_contains_subtype_1_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0;

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_normalize_selector_with_type_information_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0;

static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__342__1_3_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
  MR_Word transform_hlds__ctgc__selector__Type_5,
  MR_Word * transform_hlds__ctgc__selector__LambdaHeadVar__1_11,
  MR_Cont transform_hlds__ctgc__selector__cont,
  void * transform_hlds__ctgc__selector__cont_env_ptr);

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__138__1_1_f_0(
  MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__1_6);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8);

static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
  MR_Word transform_hlds__ctgc__selector__VarType_8,
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
  MR_Word transform_hlds__ctgc__selector__Type_7,
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
  MR_Integer transform_hlds__ctgc__selector__Position_9);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
  void * transform_hlds__ctgc__selector__env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
  MR_Box transform_hlds__ctgc__selector__closure_arg,
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Cont transform_hlds__ctgc__selector__cont,
  void * transform_hlds__ctgc__selector__cont_env_ptr);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
  MR_Word transform_hlds__ctgc__selector__Type_5,
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6);

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__selector__ToType_9,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
  MR_Word * transform_hlds__ctgc__selector__Contains_12);

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__selector__FromType_6,
  MR_Word transform_hlds__ctgc__selector__ToType_7,
  MR_Word * transform_hlds__ctgc__selector__Contains_8);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
  MR_Word transform_hlds__ctgc__selector__A_7,
  MR_Word transform_hlds__ctgc__selector__B_8,
  MR_Word transform_hlds__ctgc__selector__Type_9,
  MR_Word * transform_hlds__ctgc__selector__Extension_10);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
  MR_Box transform_hlds__ctgc__selector__closure_arg,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_4[1][6];




static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_branch_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "branch_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 = {
  (MR_String) "encounter_existential_subtype",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "encounter_existential_subtype",
  {     transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0 },
  {     transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0 = {
  (MR_String) "need_normalization",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1 = {
  (MR_String) "already_normalized",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0
};

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_normalization_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____normalization_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____normalization_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "normalization",
  {     transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0 },
  {     transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0
};

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____branch_map_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__selector____Compare____branch_map_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0();
    }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1);
    }
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____normalization_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__selector____Compare____normalization_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
  }
}

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_arg_types_3_p_0[2] = {
  {
    (MR_String) "ModuleInfo",
    MR_TABLE_STEP_PROMISE_IMPLIED,
    (MR_Integer) -1
  },
  {
    (MR_String) "Type",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_arg_types_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_arg_types_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_arg_types_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_arg_types_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {     (MR_Integer) 0 },
  {
    transform_hlds__ctgc__selector__table_input_steps_for_type_arg_types_3_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_call_step_stats_for_type_arg_types_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_arg_types_3_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_answer_step_stats_for_type_arg_types_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_arg_types_3_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_contains_subtype_1_4_p_0[3] = {
  {
    (MR_String) "ModuleInfo",
    MR_TABLE_STEP_PROMISE_IMPLIED,
    (MR_Integer) -1
  },
  {
    (MR_String) "FromType",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  },
  {
    (MR_String) "ToType",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {     (MR_Integer) 0 },
  {
    transform_hlds__ctgc__selector__table_input_steps_for_type_contains_subtype_1_4_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_call_step_stats_for_type_contains_subtype_1_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_answer_step_stats_for_type_contains_subtype_1_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_normalize_selector_with_type_information_4_p_0[3] = {
  {
    (MR_String) "ModuleInfo",
    MR_TABLE_STEP_PROMISE_IMPLIED,
    (MR_Integer) -1
  },
  {
    (MR_String) "Type",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  },
  {
    (MR_String) "STATE_VARIABLE_Selector_0",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_NONE,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {     (MR_Integer) 0 },
  {
    transform_hlds__ctgc__selector__table_input_steps_for_normalize_selector_with_type_information_4_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_call_step_stats_for_normalize_selector_with_type_information_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

void MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    *transform_hlds__ctgc__selector__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__342__1_3_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
  MR_Word transform_hlds__ctgc__selector__Type_5,
  MR_Word * transform_hlds__ctgc__selector__LambdaHeadVar__1_11,
  MR_Cont transform_hlds__ctgc__selector__cont,
  void * transform_hlds__ctgc__selector__cont_env_ptr)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector___ConsId_8;

    {
      check_hlds__type_util__cons_id_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_4, transform_hlds__ctgc__selector__Type_5, &transform_hlds__ctgc__selector___ConsId_8, transform_hlds__ctgc__selector__LambdaHeadVar__1_11, transform_hlds__ctgc__selector__cont, transform_hlds__ctgc__selector__cont_env_ptr);
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__138__1_1_f_0(
  MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__1_6)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__2_7;

    {
      transform_hlds__ctgc__selector__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__LambdaHeadVar__2_7, 0) = ((MR_Box) (transform_hlds__ctgc__selector__LambdaHeadVar__1_6));
    }
    return transform_hlds__ctgc__selector__LambdaHeadVar__2_7;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0


		{
transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0


		{
transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0


		{
transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0(
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1, transform_hlds__ctgc__selector__Cast_HeadVar1_4, transform_hlds__ctgc__selector__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__HeadVar__2_1 == transform_hlds__ctgc__selector__HeadVar__2_2);

    return transform_hlds__ctgc__selector__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_4 = transform_hlds__ctgc__selector__HeadVar__2_2;
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_5 = transform_hlds__ctgc__selector__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], transform_hlds__ctgc__selector__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_3 = transform_hlds__ctgc__selector__HeadVar__1_1;
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_4 = transform_hlds__ctgc__selector__HeadVar__2_2;

    {
      transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_4)));
    }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__selector__TypeInfo_13_13;
        MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14;
        MR_Word transform_hlds__ctgc__selector__Type_4;
        MR_Word transform_hlds__ctgc__selector__Sel_5;
        MR_Word transform_hlds__ctgc__selector__TypeSels_6;
        MR_Word transform_hlds__ctgc__selector__Empty_9;
        MR_Word transform_hlds__ctgc__selector__V_11_11;
        MR_Word transform_hlds__ctgc__selector__Subst_10;
        MR_Word transform_hlds__ctgc__selector__V_12_12;

        if (transform_hlds__ctgc__selector__succeeded)
          {
            transform_hlds__ctgc__selector__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__ctgc__selector__TypeSels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
            transform_hlds__ctgc__selector__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 0)));
            transform_hlds__ctgc__selector__Sel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 1)));
            transform_hlds__ctgc__selector__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
            transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            {
              mercury__map__init_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, &transform_hlds__ctgc__selector__Empty_9);
            }
            transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__type_unify_5_p_0(transform_hlds__ctgc__selector__Type_4, transform_hlds__ctgc__selector__KeyType_7, transform_hlds__ctgc__selector__V_12_12, transform_hlds__ctgc__selector__Empty_9, &transform_hlds__ctgc__selector__Subst_10);
            }
            if (transform_hlds__ctgc__selector__succeeded)
              {
                transform_hlds__ctgc__selector__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, transform_hlds__ctgc__selector__Subst_10);
              }
            if (transform_hlds__ctgc__selector__succeeded)
              {
                *transform_hlds__ctgc__selector__ValueSel_8 = transform_hlds__ctgc__selector__Sel_5;
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__TypeSels_6;

                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return transform_hlds__ctgc__selector__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
  MR_Word transform_hlds__ctgc__selector__VarType_8,
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded;

        if ((transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25 = transform_hlds__ctgc__selector__SelectorAcc0_10;
        else
          {
            MR_Word transform_hlds__ctgc__selector__UnitSelector_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 0)));
            MR_Word transform_hlds__ctgc__selector__SelRest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 1)));
            MR_Word transform_hlds__ctgc__selector__CtorCat_14;
            MR_Word transform_hlds__ctgc__selector__CatUser_15;

            {
              transform_hlds__ctgc__selector__CtorCat_14 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8);
            }
            transform_hlds__ctgc__selector__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__selector__CtorCat_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (transform_hlds__ctgc__selector__succeeded)
              {
                transform_hlds__ctgc__selector__CatUser_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 1)));
                {
                  MR_Word transform_hlds__ctgc__selector__CType_20;

                  switch (transform_hlds__ctgc__selector__CatUser_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "cat_user_direct_dummy");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                      }
                      break;
                  }
                  if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_12)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word transform_hlds__ctgc__selector__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
                      MR_Integer transform_hlds__ctgc__selector__Index_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 1)));
                      MR_Word transform_hlds__ctgc__selector__ArgTypes_18;
                      MR_Word transform_hlds__ctgc__selector__SubType_19;
                      MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_42_42;
                      MR_Box transform_hlds__ctgc__selector__conv0_SubType_19;

                      {
                        transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8, transform_hlds__ctgc__selector__ConsId_16, &transform_hlds__ctgc__selector__ArgTypes_18);
                      }
                      if (transform_hlds__ctgc__selector__succeeded)
                        {
                          transform_hlds__ctgc__selector__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                          {
                            transform_hlds__ctgc__selector__succeeded = mercury__list__index1_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_42_42, transform_hlds__ctgc__selector__ArgTypes_18, transform_hlds__ctgc__selector__Index_17, &transform_hlds__ctgc__selector__conv0_SubType_19);
                          }
                          if (transform_hlds__ctgc__selector__succeeded)
                            {
                              transform_hlds__ctgc__selector__SubType_19 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType_19);
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                            }
                          if (transform_hlds__ctgc__selector__succeeded)
                            transform_hlds__ctgc__selector__CType_20 = transform_hlds__ctgc__selector__SubType_19;
                          else
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "accessing nonexistent index");
                                return;
                              }
                            }
                          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                        }
                    }
                  else
                    {
                      transform_hlds__ctgc__selector__CType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
                      transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                    }
                  if (transform_hlds__ctgc__selector__succeeded)
                    {
                      MR_Word transform_hlds__ctgc__selector__BranchSelector_21;

                      {
                        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__branch_map_search_3_p_0(transform_hlds__ctgc__selector__BranchMap0_9, transform_hlds__ctgc__selector__CType_20, &transform_hlds__ctgc__selector__BranchSelector_21);
                      }
                      if (transform_hlds__ctgc__selector__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__BranchSelector_21;
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word transform_hlds__ctgc__selector__SelectorAcc1_22;
                          MR_Word transform_hlds__ctgc__selector__BranchMap1_23;
                          MR_Word transform_hlds__ctgc__selector__V_35_35;
                          MR_Word transform_hlds__ctgc__selector__V_52_52;

                          {
                            transform_hlds__ctgc__selector__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_35_35, &transform_hlds__ctgc__selector__SelectorAcc1_22);
                          }
                          {
                            transform_hlds__ctgc__selector__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 0) = ((MR_Box) (transform_hlds__ctgc__selector__CType_20));
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 1) = ((MR_Box) (transform_hlds__ctgc__selector__SelectorAcc1_22));
                          }
                          {
                            transform_hlds__ctgc__selector__BranchMap1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_52_52));
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 1) = ((MR_Box) (transform_hlds__ctgc__selector__BranchMap0_9));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
                            MR_Word transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9 = transform_hlds__ctgc__selector__BranchMap1_23;
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__SelectorAcc1_22;
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
                            transform_hlds__ctgc__selector__BranchMap0_9 = transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9;
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      MR_Word transform_hlds__ctgc__selector__V_38_38;

                      {
                        transform_hlds__ctgc__selector__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_38_38, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
                      }
                    }
                }
              }
            else
              {
                {
                  mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
                }
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
  MR_Word transform_hlds__ctgc__selector__Type_7,
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
  MR_Integer transform_hlds__ctgc__selector__Position_9)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__SubType_10;
    MR_Word transform_hlds__ctgc__selector__SubType0_11;
    MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

    {
      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__ArgTypes_19);
    }
    if (transform_hlds__ctgc__selector__succeeded)
      {
        MR_Box transform_hlds__ctgc__selector__conv0_SubType0_11;

        {
          transform_hlds__ctgc__selector__conv0_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Position_9);
        }
        transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_11);
        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

        {
          transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__CtorDefn_20);
        }
        if (transform_hlds__ctgc__selector__succeeded)
          {
            MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
            MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
            MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
            MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
            MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
            MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
            MR_Box transform_hlds__ctgc__selector__conv1_SubType0_11;
            MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
            MR_Word transform_hlds__ctgc__selector__TVar_26;
            MR_Word transform_hlds__ctgc__selector__V_27_27;

            {
              transform_hlds__ctgc__selector__conv1_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Position_9);
            }
            transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_11);
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_11)) == (MR_mktag((MR_Integer) 0)));
            if (transform_hlds__ctgc__selector__succeeded)
              {
                transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 0)));
                transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 1)));
                transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
                {
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                }
              }
            transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
            }
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
          }
      }
    if (transform_hlds__ctgc__selector__succeeded)
      transform_hlds__ctgc__selector__SubType_10 = transform_hlds__ctgc__selector__SubType0_11;
    else
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
        }
      }
    return transform_hlds__ctgc__selector__SubType_10;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
  void * transform_hlds__ctgc__selector__env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s * transform_hlds__ctgc__selector__env_ptr = (struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s *) transform_hlds__ctgc__selector__env_ptr_arg;

    *((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11));
    {
      ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont)((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
  MR_Box transform_hlds__ctgc__selector__closure_arg,
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
  MR_Cont transform_hlds__ctgc__selector__cont,
  void * transform_hlds__ctgc__selector__cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s transform_hlds__ctgc__selector__env;

    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1 = transform_hlds__ctgc__selector__wrapper_arg_1;
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont = transform_hlds__ctgc__selector__cont;
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr = transform_hlds__ctgc__selector__cont_env_ptr;
    {
      MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;

      {
        transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__342__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 4))), &(transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11, transform_hlds__ctgc__selector__type_arg_types_3_p_0_1, &transform_hlds__ctgc__selector__env);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
  MR_Word transform_hlds__ctgc__selector__Type_5,
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_17;
    MR_Word transform_hlds__ctgc__selector__Status_18;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;

	proc_table_info = (MR_ProcTableInfoPtr) (MR_Box) &transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0 ;
	input_typeinfo1 =  (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0 ;
	arg1 =  transform_hlds__ctgc__selector__Type_5 ;
		{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_17  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_18  = status;
}
    switch (transform_hlds__ctgc__selector__Status_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_arg_types/3");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ctgc__selector__ArgTypesLists_9;
          MR_Word transform_hlds__ctgc__selector__V_10_10;

          {
            transform_hlds__ctgc__selector__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 0) = ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 1) = ((MR_Box) (transform_hlds__ctgc__selector__type_arg_types_3_p_0_2));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 3) = ((MR_Box) (transform_hlds__ctgc__selector__ModuleInfo_4));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 4) = ((MR_Box) (transform_hlds__ctgc__selector__Type_5));
          }
          {
            mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0], transform_hlds__ctgc__selector__V_10_10, &transform_hlds__ctgc__selector__ArgTypesLists_9);
          }
          {
            mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypesLists_9, transform_hlds__ctgc__selector__ArgTypes_6);
          }
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__ArgTypes_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0] ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);


		;}
#undef MR_PROC_LABEL
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box transform_hlds__ctgc__selector__conv1_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv1_restore_arg0  = (MR_Box) restore_arg0;
          *transform_hlds__ctgc__selector__ArgTypes_6 = ((MR_Word) transform_hlds__ctgc__selector__conv1_restore_arg0);
}
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
  MR_Word transform_hlds__ctgc__selector__ToType_9,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
  MR_Word * transform_hlds__ctgc__selector__Contains_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded;
        MR_Word transform_hlds__ctgc__selector__FromType_13;
        MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
        MR_Box transform_hlds__ctgc__selector__conv0_FromType_13;

        {
          transform_hlds__ctgc__selector__succeeded = mercury__queue__get_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__ctgc__selector__conv0_FromType_13, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19);
        }
        if (transform_hlds__ctgc__selector__succeeded)
          {
            transform_hlds__ctgc__selector__FromType_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_FromType_13);
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
          }
        if (transform_hlds__ctgc__selector__succeeded)
          {
            {
              transform_hlds__ctgc__selector__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)));
            }
            if (transform_hlds__ctgc__selector__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;

                  transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
                }
                continue;
              }
            else
              {
                MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                MR_Word transform_hlds__ctgc__selector__ArgTypes_14;
                MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

                {
                  mercury__set__insert_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)), transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, &transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22);
                }
                {
                  transform_hlds__ctgc__selector__type_arg_types_3_p_0(transform_hlds__ctgc__selector__ModuleInfo_8, transform_hlds__ctgc__selector__FromType_13, &transform_hlds__ctgc__selector__ArgTypes_14);
                }
                {
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__ToType_9)), transform_hlds__ctgc__selector__ArgTypes_14);
                }
                if (transform_hlds__ctgc__selector__succeeded)
                  {
                    *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 1;
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
                  }
                else
                  {
                    MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;

                    {
                      mercury__queue__put_list_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, transform_hlds__ctgc__selector__ArgTypes_14, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

                      transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17;
                      transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
                    }
                    continue;
                  }
              }
          }
        else
          {
            *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 0;
            *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17;
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__selector__FromType_6,
  MR_Word transform_hlds__ctgc__selector__ToType_7,
  MR_Word * transform_hlds__ctgc__selector__Contains_8)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
    MR_Word transform_hlds__ctgc__selector__Status_19;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;
	MR_Word input_typeinfo2;
	MR_Word arg2;

	proc_table_info = (MR_ProcTableInfoPtr) (MR_Box) &transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0 ;
	input_typeinfo1 =  (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0 ;
	arg1 =  transform_hlds__ctgc__selector__FromType_6 ;
	input_typeinfo2 =  (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0 ;
	arg2 =  transform_hlds__ctgc__selector__ToType_7 ;
		{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo2, arg2, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
}
    switch (transform_hlds__ctgc__selector__Status_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_contains_subtype_1/4");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          MR_Word transform_hlds__ctgc__selector__Queue0_9;
          MR_Word transform_hlds__ctgc__selector__V_12_12;
          MR_Word transform_hlds__ctgc__selector__V_13_13;
          MR_Word transform_hlds__ctgc__selector___Queue_10;
          MR_Word transform_hlds__ctgc__selector___SeenTypes_11;

          {
            transform_hlds__ctgc__selector__V_12_12 = mercury__queue__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
          {
            mercury__queue__put_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14, ((MR_Box) (transform_hlds__ctgc__selector__FromType_6)), transform_hlds__ctgc__selector__V_12_12, &transform_hlds__ctgc__selector__Queue0_9);
          }
          {
            transform_hlds__ctgc__selector__V_13_13 = mercury__set__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
          {
            transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__ToType_7, transform_hlds__ctgc__selector__Queue0_9, &transform_hlds__ctgc__selector___Queue_10, transform_hlds__ctgc__selector__V_13_13, &transform_hlds__ctgc__selector___SeenTypes_11, transform_hlds__ctgc__selector__Contains_8);
          }
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__Contains_8)) ;
	save_arg_typeinfo0 =  (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);


		;}
#undef MR_PROC_LABEL
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
          *transform_hlds__ctgc__selector__Contains_8 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
}
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
  MR_Word transform_hlds__ctgc__selector__A_7,
  MR_Word transform_hlds__ctgc__selector__B_8,
  MR_Word transform_hlds__ctgc__selector__Type_9,
  MR_Word * transform_hlds__ctgc__selector__Extension_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded;

        if ((transform_hlds__ctgc__selector__B_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__A_7;
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__ctgc__selector__AH_11;
            MR_Word transform_hlds__ctgc__selector__AT_12;
            MR_Word transform_hlds__ctgc__selector__BH_13;
            MR_Word transform_hlds__ctgc__selector__BT_14;
            MR_Word transform_hlds__ctgc__selector__ConsIdA_15;
            MR_Integer transform_hlds__ctgc__selector__IndexA_16;
            MR_Word transform_hlds__ctgc__selector__ConsIdB_17;
            MR_Integer transform_hlds__ctgc__selector__IndexB_18;

            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__A_7)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__ctgc__selector__succeeded)
              {
                transform_hlds__ctgc__selector__AH_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 0)));
                transform_hlds__ctgc__selector__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 1)));
                transform_hlds__ctgc__selector__BH_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 0)));
                transform_hlds__ctgc__selector__BT_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 1)));
                transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0)));
                if (transform_hlds__ctgc__selector__succeeded)
                  {
                    transform_hlds__ctgc__selector__ConsIdA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
                    transform_hlds__ctgc__selector__IndexA_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));
                    transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0)));
                    if (transform_hlds__ctgc__selector__succeeded)
                      {
                        transform_hlds__ctgc__selector__ConsIdB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
                        transform_hlds__ctgc__selector__IndexB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
                      }
                  }
                if (transform_hlds__ctgc__selector__succeeded)
                  {
                    MR_Word transform_hlds__ctgc__selector__TypeInfo_39_39;
                    MR_Word transform_hlds__ctgc__selector__V_19_19;
                    MR_Word transform_hlds__ctgc__selector__V_20_20;

                    {
                      transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__selector__ConsIdA_15, transform_hlds__ctgc__selector__ConsIdB_17);
                    }
                    if (transform_hlds__ctgc__selector__succeeded)
                      {
                        transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__IndexA_16 == transform_hlds__ctgc__selector__IndexB_18);
                        if (transform_hlds__ctgc__selector__succeeded)
                          {
                            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__Type_9)) == (MR_mktag((MR_Integer) 0)));
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                transform_hlds__ctgc__selector__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 0)));
                                transform_hlds__ctgc__selector__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 1)));
                                transform_hlds__ctgc__selector__TypeInfo_39_39 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2];
                                {
                                  transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__selector__TypeInfo_39_39, ((MR_Box) (transform_hlds__ctgc__selector__AT_12)), ((MR_Box) (transform_hlds__ctgc__selector__BT_14)));
                                }
                              }
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                *transform_hlds__ctgc__selector__Extension_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_Word transform_hlds__ctgc__selector__SubType_21;
                                MR_Word transform_hlds__ctgc__selector__SubType0_49;
                                MR_Word transform_hlds__ctgc__selector__ArgTypes_57;

                                {
                                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__ArgTypes_57);
                                }
                                if (transform_hlds__ctgc__selector__succeeded)
                                  {
                                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_49;

                                    {
                                      transform_hlds__ctgc__selector__conv0_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_57, transform_hlds__ctgc__selector__IndexA_16);
                                    }
                                    transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_49);
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_Word transform_hlds__ctgc__selector__CtorDefn_58;

                                    {
                                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__CtorDefn_58);
                                    }
                                    if (transform_hlds__ctgc__selector__succeeded)
                                      {
                                        MR_Word transform_hlds__ctgc__selector__ExistQVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 1)));
                                        MR_Word transform_hlds__ctgc__selector__ArgTypes_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 4)));
                                        MR_Word transform_hlds__ctgc__selector___TVarSet_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 0)));
                                        MR_Word transform_hlds__ctgc__selector___KindMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 2)));
                                        MR_Word transform_hlds__ctgc__selector___Constraints_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 3)));
                                        MR_Word transform_hlds__ctgc__selector___RetType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 5)));
                                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_49;
                                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_73;
                                        MR_Word transform_hlds__ctgc__selector__TVar_64;
                                        MR_Word transform_hlds__ctgc__selector__V_65_65;

                                        {
                                          transform_hlds__ctgc__selector__conv1_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_69, transform_hlds__ctgc__selector__IndexA_16);
                                        }
                                        transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_49);
                                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_49)) == (MR_mktag((MR_Integer) 0)));
                                        if (transform_hlds__ctgc__selector__succeeded)
                                          {
                                            transform_hlds__ctgc__selector__TVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 0)));
                                            transform_hlds__ctgc__selector__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 1)));
                                            transform_hlds__ctgc__selector__TypeInfo_27_73 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
                                            {
                                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_73, ((MR_Box) (transform_hlds__ctgc__selector__TVar_64)), transform_hlds__ctgc__selector__ExistQVars_60);
                                            }
                                          }
                                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
                                      }
                                    else
                                      {
                                        {
                                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                                        }
                                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                                      }
                                  }
                                if (transform_hlds__ctgc__selector__succeeded)
                                  transform_hlds__ctgc__selector__SubType_21 = transform_hlds__ctgc__selector__SubType0_49;
                                else
                                  {
                                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                    {
                                      mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
                                    }
                                  }
                                /* direct tailcall eliminated */
                                {
                                  MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                                  MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubType_21;

                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                                  transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
                                  transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                                }
                                continue;
                              }
                          }
                      }
                  }
                else
                if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word transform_hlds__ctgc__selector__SubTypeB_22;
                    MR_Word transform_hlds__ctgc__selector__SubTypeA_23;
                    MR_Word transform_hlds__ctgc__selector__ConsIdA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
                    MR_Integer transform_hlds__ctgc__selector__IndexA_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));

                    transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__ctgc__selector__succeeded)
                      {
                        transform_hlds__ctgc__selector__SubTypeB_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
                        {
                          transform_hlds__ctgc__selector__SubTypeA_23 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_25, transform_hlds__ctgc__selector__IndexA_26);
                        }
                        {
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                        }
                        if (transform_hlds__ctgc__selector__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                            }
                            continue;
                          }
                        else
                          {
                            {
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                            }
                            if (transform_hlds__ctgc__selector__succeeded)
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                            else
                              {
                                MR_Word transform_hlds__ctgc__selector__Contains_77;

                                {
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22, &transform_hlds__ctgc__selector__Contains_77);
                                }
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_77 == (MR_Integer) 1);
                              }
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                                  transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                                }
                                continue;
                              }
                          }
                      }
                  }
                else
                  {
                    MR_Word transform_hlds__ctgc__selector__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));

                    if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Word transform_hlds__ctgc__selector__ConsIdB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
                        MR_Integer transform_hlds__ctgc__selector__IndexB_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
                        MR_Word transform_hlds__ctgc__selector__SubTypeB_29;

                        {
                          transform_hlds__ctgc__selector__SubTypeB_29 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdB_27, transform_hlds__ctgc__selector__IndexB_28);
                        }
                        {
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_29);
                        }
                        if (transform_hlds__ctgc__selector__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                            }
                            continue;
                          }
                        else
                          {
                            {
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37);
                            }
                            if (transform_hlds__ctgc__selector__succeeded)
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                            else
                              {
                                MR_Word transform_hlds__ctgc__selector__Contains_82;

                                {
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_82);
                                }
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_82 == (MR_Integer) 1);
                              }
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                                  transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
                                }
                                continue;
                              }
                          }
                      }
                    else
                      {
                        MR_Word transform_hlds__ctgc__selector__SubTypeB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));

                        {
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                        }
                        if (transform_hlds__ctgc__selector__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_31;

                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word transform_hlds__ctgc__selector__Extension0_24;

                            {
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37);
                            }
                            if (transform_hlds__ctgc__selector__succeeded)
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                            else
                              {
                                MR_Word transform_hlds__ctgc__selector__Contains_87;

                                {
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_87);
                                }
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_87 == (MR_Integer) 1);
                              }
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__A_7, transform_hlds__ctgc__selector__BT_14, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Extension0_24);
                              }
                            if (transform_hlds__ctgc__selector__succeeded)
                              {
                                {
                                  transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2], ((MR_Box) (transform_hlds__ctgc__selector__Extension0_24)), ((MR_Box) (transform_hlds__ctgc__selector__A_7)));
                                }
                                transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
                                if (transform_hlds__ctgc__selector__succeeded)
                                  {
                                    *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__Extension0_24;
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                                  }
                              }
                            else
                              {
                                {
                                  transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                                }
                                if (transform_hlds__ctgc__selector__succeeded)
                                  transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word transform_hlds__ctgc__selector__Contains_92;

                                    {
                                      transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Contains_92);
                                    }
                                    transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_92 == (MR_Integer) 1);
                                  }
                                if (transform_hlds__ctgc__selector__succeeded)
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
                                      MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__V_37_37;

                                      transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
                                      transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
                                    }
                                    continue;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        return transform_hlds__ctgc__selector__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded;

        if ((transform_hlds__ctgc__selector__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__ctgc__selector__H_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__ctgc__selector__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__ctgc__selector__V_4_4;
            MR_Integer transform_hlds__ctgc__selector__V_5_5;

            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__H_2)) == (MR_mktag((MR_Integer) 0)));
            if (transform_hlds__ctgc__selector__succeeded)
              {
                transform_hlds__ctgc__selector__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 0)));
                transform_hlds__ctgc__selector__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__T_3;

                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return transform_hlds__ctgc__selector__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__ctgc__selector__reset_tables_2_p_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0();
    }
    {
      transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0();
    }
    {
      transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0();
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__selector__MainType_6,
  MR_Word transform_hlds__ctgc__selector__Selector0_7,
  MR_Word * transform_hlds__ctgc__selector__Selector_8)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    if ((transform_hlds__ctgc__selector__Selector0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__ctgc__selector__Selector_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__ctgc__selector__SubType_11;

        {
          transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__type_of_node_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__MainType_6, transform_hlds__ctgc__selector__Selector0_7, &transform_hlds__ctgc__selector__SubType_11);
        }
        if (transform_hlds__ctgc__selector__succeeded)
          {
            MR_Word transform_hlds__ctgc__selector__V_12_12;

            {
              transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_12_12, 0) = ((MR_Box) (transform_hlds__ctgc__selector__SubType_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__ctgc__selector__Selector_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_12_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          *transform_hlds__ctgc__selector__Selector_8 = transform_hlds__ctgc__selector__Selector0_7;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector__type_of_node_4_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__selector__StartType_6,
  MR_Word transform_hlds__ctgc__selector__Selector_7,
  MR_Word * transform_hlds__ctgc__selector__SubType_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__ctgc__selector__succeeded;

        if ((transform_hlds__ctgc__selector__Selector_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__ctgc__selector__SubType_8 = transform_hlds__ctgc__selector__StartType_6;
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__ctgc__selector__UnitSelector_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 0)));
            MR_Word transform_hlds__ctgc__selector__RestSelector_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 1)));
            MR_Word transform_hlds__ctgc__selector__SubType0_13;

            if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_9)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word transform_hlds__ctgc__selector__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
                MR_Integer transform_hlds__ctgc__selector__Index_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 1)));
                MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

                {
                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__ArgTypes_19);
                }
                if (transform_hlds__ctgc__selector__succeeded)
                  {
                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_13;

                    {
                      transform_hlds__ctgc__selector__conv0_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Index_12);
                    }
                    transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_13);
                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

                    {
                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__CtorDefn_20);
                    }
                    if (transform_hlds__ctgc__selector__succeeded)
                      {
                        MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
                        MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
                        MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
                        MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
                        MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
                        MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_13;
                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
                        MR_Word transform_hlds__ctgc__selector__TVar_26;
                        MR_Word transform_hlds__ctgc__selector__V_27_27;

                        {
                          transform_hlds__ctgc__selector__conv1_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Index_12);
                        }
                        transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_13);
                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_13)) == (MR_mktag((MR_Integer) 0)));
                        if (transform_hlds__ctgc__selector__succeeded)
                          {
                            transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 0)));
                            transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 1)));
                            transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
                            {
                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                            }
                          }
                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                        }
                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
                      }
                  }
              }
            else
              {
                transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
              }
            if (transform_hlds__ctgc__selector__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__ctgc__selector__StartType__tmp_copy_6 = transform_hlds__ctgc__selector__SubType0_13;
                  MR_Word transform_hlds__ctgc__selector__Selector__tmp_copy_7 = transform_hlds__ctgc__selector__RestSelector_10;

                  transform_hlds__ctgc__selector__Selector_7 = transform_hlds__ctgc__selector__Selector__tmp_copy_7;
                  transform_hlds__ctgc__selector__StartType_6 = transform_hlds__ctgc__selector__StartType__tmp_copy_6;
                }
                continue;
              }
          }
        return transform_hlds__ctgc__selector__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__selector__Type_6,
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10,
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
    MR_Word transform_hlds__ctgc__selector__Status_19;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;
	MR_Word input_typeinfo2;
	MR_Word arg2;

	proc_table_info = (MR_ProcTableInfoPtr) (MR_Box) &transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0 ;
	input_typeinfo1 =  (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0 ;
	arg1 =  transform_hlds__ctgc__selector__Type_6 ;
	input_typeinfo2 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2] ;
	arg2 =  transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10 ;
		{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo2, arg2, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
}
    switch (transform_hlds__ctgc__selector__Status_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.normalize_selector_with_type_information/4");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__ctgc__selector__Type_6);
          }
          if (transform_hlds__ctgc__selector__succeeded)
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10;
          else
            {
              MR_Word transform_hlds__ctgc__selector__BranchMap1_9;
              MR_Word transform_hlds__ctgc__selector__V_25_25;

              {
                transform_hlds__ctgc__selector__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__selector__Type_6));
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__ctgc__selector__BranchMap1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_25_25));
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__Type_6, transform_hlds__ctgc__selector__BranchMap1_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11);
              }
            }
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2] ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);


		;}
#undef MR_PROC_LABEL
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
}
        }
        break;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
  MR_Word transform_hlds__ctgc__selector__Normalization_8,
  MR_Word transform_hlds__ctgc__selector__S1_9,
  MR_Word transform_hlds__ctgc__selector__S2_10,
  MR_Word transform_hlds__ctgc__selector__MainType_11,
  MR_Word * transform_hlds__ctgc__selector__Extension_12)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__NormS1_13;
    MR_Word transform_hlds__ctgc__selector__NormS2_14;

    switch (transform_hlds__ctgc__selector__Normalization_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          transform_hlds__ctgc__selector__NormS1_13 = transform_hlds__ctgc__selector__S1_9;
          transform_hlds__ctgc__selector__NormS2_14 = transform_hlds__ctgc__selector__S2_10;
        }
        break;
      case (MR_Integer) 0:
        {
          {
            transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S1_9, &transform_hlds__ctgc__selector__NormS1_13);
          }
          {
            transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S2_10, &transform_hlds__ctgc__selector__NormS2_14);
          }
        }
        break;
    }
    {
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS1_13);
    }
    if (transform_hlds__ctgc__selector__succeeded)
      {
        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS2_14);
      }
    if (transform_hlds__ctgc__selector__succeeded)
      {
        {
          transform_hlds__ctgc__selector__succeeded = mercury__list__append_3_p_3((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__Extension_12, transform_hlds__ctgc__selector__NormS1_13);
        }
      }
    else
      {
        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__NormS1_13, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__Extension_12);
      }
    return transform_hlds__ctgc__selector__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__selector__selector_termshift_3_p_0(
  MR_Word transform_hlds__ctgc__selector__S1_4,
  MR_Word transform_hlds__ctgc__selector__S2_5,
  MR_Word * transform_hlds__ctgc__selector__S_6)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    {
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__S1_4, transform_hlds__ctgc__selector__S2_5, transform_hlds__ctgc__selector__S_6);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
  MR_Box transform_hlds__ctgc__selector__closure_arg,
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__ctgc__selector__wrapper_arg_2;
    MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;
    MR_Word transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7;

    {
      transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7 = transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__138__1_1_f_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1));
    }
    transform_hlds__ctgc__selector__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7));
    return transform_hlds__ctgc__selector__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0(
  MR_Word transform_hlds__ctgc__selector__Types_3)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__HeadVar__2_2;

    {
      transform_hlds__ctgc__selector__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, (MR_Word) &transform_hlds__ctgc__selector_scalar_common_2[1], transform_hlds__ctgc__selector__Types_3);
    }
    return transform_hlds__ctgc__selector__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_2_f_0(
  MR_Word transform_hlds__ctgc__selector__ConsId_4,
  MR_Integer transform_hlds__ctgc__selector__Index_5)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;
    MR_Word transform_hlds__ctgc__selector__HeadVar__3_3;
    MR_Word transform_hlds__ctgc__selector__TermSel_6;

    switch (MR_tag((MR_Word) transform_hlds__ctgc__selector__ConsId_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__ConsId_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              transform_hlds__ctgc__selector__TermSel_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 0) = ((MR_Box) (transform_hlds__ctgc__selector__ConsId_4));
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 1) = ((MR_Box) (transform_hlds__ctgc__selector__Index_5));
            }
            break;
        }
        break;
    }
    {
      transform_hlds__ctgc__selector__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__selector__TermSel_6));
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return transform_hlds__ctgc__selector__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__top_selector_0_f_0(void)
{
  {
    MR_bool transform_hlds__ctgc__selector__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void mercury__transform_hlds__ctgc__selector__init(void)
{
}

void mercury__transform_hlds__ctgc__selector__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_branch_map_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_normalization_0);
}

void mercury__transform_hlds__ctgc__selector__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.selector. */
