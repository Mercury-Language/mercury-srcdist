/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2024-06-02
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


// :- module transform_hlds.ctgc.selector.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__selector__init
ENDINIT
*/

#include "transform_hlds.ctgc.selector.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.ctgc.mih"



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

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_encounter_existential_subtype_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1];

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1];

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_normalization_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2];

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2];

static const MR_TableStepDesc table_input_steps_for_type_arg_types_3_p_0[2];

static MR_TableStepStats table_call_step_stats_for_type_arg_types_3_p_0[2];

static MR_TableStepStats table_prev_call_step_stats_for_type_arg_types_3_p_0[2];

static MR_TableStepStats table_answer_step_stats_for_type_arg_types_3_p_0[2];

static MR_TableStepStats table_prev_answer_step_stats_for_type_arg_types_3_p_0[2];

static MR_ProcTableInfo table_info_for_type_arg_types_3_p_0;

static const MR_TableStepDesc table_input_steps_for_type_contains_subtype_1_4_p_0[3];

static MR_TableStepStats table_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

static MR_TableStepStats table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

static MR_TableStepStats table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

static MR_TableStepStats table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

static MR_ProcTableInfo table_info_for_type_contains_subtype_1_4_p_0;

static const MR_TableStepDesc table_input_steps_for_normalize_selector_with_type_information_4_p_0[3];

static MR_TableStepStats table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static MR_TableStepStats table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static MR_TableStepStats table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static MR_TableStepStats table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

static MR_ProcTableInfo table_info_for_normalize_selector_with_type_information_4_p_0;

static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__350__1_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * LambdaHeadVar__1_11,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__140__1_1_f_0(
  MR_Word LambdaHeadVar__1_6);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void);

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word A_7,
  MR_Word B_8,
  MR_Word Type_9,
  MR_Word * Extension_10);

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsID_8,
  MR_Integer Position_9);

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FromType_6,
  MR_Word ToType_7,
  MR_Word * Contains_8);

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ToType_9,
  MR_Word STATE_VARIABLE_Queue_0_15,
  MR_Word * STATE_VARIABLE_Queue_16,
  MR_Word STATE_VARIABLE_SeenTypes_0_17,
  MR_Word * STATE_VARIABLE_SeenTypes_18,
  MR_Word * Contains_12);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * ArgTypes_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarType_8,
  MR_Word BranchMap0_9,
  MR_Word SelectorAcc0_10,
  MR_Word STATE_VARIABLE_Selector_0_24,
  MR_Word * STATE_VARIABLE_Selector_25);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word KeyType_7,
  MR_Word * ValueSel_8);

static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_4[1][6];




static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__selector_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_branch_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "branch_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 = {
  (MR_String) "encounter_existential_subtype",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_encounter_existential_subtype_0[1] = { &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 };

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1] = { &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 };

