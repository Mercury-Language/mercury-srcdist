/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 337 "ctgc.selector.m"
struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s {
#line 337 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1;
#line 337 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont;
#line 337 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr;
#line 337 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_HeadVar__3_11;
#line 337 "ctgc.selector.m"
};


#line 153 "transform_hlds.ctgc.selector.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 156 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 159 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 162 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 165 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0;

#line 168 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1];

#line 171 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1];

#line 174 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1];

#line 177 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0;

#line 180 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1;

#line 183 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2];

#line 186 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2];

#line 189 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2];

#line 192 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
#line 195 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 197 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 200 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
#line 203 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 205 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 207 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 210 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
#line 213 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 215 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 218 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
#line 221 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 223 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 225 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 228 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
#line 231 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 233 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 236 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
#line 239 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 241 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 243 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 330 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_arg_types_3_p_0[2];

#line 330 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_arg_types_3_p_0[2];

#line 330 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_arg_types_3_p_0[2];

#line 330 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_arg_types_3_p_0[2];

#line 330 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_arg_types_3_p_0[2];

#line 330 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0;

#line 288 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_contains_subtype_1_4_p_0[3];

#line 288 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 288 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 288 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 288 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 288 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0;

#line 66 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_normalize_selector_with_type_information_4_p_0[3];

#line 66 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 66 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 66 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 66 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 66 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0;

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__339__1_3_p_0(
#line 339 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 339 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 339 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__3_11,
#line 339 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr);

#line 135 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__135__1_1_f_0(
#line 135 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_6);

#line 333 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void);

#line 294 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void);

#line 496 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
#line 496 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3);

#line 496 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2);

#line 507 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
#line 507 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 507 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
#line 507 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8);

#line 409 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__VarType_8,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
#line 409 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);

#line 363 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_7,
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
#line 363 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Position_9);

#line 337 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
#line 337 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__env_ptr_arg);

#line 337 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
#line 337 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 337 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 337 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 337 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr);

#line 330 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
#line 330 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 330 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 330 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6);

#line 306 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_9,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_12);

#line 288 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__FromType_6,
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_7,
#line 288 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_8);

#line 181 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__A_7,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__B_8,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_9,
#line 181 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_10);

#line 163 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
#line 163 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1);

#line 135 "ctgc.selector.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
#line 135 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 135 "ctgc.selector.m"
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 566 "transform_hlds.ctgc.selector.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 574 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 582 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 591 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 599 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_branch_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "branch_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 620 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 = {
  (MR_String) "encounter_existential_subtype",
  (MR_Integer) 0
};

#line 626 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

#line 631 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

#line 636 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1] = {
  (MR_Integer) 0
};

#line 641 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "encounter_existential_subtype",
  {
    transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0
  },
  {
    transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0
};

#line 662 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0 = {
  (MR_String) "need_normalization",
  (MR_Integer) 0
};

#line 668 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1 = {
  (MR_String) "already_normalized",
  (MR_Integer) 1
};

#line 674 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1
};

#line 680 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0
};

#line 686 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 692 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_normalization_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____normalization_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____normalization_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "normalization",
  {
    transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0
  },
  {
    transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0
};

#line 713 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
#line 716 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 718 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 720 "transform_hlds.ctgc.selector.c"
{
#line 722 "transform_hlds.ctgc.selector.c"
  {
#line 724 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 727 "transform_hlds.ctgc.selector.c"
    {
#line 729 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____branch_map_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
#line 732 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 734 "transform_hlds.ctgc.selector.c"
  }
#line 736 "transform_hlds.ctgc.selector.c"
}

#line 739 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
#line 742 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 744 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 746 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 748 "transform_hlds.ctgc.selector.c"
{
#line 750 "transform_hlds.ctgc.selector.c"
  {
#line 752 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 755 "transform_hlds.ctgc.selector.c"
    {
#line 757 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____branch_map_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
#line 760 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 762 "transform_hlds.ctgc.selector.c"
  }
#line 764 "transform_hlds.ctgc.selector.c"
}

#line 767 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
#line 770 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 772 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 774 "transform_hlds.ctgc.selector.c"
{
#line 776 "transform_hlds.ctgc.selector.c"
  {
#line 778 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 781 "transform_hlds.ctgc.selector.c"
    {
#line 783 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0();
    }
#line 786 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 788 "transform_hlds.ctgc.selector.c"
  }
#line 790 "transform_hlds.ctgc.selector.c"
}

#line 793 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
#line 796 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 798 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 800 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 802 "transform_hlds.ctgc.selector.c"
{
#line 804 "transform_hlds.ctgc.selector.c"
  {
#line 806 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 809 "transform_hlds.ctgc.selector.c"
    {
#line 811 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1);
    }
#line 814 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 816 "transform_hlds.ctgc.selector.c"
  }
#line 818 "transform_hlds.ctgc.selector.c"
}

#line 821 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
#line 824 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 826 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 828 "transform_hlds.ctgc.selector.c"
{
#line 830 "transform_hlds.ctgc.selector.c"
  {
#line 832 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 835 "transform_hlds.ctgc.selector.c"
    {
#line 837 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____normalization_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
#line 840 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 842 "transform_hlds.ctgc.selector.c"
  }
#line 844 "transform_hlds.ctgc.selector.c"
}

#line 847 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
#line 850 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 852 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 854 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 856 "transform_hlds.ctgc.selector.c"
{
#line 858 "transform_hlds.ctgc.selector.c"
  {
#line 860 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 863 "transform_hlds.ctgc.selector.c"
    {
#line 865 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____normalization_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
#line 868 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 870 "transform_hlds.ctgc.selector.c"
  }
#line 872 "transform_hlds.ctgc.selector.c"
}

#line 330 "ctgc.selector.m"
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

#line 330 "ctgc.selector.m"
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

#line 330 "ctgc.selector.m"
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

#line 330 "ctgc.selector.m"
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

#line 330 "ctgc.selector.m"
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

#line 330 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {
    (MR_Integer) 0
  },
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

#line 288 "ctgc.selector.m"
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

#line 288 "ctgc.selector.m"
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

#line 288 "ctgc.selector.m"
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

#line 288 "ctgc.selector.m"
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

#line 288 "ctgc.selector.m"
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

#line 288 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {
    (MR_Integer) 0
  },
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

#line 66 "ctgc.selector.m"
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

#line 66 "ctgc.selector.m"
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

#line 66 "ctgc.selector.m"
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

#line 66 "ctgc.selector.m"
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

#line 66 "ctgc.selector.m"
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

#line 66 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {
    (MR_Integer) 0
  },
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

#line 30 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 30 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
#line 30 "ctgc.selector.m"
{
#line 30 "ctgc.selector.m"
  {
#line 30 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 30 "ctgc.selector.m"
    *transform_hlds__ctgc__selector__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "ctgc.selector.m"
  }
#line 30 "ctgc.selector.m"
}

#line 30 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 30 "ctgc.selector.m"
{
#line 30 "ctgc.selector.m"
  {
#line 30 "ctgc.selector.m"
    return MR_TRUE;
#line 30 "ctgc.selector.m"
  }
#line 30 "ctgc.selector.m"
}

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__339__1_3_p_0(
#line 339 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 339 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 339 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__3_11,
#line 339 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr)
#line 339 "ctgc.selector.m"
{
#line 339 "ctgc.selector.m"
  {
#line 339 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 339 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector___ConsId_8;

#line 339 "ctgc.selector.m"
    {
#line 339 "ctgc.selector.m"
      check_hlds__type_util__cons_id_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_4, transform_hlds__ctgc__selector__Type_5, &transform_hlds__ctgc__selector___ConsId_8, transform_hlds__ctgc__selector__HeadVar__3_11, transform_hlds__ctgc__selector__cont, transform_hlds__ctgc__selector__cont_env_ptr);
    }
#line 339 "ctgc.selector.m"
  }
#line 339 "ctgc.selector.m"
}

#line 135 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__135__1_1_f_0(
#line 135 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_6)
#line 135 "ctgc.selector.m"
{
#line 135 "ctgc.selector.m"
  {
#line 135 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 135 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__HeadVar__2_7;

#line 135 "ctgc.selector.m"
    {
#line 135 "ctgc.selector.m"
      transform_hlds__ctgc__selector__HeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 135 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__2_7, 0) = ((MR_Box) (transform_hlds__ctgc__selector__HeadVar__1_6));
#line 135 "ctgc.selector.m"
    }
#line 135 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__HeadVar__2_7;
#line 135 "ctgc.selector.m"
  }
#line 135 "ctgc.selector.m"
}

#line 333 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void)
#line 333 "ctgc.selector.m"
{
#line 333 "ctgc.selector.m"
  {
#line 333 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 333 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0


		{
#line 333 "ctgc.selector.m"
transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0.MR_pt_tablenode.MR_integer = 0;
#line 1932 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 333 "ctgc.selector.m"
}
#line 333 "ctgc.selector.m"
  }
#line 333 "ctgc.selector.m"
}

#line 294 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void)
#line 294 "ctgc.selector.m"
{
#line 294 "ctgc.selector.m"
  {
#line 294 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 294 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0


		{
#line 294 "ctgc.selector.m"
transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0.MR_pt_tablenode.MR_integer = 0;
#line 1961 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 294 "ctgc.selector.m"
}
#line 294 "ctgc.selector.m"
  }
#line 294 "ctgc.selector.m"
}

#line 33 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0(
#line 33 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 33 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 33 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
#line 33 "ctgc.selector.m"
{
#line 33 "ctgc.selector.m"
  {
#line 33 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 33 "ctgc.selector.m"
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__2_2;
#line 33 "ctgc.selector.m"
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__3_3;

#line 33 "ctgc.selector.m"
    {
#line 33 "ctgc.selector.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1, transform_hlds__ctgc__selector__Cast_HeadVar1_4, transform_hlds__ctgc__selector__Cast_HeadVar2_5);
#line 33 "ctgc.selector.m"
      return;
    }
#line 33 "ctgc.selector.m"
  }
#line 33 "ctgc.selector.m"
}

#line 33 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0(
#line 33 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_1,
#line 33 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
#line 33 "ctgc.selector.m"
{
#line 2013 "transform_hlds.ctgc.selector.c"
  {
#line 2015 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__HeadVar__2_1 == transform_hlds__ctgc__selector__HeadVar__2_2);

#line 2018 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 2020 "transform_hlds.ctgc.selector.c"
  }
#line 33 "ctgc.selector.m"
}

#line 30 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(
#line 30 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
#line 30 "ctgc.selector.m"
{
#line 30 "ctgc.selector.m"
  {
#line 30 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 30 "ctgc.selector.m"
    {
#line 30 "ctgc.selector.m"
      transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1);
#line 30 "ctgc.selector.m"
      return;
    }
#line 30 "ctgc.selector.m"
  }
#line 30 "ctgc.selector.m"
}

#line 30 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0(void)
#line 30 "ctgc.selector.m"
{
#line 30 "ctgc.selector.m"
  {
#line 30 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 30 "ctgc.selector.m"
    {
#line 30 "ctgc.selector.m"
      return transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 30 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 30 "ctgc.selector.m"
  }
#line 30 "ctgc.selector.m"
}

#line 496 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
#line 496 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
#line 496 "ctgc.selector.m"
{
#line 496 "ctgc.selector.m"
  {
#line 496 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 496 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_4 = transform_hlds__ctgc__selector__HeadVar__2_2;
#line 496 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_5 = transform_hlds__ctgc__selector__HeadVar__3_3;

#line 496 "ctgc.selector.m"
    {
#line 496 "ctgc.selector.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], transform_hlds__ctgc__selector__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_5)));
#line 496 "ctgc.selector.m"
      return;
    }
#line 496 "ctgc.selector.m"
  }
#line 496 "ctgc.selector.m"
}

#line 496 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 496 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
#line 496 "ctgc.selector.m"
{
#line 496 "ctgc.selector.m"
  {
#line 496 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 496 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_3 = transform_hlds__ctgc__selector__HeadVar__1_1;
#line 496 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_4 = transform_hlds__ctgc__selector__HeadVar__2_2;

#line 496 "ctgc.selector.m"
    {
#line 496 "ctgc.selector.m"
      return transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_4)));
    }
#line 496 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 496 "ctgc.selector.m"
  }
#line 496 "ctgc.selector.m"
}

#line 507 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
#line 507 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 507 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
#line 507 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8)
#line 507 "ctgc.selector.m"
{
#line 510 "ctgc.selector.m"
  while (MR_TRUE)
#line 510 "ctgc.selector.m"
    {
#line 510 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 510 "ctgc.selector.m"
      {
#line 510 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeInfo_13_13;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Type_4;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Sel_5;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeSels_6;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Empty_9;
#line 510 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__V_11_11;
#line 515 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Subst_10;
#line 515 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__V_12_12;

#line 510 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 510 "ctgc.selector.m"
          {
#line 510 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
#line 510 "ctgc.selector.m"
            transform_hlds__ctgc__selector__TypeSels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "ctgc.selector.m"
            transform_hlds__ctgc__selector__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 0)));
#line 510 "ctgc.selector.m"
            transform_hlds__ctgc__selector__Sel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 1)));
#line 2185 "transform_hlds.ctgc.selector.c"
            transform_hlds__ctgc__selector__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 2187 "transform_hlds.ctgc.selector.c"
            transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 511 "ctgc.selector.m"
            {
#line 511 "ctgc.selector.m"
              mercury__map__init_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, &transform_hlds__ctgc__selector__Empty_9);
            }
#line 515 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "ctgc.selector.m"
            {
#line 515 "ctgc.selector.m"
              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__type_unify_5_p_0(transform_hlds__ctgc__selector__Type_4, transform_hlds__ctgc__selector__KeyType_7, transform_hlds__ctgc__selector__V_12_12, transform_hlds__ctgc__selector__Empty_9, &transform_hlds__ctgc__selector__Subst_10);
            }
#line 515 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 516 "ctgc.selector.m"
              {
#line 516 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, transform_hlds__ctgc__selector__Subst_10);
              }
#line 519 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 518 "ctgc.selector.m"
              {
#line 518 "ctgc.selector.m"
                *transform_hlds__ctgc__selector__ValueSel_8 = transform_hlds__ctgc__selector__Sel_5;
#line 518 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 518 "ctgc.selector.m"
              }
#line 519 "ctgc.selector.m"
            else
#line 520 "ctgc.selector.m"
              {
#line 520 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 520 "ctgc.selector.m"
                {
#line 520 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__TypeSels_6;

#line 520 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
#line 520 "ctgc.selector.m"
                }
#line 520 "ctgc.selector.m"
                continue;
#line 520 "ctgc.selector.m"
              }
#line 510 "ctgc.selector.m"
          }
#line 510 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 510 "ctgc.selector.m"
      }
#line 510 "ctgc.selector.m"
      break;
#line 510 "ctgc.selector.m"
    }
#line 507 "ctgc.selector.m"
}

#line 409 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__VarType_8,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
#line 409 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
#line 409 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25)
#line 409 "ctgc.selector.m"
{
#line 415 "ctgc.selector.m"
  while (MR_TRUE)
#line 415 "ctgc.selector.m"
    {
#line 415 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 415 "ctgc.selector.m"
      {
#line 415 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 415 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25 = transform_hlds__ctgc__selector__SelectorAcc0_10;
#line 415 "ctgc.selector.m"
        else
#line 415 "ctgc.selector.m"
          {
#line 415 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__UnitSelector_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 0)));
#line 415 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__SelRest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 1)));
#line 415 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__CtorCat_14;
#line 465 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__CatUser_15;

#line 416 "ctgc.selector.m"
            {
#line 416 "ctgc.selector.m"
              transform_hlds__ctgc__selector__CtorCat_14 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8);
            }
#line 417 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__selector__CtorCat_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 417 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 417 "ctgc.selector.m"
              {
#line 417 "ctgc.selector.m"
                transform_hlds__ctgc__selector__CatUser_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 1)));
#line 426 "ctgc.selector.m"
                {
#line 459 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__CType_20;

#line 420 "ctgc.selector.m"
                  if ((transform_hlds__ctgc__selector__CatUser_15 == (MR_Integer) 0))
#line 423 "ctgc.selector.m"
                    {
#line 425 "ctgc.selector.m"
                      {
#line 425 "ctgc.selector.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "cat_user_direct_dummy");
#line 425 "ctgc.selector.m"
                        return;
                      }
#line 423 "ctgc.selector.m"
                    }
#line 420 "ctgc.selector.m"
                  else
#line 420 "ctgc.selector.m"
                    if ((transform_hlds__ctgc__selector__CatUser_15 == (MR_Integer) 2))
#line 419 "ctgc.selector.m"
                      {
#line 419 "ctgc.selector.m"
                      }
#line 420 "ctgc.selector.m"
                    else
#line 421 "ctgc.selector.m"
                      {
#line 421 "ctgc.selector.m"
                      }
#line 443 "ctgc.selector.m"
                  if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_12)) == (MR_mktag((MR_Integer) 0))))