static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "encounter_existential_subtype",
  { transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0 },
  { transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_encounter_existential_subtype_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0,

};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0 = {
  (MR_String) "need_normalization",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1 = {
  (MR_String) "already_normalized",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_normalization_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____normalization_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____normalization_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "normalization",
  { transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0 },
  { transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_ordinal_ordered_normalization_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0,

};

static const MR_TableStepDesc table_input_steps_for_type_arg_types_3_p_0[2] = {
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

static MR_TableStepStats table_call_step_stats_for_type_arg_types_3_p_0[2] = {
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

static MR_TableStepStats table_prev_call_step_stats_for_type_arg_types_3_p_0[2] = {
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

static MR_TableStepStats table_answer_step_stats_for_type_arg_types_3_p_0[2] = {
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

static MR_TableStepStats table_prev_answer_step_stats_for_type_arg_types_3_p_0[2] = {
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

static MR_ProcTableInfo table_info_for_type_arg_types_3_p_0 = {
  MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  { (MR_Integer) 0 },
  {
    table_input_steps_for_type_arg_types_3_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_call_step_stats_for_type_arg_types_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_call_step_stats_for_type_arg_types_3_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_answer_step_stats_for_type_arg_types_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_answer_step_stats_for_type_arg_types_3_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

static const MR_TableStepDesc table_input_steps_for_type_contains_subtype_1_4_p_0[3] = {
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

static MR_TableStepStats table_call_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
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

static MR_TableStepStats table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
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

static MR_TableStepStats table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
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

static MR_TableStepStats table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3] = {
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

static MR_ProcTableInfo table_info_for_type_contains_subtype_1_4_p_0 = {
  MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  { (MR_Integer) 0 },
  {
    table_input_steps_for_type_contains_subtype_1_4_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_call_step_stats_for_type_contains_subtype_1_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_answer_step_stats_for_type_contains_subtype_1_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

static const MR_TableStepDesc table_input_steps_for_normalize_selector_with_type_information_4_p_0[3] = {
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

static MR_TableStepStats table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
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

static MR_TableStepStats table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
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

static MR_TableStepStats table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
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

static MR_TableStepStats table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3] = {
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

static MR_ProcTableInfo table_info_for_normalize_selector_with_type_information_4_p_0 = {
  MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  { (MR_Integer) 0 },
  {
    table_input_steps_for_normalize_selector_with_type_information_4_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_call_step_stats_for_normalize_selector_with_type_information_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__350__1_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * LambdaHeadVar__1_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Word _ConsId_8;

  check_hlds__type_util__cons_id_arg_types_4_p_0(ModuleInfo_4, Type_5, &_ConsId_8, LambdaHeadVar__1_11, cont, cont_env_ptr);
}

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__140__1_1_f_0(
  MR_Word LambdaHeadVar__1_6)
{
  MR_Word LambdaHeadVar__2_7;

  {
    LambdaHeadVar__2_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_7, 0) = ((MR_Box) (LambdaHeadVar__1_6));
  }
  return LambdaHeadVar__2_7;
}

void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0(
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
transform_hlds__ctgc__selector____Unify____normalization_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__selector__reset_tables_2_p_0(void)
{
  transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0();
  transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0();
  transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0();
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void)
{
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0


		{
table_info_for_normalize_selector_with_type_information_4_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void)
{
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0


		{
table_info_for_type_arg_types_3_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void)
{
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0


		{
table_info_for_type_contains_subtype_1_4_p_0.MR_pt_tablenode.MR_integer = 0;

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word MainType_6,
  MR_Word Selector0_7,
  MR_Word * Selector_8)
{
  MR_bool succeeded;

  if ((Selector0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Selector_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SubType_11;

    succeeded = transform_hlds__ctgc__selector__type_of_node_4_p_0(ModuleInfo_5, MainType_6, Selector0_7, &SubType_11);
    if (succeeded)
    {
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) (SubType_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Selector_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *Selector_8 = Selector0_7;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector__type_of_node_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word StartType_6,
  MR_Word Selector_7,
  MR_Word * SubType_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Selector_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SubType_8 = StartType_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word UnitSelector_9 = ((MR_Word) ((MR_hl_field(1, Selector_7, (MR_Integer) 0))));
      MR_Word RestSelector_10 = ((MR_Word) ((MR_hl_field(1, Selector_7, (MR_Integer) 1))));
      MR_Word SubType0_13;
      MR_Word next_value_of_StartType_6;
      MR_Word next_value_of_Selector_7;

      if (((MR_tag((MR_Word) UnitSelector_9)) == (MR_Integer) 0))
      {
        MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(0, UnitSelector_9, (MR_Integer) 0))));
        MR_Integer Index_12 = ((MR_Integer) ((MR_hl_field(0, UnitSelector_9, (MR_Integer) 1))));
        MR_Word ArgTypes_14;

        succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_5, StartType_6, ConsId_11, &ArgTypes_14);
        if (succeeded)
        {
          MR_Box conv0_SubType0_13;

          conv0_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_14, Index_12);
          SubType0_13 = ((MR_Word) (conv0_SubType0_13));
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word CtorDefn_15;

          succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_5, StartType_6, ConsId_11, &CtorDefn_15);
          if (succeeded)
          {
            MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(0, CtorDefn_15, (MR_Integer) 2))));
            MR_Word ExistQVars_20;
            MR_Word ArgTypes_29 = ((MR_Word) ((MR_hl_field(0, CtorDefn_15, (MR_Integer) 3))));
            MR_Box conv1_SubType0_13;
            MR_Word TypeInfo_29_32;
            MR_Word TVar_24;

            if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
              ExistQVars_20 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_26 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));

              ExistQVars_20 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
            }
            conv1_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_29, Index_12);
            SubType0_13 = ((MR_Word) (conv1_SubType0_13));
            succeeded = ((MR_tag((MR_Word) SubType0_13)) == (MR_Integer) 0);
            if (succeeded)
            {
              TVar_24 = ((MR_Word) ((MR_hl_field(0, SubType0_13, (MR_Integer) 0))));
              TypeInfo_29_32 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[1]);
              succeeded = mercury__list__member_2_p_0(TypeInfo_29_32, ((MR_Box) (TVar_24)), ExistQVars_20);
            }
            succeeded = !(succeeded);
          }
          else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        SubType0_13 = ((MR_Word) ((MR_hl_field(1, UnitSelector_9, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_StartType_6 = SubType0_13;
        next_value_of_Selector_7 = RestSelector_10;
        StartType_6 = next_value_of_StartType_6;
        Selector_7 = next_value_of_Selector_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Normalization_8,
  MR_Word S1_9,
  MR_Word S2_10,
  MR_Word MainType_11,
  MR_Word * Extension_12)
{
  MR_bool succeeded;
  MR_Word NormS1_13;
  MR_Word NormS2_14;

  switch (Normalization_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        NormS1_13 = S1_9;
        NormS2_14 = S2_10;
      }
      break;
    case (MR_Integer) 0:
      {
        transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(ModuleInfo_7, MainType_11, S1_9, &NormS1_13);
        transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(ModuleInfo_7, MainType_11, S2_10, &NormS2_14);
      }
      break;
  }
  succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(NormS1_13);
  if (succeeded)
    succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(NormS2_14);
  if (succeeded)
    succeeded = mercury__list__append_3_p_3((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), NormS2_14, Extension_12, NormS1_13);
  else
    succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(ModuleInfo_7, NormS1_13, NormS2_14, MainType_11, Extension_12);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word A_7,
  MR_Word B_8,
  MR_Word Type_9,
  MR_Word * Extension_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((B_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Extension_10 = A_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word AH_11;
      MR_Word AT_12;
      MR_Word BH_13;
      MR_Word BT_14;
      MR_Word ConsIdA_15;
      MR_Integer IndexA_16;
      MR_Word ConsIdB_17;
      MR_Integer IndexB_18;

      succeeded = (A_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AH_11 = ((MR_Word) ((MR_hl_field(1, A_7, (MR_Integer) 0))));
        AT_12 = ((MR_Word) ((MR_hl_field(1, A_7, (MR_Integer) 1))));
        BH_13 = ((MR_Word) ((MR_hl_field(1, B_8, (MR_Integer) 0))));
        BT_14 = ((MR_Word) ((MR_hl_field(1, B_8, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) AH_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsIdA_15 = ((MR_Word) ((MR_hl_field(0, AH_11, (MR_Integer) 0))));
          IndexA_16 = ((MR_Integer) ((MR_hl_field(0, AH_11, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) BH_13)) == (MR_Integer) 0);
          if (succeeded)
          {
            ConsIdB_17 = ((MR_Word) ((MR_hl_field(0, BH_13, (MR_Integer) 0))));
            IndexB_18 = ((MR_Integer) ((MR_hl_field(0, BH_13, (MR_Integer) 1))));
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_35_35;

          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsIdA_15, ConsIdB_17);
          if (succeeded)
          {
            succeeded = (IndexA_16 == IndexB_18);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (AT_12)), ((MR_Box) (BT_14)));
              }
              if (succeeded)
              {
                *Extension_10 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word SubType_21;
                MR_Word SubType0_40;
                MR_Word ArgTypes_43;
                MR_Word next_value_of_A_7;
                MR_Word next_value_of_B_8;
                MR_Word next_value_of_Type_9;

                succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_9, ConsIdA_15, &ArgTypes_43);
                if (succeeded)
                {
                  MR_Box conv0_SubType0_40;

                  conv0_SubType0_40 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_43, IndexA_16);
                  SubType0_40 = ((MR_Word) (conv0_SubType0_40));
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word CtorDefn_44;

                  succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_6, Type_9, ConsIdA_15, &CtorDefn_44);
                  if (succeeded)
                  {
                    MR_Word MaybeExistConstraints_47 = ((MR_Word) ((MR_hl_field(0, CtorDefn_44, (MR_Integer) 2))));
                    MR_Word ExistQVars_49;
                    MR_Word ArgTypes_58 = ((MR_Word) ((MR_hl_field(0, CtorDefn_44, (MR_Integer) 3))));
                    MR_Box conv1_SubType0_40;
                    MR_Word TypeInfo_29_61;
                    MR_Word TVar_53;

                    if ((MaybeExistConstraints_47 == (MR_Word) ((MR_Unsigned) 0U)))
                      ExistQVars_49 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word Var_55 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_47), (MR_Integer) 1));

                      ExistQVars_49 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
                    }
                    conv1_SubType0_40 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_58, IndexA_16);
                    SubType0_40 = ((MR_Word) (conv1_SubType0_40));
                    succeeded = ((MR_tag((MR_Word) SubType0_40)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      TVar_53 = ((MR_Word) ((MR_hl_field(0, SubType0_40, (MR_Integer) 0))));
                      TypeInfo_29_61 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[1]);
                      succeeded = mercury__list__member_2_p_0(TypeInfo_29_61, ((MR_Box) (TVar_53)), ExistQVars_49);
                    }
                    succeeded = !(succeeded);
                  }
                  else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  SubType_21 = SubType0_40;
                else
                  mercury__exception__throw_1_p_0((MR_Word) (&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0), ((MR_Box) ((MR_Integer) 0)));
                // direct tailcall eliminated
                ;
                next_value_of_A_7 = AT_12;
                next_value_of_B_8 = BT_14;
                next_value_of_Type_9 = SubType_21;
                A_7 = next_value_of_A_7;
                B_8 = next_value_of_B_8;
                Type_9 = next_value_of_Type_9;
                continue;
              }
            }
          }
        }
        else
        if (((MR_tag((MR_Word) AH_11)) == (MR_Integer) 0))
        {
          MR_Word SubTypeB_22;
          MR_Word SubTypeA_23;
          MR_Word ConsIdA_25 = ((MR_Word) ((MR_hl_field(0, AH_11, (MR_Integer) 0))));
          MR_Integer IndexA_26 = ((MR_Integer) ((MR_hl_field(0, AH_11, (MR_Integer) 1))));
          MR_Word SubType0_62;
          MR_Word ArgTypes_65;

          succeeded = ((MR_tag((MR_Word) BH_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            SubTypeB_22 = ((MR_Word) ((MR_hl_field(1, BH_13, (MR_Integer) 0))));
            succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_9, ConsIdA_25, &ArgTypes_65);
            if (succeeded)
            {
              MR_Box conv2_SubType0_62;

              conv2_SubType0_62 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_65, IndexA_26);
              SubType0_62 = ((MR_Word) (conv2_SubType0_62));
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word CtorDefn_66;

              succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_6, Type_9, ConsIdA_25, &CtorDefn_66);
              if (succeeded)
              {
                MR_Word MaybeExistConstraints_69 = ((MR_Word) ((MR_hl_field(0, CtorDefn_66, (MR_Integer) 2))));
                MR_Word ExistQVars_71;
                MR_Word ArgTypes_80 = ((MR_Word) ((MR_hl_field(0, CtorDefn_66, (MR_Integer) 3))));
                MR_Box conv3_SubType0_62;
                MR_Word TypeInfo_29_83;
                MR_Word TVar_75;

                if ((MaybeExistConstraints_69 == (MR_Word) ((MR_Unsigned) 0U)))
                  ExistQVars_71 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word Var_77 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_69), (MR_Integer) 1));

                  ExistQVars_71 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
                }
                conv3_SubType0_62 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_80, IndexA_26);
                SubType0_62 = ((MR_Word) (conv3_SubType0_62));
                succeeded = ((MR_tag((MR_Word) SubType0_62)) == (MR_Integer) 0);
                if (succeeded)
                {
                  TVar_75 = ((MR_Word) ((MR_hl_field(0, SubType0_62, (MR_Integer) 0))));
                  TypeInfo_29_83 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[1]);
                  succeeded = mercury__list__member_2_p_0(TypeInfo_29_83, ((MR_Box) (TVar_75)), ExistQVars_71);
                }
                succeeded = !(succeeded);
              }
              else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              SubTypeA_23 = SubType0_62;
            else
              mercury__exception__throw_1_p_0((MR_Word) (&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0), ((MR_Box) ((MR_Integer) 0)));
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SubTypeA_23, SubTypeB_22);
            if (succeeded)
            {
              MR_Word next_value_of_A_7 = AT_12;
              MR_Word next_value_of_B_8 = BT_14;
              MR_Word next_value_of_Type_9 = SubTypeA_23;

              // direct tailcall eliminated
              ;
              A_7 = next_value_of_A_7;
              B_8 = next_value_of_B_8;
              Type_9 = next_value_of_Type_9;
              continue;
            }
            else
            {
              MR_Word next_value_of_A_7;
              MR_Word next_value_of_Type_9;

              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SubTypeA_23, SubTypeB_22);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Contains_84;

                transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(ModuleInfo_6, SubTypeA_23, SubTypeB_22, &Contains_84);
                succeeded = (Contains_84 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_A_7 = AT_12;
                next_value_of_Type_9 = SubTypeA_23;
                A_7 = next_value_of_A_7;
                Type_9 = next_value_of_Type_9;
                continue;
              }
            }
          }
        }
        else
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, AH_11, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) BH_13)) == (MR_Integer) 0))
          {
            MR_Word ConsIdB_27 = ((MR_Word) ((MR_hl_field(0, BH_13, (MR_Integer) 0))));
            MR_Integer IndexB_28 = ((MR_Integer) ((MR_hl_field(0, BH_13, (MR_Integer) 1))));
            MR_Word SubTypeB_29;

            SubTypeB_29 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(ModuleInfo_6, Type_9, ConsIdB_27, IndexB_28);
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_33, SubTypeB_29);
            if (succeeded)
            {
              MR_Word next_value_of_A_7 = AT_12;
              MR_Word next_value_of_B_8 = BT_14;
              MR_Word next_value_of_Type_9 = SubTypeB_29;

              // direct tailcall eliminated
              ;
              A_7 = next_value_of_A_7;
              B_8 = next_value_of_B_8;
              Type_9 = next_value_of_Type_9;
              continue;
            }
            else
            {
              MR_Word next_value_of_B_8;
              MR_Word next_value_of_Type_9;

              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SubTypeB_29, Var_33);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Contains_86;

                transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(ModuleInfo_6, SubTypeB_29, Var_33, &Contains_86);
                succeeded = (Contains_86 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_B_8 = BT_14;
                next_value_of_Type_9 = SubTypeB_29;
                B_8 = next_value_of_B_8;
                Type_9 = next_value_of_Type_9;
                continue;
              }
            }
          }
          else
          {
            MR_Word SubTypeB_31 = ((MR_Word) ((MR_hl_field(1, BH_13, (MR_Integer) 0))));

            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_33, SubTypeB_31);
            if (succeeded)
            {
              MR_Word next_value_of_A_7 = AT_12;
              MR_Word next_value_of_B_8 = BT_14;
              MR_Word next_value_of_Type_9 = SubTypeB_31;

              // direct tailcall eliminated
              ;
              A_7 = next_value_of_A_7;
              B_8 = next_value_of_B_8;
              Type_9 = next_value_of_Type_9;
              continue;
            }
            else
            {
              MR_Word Extension0_24;

              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SubTypeB_31, Var_33);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Contains_88;

                transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(ModuleInfo_6, SubTypeB_31, Var_33, &Contains_88);
                succeeded = (Contains_88 == (MR_Integer) 1);
              }
              if (succeeded)
                succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(ModuleInfo_6, A_7, BT_14, SubTypeB_31, &Extension0_24);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[2]), ((MR_Box) (Extension0_24)), ((MR_Box) (A_7)));
                succeeded = !(succeeded);
                if (succeeded)
                {
                  *Extension_10 = Extension0_24;
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word next_value_of_A_7;
                MR_Word next_value_of_Type_9;

                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_33, SubTypeB_31);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Contains_90;

                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(ModuleInfo_6, Var_33, SubTypeB_31, &Contains_90);
                  succeeded = (Contains_90 == (MR_Integer) 1);
                }
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_A_7 = AT_12;
                  next_value_of_Type_9 = Var_33;
                  A_7 = next_value_of_A_7;
                  Type_9 = next_value_of_Type_9;
                  continue;
                }
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