#line 434 "ctgc.selector.m"
                    {
#line 434 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
#line 434 "ctgc.selector.m"
                      MR_Integer transform_hlds__ctgc__selector__Index_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 1)));
#line 434 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__ArgTypes_18;
#line 439 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__SubType_19;
#line 437 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_42_42;
#line 437 "ctgc.selector.m"
                      MR_Box transform_hlds__ctgc__selector__conv0_SubType_19;

#line 435 "ctgc.selector.m"
                      {
#line 435 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8, transform_hlds__ctgc__selector__ConsId_16, &transform_hlds__ctgc__selector__ArgTypes_18);
                      }
#line 434 "ctgc.selector.m"
                      if (transform_hlds__ctgc__selector__succeeded)
#line 434 "ctgc.selector.m"
                        {
#line 2366 "transform_hlds.ctgc.selector.c"
                          transform_hlds__ctgc__selector__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 437 "ctgc.selector.m"
                          {
#line 437 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = mercury__list__index1_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_42_42, transform_hlds__ctgc__selector__ArgTypes_18, transform_hlds__ctgc__selector__Index_17, &transform_hlds__ctgc__selector__conv0_SubType_19);
                          }
#line 437 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 437 "ctgc.selector.m"
                            {
#line 437 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__SubType_19 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType_19);
#line 437 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 437 "ctgc.selector.m"
                            }
#line 439 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 438 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__CType_20 = transform_hlds__ctgc__selector__SubType_19;
#line 439 "ctgc.selector.m"
                          else
#line 440 "ctgc.selector.m"
                            {
#line 440 "ctgc.selector.m"
                              {
#line 440 "ctgc.selector.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "accessing nonexistent index");
#line 440 "ctgc.selector.m"
                                return;
                              }
#line 440 "ctgc.selector.m"
                            }
#line 439 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 434 "ctgc.selector.m"
                        }
#line 434 "ctgc.selector.m"
                    }
#line 443 "ctgc.selector.m"
                  else
#line 444 "ctgc.selector.m"
                    {
#line 444 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__CType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
#line 444 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 444 "ctgc.selector.m"
                    }
#line 459 "ctgc.selector.m"
                  if (transform_hlds__ctgc__selector__succeeded)
#line 451 "ctgc.selector.m"
                    {
#line 451 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__BranchSelector_21;

#line 448 "ctgc.selector.m"
                      {
#line 448 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__branch_map_search_3_p_0(transform_hlds__ctgc__selector__BranchMap0_9, transform_hlds__ctgc__selector__CType_20, &transform_hlds__ctgc__selector__BranchSelector_21);
                      }
#line 451 "ctgc.selector.m"
                      if (transform_hlds__ctgc__selector__succeeded)
#line 449 "ctgc.selector.m"
                        {
#line 449 "ctgc.selector.m"
                          /* direct tailcall eliminated */
#line 449 "ctgc.selector.m"
                          {
#line 449 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
#line 449 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__BranchSelector_21;
#line 449 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

#line 449 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
#line 449 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
#line 449 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
#line 449 "ctgc.selector.m"
                          }
#line 449 "ctgc.selector.m"
                          continue;
#line 449 "ctgc.selector.m"
                        }
#line 451 "ctgc.selector.m"
                      else
#line 453 "ctgc.selector.m"
                        {
#line 453 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__SelectorAcc1_22;
#line 453 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__BranchMap1_23;
#line 453 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__V_35_35;
#line 453 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__V_52_52;

#line 452 "ctgc.selector.m"
                          {
#line 452 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
#line 452 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "ctgc.selector.m"
                          }
#line 138 "ctgc.selector.m"
                          {
#line 138 "ctgc.selector.m"
                            mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_35_35, &transform_hlds__ctgc__selector__SelectorAcc1_22);
                          }
#line 505 "ctgc.selector.m"
                          {
#line 505 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 0) = ((MR_Box) (transform_hlds__ctgc__selector__CType_20));
#line 505 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 1) = ((MR_Box) (transform_hlds__ctgc__selector__SelectorAcc1_22));
#line 505 "ctgc.selector.m"
                          }
#line 505 "ctgc.selector.m"
                          {
#line 505 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__BranchMap1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_52_52));
#line 505 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 1) = ((MR_Box) (transform_hlds__ctgc__selector__BranchMap0_9));
#line 505 "ctgc.selector.m"
                          }
#line 456 "ctgc.selector.m"
                          /* direct tailcall eliminated */
#line 456 "ctgc.selector.m"
                          {
#line 456 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
#line 456 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9 = transform_hlds__ctgc__selector__BranchMap1_23;
#line 456 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__SelectorAcc1_22;
#line 456 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

#line 456 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
#line 456 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
#line 456 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__BranchMap0_9 = transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9;
#line 456 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
#line 456 "ctgc.selector.m"
                          }
#line 456 "ctgc.selector.m"
                          continue;
#line 453 "ctgc.selector.m"
                        }
#line 451 "ctgc.selector.m"
                    }
#line 459 "ctgc.selector.m"
                  else
#line 463 "ctgc.selector.m"
                    {
#line 463 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__V_38_38;

#line 463 "ctgc.selector.m"
                      {
#line 463 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "ctgc.selector.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
#line 463 "ctgc.selector.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "ctgc.selector.m"
                      }
#line 463 "ctgc.selector.m"
                      {
#line 463 "ctgc.selector.m"
                        mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_38_38, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
#line 463 "ctgc.selector.m"
                        return;
                      }
#line 463 "ctgc.selector.m"
                    }
#line 426 "ctgc.selector.m"
                }
#line 417 "ctgc.selector.m"
              }
#line 417 "ctgc.selector.m"
            else
#line 469 "ctgc.selector.m"
              {
#line 469 "ctgc.selector.m"
                {
#line 469 "ctgc.selector.m"
                  mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
#line 469 "ctgc.selector.m"
                  return;
                }
#line 469 "ctgc.selector.m"
              }
#line 415 "ctgc.selector.m"
          }
#line 415 "ctgc.selector.m"
      }
#line 415 "ctgc.selector.m"
      break;
#line 415 "ctgc.selector.m"
    }
#line 409 "ctgc.selector.m"
}

#line 363 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_7,
#line 363 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
#line 363 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Position_9)
#line 363 "ctgc.selector.m"
{
#line 368 "ctgc.selector.m"
  {
#line 368 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 368 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__SubType_10;
#line 368 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__SubType0_11;
#line 381 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

#line 377 "ctgc.selector.m"
    {
#line 377 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__ArgTypes_19);
    }
#line 381 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 380 "ctgc.selector.m"
      {
#line 380 "ctgc.selector.m"
        MR_Box transform_hlds__ctgc__selector__conv0_SubType0_11;

#line 380 "ctgc.selector.m"
        {
#line 380 "ctgc.selector.m"
          transform_hlds__ctgc__selector__conv0_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Position_9);
        }
#line 380 "ctgc.selector.m"
        transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_11);
#line 380 "ctgc.selector.m"
        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 380 "ctgc.selector.m"
      }
#line 381 "ctgc.selector.m"
    else
#line 391 "ctgc.selector.m"
      {
#line 391 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

#line 382 "ctgc.selector.m"
        {
#line 382 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__CtorDefn_20);
        }
#line 391 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 385 "ctgc.selector.m"
          {
#line 385 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
#line 385 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
#line 384 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
#line 384 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
#line 384 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
#line 384 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
#line 386 "ctgc.selector.m"
            MR_Box transform_hlds__ctgc__selector__conv1_SubType0_11;
#line 388 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
#line 388 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__TVar_26;
#line 388 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_27_27;

#line 386 "ctgc.selector.m"
            {
#line 386 "ctgc.selector.m"
              transform_hlds__ctgc__selector__conv1_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Position_9);
            }
#line 386 "ctgc.selector.m"
            transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_11);
#line 388 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_11)) == (MR_mktag((MR_Integer) 0)));
#line 388 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 388 "ctgc.selector.m"
              {
#line 388 "ctgc.selector.m"
                transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 0)));
#line 388 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 1)));
#line 2687 "transform_hlds.ctgc.selector.c"
                transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 389 "ctgc.selector.m"
                {
#line 389 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                }
#line 388 "ctgc.selector.m"
              }
#line 387 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 385 "ctgc.selector.m"
          }
#line 391 "ctgc.selector.m"
        else
#line 392 "ctgc.selector.m"
          {
#line 392 "ctgc.selector.m"
            {
#line 392 "ctgc.selector.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
            }
#line 392 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 392 "ctgc.selector.m"
          }
#line 391 "ctgc.selector.m"
      }