static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsID_8,
  MR_Integer Position_9)
{
  MR_bool succeeded;
  MR_Word SubType_10;
  MR_Word SubType0_11;
  MR_Word ArgTypes_14;

  succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_7, ConsID_8, &ArgTypes_14);
  if (succeeded)
  {
    MR_Box conv0_SubType0_11;

    conv0_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_14, Position_9);
    SubType0_11 = ((MR_Word) (conv0_SubType0_11));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word CtorDefn_15;

    succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_6, Type_7, ConsID_8, &CtorDefn_15);
    if (succeeded)
    {
      MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(0, CtorDefn_15, (MR_Integer) 2))));
      MR_Word ExistQVars_20;
      MR_Word ArgTypes_29 = ((MR_Word) ((MR_hl_field(0, CtorDefn_15, (MR_Integer) 3))));
      MR_Box conv1_SubType0_11;
      MR_Word TypeInfo_29_32;
      MR_Word TVar_24;

      if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
        ExistQVars_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_26 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));

        ExistQVars_20 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
      }
      conv1_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_29, Position_9);
      SubType0_11 = ((MR_Word) (conv1_SubType0_11));
      succeeded = ((MR_tag((MR_Word) SubType0_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        TVar_24 = ((MR_Word) ((MR_hl_field(0, SubType0_11, (MR_Integer) 0))));
        TypeInfo_29_32 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[1]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_29_32, ((MR_Box) (TVar_24)), ExistQVars_20);
      }
      succeeded = !(succeeded);
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    SubType_10 = SubType0_11;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0), ((MR_Box) ((MR_Integer) 0)));
  return SubType_10;
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FromType_6,
  MR_Word ToType_7,
  MR_Word * Contains_8)
{
  MR_Box CallTableTipVar_18;
  MR_Word Status_19;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;
	MR_Word input_typeinfo2;
	MR_Word arg2;

	proc_table_info = (MR_ProcTableInfoPtr)(MR_Box) (&table_info_for_type_contains_subtype_1_4_p_0) ;
	input_typeinfo1 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) ;
	arg1 = FromType_6 ;
	input_typeinfo2 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) ;
	arg2 = ToType_7 ;
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
	CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	Status_19  = status;
}
  switch (Status_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_contains_subtype_1/4");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Queue0_9;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word _Queue_10;
        MR_Word _SeenTypes_11;

        Var_12 = mercury__queue__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        mercury__queue__put_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (FromType_6)), Var_12, &Queue0_9);
        Var_13 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(ModuleInfo_5, ToType_7, Queue0_9, &_Queue_10, Var_13, &_SeenTypes_11, Contains_8);
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode)CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*Contains_8)) ;
	save_arg_typeinfo0 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0) ;
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
        MR_Box conv0_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode)CallTableTipVar_18 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	conv0_restore_arg0  = (MR_Box) restore_arg0;
        *Contains_8 = ((MR_Word) (conv0_restore_arg0));
}
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ToType_9,
  MR_Word STATE_VARIABLE_Queue_0_15,
  MR_Word * STATE_VARIABLE_Queue_16,
  MR_Word STATE_VARIABLE_SeenTypes_0_17,
  MR_Word * STATE_VARIABLE_SeenTypes_18,
  MR_Word * Contains_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FromType_13;
    MR_Word STATE_VARIABLE_Queue_19_19;
    MR_Box conv0_FromType_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &conv0_FromType_13, STATE_VARIABLE_Queue_0_15, &STATE_VARIABLE_Queue_19_19);
    if (succeeded)
    {
      FromType_13 = ((MR_Word) (conv0_FromType_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_SeenTypes_0_17, ((MR_Box) (FromType_13)));
      if (succeeded)
      {
        MR_Word next_value_of_STATE_VARIABLE_Queue_0_15 = STATE_VARIABLE_Queue_19_19;

        // direct tailcall eliminated
        ;
        STATE_VARIABLE_Queue_0_15 = next_value_of_STATE_VARIABLE_Queue_0_15;
        continue;
      }
      else
      {
        MR_Word ArgTypes_14;
        MR_Word STATE_VARIABLE_SeenTypes_22_22;

        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (FromType_13)), STATE_VARIABLE_SeenTypes_0_17, &STATE_VARIABLE_SeenTypes_22_22);
        transform_hlds__ctgc__selector__type_arg_types_3_p_0(ModuleInfo_8, FromType_13, &ArgTypes_14);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ToType_9)), ArgTypes_14);
        if (succeeded)
        {
          *Contains_12 = (MR_Integer) 1;
          *STATE_VARIABLE_SeenTypes_18 = STATE_VARIABLE_SeenTypes_22_22;
          *STATE_VARIABLE_Queue_16 = STATE_VARIABLE_Queue_19_19;
        }
        else
        {
          MR_Word STATE_VARIABLE_Queue_23_23;
          MR_Word next_value_of_STATE_VARIABLE_Queue_0_15;
          MR_Word next_value_of_STATE_VARIABLE_SeenTypes_0_17;

          mercury__queue__put_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_14, STATE_VARIABLE_Queue_19_19, &STATE_VARIABLE_Queue_23_23);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Queue_0_15 = STATE_VARIABLE_Queue_23_23;
          next_value_of_STATE_VARIABLE_SeenTypes_0_17 = STATE_VARIABLE_SeenTypes_22_22;
          STATE_VARIABLE_Queue_0_15 = next_value_of_STATE_VARIABLE_Queue_0_15;
          STATE_VARIABLE_SeenTypes_0_17 = next_value_of_STATE_VARIABLE_SeenTypes_0_17;
          continue;
        }
      }
    }
    else
    {
      *Contains_12 = (MR_Integer) 0;
      *STATE_VARIABLE_SeenTypes_18 = STATE_VARIABLE_SeenTypes_0_17;
      *STATE_VARIABLE_Queue_16 = STATE_VARIABLE_Queue_0_15;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s * env_ptr = (struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11));
  ((env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont)((env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s env;

  (env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont = cont;
  (env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__350__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11, transform_hlds__ctgc__selector__type_arg_types_3_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * ArgTypes_6)
{
  MR_Box CallTableTipVar_17;
  MR_Word Status_18;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;

	proc_table_info = (MR_ProcTableInfoPtr)(MR_Box) (&table_info_for_type_arg_types_3_p_0) ;
	input_typeinfo1 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) ;
	arg1 = Type_5 ;
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
	CallTableTipVar_17  = (MR_Box) CallTableTipVar;
	Status_18  = status;
}
  switch (Status_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_arg_types/3");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ArgTypesLists_9;
        MR_Word Var_10;

        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_4[0]));
          MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__ctgc__selector__type_arg_types_3_p_0_2));
          MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_4));
          MR_hl_field(0, Var_10, 4) = ((MR_Box) (Type_5));
        }
        mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[0]), Var_10, &ArgTypesLists_9);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesLists_9, ArgTypes_6);
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode)CallTableTipVar_17 ;
	arg0 = (MR_Word) ((MR_Box) (*ArgTypes_6)) ;
	save_arg_typeinfo0 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[0]) ;
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
        MR_Box conv1_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode)CallTableTipVar_17 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	conv1_restore_arg0  = (MR_Box) restore_arg0;
        *ArgTypes_6 = ((MR_Word) (conv1_restore_arg0));
}
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word H_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) H_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = T_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Selector_0_10,
  MR_Word * STATE_VARIABLE_Selector_11)
{
  MR_bool succeeded;
  MR_Box CallTableTipVar_17;
  MR_Word Status_18;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo1;
	MR_Word arg1;
	MR_Word input_typeinfo2;
	MR_Word arg2;

	proc_table_info = (MR_ProcTableInfoPtr)(MR_Box) (&table_info_for_normalize_selector_with_type_information_4_p_0) ;
	input_typeinfo1 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) ;
	arg1 = Type_6 ;
	input_typeinfo2 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[2]) ;
	arg2 = STATE_VARIABLE_Selector_0_10 ;
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
	CallTableTipVar_17  = (MR_Box) CallTableTipVar;
	Status_18  = status;
}
  switch (Status_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.normalize_selector_with_type_information/4");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
        if (succeeded)
          *STATE_VARIABLE_Selector_11 = STATE_VARIABLE_Selector_0_10;
        else
        {
          MR_Word BranchMap1_9;
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (Type_6));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            BranchMap1_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, BranchMap1_9, 0) = ((MR_Box) (Var_21));
            MR_hl_field(1, BranchMap1_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(ModuleInfo_5, Type_6, BranchMap1_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Selector_0_10, STATE_VARIABLE_Selector_11);
        }
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode)CallTableTipVar_17 ;
	arg0 = (MR_Word) ((MR_Box) (*STATE_VARIABLE_Selector_11)) ;
	save_arg_typeinfo0 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[2]) ;
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
        MR_Box conv0_restore_arg0;