#line 368 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 367 "ctgc.selector.m"
      transform_hlds__ctgc__selector__SubType_10 = transform_hlds__ctgc__selector__SubType0_11;
#line 368 "ctgc.selector.m"
    else
#line 369 "ctgc.selector.m"
      {
#line 369 "ctgc.selector.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 369 "ctgc.selector.m"
        {
#line 369 "ctgc.selector.m"
          mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 369 "ctgc.selector.m"
      }
#line 368 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__SubType_10;
#line 368 "ctgc.selector.m"
  }
#line 363 "ctgc.selector.m"
}

#line 337 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
#line 337 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__env_ptr_arg)
#line 337 "ctgc.selector.m"
{
#line 337 "ctgc.selector.m"
  {
#line 337 "ctgc.selector.m"
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s * transform_hlds__ctgc__selector__env_ptr = (struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s *) transform_hlds__ctgc__selector__env_ptr_arg;

#line 337 "ctgc.selector.m"
    *((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_HeadVar__3_11));
#line 337 "ctgc.selector.m"
    {
#line 337 "ctgc.selector.m"
      ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont)((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr);
#line 337 "ctgc.selector.m"
      return;
    }
#line 337 "ctgc.selector.m"
  }
#line 337 "ctgc.selector.m"
}

#line 337 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
#line 337 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 337 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 337 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 337 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr)
#line 337 "ctgc.selector.m"
{
#line 337 "ctgc.selector.m"
  {
#line 337 "ctgc.selector.m"
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s transform_hlds__ctgc__selector__env;

#line 337 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1 = transform_hlds__ctgc__selector__wrapper_arg_1;
#line 337 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont = transform_hlds__ctgc__selector__cont;
#line 337 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr = transform_hlds__ctgc__selector__cont_env_ptr;
#line 337 "ctgc.selector.m"
    {
#line 337 "ctgc.selector.m"
      MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;

#line 337 "ctgc.selector.m"
      {
#line 337 "ctgc.selector.m"
        transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__339__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 4))), &(transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_HeadVar__3_11, transform_hlds__ctgc__selector__type_arg_types_3_p_0_1, &transform_hlds__ctgc__selector__env);
      }
#line 337 "ctgc.selector.m"
    }
#line 337 "ctgc.selector.m"
  }
#line 337 "ctgc.selector.m"
}

#line 330 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
#line 330 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 330 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 330 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6)
#line 330 "ctgc.selector.m"
{
#line 336 "ctgc.selector.m"
  {
#line 336 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 336 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_17;
#line 336 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_18;

#line 336 "ctgc.selector.m"
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
#line 336 "ctgc.selector.m"
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);

#line 2851 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_17  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_18  = status;
#line 336 "ctgc.selector.m"
}
#line 336 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Status_18 == (MR_Integer) 1))
#line 336 "ctgc.selector.m"
      {
#line 336 "ctgc.selector.m"
        {
#line 336 "ctgc.selector.m"
          mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_arg_types/3");
#line 336 "ctgc.selector.m"
          return;
        }
#line 336 "ctgc.selector.m"
      }
#line 336 "ctgc.selector.m"
    else
#line 336 "ctgc.selector.m"
      if ((transform_hlds__ctgc__selector__Status_18 == (MR_Integer) 0))
#line 336 "ctgc.selector.m"
        {
#line 336 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__ArgTypesLists_9;
#line 336 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_10_10;

#line 337 "ctgc.selector.m"
          {
#line 337 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 0) = ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_4[0]));
#line 337 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 1) = ((MR_Box) (transform_hlds__ctgc__selector__type_arg_types_3_p_0_2));
#line 337 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 3) = ((MR_Box) (transform_hlds__ctgc__selector__ModuleInfo_4));
#line 337 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 4) = ((MR_Box) (transform_hlds__ctgc__selector__Type_5));
#line 337 "ctgc.selector.m"
          }
#line 337 "ctgc.selector.m"
          {
#line 337 "ctgc.selector.m"
            mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0], transform_hlds__ctgc__selector__V_10_10, &transform_hlds__ctgc__selector__ArgTypesLists_9);
          }
#line 341 "ctgc.selector.m"
          {
#line 341 "ctgc.selector.m"
            mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypesLists_9, transform_hlds__ctgc__selector__ArgTypes_6);
          }
#line 336 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__ArgTypes_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0] ;
		{
#line 336 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 2926 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 336 "ctgc.selector.m"
}
#line 336 "ctgc.selector.m"
        }
#line 336 "ctgc.selector.m"
      else
#line 336 "ctgc.selector.m"
        {
#line 336 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv1_restore_arg0;

#line 336 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
		{
#line 336 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 2955 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv1_restore_arg0  = (MR_Box) restore_arg0;
#line 336 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__ArgTypes_6 = ((MR_Word) transform_hlds__ctgc__selector__conv1_restore_arg0);
#line 336 "ctgc.selector.m"
}
#line 336 "ctgc.selector.m"
        }
#line 336 "ctgc.selector.m"
  }
#line 330 "ctgc.selector.m"
}

#line 306 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_9,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
#line 306 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
#line 306 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_12)
#line 306 "ctgc.selector.m"
{
#line 326 "ctgc.selector.m"
  while (MR_TRUE)
#line 326 "ctgc.selector.m"
    {
#line 326 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 326 "ctgc.selector.m"
      {
#line 326 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;
#line 326 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__FromType_13;
#line 326 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
#line 311 "ctgc.selector.m"
        MR_Box transform_hlds__ctgc__selector__conv0_FromType_13;

#line 311 "ctgc.selector.m"
        {
#line 311 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = mercury__queue__get_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__ctgc__selector__conv0_FromType_13, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19);
        }
#line 311 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 311 "ctgc.selector.m"
          {
#line 311 "ctgc.selector.m"
            transform_hlds__ctgc__selector__FromType_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_FromType_13);
#line 311 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 311 "ctgc.selector.m"
          }
#line 326 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 315 "ctgc.selector.m"
          {
#line 312 "ctgc.selector.m"
            {
#line 312 "ctgc.selector.m"
              transform_hlds__ctgc__selector__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)));
            }
#line 315 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 313 "ctgc.selector.m"
              {
#line 313 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 313 "ctgc.selector.m"
                {
#line 313 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;

#line 313 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
#line 313 "ctgc.selector.m"
                }
#line 313 "ctgc.selector.m"
                continue;
#line 313 "ctgc.selector.m"
              }
#line 315 "ctgc.selector.m"
            else
#line 316 "ctgc.selector.m"
              {
#line 316 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 316 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ArgTypes_14;
#line 316 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

#line 316 "ctgc.selector.m"
                {
#line 316 "ctgc.selector.m"
                  mercury__set__insert_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)), transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, &transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22);
                }
#line 317 "ctgc.selector.m"
                {
#line 317 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__type_arg_types_3_p_0(transform_hlds__ctgc__selector__ModuleInfo_8, transform_hlds__ctgc__selector__FromType_13, &transform_hlds__ctgc__selector__ArgTypes_14);
                }
#line 318 "ctgc.selector.m"
                {
#line 318 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__ToType_9)), transform_hlds__ctgc__selector__ArgTypes_14);
                }
#line 320 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 319 "ctgc.selector.m"
                  {
#line 319 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 1;
#line 319 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;
#line 319 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
#line 319 "ctgc.selector.m"
                  }
#line 320 "ctgc.selector.m"
                else
#line 321 "ctgc.selector.m"
                  {
#line 321 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;

#line 321 "ctgc.selector.m"
                    {
#line 321 "ctgc.selector.m"
                      mercury__queue__put_list_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, transform_hlds__ctgc__selector__ArgTypes_14, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23);
                    }
#line 322 "ctgc.selector.m"
                    /* direct tailcall eliminated */
#line 322 "ctgc.selector.m"
                    {
#line 322 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;
#line 322 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

#line 322 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17;
#line 322 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
#line 322 "ctgc.selector.m"
                    }
#line 322 "ctgc.selector.m"
                    continue;
#line 321 "ctgc.selector.m"
                  }
#line 316 "ctgc.selector.m"
              }
#line 315 "ctgc.selector.m"
          }
#line 326 "ctgc.selector.m"
        else
#line 327 "ctgc.selector.m"
          {
#line 327 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 0;
#line 327 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17;
#line 327 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15;
#line 327 "ctgc.selector.m"
          }
#line 326 "ctgc.selector.m"
      }
#line 326 "ctgc.selector.m"
      break;
#line 326 "ctgc.selector.m"
    }
#line 306 "ctgc.selector.m"
}