{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode)CallTableTipVar_17 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	conv0_restore_arg0  = (MR_Box) restore_arg0;
        *STATE_VARIABLE_Selector_11 = ((MR_Word) (conv0_restore_arg0));
}
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarType_8,
  MR_Word BranchMap0_9,
  MR_Word SelectorAcc0_10,
  MR_Word STATE_VARIABLE_Selector_0_24,
  MR_Word * STATE_VARIABLE_Selector_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((STATE_VARIABLE_Selector_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Selector_25 = SelectorAcc0_10;
    else
    {
      MR_Word UnitSelector_12 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Selector_0_24, (MR_Integer) 0))));
      MR_Word SelRest_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Selector_0_24, (MR_Integer) 1))));
      MR_Word CtorCat_14;
      MR_Word CatUser_15;

      CtorCat_14 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_7, VarType_8);
      succeeded = ((((MR_tag((MR_Word) CtorCat_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CtorCat_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        CatUser_15 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_14, (MR_Integer) 1))) & (MR_Integer) 7);
        {
          MR_Word CType_20;

          switch (CatUser_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "cat_user_abstract_dummy");
                return;
              }
              break;
            case (MR_Integer) 3:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "cat_user_direct_dummy");
                return;
              }
              break;
            case (MR_Integer) 4:
              {
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
          }
          if (((MR_tag((MR_Word) UnitSelector_12)) == (MR_Integer) 0))
          {
            MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, UnitSelector_12, (MR_Integer) 0))));
            MR_Integer Index_17 = ((MR_Integer) ((MR_hl_field(0, UnitSelector_12, (MR_Integer) 1))));
            MR_Word ArgTypes_18;
            MR_Word SubType_19;
            MR_Word TypeCtorInfo_40_40;
            MR_Box conv0_SubType_19;

            succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_7, VarType_8, ConsId_16, &ArgTypes_18);
            if (succeeded)
            {
              TypeCtorInfo_40_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_40_40, ArgTypes_18, Index_17, &conv0_SubType_19);
              if (succeeded)
              {
                SubType_19 = ((MR_Word) (conv0_SubType_19));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                CType_20 = SubType_19;
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "accessing nonexistent index");
                  return;
                }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            CType_20 = ((MR_Word) ((MR_hl_field(1, UnitSelector_12, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BranchSelector_21;

            succeeded = transform_hlds__ctgc__selector__branch_map_search_3_p_0(BranchMap0_9, CType_20, &BranchSelector_21);
            if (succeeded)
            {
              MR_Word next_value_of_VarType_8 = CType_20;
              MR_Word next_value_of_SelectorAcc0_10 = BranchSelector_21;
              MR_Word next_value_of_STATE_VARIABLE_Selector_0_24 = SelRest_13;

              // direct tailcall eliminated
              ;
              VarType_8 = next_value_of_VarType_8;
              SelectorAcc0_10 = next_value_of_SelectorAcc0_10;
              STATE_VARIABLE_Selector_0_24 = next_value_of_STATE_VARIABLE_Selector_0_24;
              continue;
            }
            else
            {
              MR_Word SelectorAcc1_22;
              MR_Word BranchMap1_23;
              MR_Word Var_34;
              MR_Word Var_44;
              MR_Word next_value_of_VarType_8;
              MR_Word next_value_of_BranchMap0_9;
              MR_Word next_value_of_SelectorAcc0_10;
              MR_Word next_value_of_STATE_VARIABLE_Selector_0_24;

              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (UnitSelector_12));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), SelectorAcc0_10, Var_34, &SelectorAcc1_22);
              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_44, 0) = ((MR_Box) (CType_20));
                MR_hl_field(0, Var_44, 1) = ((MR_Box) (SelectorAcc1_22));
              }
              {
                BranchMap1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, BranchMap1_23, 0) = ((MR_Box) (Var_44));
                MR_hl_field(1, BranchMap1_23, 1) = ((MR_Box) (BranchMap0_9));
              }
              // direct tailcall eliminated
              ;
              next_value_of_VarType_8 = CType_20;
              next_value_of_BranchMap0_9 = BranchMap1_23;
              next_value_of_SelectorAcc0_10 = SelectorAcc1_22;
              next_value_of_STATE_VARIABLE_Selector_0_24 = SelRest_13;
              VarType_8 = next_value_of_VarType_8;
              BranchMap0_9 = next_value_of_BranchMap0_9;
              SelectorAcc0_10 = next_value_of_SelectorAcc0_10;
              STATE_VARIABLE_Selector_0_24 = next_value_of_STATE_VARIABLE_Selector_0_24;
              continue;
            }
          }
          else
          {
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (UnitSelector_12));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), SelectorAcc0_10, Var_37, STATE_VARIABLE_Selector_25);
          }
        }
      }
      else
        mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), SelectorAcc0_10, STATE_VARIABLE_Selector_0_24, STATE_VARIABLE_Selector_25);
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word KeyType_7,
  MR_Word * ValueSel_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word Type_4;
    MR_Word Sel_5;
    MR_Word TypeSels_6;
    MR_Word Empty_9;
    MR_Word Var_11;
    MR_Word Subst_10;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      TypeSels_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Type_4 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
      Sel_5 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
      TypeInfo_13_13 = (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_1[1]);
      TypeCtorInfo_14_14 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__map__init_1_p_0(TypeInfo_13_13, TypeCtorInfo_14_14, &Empty_9);
      Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(Type_4, KeyType_7, Var_12, Empty_9, &Subst_10);
      if (succeeded)
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_13_13, TypeCtorInfo_14_14, Subst_10);
      if (succeeded)
      {
        *ValueSel_8 = Sel_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TypeSels_6;

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

void MR_CALL 
transform_hlds__ctgc__selector__selector_termshift_3_p_0(
  MR_Word S1_4,
  MR_Word S2_5,
  MR_Word * S_6)
{
  mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), S1_4, S2_5, S_6);
}

static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_7;

  conv0_LambdaHeadVar__2_7 = transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__140__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_7));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0(
  MR_Word Types_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&transform_hlds__ctgc__selector_scalar_common_2[1]), Types_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_2_f_0(
  MR_Word ConsId_4,
  MR_Integer Index_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TermSel_6;

  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
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
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            TermSel_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TermSel_6, 0) = ((MR_Box) (ConsId_4));
            MR_hl_field(0, TermSel_6, 1) = ((MR_Box) (Index_5));
          }
          break;
      }
      break;
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (TermSel_6));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
transform_hlds__ctgc__selector__top_selector_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__selector____Unify____branch_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__selector____Compare____branch_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__selector____Unify____normalization_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__selector____Compare____normalization_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__selector__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.selector.