#line 288 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__FromType_6,
#line 288 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_7,
#line 288 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_8)
#line 288 "ctgc.selector.m"
{
#line 297 "ctgc.selector.m"
  {
#line 297 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 297 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
#line 297 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_19;

#line 297 "ctgc.selector.m"
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
#line 297 "ctgc.selector.m"
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

#line 3197 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
#line 297 "ctgc.selector.m"
}
#line 297 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Status_19 == (MR_Integer) 1))
#line 297 "ctgc.selector.m"
      {
#line 297 "ctgc.selector.m"
        {
#line 297 "ctgc.selector.m"
          mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_contains_subtype_1/4");
#line 297 "ctgc.selector.m"
          return;
        }
#line 297 "ctgc.selector.m"
      }
#line 297 "ctgc.selector.m"
    else
#line 297 "ctgc.selector.m"
      if ((transform_hlds__ctgc__selector__Status_19 == (MR_Integer) 0))
#line 297 "ctgc.selector.m"
        {
#line 297 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 297 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__Queue0_9;
#line 297 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_12_12;
#line 297 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_13_13;
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector___Queue_10;
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector___SeenTypes_11;

#line 298 "ctgc.selector.m"
          {
#line 298 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_12_12 = mercury__queue__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
#line 298 "ctgc.selector.m"
          {
#line 298 "ctgc.selector.m"
            mercury__queue__put_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14, ((MR_Box) (transform_hlds__ctgc__selector__FromType_6)), transform_hlds__ctgc__selector__V_12_12, &transform_hlds__ctgc__selector__Queue0_9);
          }
#line 300 "ctgc.selector.m"
          {
#line 300 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_13_13 = mercury__set__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
#line 299 "ctgc.selector.m"
          {
#line 299 "ctgc.selector.m"
            transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__ToType_7, transform_hlds__ctgc__selector__Queue0_9, &transform_hlds__ctgc__selector___Queue_10, transform_hlds__ctgc__selector__V_13_13, &transform_hlds__ctgc__selector___SeenTypes_11, transform_hlds__ctgc__selector__Contains_8);
          }
#line 297 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__Contains_8)) ;
	save_arg_typeinfo0 =  (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0 ;
		{
#line 297 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 3274 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 297 "ctgc.selector.m"
}
#line 297 "ctgc.selector.m"
        }
#line 297 "ctgc.selector.m"
      else
#line 297 "ctgc.selector.m"
        {
#line 297 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

#line 297 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
#line 297 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 3303 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 297 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__Contains_8 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
#line 297 "ctgc.selector.m"
}
#line 297 "ctgc.selector.m"
        }
#line 297 "ctgc.selector.m"
  }
#line 288 "ctgc.selector.m"
}

#line 181 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__A_7,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__B_8,
#line 181 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_9,
#line 181 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_10)
#line 181 "ctgc.selector.m"
{
#line 186 "ctgc.selector.m"
  while (MR_TRUE)
#line 186 "ctgc.selector.m"
    {
#line 186 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 186 "ctgc.selector.m"
      {
#line 186 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 186 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__B_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "ctgc.selector.m"
          {
#line 186 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__A_7;
#line 186 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 186 "ctgc.selector.m"
          }
#line 186 "ctgc.selector.m"
        else
#line 189 "ctgc.selector.m"
          {
#line 189 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__AH_11;
#line 189 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__AT_12;
#line 189 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__BH_13;
#line 189 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__BT_14;
#line 212 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ConsIdA_15;
#line 212 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__IndexA_16;
#line 212 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ConsIdB_17;
#line 212 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__IndexB_18;

#line 189 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__A_7)) == (MR_mktag((MR_Integer) 1)));
#line 189 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 189 "ctgc.selector.m"
              {
#line 189 "ctgc.selector.m"
                transform_hlds__ctgc__selector__AH_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 0)));
#line 189 "ctgc.selector.m"
                transform_hlds__ctgc__selector__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 1)));
#line 190 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BH_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 0)));
#line 190 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BT_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 1)));
#line 192 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0)));
#line 192 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 192 "ctgc.selector.m"
                  {
#line 192 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__ConsIdA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
#line 192 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__IndexA_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));
#line 193 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0)));
#line 193 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 193 "ctgc.selector.m"
                      {
#line 193 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__ConsIdB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 193 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__IndexB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
#line 193 "ctgc.selector.m"
                      }
#line 192 "ctgc.selector.m"
                  }
#line 212 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 195 "ctgc.selector.m"
                  {
#line 198 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__TypeInfo_39_39;
#line 198 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__V_19_19;
#line 198 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__V_20_20;

#line 195 "ctgc.selector.m"
                    {
#line 195 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__selector__ConsIdA_15, transform_hlds__ctgc__selector__ConsIdB_17);
                    }
#line 195 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 195 "ctgc.selector.m"
                      {
#line 196 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__IndexA_16 == transform_hlds__ctgc__selector__IndexB_18);
#line 195 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 195 "ctgc.selector.m"
                          {
#line 198 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__Type_9)) == (MR_mktag((MR_Integer) 0)));
#line 198 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 198 "ctgc.selector.m"
                              {
#line 198 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 0)));
#line 198 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 1)));
#line 3450 "transform_hlds.ctgc.selector.c"
                                transform_hlds__ctgc__selector__TypeInfo_39_39 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2];
#line 199 "ctgc.selector.m"
                                {
#line 199 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__selector__TypeInfo_39_39, ((MR_Box) (transform_hlds__ctgc__selector__AT_12)), ((MR_Box) (transform_hlds__ctgc__selector__BT_14)));
                                }
#line 198 "ctgc.selector.m"
                              }
#line 204 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 203 "ctgc.selector.m"
                              {
#line 203 "ctgc.selector.m"
                                *transform_hlds__ctgc__selector__Extension_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 203 "ctgc.selector.m"
                              }
#line 204 "ctgc.selector.m"
                            else
#line 209 "ctgc.selector.m"
                              {
#line 209 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__SubType_21;
#line 368 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__SubType0_49;
#line 381 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__ArgTypes_57;

#line 377 "ctgc.selector.m"
                                {
#line 377 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__ArgTypes_57);
                                }
#line 381 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 380 "ctgc.selector.m"
                                  {
#line 380 "ctgc.selector.m"
                                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_49;

#line 380 "ctgc.selector.m"
                                    {
#line 380 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__conv0_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_57, transform_hlds__ctgc__selector__IndexA_16);
                                    }
#line 380 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_49);
#line 380 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 380 "ctgc.selector.m"
                                  }
#line 381 "ctgc.selector.m"
                                else
#line 391 "ctgc.selector.m"
                                  {
#line 391 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__CtorDefn_58;

#line 382 "ctgc.selector.m"
                                    {
#line 382 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__CtorDefn_58);
                                    }
#line 391 "ctgc.selector.m"
                                    if (transform_hlds__ctgc__selector__succeeded)
#line 385 "ctgc.selector.m"
                                      {
#line 385 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__ExistQVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 1)));
#line 385 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__ArgTypes_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 4)));
#line 384 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___TVarSet_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 0)));
#line 384 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___KindMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 2)));
#line 384 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___Constraints_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 3)));
#line 384 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___RetType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 5)));
#line 386 "ctgc.selector.m"
                                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_49;
#line 388 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_73;
#line 388 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__TVar_64;
#line 388 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__V_65_65;

#line 386 "ctgc.selector.m"
                                        {
#line 386 "ctgc.selector.m"
                                          transform_hlds__ctgc__selector__conv1_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_69, transform_hlds__ctgc__selector__IndexA_16);
                                        }
#line 386 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_49);
#line 388 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_49)) == (MR_mktag((MR_Integer) 0)));
#line 388 "ctgc.selector.m"
                                        if (transform_hlds__ctgc__selector__succeeded)
#line 388 "ctgc.selector.m"
                                          {
#line 388 "ctgc.selector.m"
                                            transform_hlds__ctgc__selector__TVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 0)));
#line 388 "ctgc.selector.m"
                                            transform_hlds__ctgc__selector__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 1)));
#line 3557 "transform_hlds.ctgc.selector.c"
                                            transform_hlds__ctgc__selector__TypeInfo_27_73 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 389 "ctgc.selector.m"
                                            {
#line 389 "ctgc.selector.m"
                                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_73, ((MR_Box) (transform_hlds__ctgc__selector__TVar_64)), transform_hlds__ctgc__selector__ExistQVars_60);
                                            }
#line 388 "ctgc.selector.m"
                                          }
#line 387 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 385 "ctgc.selector.m"
                                      }
#line 391 "ctgc.selector.m"
                                    else
#line 392 "ctgc.selector.m"
                                      {
#line 392 "ctgc.selector.m"
                                        {
#line 392 "ctgc.selector.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                                        }
#line 392 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 392 "ctgc.selector.m"
                                      }
#line 391 "ctgc.selector.m"
                                  }
#line 368 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 367 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__SubType_21 = transform_hlds__ctgc__selector__SubType0_49;
#line 368 "ctgc.selector.m"
                                else
#line 369 "ctgc.selector.m"
                                  {
#line 369 "ctgc.selector.m"
                                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 369 "ctgc.selector.m"
                                    {
#line 369 "ctgc.selector.m"
                                      mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
                                    }
#line 369 "ctgc.selector.m"
                                  }
#line 210 "ctgc.selector.m"
                                /* direct tailcall eliminated */
#line 210 "ctgc.selector.m"
                                {
#line 210 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 210 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 210 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubType_21;

#line 210 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 210 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 210 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 210 "ctgc.selector.m"
                                }
#line 210 "ctgc.selector.m"
                                continue;
#line 209 "ctgc.selector.m"
                              }
#line 195 "ctgc.selector.m"
                          }
#line 195 "ctgc.selector.m"
                      }
#line 195 "ctgc.selector.m"
                  }
#line 212 "ctgc.selector.m"
                else
#line 227 "ctgc.selector.m"
                  if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0))))
#line 217 "ctgc.selector.m"
                    {
#line 217 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__SubTypeB_22;
#line 217 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__SubTypeA_23;
#line 217 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__ConsIdA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
#line 217 "ctgc.selector.m"
                      MR_Integer transform_hlds__ctgc__selector__IndexA_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));

#line 218 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 1)));
#line 218 "ctgc.selector.m"
                      if (transform_hlds__ctgc__selector__succeeded)
#line 218 "ctgc.selector.m"
                        {
#line 218 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__SubTypeB_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 219 "ctgc.selector.m"
                          {
#line 219 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SubTypeA_23 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_25, transform_hlds__ctgc__selector__IndexA_26);
                          }
#line 220 "ctgc.selector.m"
                          {
#line 220 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                          }
#line 223 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 222 "ctgc.selector.m"
                            {
#line 222 "ctgc.selector.m"
                              /* direct tailcall eliminated */
#line 222 "ctgc.selector.m"
                              {
#line 222 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 222 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 222 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

#line 222 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 222 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 222 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 222 "ctgc.selector.m"
                              }
#line 222 "ctgc.selector.m"
                              continue;
#line 222 "ctgc.selector.m"
                            }
#line 223 "ctgc.selector.m"
                          else
#line 224 "ctgc.selector.m"
                            {
#line 281 "ctgc.selector.m"
                              {
#line 281 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                              }
#line 283 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 282 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 283 "ctgc.selector.m"
                              else
#line 284 "ctgc.selector.m"
                                {
#line 284 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Contains_77;

#line 284 "ctgc.selector.m"
                                  {
#line 284 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22, &transform_hlds__ctgc__selector__Contains_77);
                                  }
#line 285 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_77 == (MR_Integer) 1);
#line 284 "ctgc.selector.m"
                                }
#line 224 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 225 "ctgc.selector.m"
                                {
#line 225 "ctgc.selector.m"
                                  /* direct tailcall eliminated */
#line 225 "ctgc.selector.m"
                                  {
#line 225 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 225 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

#line 225 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 225 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 225 "ctgc.selector.m"
                                  }
#line 225 "ctgc.selector.m"
                                  continue;
#line 225 "ctgc.selector.m"
                                }
#line 224 "ctgc.selector.m"
                            }
#line 218 "ctgc.selector.m"
                        }
#line 217 "ctgc.selector.m"
                    }
#line 227 "ctgc.selector.m"
                  else
#line 227 "ctgc.selector.m"
                    {
#line 227 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));

#line 227 "ctgc.selector.m"
                      if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0))))
#line 229 "ctgc.selector.m"
                        {
#line 229 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__ConsIdB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 229 "ctgc.selector.m"
                          MR_Integer transform_hlds__ctgc__selector__IndexB_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
#line 229 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__SubTypeB_29;

#line 231 "ctgc.selector.m"
                          {
#line 231 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SubTypeB_29 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdB_27, transform_hlds__ctgc__selector__IndexB_28);
                          }
#line 232 "ctgc.selector.m"
                          {
#line 232 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_29);
                          }
#line 235 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 234 "ctgc.selector.m"
                            {
#line 234 "ctgc.selector.m"
                              /* direct tailcall eliminated */
#line 234 "ctgc.selector.m"
                              {
#line 234 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 234 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 234 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

#line 234 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 234 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 234 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 234 "ctgc.selector.m"
                              }
#line 234 "ctgc.selector.m"
                              continue;
#line 234 "ctgc.selector.m"
                            }
#line 235 "ctgc.selector.m"
                          else
#line 236 "ctgc.selector.m"
                            {
#line 281 "ctgc.selector.m"
                              {
#line 281 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37);
                              }
#line 283 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 282 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 283 "ctgc.selector.m"
                              else
#line 284 "ctgc.selector.m"
                                {
#line 284 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Contains_82;

#line 284 "ctgc.selector.m"
                                  {
#line 284 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_82);
                                  }
#line 285 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_82 == (MR_Integer) 1);
#line 284 "ctgc.selector.m"
                                }
#line 236 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 237 "ctgc.selector.m"
                                {
#line 237 "ctgc.selector.m"
                                  /* direct tailcall eliminated */
#line 237 "ctgc.selector.m"
                                  {
#line 237 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 237 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

#line 237 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 237 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 237 "ctgc.selector.m"
                                  }
#line 237 "ctgc.selector.m"
                                  continue;
#line 237 "ctgc.selector.m"
                                }
#line 236 "ctgc.selector.m"
                            }
#line 229 "ctgc.selector.m"
                        }
#line 227 "ctgc.selector.m"
                      else
#line 240 "ctgc.selector.m"
                        {
#line 240 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__SubTypeB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));

#line 243 "ctgc.selector.m"
                          {
#line 243 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                          }
#line 248 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 247 "ctgc.selector.m"
                            {
#line 247 "ctgc.selector.m"
                              /* direct tailcall eliminated */
#line 247 "ctgc.selector.m"
                              {
#line 247 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 247 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 247 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_31;

#line 247 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 247 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 247 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 247 "ctgc.selector.m"
                              }
#line 247 "ctgc.selector.m"
                              continue;
#line 247 "ctgc.selector.m"
                            }
#line 248 "ctgc.selector.m"
                          else
#line 262 "ctgc.selector.m"
                            {
#line 262 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__Extension0_24;

#line 281 "ctgc.selector.m"
                              {
#line 281 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37);
                              }
#line 283 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 282 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 283 "ctgc.selector.m"
                              else
#line 284 "ctgc.selector.m"
                                {
#line 284 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Contains_87;

#line 284 "ctgc.selector.m"
                                  {
#line 284 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_87);
                                  }
#line 285 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_87 == (MR_Integer) 1);
#line 284 "ctgc.selector.m"
                                }
#line 251 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 252 "ctgc.selector.m"
                                {
#line 252 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__A_7, transform_hlds__ctgc__selector__BT_14, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Extension0_24);
                                }
#line 262 "ctgc.selector.m"
                              if (transform_hlds__ctgc__selector__succeeded)
#line 260 "ctgc.selector.m"
                                {
#line 260 "ctgc.selector.m"
                                  {
#line 260 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2], ((MR_Box) (transform_hlds__ctgc__selector__Extension0_24)), ((MR_Box) (transform_hlds__ctgc__selector__A_7)));
                                  }
#line 260 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 260 "ctgc.selector.m"
                                  if (transform_hlds__ctgc__selector__succeeded)
#line 260 "ctgc.selector.m"
                                    {
#line 261 "ctgc.selector.m"
                                      *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__Extension0_24;
#line 261 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 260 "ctgc.selector.m"
                                    }
#line 260 "ctgc.selector.m"
                                }
#line 262 "ctgc.selector.m"
                              else
#line 265 "ctgc.selector.m"
                                {
#line 281 "ctgc.selector.m"
                                  {
#line 281 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                                  }
#line 283 "ctgc.selector.m"
                                  if (transform_hlds__ctgc__selector__succeeded)
#line 282 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 283 "ctgc.selector.m"
                                  else
#line 284 "ctgc.selector.m"
                                    {
#line 284 "ctgc.selector.m"
                                      MR_Word transform_hlds__ctgc__selector__Contains_92;

#line 284 "ctgc.selector.m"
                                      {
#line 284 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Contains_92);
                                      }
#line 285 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_92 == (MR_Integer) 1);
#line 284 "ctgc.selector.m"
                                    }
#line 265 "ctgc.selector.m"
                                  if (transform_hlds__ctgc__selector__succeeded)
#line 266 "ctgc.selector.m"
                                    {
#line 266 "ctgc.selector.m"
                                      /* direct tailcall eliminated */
#line 266 "ctgc.selector.m"
                                      {
#line 266 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 266 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__V_37_37;

#line 266 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 266 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 266 "ctgc.selector.m"
                                      }
#line 266 "ctgc.selector.m"
                                      continue;
#line 266 "ctgc.selector.m"
                                    }
#line 265 "ctgc.selector.m"
                                }
#line 262 "ctgc.selector.m"
                            }
#line 240 "ctgc.selector.m"
                        }
#line 227 "ctgc.selector.m"
                    }
#line 189 "ctgc.selector.m"
              }
#line 189 "ctgc.selector.m"
          }
#line 186 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 186 "ctgc.selector.m"
      }
#line 186 "ctgc.selector.m"
      break;
#line 186 "ctgc.selector.m"
    }
#line 181 "ctgc.selector.m"
}

#line 163 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
#line 163 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1)
#line 163 "ctgc.selector.m"
{
#line 165 "ctgc.selector.m"
  while (MR_TRUE)
#line 165 "ctgc.selector.m"
    {
#line 165 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 165 "ctgc.selector.m"
      {
#line 165 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 165 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 165 "ctgc.selector.m"
        else
#line 166 "ctgc.selector.m"
          {
#line 166 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__H_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_4_4;
#line 167 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__V_5_5;

#line 167 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__H_2)) == (MR_mktag((MR_Integer) 0)));
#line 167 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 167 "ctgc.selector.m"
              {
#line 167 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 0)));
#line 167 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 1)));
#line 168 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 168 "ctgc.selector.m"
                {
#line 168 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__T_3;

#line 168 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
#line 168 "ctgc.selector.m"
                }
#line 168 "ctgc.selector.m"
                continue;
#line 167 "ctgc.selector.m"
              }
#line 166 "ctgc.selector.m"
          }
#line 165 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 165 "ctgc.selector.m"
      }
#line 165 "ctgc.selector.m"
      break;
#line 165 "ctgc.selector.m"
    }
#line 163 "ctgc.selector.m"
}

#line 82 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__reset_tables_2_p_0(void)
#line 82 "ctgc.selector.m"
{
#line 525 "ctgc.selector.m"
  {
#line 525 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 526 "ctgc.selector.m"
    {
#line 526 "ctgc.selector.m"
      transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0();
    }
#line 527 "ctgc.selector.m"
    {
#line 527 "ctgc.selector.m"
      transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0();
#line 527 "ctgc.selector.m"
      return;
    }
#line 525 "ctgc.selector.m"
  }
#line 82 "ctgc.selector.m"
}

#line 77 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(
#line 77 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 77 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__MainType_6,
#line 77 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Selector0_7,
#line 77 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Selector_8)
#line 77 "ctgc.selector.m"
{
#line 478 "ctgc.selector.m"
  {
#line 478 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 478 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Selector0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "ctgc.selector.m"
      *transform_hlds__ctgc__selector__Selector_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "ctgc.selector.m"
    else
#line 484 "ctgc.selector.m"
      {
#line 484 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__SubType_11;

#line 482 "ctgc.selector.m"
        {
#line 482 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__type_of_node_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__MainType_6, transform_hlds__ctgc__selector__Selector0_7, &transform_hlds__ctgc__selector__SubType_11);
        }
#line 484 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 483 "ctgc.selector.m"
          {
#line 483 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_12_12;

#line 483 "ctgc.selector.m"
            {
#line 483 "ctgc.selector.m"
              transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_12_12, 0) = ((MR_Box) (transform_hlds__ctgc__selector__SubType_11));
#line 483 "ctgc.selector.m"
            }
#line 483 "ctgc.selector.m"
            {
#line 483 "ctgc.selector.m"
              MR_Word base;
#line 483 "ctgc.selector.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ctgc.selector.m"
              *transform_hlds__ctgc__selector__Selector_8 = base;
#line 483 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_12_12));
#line 483 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "ctgc.selector.m"
            }
#line 483 "ctgc.selector.m"
          }
#line 484 "ctgc.selector.m"
        else
#line 487 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__Selector_8 = transform_hlds__ctgc__selector__Selector0_7;
#line 484 "ctgc.selector.m"
      }
#line 478 "ctgc.selector.m"
  }
#line 77 "ctgc.selector.m"
}

#line 72 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__type_of_node_4_p_0(
#line 72 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 72 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__StartType_6,
#line 72 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Selector_7,
#line 72 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__SubType_8)
#line 72 "ctgc.selector.m"
{
#line 345 "ctgc.selector.m"
  while (MR_TRUE)
#line 345 "ctgc.selector.m"
    {
#line 345 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 345 "ctgc.selector.m"
      {
#line 345 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 345 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__Selector_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "ctgc.selector.m"
          {
#line 355 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__SubType_8 = transform_hlds__ctgc__selector__StartType_6;
#line 355 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 355 "ctgc.selector.m"
          }
#line 345 "ctgc.selector.m"
        else
#line 345 "ctgc.selector.m"
          {
#line 345 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__UnitSelector_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 0)));
#line 345 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__RestSelector_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 1)));
#line 345 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__SubType0_13;

#line 349 "ctgc.selector.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_9)) == (MR_mktag((MR_Integer) 0))))
#line 347 "ctgc.selector.m"
              {
#line 347 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
#line 347 "ctgc.selector.m"
                MR_Integer transform_hlds__ctgc__selector__Index_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 1)));
#line 381 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

#line 377 "ctgc.selector.m"
                {
#line 377 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__ArgTypes_19);
                }
#line 381 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 380 "ctgc.selector.m"
                  {
#line 380 "ctgc.selector.m"
                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_13;

#line 380 "ctgc.selector.m"
                    {
#line 380 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__conv0_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Index_12);
                    }
#line 380 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_13);
#line 380 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 380 "ctgc.selector.m"
                  }
#line 381 "ctgc.selector.m"
                else
#line 391 "ctgc.selector.m"
                  {
#line 391 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

#line 382 "ctgc.selector.m"
                    {
#line 382 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__CtorDefn_20);
                    }
#line 391 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 385 "ctgc.selector.m"
                      {
#line 385 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
#line 385 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
#line 384 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
#line 384 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
#line 384 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
#line 384 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
#line 386 "ctgc.selector.m"
                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_13;
#line 388 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
#line 388 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__TVar_26;
#line 388 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__V_27_27;

#line 386 "ctgc.selector.m"
                        {
#line 386 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__conv1_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Index_12);
                        }
#line 386 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_13);
#line 388 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_13)) == (MR_mktag((MR_Integer) 0)));
#line 388 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 388 "ctgc.selector.m"
                          {
#line 388 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 0)));
#line 388 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 1)));
#line 4345 "transform_hlds.ctgc.selector.c"
                            transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 389 "ctgc.selector.m"
                            {
#line 389 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                            }
#line 388 "ctgc.selector.m"
                          }
#line 387 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 385 "ctgc.selector.m"
                      }
#line 391 "ctgc.selector.m"
                    else
#line 392 "ctgc.selector.m"
                      {
#line 392 "ctgc.selector.m"
                        {
#line 392 "ctgc.selector.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                        }
#line 392 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 392 "ctgc.selector.m"
                      }
#line 391 "ctgc.selector.m"
                  }
#line 347 "ctgc.selector.m"
              }
#line 349 "ctgc.selector.m"
            else
#line 350 "ctgc.selector.m"
              {
#line 350 "ctgc.selector.m"
                transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
#line 350 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 350 "ctgc.selector.m"
              }
#line 345 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 352 "ctgc.selector.m"
              {
#line 352 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 352 "ctgc.selector.m"
                {
#line 352 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__StartType__tmp_copy_6 = transform_hlds__ctgc__selector__SubType0_13;
#line 352 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__Selector__tmp_copy_7 = transform_hlds__ctgc__selector__RestSelector_10;

#line 352 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__Selector_7 = transform_hlds__ctgc__selector__Selector__tmp_copy_7;
#line 352 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__StartType_6 = transform_hlds__ctgc__selector__StartType__tmp_copy_6;
#line 352 "ctgc.selector.m"
                }
#line 352 "ctgc.selector.m"
                continue;
#line 352 "ctgc.selector.m"
              }
#line 345 "ctgc.selector.m"
          }
#line 345 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 345 "ctgc.selector.m"
      }
#line 345 "ctgc.selector.m"
      break;
#line 345 "ctgc.selector.m"
    }
#line 72 "ctgc.selector.m"
}

#line 66 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(
#line 66 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 66 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_6,
#line 66 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10,
#line 66 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)
#line 66 "ctgc.selector.m"
{
#line 402 "ctgc.selector.m"
  {
#line 402 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 402 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
#line 402 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_19;

#line 402 "ctgc.selector.m"
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
#line 402 "ctgc.selector.m"
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

#line 4474 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
#line 402 "ctgc.selector.m"
}
#line 402 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Status_19 == (MR_Integer) 1))
#line 402 "ctgc.selector.m"
      {
#line 402 "ctgc.selector.m"
        {
#line 402 "ctgc.selector.m"
          mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.normalize_selector_with_type_information/4");
#line 402 "ctgc.selector.m"
          return;
        }
#line 402 "ctgc.selector.m"
      }
#line 402 "ctgc.selector.m"
    else
#line 402 "ctgc.selector.m"
      if ((transform_hlds__ctgc__selector__Status_19 == (MR_Integer) 0))
#line 402 "ctgc.selector.m"
        {
#line 400 "ctgc.selector.m"
          {
#line 400 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__ctgc__selector__Type_6);
          }
#line 402 "ctgc.selector.m"
          if (transform_hlds__ctgc__selector__succeeded)
#line 400 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10;
#line 402 "ctgc.selector.m"
          else
#line 403 "ctgc.selector.m"
            {
#line 403 "ctgc.selector.m"
              MR_Word transform_hlds__ctgc__selector__BranchMap1_9;
#line 403 "ctgc.selector.m"
              MR_Word transform_hlds__ctgc__selector__V_25_25;

#line 505 "ctgc.selector.m"
              {
#line 505 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "ctgc.selector.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__selector__Type_6));
#line 505 "ctgc.selector.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "ctgc.selector.m"
              }
#line 505 "ctgc.selector.m"
              {
#line 505 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BranchMap1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ctgc.selector.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_25_25));
#line 505 "ctgc.selector.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "ctgc.selector.m"
              }
#line 405 "ctgc.selector.m"
              {
#line 405 "ctgc.selector.m"
                transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__Type_6, transform_hlds__ctgc__selector__BranchMap1_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11);
              }
#line 403 "ctgc.selector.m"
            }
#line 402 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2] ;
		{
#line 402 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 4563 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 402 "ctgc.selector.m"
}
#line 402 "ctgc.selector.m"
        }
#line 402 "ctgc.selector.m"
      else
#line 402 "ctgc.selector.m"
        {
#line 402 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

#line 402 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
#line 402 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 4592 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 402 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
#line 402 "ctgc.selector.m"
}
#line 402 "ctgc.selector.m"
        }
#line 402 "ctgc.selector.m"
  }
#line 66 "ctgc.selector.m"
}

#line 57 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(
#line 57 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 57 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Normalization_8,
#line 57 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S1_9,
#line 57 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S2_10,
#line 57 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__MainType_11,
#line 57 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_12)
#line 57 "ctgc.selector.m"
{
#line 140 "ctgc.selector.m"
  {
#line 140 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 140 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__NormS1_13;
#line 140 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__NormS2_14;

#line 146 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Normalization_8 == (MR_Integer) 1))
#line 143 "ctgc.selector.m"
      {
#line 144 "ctgc.selector.m"
        transform_hlds__ctgc__selector__NormS1_13 = transform_hlds__ctgc__selector__S1_9;
#line 145 "ctgc.selector.m"
        transform_hlds__ctgc__selector__NormS2_14 = transform_hlds__ctgc__selector__S2_10;
#line 143 "ctgc.selector.m"
      }
#line 146 "ctgc.selector.m"
    else
#line 147 "ctgc.selector.m"
      {
#line 148 "ctgc.selector.m"
        {
#line 148 "ctgc.selector.m"
          transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S1_9, &transform_hlds__ctgc__selector__NormS1_13);
        }
#line 150 "ctgc.selector.m"
        {
#line 150 "ctgc.selector.m"
          transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S2_10, &transform_hlds__ctgc__selector__NormS2_14);
        }
#line 147 "ctgc.selector.m"
      }
#line 154 "ctgc.selector.m"
    {
#line 154 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS1_13);
    }
#line 154 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 155 "ctgc.selector.m"
      {
#line 155 "ctgc.selector.m"
        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS2_14);
      }
#line 159 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 176 "ctgc.selector.m"
      {
#line 176 "ctgc.selector.m"
        {
#line 176 "ctgc.selector.m"
          return transform_hlds__ctgc__selector__succeeded = mercury__list__append_3_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__Extension_12, transform_hlds__ctgc__selector__NormS1_13);
        }
#line 176 "ctgc.selector.m"
      }
#line 159 "ctgc.selector.m"
    else
#line 160 "ctgc.selector.m"
      {
#line 160 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__NormS1_13, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__Extension_12);
      }
#line 140 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 140 "ctgc.selector.m"
  }
#line 57 "ctgc.selector.m"
}

#line 46 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__selector_termshift_3_p_0(
#line 46 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S1_4,
#line 46 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S2_5,
#line 46 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__S_6)
#line 46 "ctgc.selector.m"
{
#line 138 "ctgc.selector.m"
  {
#line 138 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 138 "ctgc.selector.m"
    {
#line 138 "ctgc.selector.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__S1_4, transform_hlds__ctgc__selector__S2_5, transform_hlds__ctgc__selector__S_6);
#line 138 "ctgc.selector.m"
      return;
    }
#line 138 "ctgc.selector.m"
  }
#line 46 "ctgc.selector.m"
}

#line 135 "ctgc.selector.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
#line 135 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 135 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1)
#line 135 "ctgc.selector.m"
{
#line 135 "ctgc.selector.m"
  {
#line 135 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__wrapper_arg_2;
#line 135 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;
#line 135 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__2_7;

#line 135 "ctgc.selector.m"
    {
#line 135 "ctgc.selector.m"
      transform_hlds__ctgc__selector__conv0_HeadVar__2_7 = transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__135__1_1_f_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1));
    }
#line 135 "ctgc.selector.m"
    transform_hlds__ctgc__selector__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__2_7));
#line 135 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__wrapper_arg_2;
#line 135 "ctgc.selector.m"
  }
#line 135 "ctgc.selector.m"
}

#line 42 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0(
#line 42 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Types_3)
#line 42 "ctgc.selector.m"
{
#line 135 "ctgc.selector.m"
  {
#line 135 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 135 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__HeadVar__2_2;

#line 135 "ctgc.selector.m"
    {
#line 135 "ctgc.selector.m"
      transform_hlds__ctgc__selector__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &transform_hlds__ctgc__selector_scalar_common_2[1], transform_hlds__ctgc__selector__Types_3);
    }
#line 135 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__HeadVar__2_2;
#line 135 "ctgc.selector.m"
  }
#line 42 "ctgc.selector.m"
}

#line 41 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_2_f_0(
#line 41 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsId_4,
#line 41 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Index_5)
#line 41 "ctgc.selector.m"
{
#line 107 "ctgc.selector.m"
  {
#line 107 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 107 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__HeadVar__3_3;
#line 107 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__TermSel_6;

#line 113 "ctgc.selector.m"
    if (((((((MR_tag((MR_Word) transform_hlds__ctgc__selector__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__selector__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 112 "ctgc.selector.m"
      {
#line 112 "ctgc.selector.m"
        transform_hlds__ctgc__selector__TermSel_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "ctgc.selector.m"
        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 0) = ((MR_Box) (transform_hlds__ctgc__selector__ConsId_4));
#line 112 "ctgc.selector.m"
        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 1) = ((MR_Box) (transform_hlds__ctgc__selector__Index_5));
#line 112 "ctgc.selector.m"
      }
#line 113 "ctgc.selector.m"
    else
#line 130 "ctgc.selector.m"
      {
#line 131 "ctgc.selector.m"
        {
#line 131 "ctgc.selector.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
        }
#line 130 "ctgc.selector.m"
      }
#line 107 "ctgc.selector.m"
    {
#line 107 "ctgc.selector.m"
      transform_hlds__ctgc__selector__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__selector__TermSel_6));
#line 107 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "ctgc.selector.m"
    }
#line 107 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__HeadVar__3_3;
#line 107 "ctgc.selector.m"
  }
#line 41 "ctgc.selector.m"
}

#line 40 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__top_selector_0_f_0(void)
#line 40 "ctgc.selector.m"
{
#line 105 "ctgc.selector.m"
  {
#line 105 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 105 "ctgc.selector.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 105 "ctgc.selector.m"
  }
#line 40 "ctgc.selector.m"
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
