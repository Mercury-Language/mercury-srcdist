/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 339 "ctgc.selector.m"
struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s {
#line 339 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1;
#line 339 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont;
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr;
#line 339 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11;
#line 339 "ctgc.selector.m"
};


#line 161 "transform_hlds.ctgc.selector.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 164 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 167 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 170 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 173 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0;

#line 176 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1];

#line 179 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1];

#line 182 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1];

#line 185 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0;

#line 188 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1;

#line 191 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2];

#line 194 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2];

#line 197 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2];

#line 200 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
#line 203 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 205 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 208 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
#line 211 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 213 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 215 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 218 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
#line 221 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 223 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 226 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
#line 229 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 231 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 233 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 236 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
#line 239 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 241 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2);

#line 244 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
#line 247 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 249 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 251 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3);

#line 332 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_arg_types_3_p_0[2];

#line 332 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_arg_types_3_p_0[2];

#line 332 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_arg_types_3_p_0[2];

#line 332 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_arg_types_3_p_0[2];

#line 332 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_arg_types_3_p_0[2];

#line 332 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0;

#line 290 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_type_contains_subtype_1_4_p_0[3];

#line 290 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 290 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 290 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 290 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_type_contains_subtype_1_4_p_0[3];

#line 290 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0;

#line 68 "ctgc.selector.m"
static /* sealed */ const MR_TableStepDesc transform_hlds__ctgc__selector__table_input_steps_for_normalize_selector_with_type_information_4_p_0[3];

#line 68 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 68 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_call_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 68 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 68 "ctgc.selector.m"
static /* sealed */ MR_TableStepStats transform_hlds__ctgc__selector__table_prev_answer_step_stats_for_normalize_selector_with_type_information_4_p_0[3];

#line 68 "ctgc.selector.m"
static /* sealed */ MR_ProcTableInfo transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0;

#line 341 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__341__1_3_p_0(
#line 341 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 341 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 341 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__LambdaHeadVar__1_11,
#line 341 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 341 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr);

#line 137 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__137__1_1_f_0(
#line 137 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__1_6);

#line 398 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void);

#line 335 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void);

#line 296 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void);

#line 498 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
#line 498 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3);

#line 498 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2);

#line 509 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
#line 509 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 509 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
#line 509 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8);

#line 411 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__VarType_8,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
#line 411 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);

#line 365 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_7,
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
#line 365 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Position_9);

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__env_ptr_arg);

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
#line 339 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 339 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 339 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr);

#line 332 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
#line 332 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 332 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 332 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6);

#line 308 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_9,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_12);

#line 290 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__FromType_6,
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_7,
#line 290 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_8);

#line 183 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__A_7,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__B_8,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_9,
#line 183 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_10);

#line 165 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
#line 165 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1);

#line 137 "ctgc.selector.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
#line 137 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 137 "ctgc.selector.m"
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
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 565 "transform_hlds.ctgc.selector.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__selector__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 573 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 581 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 590 "transform_hlds.ctgc.selector.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__selector__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 598 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_branch_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.selector",
  (MR_String) "branch_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__selector__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 615 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 = {
  (MR_String) "encounter_existential_subtype",
  (MR_Integer) 0
};

#line 621 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

#line 626 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[1] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

#line 631 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[1] = {
  (MR_Integer) 0
};

#line 636 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 653 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0 = {
  (MR_String) "need_normalization",
  (MR_Integer) 0
};

#line 659 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1 = {
  (MR_String) "already_normalized",
  (MR_Integer) 1
};

#line 665 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1
};

#line 671 "transform_hlds.ctgc.selector.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[2] = {
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1,
  &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0
};

#line 677 "transform_hlds.ctgc.selector.c"
static const MR_Integer transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__functor_number_map_normalization_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 683 "transform_hlds.ctgc.selector.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_normalization_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 700 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0_10001(
#line 703 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 705 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 707 "transform_hlds.ctgc.selector.c"
{
#line 709 "transform_hlds.ctgc.selector.c"
  {
#line 711 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 714 "transform_hlds.ctgc.selector.c"
    {
#line 716 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____branch_map_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
#line 719 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 721 "transform_hlds.ctgc.selector.c"
  }
#line 723 "transform_hlds.ctgc.selector.c"
}

#line 726 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0_10001(
#line 729 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 731 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 733 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 735 "transform_hlds.ctgc.selector.c"
{
#line 737 "transform_hlds.ctgc.selector.c"
  {
#line 739 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 742 "transform_hlds.ctgc.selector.c"
    {
#line 744 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____branch_map_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
#line 747 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 749 "transform_hlds.ctgc.selector.c"
  }
#line 751 "transform_hlds.ctgc.selector.c"
}

#line 754 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0_10001(
#line 757 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 759 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 761 "transform_hlds.ctgc.selector.c"
{
#line 763 "transform_hlds.ctgc.selector.c"
  {
#line 765 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 768 "transform_hlds.ctgc.selector.c"
    {
#line 770 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0();
    }
#line 773 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 775 "transform_hlds.ctgc.selector.c"
  }
#line 777 "transform_hlds.ctgc.selector.c"
}

#line 780 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0_10001(
#line 783 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 785 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 787 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 789 "transform_hlds.ctgc.selector.c"
{
#line 791 "transform_hlds.ctgc.selector.c"
  {
#line 793 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 796 "transform_hlds.ctgc.selector.c"
    {
#line 798 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1);
    }
#line 801 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 803 "transform_hlds.ctgc.selector.c"
  }
#line 805 "transform_hlds.ctgc.selector.c"
}

#line 808 "transform_hlds.ctgc.selector.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0_10001(
#line 811 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1,
#line 813 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2)
#line 815 "transform_hlds.ctgc.selector.c"
{
#line 817 "transform_hlds.ctgc.selector.c"
  {
#line 819 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 822 "transform_hlds.ctgc.selector.c"
    {
#line 824 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector____Unify____normalization_0_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2));
    }
#line 827 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 829 "transform_hlds.ctgc.selector.c"
  }
#line 831 "transform_hlds.ctgc.selector.c"
}

#line 834 "transform_hlds.ctgc.selector.c"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0_10001(
#line 837 "transform_hlds.ctgc.selector.c"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 839 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_2,
#line 841 "transform_hlds.ctgc.selector.c"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_3)
#line 843 "transform_hlds.ctgc.selector.c"
{
#line 845 "transform_hlds.ctgc.selector.c"
  {
#line 847 "transform_hlds.ctgc.selector.c"
    MR_Word transform_hlds__ctgc__selector__conv0_HeadVar__1_1;

#line 850 "transform_hlds.ctgc.selector.c"
    {
#line 852 "transform_hlds.ctgc.selector.c"
      transform_hlds__ctgc__selector____Compare____normalization_0_0(&transform_hlds__ctgc__selector__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_3));
    }
#line 855 "transform_hlds.ctgc.selector.c"
    *transform_hlds__ctgc__selector__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_HeadVar__1_1));
#line 857 "transform_hlds.ctgc.selector.c"
  }
#line 859 "transform_hlds.ctgc.selector.c"
}

#line 332 "ctgc.selector.m"
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

#line 332 "ctgc.selector.m"
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

#line 332 "ctgc.selector.m"
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

#line 332 "ctgc.selector.m"
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

#line 332 "ctgc.selector.m"
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

#line 332 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 290 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 68 "ctgc.selector.m"
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

#line 32 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 32 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
#line 32 "ctgc.selector.m"
{
#line 32 "ctgc.selector.m"
  {
#line 32 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 32 "ctgc.selector.m"
    *transform_hlds__ctgc__selector__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "ctgc.selector.m"
  }
#line 32 "ctgc.selector.m"
}

#line 32 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 32 "ctgc.selector.m"
{
#line 32 "ctgc.selector.m"
  {
#line 32 "ctgc.selector.m"
    return MR_TRUE;
#line 32 "ctgc.selector.m"
  }
#line 32 "ctgc.selector.m"
}

#line 341 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__341__1_3_p_0(
#line 341 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 341 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 341 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__LambdaHeadVar__1_11,
#line 341 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 341 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr)
#line 341 "ctgc.selector.m"
{
#line 341 "ctgc.selector.m"
  {
#line 341 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 341 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector___ConsId_8;

#line 341 "ctgc.selector.m"
    {
#line 341 "ctgc.selector.m"
      check_hlds__type_util__cons_id_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_4, transform_hlds__ctgc__selector__Type_5, &transform_hlds__ctgc__selector___ConsId_8, transform_hlds__ctgc__selector__LambdaHeadVar__1_11, transform_hlds__ctgc__selector__cont, transform_hlds__ctgc__selector__cont_env_ptr);
    }
#line 341 "ctgc.selector.m"
  }
#line 341 "ctgc.selector.m"
}

#line 137 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__137__1_1_f_0(
#line 137 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__1_6)
#line 137 "ctgc.selector.m"
{
#line 137 "ctgc.selector.m"
  {
#line 137 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 137 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__LambdaHeadVar__2_7;

#line 137 "ctgc.selector.m"
    {
#line 137 "ctgc.selector.m"
      transform_hlds__ctgc__selector__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__LambdaHeadVar__2_7, 0) = ((MR_Box) (transform_hlds__ctgc__selector__LambdaHeadVar__1_6));
#line 137 "ctgc.selector.m"
    }
#line 137 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__LambdaHeadVar__2_7;
#line 137 "ctgc.selector.m"
  }
#line 137 "ctgc.selector.m"
}

#line 398 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0(void)
#line 398 "ctgc.selector.m"
{
#line 398 "ctgc.selector.m"
  {
#line 398 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 398 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0


		{
#line 398 "ctgc.selector.m"
transform_hlds__ctgc__selector__table_info_for_normalize_selector_with_type_information_4_p_0.MR_pt_tablenode.MR_integer = 0;
#line 1913 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 398 "ctgc.selector.m"
}
#line 398 "ctgc.selector.m"
  }
#line 398 "ctgc.selector.m"
}

#line 335 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0(void)
#line 335 "ctgc.selector.m"
{
#line 335 "ctgc.selector.m"
  {
#line 335 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 335 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0


		{
#line 335 "ctgc.selector.m"
transform_hlds__ctgc__selector__table_info_for_type_arg_types_3_p_0.MR_pt_tablenode.MR_integer = 0;
#line 1942 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 335 "ctgc.selector.m"
}
#line 335 "ctgc.selector.m"
  }
#line 335 "ctgc.selector.m"
}

#line 296 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0(void)
#line 296 "ctgc.selector.m"
{
#line 296 "ctgc.selector.m"
  {
#line 296 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 296 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0


		{
#line 296 "ctgc.selector.m"
transform_hlds__ctgc__selector__table_info_for_type_contains_subtype_1_4_p_0.MR_pt_tablenode.MR_integer = 0;
#line 1971 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 296 "ctgc.selector.m"
}
#line 296 "ctgc.selector.m"
  }
#line 296 "ctgc.selector.m"
}

#line 35 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector____Compare____normalization_0_0(
#line 35 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 35 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 35 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
#line 35 "ctgc.selector.m"
{
#line 35 "ctgc.selector.m"
  {
#line 35 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 35 "ctgc.selector.m"
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__2_2;
#line 35 "ctgc.selector.m"
    MR_Integer transform_hlds__ctgc__selector__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__selector__HeadVar__3_3;

#line 35 "ctgc.selector.m"
    {
#line 35 "ctgc.selector.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1, transform_hlds__ctgc__selector__Cast_HeadVar1_4, transform_hlds__ctgc__selector__Cast_HeadVar2_5);
    }
#line 35 "ctgc.selector.m"
  }
#line 35 "ctgc.selector.m"
}

#line 35 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____normalization_0_0(
#line 35 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_1,
#line 35 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
#line 35 "ctgc.selector.m"
{
#line 2021 "transform_hlds.ctgc.selector.c"
  {
#line 2023 "transform_hlds.ctgc.selector.c"
    MR_bool transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__HeadVar__2_1 == transform_hlds__ctgc__selector__HeadVar__2_2);

#line 2026 "transform_hlds.ctgc.selector.c"
    return transform_hlds__ctgc__selector__succeeded;
#line 2028 "transform_hlds.ctgc.selector.c"
  }
#line 35 "ctgc.selector.m"
}

#line 32 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector____Compare____encounter_existential_subtype_0_0(
#line 32 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1)
#line 32 "ctgc.selector.m"
{
#line 32 "ctgc.selector.m"
  {
#line 32 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 32 "ctgc.selector.m"
    {
#line 32 "ctgc.selector.m"
      transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__ctgc__selector__HeadVar__1_1);
    }
#line 32 "ctgc.selector.m"
  }
#line 32 "ctgc.selector.m"
}

#line 32 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____encounter_existential_subtype_0_0(void)
#line 32 "ctgc.selector.m"
{
#line 32 "ctgc.selector.m"
  {
#line 32 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 32 "ctgc.selector.m"
    {
#line 32 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 32 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 32 "ctgc.selector.m"
  }
#line 32 "ctgc.selector.m"
}

#line 498 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector____Compare____branch_map_0_0(
#line 498 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__HeadVar__1_1,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__3_3)
#line 498 "ctgc.selector.m"
{
#line 498 "ctgc.selector.m"
  {
#line 498 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 498 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_4 = transform_hlds__ctgc__selector__HeadVar__2_2;
#line 498 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_5 = transform_hlds__ctgc__selector__HeadVar__3_3;

#line 498 "ctgc.selector.m"
    {
#line 498 "ctgc.selector.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], transform_hlds__ctgc__selector__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_5)));
    }
#line 498 "ctgc.selector.m"
  }
#line 498 "ctgc.selector.m"
}

#line 498 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector____Unify____branch_map_0_0(
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 498 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__2_2)
#line 498 "ctgc.selector.m"
{
#line 498 "ctgc.selector.m"
  {
#line 498 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 498 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar1_3 = transform_hlds__ctgc__selector__HeadVar__1_1;
#line 498 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Cast_HeadVar2_4 = transform_hlds__ctgc__selector__HeadVar__2_2;

#line 498 "ctgc.selector.m"
    {
#line 498 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__selector__Cast_HeadVar2_4)));
    }
#line 498 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 498 "ctgc.selector.m"
  }
#line 498 "ctgc.selector.m"
}

#line 509 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__branch_map_search_3_p_0(
#line 509 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1,
#line 509 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__KeyType_7,
#line 509 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ValueSel_8)
#line 509 "ctgc.selector.m"
{
#line 512 "ctgc.selector.m"
  while (MR_TRUE)
#line 512 "ctgc.selector.m"
    {
#line 512 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 512 "ctgc.selector.m"
      {
#line 512 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeInfo_13_13;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Type_4;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Sel_5;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__TypeSels_6;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Empty_9;
#line 512 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__V_11_11;
#line 517 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__Subst_10;
#line 517 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__V_12_12;

#line 512 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 512 "ctgc.selector.m"
          {
#line 512 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
#line 512 "ctgc.selector.m"
            transform_hlds__ctgc__selector__TypeSels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
#line 512 "ctgc.selector.m"
            transform_hlds__ctgc__selector__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 0)));
#line 512 "ctgc.selector.m"
            transform_hlds__ctgc__selector__Sel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_11_11, (MR_Integer) 1)));
#line 2189 "transform_hlds.ctgc.selector.c"
            transform_hlds__ctgc__selector__TypeInfo_13_13 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 2191 "transform_hlds.ctgc.selector.c"
            transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 513 "ctgc.selector.m"
            {
#line 513 "ctgc.selector.m"
              mercury__map__init_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, &transform_hlds__ctgc__selector__Empty_9);
            }
#line 517 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "ctgc.selector.m"
            {
#line 517 "ctgc.selector.m"
              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__type_unify_5_p_0(transform_hlds__ctgc__selector__Type_4, transform_hlds__ctgc__selector__KeyType_7, transform_hlds__ctgc__selector__V_12_12, transform_hlds__ctgc__selector__Empty_9, &transform_hlds__ctgc__selector__Subst_10);
            }
#line 517 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 518 "ctgc.selector.m"
              {
#line 518 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ctgc__selector__TypeInfo_13_13, transform_hlds__ctgc__selector__TypeCtorInfo_14_14, transform_hlds__ctgc__selector__Subst_10);
              }
#line 521 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 520 "ctgc.selector.m"
              {
#line 520 "ctgc.selector.m"
                *transform_hlds__ctgc__selector__ValueSel_8 = transform_hlds__ctgc__selector__Sel_5;
#line 520 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 520 "ctgc.selector.m"
              }
#line 521 "ctgc.selector.m"
            else
#line 522 "ctgc.selector.m"
              {
#line 522 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 522 "ctgc.selector.m"
                {
#line 522 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__TypeSels_6;

#line 522 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
#line 522 "ctgc.selector.m"
                }
#line 522 "ctgc.selector.m"
                continue;
#line 522 "ctgc.selector.m"
              }
#line 512 "ctgc.selector.m"
          }
#line 512 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 512 "ctgc.selector.m"
      }
#line 512 "ctgc.selector.m"
      break;
#line 512 "ctgc.selector.m"
    }
#line 509 "ctgc.selector.m"
}

#line 411 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__VarType_8,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__BranchMap0_9,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__SelectorAcc0_10,
#line 411 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24,
#line 411 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25)
#line 411 "ctgc.selector.m"
{
#line 417 "ctgc.selector.m"
  while (MR_TRUE)
#line 417 "ctgc.selector.m"
    {
#line 417 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 417 "ctgc.selector.m"
      {
#line 417 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 417 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25 = transform_hlds__ctgc__selector__SelectorAcc0_10;
#line 417 "ctgc.selector.m"
        else
#line 417 "ctgc.selector.m"
          {
#line 417 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__UnitSelector_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 0)));
#line 417 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__SelRest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, (MR_Integer) 1)));
#line 417 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__CtorCat_14;
#line 467 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__CatUser_15;

#line 418 "ctgc.selector.m"
            {
#line 418 "ctgc.selector.m"
              transform_hlds__ctgc__selector__CtorCat_14 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8);
            }
#line 419 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__selector__CtorCat_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 419 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 419 "ctgc.selector.m"
              {
#line 419 "ctgc.selector.m"
                transform_hlds__ctgc__selector__CatUser_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__CtorCat_14, (MR_Integer) 1)));
#line 428 "ctgc.selector.m"
                {
#line 461 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__CType_20;

#line 422 "ctgc.selector.m"
#line 422 "ctgc.selector.m"
                  switch (transform_hlds__ctgc__selector__CatUser_15) {
#line 422 "ctgc.selector.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 422 "ctgc.selector.m"
                    case (MR_Integer) 0:
#line 425 "ctgc.selector.m"
                      {
#line 427 "ctgc.selector.m"
                        {
#line 427 "ctgc.selector.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "cat_user_direct_dummy");
#line 427 "ctgc.selector.m"
                          return;
                        }
#line 425 "ctgc.selector.m"
                      }
#line 422 "ctgc.selector.m"
                      break;
#line 422 "ctgc.selector.m"
                    case (MR_Integer) 2:
#line 421 "ctgc.selector.m"
                      {
#line 421 "ctgc.selector.m"
                      }
#line 422 "ctgc.selector.m"
                      break;
#line 422 "ctgc.selector.m"
                    case (MR_Integer) 1:
#line 423 "ctgc.selector.m"
                      {
#line 423 "ctgc.selector.m"
                      }
#line 422 "ctgc.selector.m"
                      break;
#line 422 "ctgc.selector.m"
                  }
#line 445 "ctgc.selector.m"
                  if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_12)) == (MR_mktag((MR_Integer) 0))))
#line 436 "ctgc.selector.m"
                    {
#line 436 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
#line 436 "ctgc.selector.m"
                      MR_Integer transform_hlds__ctgc__selector__Index_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 1)));
#line 436 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__ArgTypes_18;
#line 441 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__SubType_19;
#line 439 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_42_42;
#line 439 "ctgc.selector.m"
                      MR_Box transform_hlds__ctgc__selector__conv0_SubType_19;

#line 437 "ctgc.selector.m"
                      {
#line 437 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__VarType_8, transform_hlds__ctgc__selector__ConsId_16, &transform_hlds__ctgc__selector__ArgTypes_18);
                      }
#line 436 "ctgc.selector.m"
                      if (transform_hlds__ctgc__selector__succeeded)
#line 436 "ctgc.selector.m"
                        {
#line 2381 "transform_hlds.ctgc.selector.c"
                          transform_hlds__ctgc__selector__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 439 "ctgc.selector.m"
                          {
#line 439 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = mercury__list__index1_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_42_42, transform_hlds__ctgc__selector__ArgTypes_18, transform_hlds__ctgc__selector__Index_17, &transform_hlds__ctgc__selector__conv0_SubType_19);
                          }
#line 439 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 439 "ctgc.selector.m"
                            {
#line 439 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__SubType_19 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType_19);
#line 439 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 439 "ctgc.selector.m"
                            }
#line 441 "ctgc.selector.m"
                          if (transform_hlds__ctgc__selector__succeeded)
#line 440 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__CType_20 = transform_hlds__ctgc__selector__SubType_19;
#line 441 "ctgc.selector.m"
                          else
#line 442 "ctgc.selector.m"
                            {
#line 442 "ctgc.selector.m"
                              {
#line 442 "ctgc.selector.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", (MR_String) "accessing nonexistent index");
#line 442 "ctgc.selector.m"
                                return;
                              }
#line 442 "ctgc.selector.m"
                            }
#line 441 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 436 "ctgc.selector.m"
                        }
#line 436 "ctgc.selector.m"
                    }
#line 445 "ctgc.selector.m"
                  else
#line 446 "ctgc.selector.m"
                    {
#line 446 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__CType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_12, (MR_Integer) 0)));
#line 446 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 446 "ctgc.selector.m"
                    }
#line 461 "ctgc.selector.m"
                  if (transform_hlds__ctgc__selector__succeeded)
#line 453 "ctgc.selector.m"
                    {
#line 453 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__BranchSelector_21;

#line 450 "ctgc.selector.m"
                      {
#line 450 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__branch_map_search_3_p_0(transform_hlds__ctgc__selector__BranchMap0_9, transform_hlds__ctgc__selector__CType_20, &transform_hlds__ctgc__selector__BranchSelector_21);
                      }
#line 453 "ctgc.selector.m"
                      if (transform_hlds__ctgc__selector__succeeded)
#line 451 "ctgc.selector.m"
                        {
#line 451 "ctgc.selector.m"
                          /* direct tailcall eliminated */
#line 451 "ctgc.selector.m"
                          {
#line 451 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
#line 451 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__BranchSelector_21;
#line 451 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

#line 451 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
#line 451 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
#line 451 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
#line 451 "ctgc.selector.m"
                          }
#line 451 "ctgc.selector.m"
                          continue;
#line 451 "ctgc.selector.m"
                        }
#line 453 "ctgc.selector.m"
                      else
#line 455 "ctgc.selector.m"
                        {
#line 455 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__SelectorAcc1_22;
#line 455 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__BranchMap1_23;
#line 455 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__V_35_35;
#line 455 "ctgc.selector.m"
                          MR_Word transform_hlds__ctgc__selector__V_52_52;

#line 454 "ctgc.selector.m"
                          {
#line 454 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
#line 454 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "ctgc.selector.m"
                          }
#line 140 "ctgc.selector.m"
                          {
#line 140 "ctgc.selector.m"
                            mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_35_35, &transform_hlds__ctgc__selector__SelectorAcc1_22);
                          }
#line 507 "ctgc.selector.m"
                          {
#line 507 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 0) = ((MR_Box) (transform_hlds__ctgc__selector__CType_20));
#line 507 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_52_52, 1) = ((MR_Box) (transform_hlds__ctgc__selector__SelectorAcc1_22));
#line 507 "ctgc.selector.m"
                          }
#line 507 "ctgc.selector.m"
                          {
#line 507 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__BranchMap1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_52_52));
#line 507 "ctgc.selector.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_23, 1) = ((MR_Box) (transform_hlds__ctgc__selector__BranchMap0_9));
#line 507 "ctgc.selector.m"
                          }
#line 458 "ctgc.selector.m"
                          /* direct tailcall eliminated */
#line 458 "ctgc.selector.m"
                          {
#line 458 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__VarType__tmp_copy_8 = transform_hlds__ctgc__selector__CType_20;
#line 458 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9 = transform_hlds__ctgc__selector__BranchMap1_23;
#line 458 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10 = transform_hlds__ctgc__selector__SelectorAcc1_22;
#line 458 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24 = transform_hlds__ctgc__selector__SelRest_13;

#line 458 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0__tmp_copy_24;
#line 458 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__SelectorAcc0_10 = transform_hlds__ctgc__selector__SelectorAcc0__tmp_copy_10;
#line 458 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__BranchMap0_9 = transform_hlds__ctgc__selector__BranchMap0__tmp_copy_9;
#line 458 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__VarType_8 = transform_hlds__ctgc__selector__VarType__tmp_copy_8;
#line 458 "ctgc.selector.m"
                          }
#line 458 "ctgc.selector.m"
                          continue;
#line 455 "ctgc.selector.m"
                        }
#line 453 "ctgc.selector.m"
                    }
#line 461 "ctgc.selector.m"
                  else
#line 465 "ctgc.selector.m"
                    {
#line 465 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__V_38_38;

#line 465 "ctgc.selector.m"
                      {
#line 465 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ctgc.selector.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__selector__UnitSelector_12));
#line 465 "ctgc.selector.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "ctgc.selector.m"
                      }
#line 465 "ctgc.selector.m"
                      {
#line 465 "ctgc.selector.m"
                        mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__V_38_38, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
                      }
#line 465 "ctgc.selector.m"
                    }
#line 428 "ctgc.selector.m"
                }
#line 419 "ctgc.selector.m"
              }
#line 419 "ctgc.selector.m"
            else
#line 471 "ctgc.selector.m"
              {
#line 471 "ctgc.selector.m"
                {
#line 471 "ctgc.selector.m"
                  mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__SelectorAcc0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_24, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_25);
                }
#line 471 "ctgc.selector.m"
              }
#line 417 "ctgc.selector.m"
          }
#line 417 "ctgc.selector.m"
      }
#line 417 "ctgc.selector.m"
      break;
#line 417 "ctgc.selector.m"
    }
#line 411 "ctgc.selector.m"
}

#line 365 "ctgc.selector.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__selector__det_select_subtype_4_f_0(
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_7,
#line 365 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsID_8,
#line 365 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Position_9)
#line 365 "ctgc.selector.m"
{
#line 370 "ctgc.selector.m"
  {
#line 370 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 370 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__SubType_10;
#line 370 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__SubType0_11;
#line 383 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

#line 379 "ctgc.selector.m"
    {
#line 379 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__ArgTypes_19);
    }
#line 383 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 382 "ctgc.selector.m"
      {
#line 382 "ctgc.selector.m"
        MR_Box transform_hlds__ctgc__selector__conv0_SubType0_11;

#line 382 "ctgc.selector.m"
        {
#line 382 "ctgc.selector.m"
          transform_hlds__ctgc__selector__conv0_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Position_9);
        }
#line 382 "ctgc.selector.m"
        transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_11);
#line 382 "ctgc.selector.m"
        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 382 "ctgc.selector.m"
      }
#line 383 "ctgc.selector.m"
    else
#line 393 "ctgc.selector.m"
      {
#line 393 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

#line 384 "ctgc.selector.m"
        {
#line 384 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_7, transform_hlds__ctgc__selector__ConsID_8, &transform_hlds__ctgc__selector__CtorDefn_20);
        }
#line 393 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 387 "ctgc.selector.m"
          {
#line 387 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
#line 387 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
#line 386 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
#line 386 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
#line 386 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
#line 386 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
#line 388 "ctgc.selector.m"
            MR_Box transform_hlds__ctgc__selector__conv1_SubType0_11;
#line 390 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
#line 390 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__TVar_26;
#line 390 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_27_27;

#line 388 "ctgc.selector.m"
            {
#line 388 "ctgc.selector.m"
              transform_hlds__ctgc__selector__conv1_SubType0_11 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Position_9);
            }
#line 388 "ctgc.selector.m"
            transform_hlds__ctgc__selector__SubType0_11 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_11);
#line 390 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_11)) == (MR_mktag((MR_Integer) 0)));
#line 390 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 390 "ctgc.selector.m"
              {
#line 390 "ctgc.selector.m"
                transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 0)));
#line 390 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_11, (MR_Integer) 1)));
#line 2698 "transform_hlds.ctgc.selector.c"
                transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 391 "ctgc.selector.m"
                {
#line 391 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                }
#line 390 "ctgc.selector.m"
              }
#line 389 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 387 "ctgc.selector.m"
          }
#line 393 "ctgc.selector.m"
        else
#line 394 "ctgc.selector.m"
          {
#line 394 "ctgc.selector.m"
            {
#line 394 "ctgc.selector.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
            }
#line 394 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 394 "ctgc.selector.m"
          }
#line 393 "ctgc.selector.m"
      }
#line 370 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 369 "ctgc.selector.m"
      transform_hlds__ctgc__selector__SubType_10 = transform_hlds__ctgc__selector__SubType0_11;
#line 370 "ctgc.selector.m"
    else
#line 371 "ctgc.selector.m"
      {
#line 371 "ctgc.selector.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 371 "ctgc.selector.m"
        {
#line 371 "ctgc.selector.m"
          mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 371 "ctgc.selector.m"
      }
#line 370 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__SubType_10;
#line 370 "ctgc.selector.m"
  }
#line 365 "ctgc.selector.m"
}

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_1(
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__env_ptr_arg)
#line 339 "ctgc.selector.m"
{
#line 339 "ctgc.selector.m"
  {
#line 339 "ctgc.selector.m"
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s * transform_hlds__ctgc__selector__env_ptr = (struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s *) transform_hlds__ctgc__selector__env_ptr_arg;

#line 339 "ctgc.selector.m"
    *((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11));
#line 339 "ctgc.selector.m"
    {
#line 339 "ctgc.selector.m"
      ((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont)((transform_hlds__ctgc__selector__env_ptr)->transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr);
    }
#line 339 "ctgc.selector.m"
  }
#line 339 "ctgc.selector.m"
}

#line 339 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0_2(
#line 339 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 339 "ctgc.selector.m"
  MR_Box * transform_hlds__ctgc__selector__wrapper_arg_1,
#line 339 "ctgc.selector.m"
  MR_Cont transform_hlds__ctgc__selector__cont,
#line 339 "ctgc.selector.m"
  void * transform_hlds__ctgc__selector__cont_env_ptr)
#line 339 "ctgc.selector.m"
{
#line 339 "ctgc.selector.m"
  {
#line 339 "ctgc.selector.m"
    struct transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0_s transform_hlds__ctgc__selector__env;

#line 339 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__wrapper_arg_1 = transform_hlds__ctgc__selector__wrapper_arg_1;
#line 339 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont = transform_hlds__ctgc__selector__cont;
#line 339 "ctgc.selector.m"
    (transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__cont_env_ptr = transform_hlds__ctgc__selector__cont_env_ptr;
#line 339 "ctgc.selector.m"
    {
#line 339 "ctgc.selector.m"
      MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;

#line 339 "ctgc.selector.m"
      {
#line 339 "ctgc.selector.m"
        transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__341__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__closure, (MR_Integer) 4))), &(transform_hlds__ctgc__selector__env).transform_hlds__ctgc__selector__type_arg_types_3_p_0_2_env_0__conv0_LambdaHeadVar__1_11, transform_hlds__ctgc__selector__type_arg_types_3_p_0_1, &transform_hlds__ctgc__selector__env);
      }
#line 339 "ctgc.selector.m"
    }
#line 339 "ctgc.selector.m"
  }
#line 339 "ctgc.selector.m"
}

#line 332 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_arg_types_3_p_0(
#line 332 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_4,
#line 332 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_5,
#line 332 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__ArgTypes_6)
#line 332 "ctgc.selector.m"
{
#line 338 "ctgc.selector.m"
  {
#line 338 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 338 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_17;
#line 338 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_18;

#line 338 "ctgc.selector.m"
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
#line 338 "ctgc.selector.m"
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);

#line 2860 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_17  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_18  = status;
#line 338 "ctgc.selector.m"
}
#line 338 "ctgc.selector.m"
#line 338 "ctgc.selector.m"
    switch (transform_hlds__ctgc__selector__Status_18) {
#line 338 "ctgc.selector.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "ctgc.selector.m"
      case (MR_Integer) 1:
#line 338 "ctgc.selector.m"
        {
#line 338 "ctgc.selector.m"
          {
#line 338 "ctgc.selector.m"
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_arg_types/3");
#line 338 "ctgc.selector.m"
            return;
          }
#line 338 "ctgc.selector.m"
        }
#line 338 "ctgc.selector.m"
        break;
#line 338 "ctgc.selector.m"
      case (MR_Integer) 0:
#line 338 "ctgc.selector.m"
        {
#line 338 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__ArgTypesLists_9;
#line 338 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_10_10;

#line 339 "ctgc.selector.m"
          {
#line 339 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 0) = ((MR_Box) (&transform_hlds__ctgc__selector_scalar_common_4[0]));
#line 339 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 1) = ((MR_Box) (transform_hlds__ctgc__selector__type_arg_types_3_p_0_2));
#line 339 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 3) = ((MR_Box) (transform_hlds__ctgc__selector__ModuleInfo_4));
#line 339 "ctgc.selector.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_10_10, 4) = ((MR_Box) (transform_hlds__ctgc__selector__Type_5));
#line 339 "ctgc.selector.m"
          }
#line 339 "ctgc.selector.m"
          {
#line 339 "ctgc.selector.m"
            mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0], transform_hlds__ctgc__selector__V_10_10, &transform_hlds__ctgc__selector__ArgTypesLists_9);
          }
#line 343 "ctgc.selector.m"
          {
#line 343 "ctgc.selector.m"
            mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypesLists_9, transform_hlds__ctgc__selector__ArgTypes_6);
          }
#line 338 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__ArgTypes_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[0] ;
		{
#line 338 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 2940 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 338 "ctgc.selector.m"
}
#line 338 "ctgc.selector.m"
        }
#line 338 "ctgc.selector.m"
        break;
#line 338 "ctgc.selector.m"
      case (MR_Integer) 2:
#line 338 "ctgc.selector.m"
        {
#line 338 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv1_restore_arg0;

#line 338 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_arg_types_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_17 ;
		{
#line 338 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 2971 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv1_restore_arg0  = (MR_Box) restore_arg0;
#line 338 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__ArgTypes_6 = ((MR_Word) transform_hlds__ctgc__selector__conv1_restore_arg0);
#line 338 "ctgc.selector.m"
}
#line 338 "ctgc.selector.m"
        }
#line 338 "ctgc.selector.m"
        break;
#line 338 "ctgc.selector.m"
    }
#line 338 "ctgc.selector.m"
  }
#line 332 "ctgc.selector.m"
}

#line 308 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_8,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_9,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16,
#line 308 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18,
#line 308 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_12)
#line 308 "ctgc.selector.m"
{
#line 328 "ctgc.selector.m"
  while (MR_TRUE)
#line 328 "ctgc.selector.m"
    {
#line 328 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 328 "ctgc.selector.m"
      {
#line 328 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;
#line 328 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__FromType_13;
#line 328 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
#line 313 "ctgc.selector.m"
        MR_Box transform_hlds__ctgc__selector__conv0_FromType_13;

#line 313 "ctgc.selector.m"
        {
#line 313 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = mercury__queue__get_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__ctgc__selector__conv0_FromType_13, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19);
        }
#line 313 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 313 "ctgc.selector.m"
          {
#line 313 "ctgc.selector.m"
            transform_hlds__ctgc__selector__FromType_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_FromType_13);
#line 313 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 313 "ctgc.selector.m"
          }
#line 328 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 317 "ctgc.selector.m"
          {
#line 314 "ctgc.selector.m"
            {
#line 314 "ctgc.selector.m"
              transform_hlds__ctgc__selector__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)));
            }
#line 317 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 315 "ctgc.selector.m"
              {
#line 315 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 315 "ctgc.selector.m"
                {
#line 315 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;

#line 315 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
#line 315 "ctgc.selector.m"
                }
#line 315 "ctgc.selector.m"
                continue;
#line 315 "ctgc.selector.m"
              }
#line 317 "ctgc.selector.m"
            else
#line 318 "ctgc.selector.m"
              {
#line 318 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 318 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ArgTypes_14;
#line 318 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

#line 318 "ctgc.selector.m"
                {
#line 318 "ctgc.selector.m"
                  mercury__set__insert_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__FromType_13)), transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17, &transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22);
                }
#line 319 "ctgc.selector.m"
                {
#line 319 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__type_arg_types_3_p_0(transform_hlds__ctgc__selector__ModuleInfo_8, transform_hlds__ctgc__selector__FromType_13, &transform_hlds__ctgc__selector__ArgTypes_14);
                }
#line 320 "ctgc.selector.m"
                {
#line 320 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__ctgc__selector__ToType_9)), transform_hlds__ctgc__selector__ArgTypes_14);
                }
#line 322 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 321 "ctgc.selector.m"
                  {
#line 321 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 1;
#line 321 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;
#line 321 "ctgc.selector.m"
                    *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19;
#line 321 "ctgc.selector.m"
                  }
#line 322 "ctgc.selector.m"
                else
#line 323 "ctgc.selector.m"
                  {
#line 323 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;

#line 323 "ctgc.selector.m"
                    {
#line 323 "ctgc.selector.m"
                      mercury__queue__put_list_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_28_28, transform_hlds__ctgc__selector__ArgTypes_14, transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_19_19, &transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23);
                    }
#line 324 "ctgc.selector.m"
                    /* direct tailcall eliminated */
#line 324 "ctgc.selector.m"
                    {
#line 324 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_23_23;
#line 324 "ctgc.selector.m"
                      MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_22_22;

#line 324 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0__tmp_copy_17;
#line 324 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0__tmp_copy_15;
#line 324 "ctgc.selector.m"
                    }
#line 324 "ctgc.selector.m"
                    continue;
#line 323 "ctgc.selector.m"
                  }
#line 318 "ctgc.selector.m"
              }
#line 317 "ctgc.selector.m"
          }
#line 328 "ctgc.selector.m"
        else
#line 329 "ctgc.selector.m"
          {
#line 329 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__Contains_12 = (MR_Integer) 0;
#line 329 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_18 = transform_hlds__ctgc__selector__STATE_VARIABLE_SeenTypes_0_17;
#line 329 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_16 = transform_hlds__ctgc__selector__STATE_VARIABLE_Queue_0_15;
#line 329 "ctgc.selector.m"
          }
#line 328 "ctgc.selector.m"
      }
#line 328 "ctgc.selector.m"
      break;
#line 328 "ctgc.selector.m"
    }
#line 308 "ctgc.selector.m"
}

#line 290 "ctgc.selector.m"
static void MR_CALL 
transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__FromType_6,
#line 290 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ToType_7,
#line 290 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Contains_8)
#line 290 "ctgc.selector.m"
{
#line 299 "ctgc.selector.m"
  {
#line 299 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 299 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
#line 299 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_19;

#line 299 "ctgc.selector.m"
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
#line 299 "ctgc.selector.m"
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

#line 3217 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
#line 299 "ctgc.selector.m"
}
#line 299 "ctgc.selector.m"
#line 299 "ctgc.selector.m"
    switch (transform_hlds__ctgc__selector__Status_19) {
#line 299 "ctgc.selector.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 299 "ctgc.selector.m"
      case (MR_Integer) 1:
#line 299 "ctgc.selector.m"
        {
#line 299 "ctgc.selector.m"
          {
#line 299 "ctgc.selector.m"
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.type_contains_subtype_1/4");
#line 299 "ctgc.selector.m"
            return;
          }
#line 299 "ctgc.selector.m"
        }
#line 299 "ctgc.selector.m"
        break;
#line 299 "ctgc.selector.m"
      case (MR_Integer) 0:
#line 299 "ctgc.selector.m"
        {
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__Queue0_9;
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_12_12;
#line 299 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector__V_13_13;
#line 301 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector___Queue_10;
#line 301 "ctgc.selector.m"
          MR_Word transform_hlds__ctgc__selector___SeenTypes_11;

#line 300 "ctgc.selector.m"
          {
#line 300 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_12_12 = mercury__queue__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
#line 300 "ctgc.selector.m"
          {
#line 300 "ctgc.selector.m"
            mercury__queue__put_3_p_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14, ((MR_Box) (transform_hlds__ctgc__selector__FromType_6)), transform_hlds__ctgc__selector__V_12_12, &transform_hlds__ctgc__selector__Queue0_9);
          }
#line 302 "ctgc.selector.m"
          {
#line 302 "ctgc.selector.m"
            transform_hlds__ctgc__selector__V_13_13 = mercury__set__init_0_f_0(transform_hlds__ctgc__selector__TypeCtorInfo_14_14);
          }
#line 301 "ctgc.selector.m"
          {
#line 301 "ctgc.selector.m"
            transform_hlds__ctgc__selector__type_contains_subtype_2_7_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__ToType_7, transform_hlds__ctgc__selector__Queue0_9, &transform_hlds__ctgc__selector___Queue_10, transform_hlds__ctgc__selector__V_13_13, &transform_hlds__ctgc__selector___SeenTypes_11, transform_hlds__ctgc__selector__Contains_8);
          }
#line 299 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__Contains_8)) ;
	save_arg_typeinfo0 =  (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0 ;
		{
#line 299 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 3299 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 299 "ctgc.selector.m"
}
#line 299 "ctgc.selector.m"
        }
#line 299 "ctgc.selector.m"
        break;
#line 299 "ctgc.selector.m"
      case (MR_Integer) 2:
#line 299 "ctgc.selector.m"
        {
#line 299 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

#line 299 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
#line 299 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 3330 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 299 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__Contains_8 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
#line 299 "ctgc.selector.m"
}
#line 299 "ctgc.selector.m"
        }
#line 299 "ctgc.selector.m"
        break;
#line 299 "ctgc.selector.m"
    }
#line 299 "ctgc.selector.m"
  }
#line 290 "ctgc.selector.m"
}

#line 183 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_6,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__A_7,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__B_8,
#line 183 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_9,
#line 183 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_10)
#line 183 "ctgc.selector.m"
{
#line 188 "ctgc.selector.m"
  while (MR_TRUE)
#line 188 "ctgc.selector.m"
    {
#line 188 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 188 "ctgc.selector.m"
      {
#line 188 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 188 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__B_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "ctgc.selector.m"
          {
#line 188 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__A_7;
#line 188 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 188 "ctgc.selector.m"
          }
#line 188 "ctgc.selector.m"
        else
#line 191 "ctgc.selector.m"
          {
#line 191 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__AH_11;
#line 191 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__AT_12;
#line 191 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__BH_13;
#line 191 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__BT_14;
#line 214 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ConsIdA_15;
#line 214 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__IndexA_16;
#line 214 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__ConsIdB_17;
#line 214 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__IndexB_18;

#line 191 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__A_7)) == (MR_mktag((MR_Integer) 1)));
#line 191 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 191 "ctgc.selector.m"
              {
#line 191 "ctgc.selector.m"
                transform_hlds__ctgc__selector__AH_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 0)));
#line 191 "ctgc.selector.m"
                transform_hlds__ctgc__selector__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__A_7, (MR_Integer) 1)));
#line 192 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BH_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 0)));
#line 192 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BT_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__B_8, (MR_Integer) 1)));
#line 194 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0)));
#line 194 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 194 "ctgc.selector.m"
                  {
#line 194 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__ConsIdA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
#line 194 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__IndexA_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));
#line 195 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0)));
#line 195 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 195 "ctgc.selector.m"
                      {
#line 195 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__ConsIdB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 195 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__IndexB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
#line 195 "ctgc.selector.m"
                      }
#line 194 "ctgc.selector.m"
                  }
#line 214 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 197 "ctgc.selector.m"
                  {
#line 200 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__TypeInfo_39_39;
#line 200 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__V_19_19;
#line 200 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__V_20_20;

#line 197 "ctgc.selector.m"
                    {
#line 197 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__selector__ConsIdA_15, transform_hlds__ctgc__selector__ConsIdB_17);
                    }
#line 197 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 197 "ctgc.selector.m"
                      {
#line 198 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__IndexA_16 == transform_hlds__ctgc__selector__IndexB_18);
#line 197 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 197 "ctgc.selector.m"
                          {
#line 200 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__Type_9)) == (MR_mktag((MR_Integer) 0)));
#line 200 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 200 "ctgc.selector.m"
                              {
#line 200 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 0)));
#line 200 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__Type_9, (MR_Integer) 1)));
#line 3481 "transform_hlds.ctgc.selector.c"
                                transform_hlds__ctgc__selector__TypeInfo_39_39 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2];
#line 201 "ctgc.selector.m"
                                {
#line 201 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__selector__TypeInfo_39_39, ((MR_Box) (transform_hlds__ctgc__selector__AT_12)), ((MR_Box) (transform_hlds__ctgc__selector__BT_14)));
                                }
#line 200 "ctgc.selector.m"
                              }
#line 206 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 205 "ctgc.selector.m"
                              {
#line 205 "ctgc.selector.m"
                                *transform_hlds__ctgc__selector__Extension_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 205 "ctgc.selector.m"
                              }
#line 206 "ctgc.selector.m"
                            else
#line 211 "ctgc.selector.m"
                              {
#line 211 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__SubType_21;
#line 370 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__SubType0_49;
#line 383 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__ArgTypes_57;

#line 379 "ctgc.selector.m"
                                {
#line 379 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__ArgTypes_57);
                                }
#line 383 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 382 "ctgc.selector.m"
                                  {
#line 382 "ctgc.selector.m"
                                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_49;

#line 382 "ctgc.selector.m"
                                    {
#line 382 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__conv0_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_57, transform_hlds__ctgc__selector__IndexA_16);
                                    }
#line 382 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_49);
#line 382 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 382 "ctgc.selector.m"
                                  }
#line 383 "ctgc.selector.m"
                                else
#line 393 "ctgc.selector.m"
                                  {
#line 393 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__CtorDefn_58;

#line 384 "ctgc.selector.m"
                                    {
#line 384 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_15, &transform_hlds__ctgc__selector__CtorDefn_58);
                                    }
#line 393 "ctgc.selector.m"
                                    if (transform_hlds__ctgc__selector__succeeded)
#line 387 "ctgc.selector.m"
                                      {
#line 387 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__ExistQVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 1)));
#line 387 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__ArgTypes_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 4)));
#line 386 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___TVarSet_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 0)));
#line 386 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___KindMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 2)));
#line 386 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___Constraints_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 3)));
#line 386 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector___RetType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_58, (MR_Integer) 5)));
#line 388 "ctgc.selector.m"
                                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_49;
#line 390 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_73;
#line 390 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__TVar_64;
#line 390 "ctgc.selector.m"
                                        MR_Word transform_hlds__ctgc__selector__V_65_65;

#line 388 "ctgc.selector.m"
                                        {
#line 388 "ctgc.selector.m"
                                          transform_hlds__ctgc__selector__conv1_SubType0_49 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_69, transform_hlds__ctgc__selector__IndexA_16);
                                        }
#line 388 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__SubType0_49 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_49);
#line 390 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_49)) == (MR_mktag((MR_Integer) 0)));
#line 390 "ctgc.selector.m"
                                        if (transform_hlds__ctgc__selector__succeeded)
#line 390 "ctgc.selector.m"
                                          {
#line 390 "ctgc.selector.m"
                                            transform_hlds__ctgc__selector__TVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 0)));
#line 390 "ctgc.selector.m"
                                            transform_hlds__ctgc__selector__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_49, (MR_Integer) 1)));
#line 3588 "transform_hlds.ctgc.selector.c"
                                            transform_hlds__ctgc__selector__TypeInfo_27_73 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 391 "ctgc.selector.m"
                                            {
#line 391 "ctgc.selector.m"
                                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_73, ((MR_Box) (transform_hlds__ctgc__selector__TVar_64)), transform_hlds__ctgc__selector__ExistQVars_60);
                                            }
#line 390 "ctgc.selector.m"
                                          }
#line 389 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 387 "ctgc.selector.m"
                                      }
#line 393 "ctgc.selector.m"
                                    else
#line 394 "ctgc.selector.m"
                                      {
#line 394 "ctgc.selector.m"
                                        {
#line 394 "ctgc.selector.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                                        }
#line 394 "ctgc.selector.m"
                                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 394 "ctgc.selector.m"
                                      }
#line 393 "ctgc.selector.m"
                                  }
#line 370 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 369 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__SubType_21 = transform_hlds__ctgc__selector__SubType0_49;
#line 370 "ctgc.selector.m"
                                else
#line 371 "ctgc.selector.m"
                                  {
#line 371 "ctgc.selector.m"
                                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 371 "ctgc.selector.m"
                                    {
#line 371 "ctgc.selector.m"
                                      mercury__exception__throw_1_p_0((MR_Word) &transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0, ((MR_Box) ((MR_Integer) 0)));
                                    }
#line 371 "ctgc.selector.m"
                                  }
#line 212 "ctgc.selector.m"
                                /* direct tailcall eliminated */
#line 212 "ctgc.selector.m"
                                {
#line 212 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 212 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 212 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubType_21;

#line 212 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 212 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 212 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 212 "ctgc.selector.m"
                                }
#line 212 "ctgc.selector.m"
                                continue;
#line 211 "ctgc.selector.m"
                              }
#line 197 "ctgc.selector.m"
                          }
#line 197 "ctgc.selector.m"
                      }
#line 197 "ctgc.selector.m"
                  }
#line 214 "ctgc.selector.m"
                else
#line 229 "ctgc.selector.m"
                if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__AH_11)) == (MR_mktag((MR_Integer) 0))))
#line 219 "ctgc.selector.m"
                  {
#line 219 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__SubTypeB_22;
#line 219 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__SubTypeA_23;
#line 219 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__ConsIdA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));
#line 219 "ctgc.selector.m"
                    MR_Integer transform_hlds__ctgc__selector__IndexA_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 1)));

#line 220 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 1)));
#line 220 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 220 "ctgc.selector.m"
                      {
#line 220 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__SubTypeB_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 221 "ctgc.selector.m"
                        {
#line 221 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__SubTypeA_23 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdA_25, transform_hlds__ctgc__selector__IndexA_26);
                        }
#line 222 "ctgc.selector.m"
                        {
#line 222 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                        }
#line 225 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 224 "ctgc.selector.m"
                          {
#line 224 "ctgc.selector.m"
                            /* direct tailcall eliminated */
#line 224 "ctgc.selector.m"
                            {
#line 224 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 224 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 224 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

#line 224 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 224 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 224 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 224 "ctgc.selector.m"
                            }
#line 224 "ctgc.selector.m"
                            continue;
#line 224 "ctgc.selector.m"
                          }
#line 225 "ctgc.selector.m"
                        else
#line 226 "ctgc.selector.m"
                          {
#line 283 "ctgc.selector.m"
                            {
#line 283 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22);
                            }
#line 285 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 284 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 285 "ctgc.selector.m"
                            else
#line 286 "ctgc.selector.m"
                              {
#line 286 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Contains_77;

#line 286 "ctgc.selector.m"
                                {
#line 286 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeA_23, transform_hlds__ctgc__selector__SubTypeB_22, &transform_hlds__ctgc__selector__Contains_77);
                                }
#line 287 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_77 == (MR_Integer) 1);
#line 286 "ctgc.selector.m"
                              }
#line 226 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 227 "ctgc.selector.m"
                              {
#line 227 "ctgc.selector.m"
                                /* direct tailcall eliminated */
#line 227 "ctgc.selector.m"
                                {
#line 227 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 227 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeA_23;

#line 227 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 227 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 227 "ctgc.selector.m"
                                }
#line 227 "ctgc.selector.m"
                                continue;
#line 227 "ctgc.selector.m"
                              }
#line 226 "ctgc.selector.m"
                          }
#line 220 "ctgc.selector.m"
                      }
#line 219 "ctgc.selector.m"
                  }
#line 229 "ctgc.selector.m"
                else
#line 229 "ctgc.selector.m"
                  {
#line 229 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__AH_11, (MR_Integer) 0)));

#line 229 "ctgc.selector.m"
                    if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__BH_13)) == (MR_mktag((MR_Integer) 0))))
#line 231 "ctgc.selector.m"
                      {
#line 231 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__ConsIdB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));
#line 231 "ctgc.selector.m"
                        MR_Integer transform_hlds__ctgc__selector__IndexB_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 1)));
#line 231 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__SubTypeB_29;

#line 233 "ctgc.selector.m"
                        {
#line 233 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__SubTypeB_29 = transform_hlds__ctgc__selector__det_select_subtype_4_f_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__Type_9, transform_hlds__ctgc__selector__ConsIdB_27, transform_hlds__ctgc__selector__IndexB_28);
                        }
#line 234 "ctgc.selector.m"
                        {
#line 234 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_29);
                        }
#line 237 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 236 "ctgc.selector.m"
                          {
#line 236 "ctgc.selector.m"
                            /* direct tailcall eliminated */
#line 236 "ctgc.selector.m"
                            {
#line 236 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 236 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 236 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

#line 236 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 236 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 236 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 236 "ctgc.selector.m"
                            }
#line 236 "ctgc.selector.m"
                            continue;
#line 236 "ctgc.selector.m"
                          }
#line 237 "ctgc.selector.m"
                        else
#line 238 "ctgc.selector.m"
                          {
#line 283 "ctgc.selector.m"
                            {
#line 283 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37);
                            }
#line 285 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 284 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 285 "ctgc.selector.m"
                            else
#line 286 "ctgc.selector.m"
                              {
#line 286 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Contains_82;

#line 286 "ctgc.selector.m"
                                {
#line 286 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_29, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_82);
                                }
#line 287 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_82 == (MR_Integer) 1);
#line 286 "ctgc.selector.m"
                              }
#line 238 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 239 "ctgc.selector.m"
                              {
#line 239 "ctgc.selector.m"
                                /* direct tailcall eliminated */
#line 239 "ctgc.selector.m"
                                {
#line 239 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 239 "ctgc.selector.m"
                                  MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_29;

#line 239 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 239 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 239 "ctgc.selector.m"
                                }
#line 239 "ctgc.selector.m"
                                continue;
#line 239 "ctgc.selector.m"
                              }
#line 238 "ctgc.selector.m"
                          }
#line 231 "ctgc.selector.m"
                      }
#line 229 "ctgc.selector.m"
                    else
#line 242 "ctgc.selector.m"
                      {
#line 242 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__SubTypeB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BH_13, (MR_Integer) 0)));

#line 245 "ctgc.selector.m"
                        {
#line 245 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                        }
#line 250 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 249 "ctgc.selector.m"
                          {
#line 249 "ctgc.selector.m"
                            /* direct tailcall eliminated */
#line 249 "ctgc.selector.m"
                            {
#line 249 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 249 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__B__tmp_copy_8 = transform_hlds__ctgc__selector__BT_14;
#line 249 "ctgc.selector.m"
                              MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__SubTypeB_31;

#line 249 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 249 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__B_8 = transform_hlds__ctgc__selector__B__tmp_copy_8;
#line 249 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 249 "ctgc.selector.m"
                            }
#line 249 "ctgc.selector.m"
                            continue;
#line 249 "ctgc.selector.m"
                          }
#line 250 "ctgc.selector.m"
                        else
#line 264 "ctgc.selector.m"
                          {
#line 264 "ctgc.selector.m"
                            MR_Word transform_hlds__ctgc__selector__Extension0_24;

#line 283 "ctgc.selector.m"
                            {
#line 283 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37);
                            }
#line 285 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 284 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 285 "ctgc.selector.m"
                            else
#line 286 "ctgc.selector.m"
                              {
#line 286 "ctgc.selector.m"
                                MR_Word transform_hlds__ctgc__selector__Contains_87;

#line 286 "ctgc.selector.m"
                                {
#line 286 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__SubTypeB_31, transform_hlds__ctgc__selector__V_37_37, &transform_hlds__ctgc__selector__Contains_87);
                                }
#line 287 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_87 == (MR_Integer) 1);
#line 286 "ctgc.selector.m"
                              }
#line 253 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 254 "ctgc.selector.m"
                              {
#line 254 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__A_7, transform_hlds__ctgc__selector__BT_14, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Extension0_24);
                              }
#line 264 "ctgc.selector.m"
                            if (transform_hlds__ctgc__selector__succeeded)
#line 262 "ctgc.selector.m"
                              {
#line 262 "ctgc.selector.m"
                                {
#line 262 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2], ((MR_Box) (transform_hlds__ctgc__selector__Extension0_24)), ((MR_Box) (transform_hlds__ctgc__selector__A_7)));
                                }
#line 262 "ctgc.selector.m"
                                transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 262 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 262 "ctgc.selector.m"
                                  {
#line 263 "ctgc.selector.m"
                                    *transform_hlds__ctgc__selector__Extension_10 = transform_hlds__ctgc__selector__Extension0_24;
#line 263 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 262 "ctgc.selector.m"
                                  }
#line 262 "ctgc.selector.m"
                              }
#line 264 "ctgc.selector.m"
                            else
#line 267 "ctgc.selector.m"
                              {
#line 283 "ctgc.selector.m"
                                {
#line 283 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31);
                                }
#line 285 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 284 "ctgc.selector.m"
                                  transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 285 "ctgc.selector.m"
                                else
#line 286 "ctgc.selector.m"
                                  {
#line 286 "ctgc.selector.m"
                                    MR_Word transform_hlds__ctgc__selector__Contains_92;

#line 286 "ctgc.selector.m"
                                    {
#line 286 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__type_contains_subtype_1_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_6, transform_hlds__ctgc__selector__V_37_37, transform_hlds__ctgc__selector__SubTypeB_31, &transform_hlds__ctgc__selector__Contains_92);
                                    }
#line 287 "ctgc.selector.m"
                                    transform_hlds__ctgc__selector__succeeded = (transform_hlds__ctgc__selector__Contains_92 == (MR_Integer) 1);
#line 286 "ctgc.selector.m"
                                  }
#line 267 "ctgc.selector.m"
                                if (transform_hlds__ctgc__selector__succeeded)
#line 268 "ctgc.selector.m"
                                  {
#line 268 "ctgc.selector.m"
                                    /* direct tailcall eliminated */
#line 268 "ctgc.selector.m"
                                    {
#line 268 "ctgc.selector.m"
                                      MR_Word transform_hlds__ctgc__selector__A__tmp_copy_7 = transform_hlds__ctgc__selector__AT_12;
#line 268 "ctgc.selector.m"
                                      MR_Word transform_hlds__ctgc__selector__Type__tmp_copy_9 = transform_hlds__ctgc__selector__V_37_37;

#line 268 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__Type_9 = transform_hlds__ctgc__selector__Type__tmp_copy_9;
#line 268 "ctgc.selector.m"
                                      transform_hlds__ctgc__selector__A_7 = transform_hlds__ctgc__selector__A__tmp_copy_7;
#line 268 "ctgc.selector.m"
                                    }
#line 268 "ctgc.selector.m"
                                    continue;
#line 268 "ctgc.selector.m"
                                  }
#line 267 "ctgc.selector.m"
                              }
#line 264 "ctgc.selector.m"
                          }
#line 242 "ctgc.selector.m"
                      }
#line 229 "ctgc.selector.m"
                  }
#line 191 "ctgc.selector.m"
              }
#line 191 "ctgc.selector.m"
          }
#line 188 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 188 "ctgc.selector.m"
      }
#line 188 "ctgc.selector.m"
      break;
#line 188 "ctgc.selector.m"
    }
#line 183 "ctgc.selector.m"
}

#line 165 "ctgc.selector.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__selector__only_term_selectors_1_p_0(
#line 165 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__HeadVar__1_1)
#line 165 "ctgc.selector.m"
{
#line 167 "ctgc.selector.m"
  while (MR_TRUE)
#line 167 "ctgc.selector.m"
    {
#line 167 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 167 "ctgc.selector.m"
      {
#line 167 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 167 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 167 "ctgc.selector.m"
        else
#line 168 "ctgc.selector.m"
          {
#line 168 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__H_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_4_4;
#line 169 "ctgc.selector.m"
            MR_Integer transform_hlds__ctgc__selector__V_5_5;

#line 169 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__H_2)) == (MR_mktag((MR_Integer) 0)));
#line 169 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 169 "ctgc.selector.m"
              {
#line 169 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 0)));
#line 169 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__H_2, (MR_Integer) 1)));
#line 170 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 170 "ctgc.selector.m"
                {
#line 170 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1 = transform_hlds__ctgc__selector__T_3;

#line 170 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__HeadVar__1_1 = transform_hlds__ctgc__selector__HeadVar__1__tmp_copy_1;
#line 170 "ctgc.selector.m"
                }
#line 170 "ctgc.selector.m"
                continue;
#line 169 "ctgc.selector.m"
              }
#line 168 "ctgc.selector.m"
          }
#line 167 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 167 "ctgc.selector.m"
      }
#line 167 "ctgc.selector.m"
      break;
#line 167 "ctgc.selector.m"
    }
#line 165 "ctgc.selector.m"
}

#line 84 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__reset_tables_2_p_0(void)
#line 84 "ctgc.selector.m"
{
#line 527 "ctgc.selector.m"
  {
#line 527 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 528 "ctgc.selector.m"
    {
#line 528 "ctgc.selector.m"
      transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_p_0();
    }
#line 529 "ctgc.selector.m"
    {
#line 529 "ctgc.selector.m"
      transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_p_0();
    }
#line 530 "ctgc.selector.m"
    {
#line 530 "ctgc.selector.m"
      transform_hlds__ctgc__selector__table_reset_for_normalize_selector_with_type_information_4_2_p_0();
    }
#line 527 "ctgc.selector.m"
  }
#line 84 "ctgc.selector.m"
}

#line 79 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(
#line 79 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 79 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__MainType_6,
#line 79 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Selector0_7,
#line 79 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Selector_8)
#line 79 "ctgc.selector.m"
{
#line 480 "ctgc.selector.m"
  {
#line 480 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 480 "ctgc.selector.m"
    if ((transform_hlds__ctgc__selector__Selector0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "ctgc.selector.m"
      *transform_hlds__ctgc__selector__Selector_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "ctgc.selector.m"
    else
#line 486 "ctgc.selector.m"
      {
#line 486 "ctgc.selector.m"
        MR_Word transform_hlds__ctgc__selector__SubType_11;

#line 484 "ctgc.selector.m"
        {
#line 484 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__type_of_node_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__MainType_6, transform_hlds__ctgc__selector__Selector0_7, &transform_hlds__ctgc__selector__SubType_11);
        }
#line 486 "ctgc.selector.m"
        if (transform_hlds__ctgc__selector__succeeded)
#line 485 "ctgc.selector.m"
          {
#line 485 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__V_12_12;

#line 485 "ctgc.selector.m"
            {
#line 485 "ctgc.selector.m"
              transform_hlds__ctgc__selector__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__V_12_12, 0) = ((MR_Box) (transform_hlds__ctgc__selector__SubType_11));
#line 485 "ctgc.selector.m"
            }
#line 485 "ctgc.selector.m"
            {
#line 485 "ctgc.selector.m"
              MR_Word base;
#line 485 "ctgc.selector.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ctgc.selector.m"
              *transform_hlds__ctgc__selector__Selector_8 = base;
#line 485 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_12_12));
#line 485 "ctgc.selector.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "ctgc.selector.m"
            }
#line 485 "ctgc.selector.m"
          }
#line 486 "ctgc.selector.m"
        else
#line 489 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__Selector_8 = transform_hlds__ctgc__selector__Selector0_7;
#line 486 "ctgc.selector.m"
      }
#line 480 "ctgc.selector.m"
  }
#line 79 "ctgc.selector.m"
}

#line 74 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__type_of_node_4_p_0(
#line 74 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 74 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__StartType_6,
#line 74 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Selector_7,
#line 74 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__SubType_8)
#line 74 "ctgc.selector.m"
{
#line 347 "ctgc.selector.m"
  while (MR_TRUE)
#line 347 "ctgc.selector.m"
    {
#line 347 "ctgc.selector.m"
      /* tailcall optimized into a loop */
#line 347 "ctgc.selector.m"
      {
#line 347 "ctgc.selector.m"
        MR_bool transform_hlds__ctgc__selector__succeeded;

#line 347 "ctgc.selector.m"
        if ((transform_hlds__ctgc__selector__Selector_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "ctgc.selector.m"
          {
#line 357 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__SubType_8 = transform_hlds__ctgc__selector__StartType_6;
#line 357 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 357 "ctgc.selector.m"
          }
#line 347 "ctgc.selector.m"
        else
#line 347 "ctgc.selector.m"
          {
#line 347 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__UnitSelector_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 0)));
#line 347 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__RestSelector_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__Selector_7, (MR_Integer) 1)));
#line 347 "ctgc.selector.m"
            MR_Word transform_hlds__ctgc__selector__SubType0_13;

#line 351 "ctgc.selector.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__selector__UnitSelector_9)) == (MR_mktag((MR_Integer) 0))))
#line 349 "ctgc.selector.m"
              {
#line 349 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
#line 349 "ctgc.selector.m"
                MR_Integer transform_hlds__ctgc__selector__Index_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 1)));
#line 383 "ctgc.selector.m"
                MR_Word transform_hlds__ctgc__selector__ArgTypes_19;

#line 379 "ctgc.selector.m"
                {
#line 379 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__ArgTypes_19);
                }
#line 383 "ctgc.selector.m"
                if (transform_hlds__ctgc__selector__succeeded)
#line 382 "ctgc.selector.m"
                  {
#line 382 "ctgc.selector.m"
                    MR_Box transform_hlds__ctgc__selector__conv0_SubType0_13;

#line 382 "ctgc.selector.m"
                    {
#line 382 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__conv0_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_19, transform_hlds__ctgc__selector__Index_12);
                    }
#line 382 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv0_SubType0_13);
#line 382 "ctgc.selector.m"
                    transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 382 "ctgc.selector.m"
                  }
#line 383 "ctgc.selector.m"
                else
#line 393 "ctgc.selector.m"
                  {
#line 393 "ctgc.selector.m"
                    MR_Word transform_hlds__ctgc__selector__CtorDefn_20;

#line 384 "ctgc.selector.m"
                    {
#line 384 "ctgc.selector.m"
                      transform_hlds__ctgc__selector__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__StartType_6, transform_hlds__ctgc__selector__ConsId_11, &transform_hlds__ctgc__selector__CtorDefn_20);
                    }
#line 393 "ctgc.selector.m"
                    if (transform_hlds__ctgc__selector__succeeded)
#line 387 "ctgc.selector.m"
                      {
#line 387 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 1)));
#line 387 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 4)));
#line 386 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___TVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 0)));
#line 386 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___KindMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 2)));
#line 386 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___Constraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 3)));
#line 386 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector___RetType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__CtorDefn_20, (MR_Integer) 5)));
#line 388 "ctgc.selector.m"
                        MR_Box transform_hlds__ctgc__selector__conv1_SubType0_13;
#line 390 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__TypeInfo_27_35;
#line 390 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__TVar_26;
#line 390 "ctgc.selector.m"
                        MR_Word transform_hlds__ctgc__selector__V_27_27;

#line 388 "ctgc.selector.m"
                        {
#line 388 "ctgc.selector.m"
                          transform_hlds__ctgc__selector__conv1_SubType0_13 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__ctgc__selector__ArgTypes_31, transform_hlds__ctgc__selector__Index_12);
                        }
#line 388 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) transform_hlds__ctgc__selector__conv1_SubType0_13);
#line 390 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__selector__SubType0_13)) == (MR_mktag((MR_Integer) 0)));
#line 390 "ctgc.selector.m"
                        if (transform_hlds__ctgc__selector__succeeded)
#line 390 "ctgc.selector.m"
                          {
#line 390 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__TVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 0)));
#line 390 "ctgc.selector.m"
                            transform_hlds__ctgc__selector__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__SubType0_13, (MR_Integer) 1)));
#line 4379 "transform_hlds.ctgc.selector.c"
                            transform_hlds__ctgc__selector__TypeInfo_27_35 = (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[1];
#line 391 "ctgc.selector.m"
                            {
#line 391 "ctgc.selector.m"
                              transform_hlds__ctgc__selector__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__selector__TypeInfo_27_35, ((MR_Box) (transform_hlds__ctgc__selector__TVar_26)), transform_hlds__ctgc__selector__ExistQVars_22);
                            }
#line 390 "ctgc.selector.m"
                          }
#line 389 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = !(transform_hlds__ctgc__selector__succeeded);
#line 387 "ctgc.selector.m"
                      }
#line 393 "ctgc.selector.m"
                    else
#line 394 "ctgc.selector.m"
                      {
#line 394 "ctgc.selector.m"
                        {
#line 394 "ctgc.selector.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", (MR_String) "type is both existential and non-existential");
                        }
#line 394 "ctgc.selector.m"
                        transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 394 "ctgc.selector.m"
                      }
#line 393 "ctgc.selector.m"
                  }
#line 349 "ctgc.selector.m"
              }
#line 351 "ctgc.selector.m"
            else
#line 352 "ctgc.selector.m"
              {
#line 352 "ctgc.selector.m"
                transform_hlds__ctgc__selector__SubType0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__UnitSelector_9, (MR_Integer) 0)));
#line 352 "ctgc.selector.m"
                transform_hlds__ctgc__selector__succeeded = MR_TRUE;
#line 352 "ctgc.selector.m"
              }
#line 347 "ctgc.selector.m"
            if (transform_hlds__ctgc__selector__succeeded)
#line 354 "ctgc.selector.m"
              {
#line 354 "ctgc.selector.m"
                /* direct tailcall eliminated */
#line 354 "ctgc.selector.m"
                {
#line 354 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__StartType__tmp_copy_6 = transform_hlds__ctgc__selector__SubType0_13;
#line 354 "ctgc.selector.m"
                  MR_Word transform_hlds__ctgc__selector__Selector__tmp_copy_7 = transform_hlds__ctgc__selector__RestSelector_10;

#line 354 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__Selector_7 = transform_hlds__ctgc__selector__Selector__tmp_copy_7;
#line 354 "ctgc.selector.m"
                  transform_hlds__ctgc__selector__StartType_6 = transform_hlds__ctgc__selector__StartType__tmp_copy_6;
#line 354 "ctgc.selector.m"
                }
#line 354 "ctgc.selector.m"
                continue;
#line 354 "ctgc.selector.m"
              }
#line 347 "ctgc.selector.m"
          }
#line 347 "ctgc.selector.m"
        return transform_hlds__ctgc__selector__succeeded;
#line 347 "ctgc.selector.m"
      }
#line 347 "ctgc.selector.m"
      break;
#line 347 "ctgc.selector.m"
    }
#line 74 "ctgc.selector.m"
}

#line 68 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(
#line 68 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_5,
#line 68 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Type_6,
#line 68 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10,
#line 68 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)
#line 68 "ctgc.selector.m"
{
#line 404 "ctgc.selector.m"
  {
#line 404 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 404 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__CallTableTipVar_18;
#line 404 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__Status_19;

#line 404 "ctgc.selector.m"
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
#line 404 "ctgc.selector.m"
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

#line 4508 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__CallTableTipVar_18  = (MR_Box) CallTableTipVar;
	 transform_hlds__ctgc__selector__Status_19  = status;
#line 404 "ctgc.selector.m"
}
#line 404 "ctgc.selector.m"
#line 404 "ctgc.selector.m"
    switch (transform_hlds__ctgc__selector__Status_19) {
#line 404 "ctgc.selector.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "ctgc.selector.m"
      case (MR_Integer) 1:
#line 404 "ctgc.selector.m"
        {
#line 404 "ctgc.selector.m"
          {
#line 404 "ctgc.selector.m"
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred transform_hlds.ctgc.selector.normalize_selector_with_type_information/4");
#line 404 "ctgc.selector.m"
            return;
          }
#line 404 "ctgc.selector.m"
        }
#line 404 "ctgc.selector.m"
        break;
#line 404 "ctgc.selector.m"
      case (MR_Integer) 0:
#line 404 "ctgc.selector.m"
        {
#line 402 "ctgc.selector.m"
          {
#line 402 "ctgc.selector.m"
            transform_hlds__ctgc__selector__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__ctgc__selector__Type_6);
          }
#line 404 "ctgc.selector.m"
          if (transform_hlds__ctgc__selector__succeeded)
#line 404 "ctgc.selector.m"
            *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10;
#line 404 "ctgc.selector.m"
          else
#line 405 "ctgc.selector.m"
            {
#line 405 "ctgc.selector.m"
              MR_Word transform_hlds__ctgc__selector__BranchMap1_9;
#line 405 "ctgc.selector.m"
              MR_Word transform_hlds__ctgc__selector__V_25_25;

#line 507 "ctgc.selector.m"
              {
#line 507 "ctgc.selector.m"
                transform_hlds__ctgc__selector__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "ctgc.selector.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__selector__Type_6));
#line 507 "ctgc.selector.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "ctgc.selector.m"
              }
#line 507 "ctgc.selector.m"
              {
#line 507 "ctgc.selector.m"
                transform_hlds__ctgc__selector__BranchMap1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ctgc.selector.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 0) = ((MR_Box) (transform_hlds__ctgc__selector__V_25_25));
#line 507 "ctgc.selector.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__BranchMap1_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "ctgc.selector.m"
              }
#line 407 "ctgc.selector.m"
              {
#line 407 "ctgc.selector.m"
                transform_hlds__ctgc__selector__do_normalize_selector_6_p_0(transform_hlds__ctgc__selector__ModuleInfo_5, transform_hlds__ctgc__selector__Type_6, transform_hlds__ctgc__selector__BranchMap1_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_0_10, transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11);
              }
#line 405 "ctgc.selector.m"
            }
#line 404 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
	arg0 = (MR_Word) ((MR_Box) (*transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11)) ;
	save_arg_typeinfo0 =  (MR_Word) &transform_hlds__ctgc__selector_scalar_common_1[2] ;
		{
#line 404 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 4602 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
#line 404 "ctgc.selector.m"
}
#line 404 "ctgc.selector.m"
        }
#line 404 "ctgc.selector.m"
        break;
#line 404 "ctgc.selector.m"
      case (MR_Integer) 2:
#line 404 "ctgc.selector.m"
        {
#line 404 "ctgc.selector.m"
          MR_Box transform_hlds__ctgc__selector__conv0_restore_arg0;

#line 404 "ctgc.selector.m"
{
#define MR_PROC_LABEL transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) transform_hlds__ctgc__selector__CallTableTipVar_18 ;
		{
#line 404 "ctgc.selector.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 4633 "transform_hlds.ctgc.selector.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__ctgc__selector__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 404 "ctgc.selector.m"
          *transform_hlds__ctgc__selector__STATE_VARIABLE_Selector_11 = ((MR_Word) transform_hlds__ctgc__selector__conv0_restore_arg0);
#line 404 "ctgc.selector.m"
}
#line 404 "ctgc.selector.m"
        }
#line 404 "ctgc.selector.m"
        break;
#line 404 "ctgc.selector.m"
    }
#line 404 "ctgc.selector.m"
  }
#line 68 "ctgc.selector.m"
}

#line 59 "ctgc.selector.m"
MR_bool MR_CALL 
transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(
#line 59 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ModuleInfo_7,
#line 59 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Normalization_8,
#line 59 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S1_9,
#line 59 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S2_10,
#line 59 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__MainType_11,
#line 59 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__Extension_12)
#line 59 "ctgc.selector.m"
{
#line 142 "ctgc.selector.m"
  {
#line 142 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 142 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__NormS1_13;
#line 142 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__NormS2_14;

#line 148 "ctgc.selector.m"
#line 148 "ctgc.selector.m"
    switch (transform_hlds__ctgc__selector__Normalization_8) {
#line 148 "ctgc.selector.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 148 "ctgc.selector.m"
      case (MR_Integer) 1:
#line 145 "ctgc.selector.m"
        {
#line 146 "ctgc.selector.m"
          transform_hlds__ctgc__selector__NormS1_13 = transform_hlds__ctgc__selector__S1_9;
#line 147 "ctgc.selector.m"
          transform_hlds__ctgc__selector__NormS2_14 = transform_hlds__ctgc__selector__S2_10;
#line 145 "ctgc.selector.m"
        }
#line 148 "ctgc.selector.m"
        break;
#line 148 "ctgc.selector.m"
      case (MR_Integer) 0:
#line 149 "ctgc.selector.m"
        {
#line 150 "ctgc.selector.m"
          {
#line 150 "ctgc.selector.m"
            transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S1_9, &transform_hlds__ctgc__selector__NormS1_13);
          }
#line 152 "ctgc.selector.m"
          {
#line 152 "ctgc.selector.m"
            transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__S2_10, &transform_hlds__ctgc__selector__NormS2_14);
          }
#line 149 "ctgc.selector.m"
        }
#line 148 "ctgc.selector.m"
        break;
#line 148 "ctgc.selector.m"
    }
#line 156 "ctgc.selector.m"
    {
#line 156 "ctgc.selector.m"
      transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS1_13);
    }
#line 156 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 157 "ctgc.selector.m"
      {
#line 157 "ctgc.selector.m"
        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__only_term_selectors_1_p_0(transform_hlds__ctgc__selector__NormS2_14);
      }
#line 161 "ctgc.selector.m"
    if (transform_hlds__ctgc__selector__succeeded)
#line 178 "ctgc.selector.m"
      {
#line 178 "ctgc.selector.m"
        {
#line 178 "ctgc.selector.m"
          transform_hlds__ctgc__selector__succeeded = mercury__list__append_3_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__Extension_12, transform_hlds__ctgc__selector__NormS1_13);
        }
#line 178 "ctgc.selector.m"
      }
#line 161 "ctgc.selector.m"
    else
#line 162 "ctgc.selector.m"
      {
#line 162 "ctgc.selector.m"
        transform_hlds__ctgc__selector__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_2_5_p_0(transform_hlds__ctgc__selector__ModuleInfo_7, transform_hlds__ctgc__selector__NormS1_13, transform_hlds__ctgc__selector__NormS2_14, transform_hlds__ctgc__selector__MainType_11, transform_hlds__ctgc__selector__Extension_12);
      }
#line 142 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__succeeded;
#line 142 "ctgc.selector.m"
  }
#line 59 "ctgc.selector.m"
}

#line 48 "ctgc.selector.m"
void MR_CALL 
transform_hlds__ctgc__selector__selector_termshift_3_p_0(
#line 48 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S1_4,
#line 48 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__S2_5,
#line 48 "ctgc.selector.m"
  MR_Word * transform_hlds__ctgc__selector__S_6)
#line 48 "ctgc.selector.m"
{
#line 140 "ctgc.selector.m"
  {
#line 140 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 140 "ctgc.selector.m"
    {
#line 140 "ctgc.selector.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__ctgc__selector__S1_4, transform_hlds__ctgc__selector__S2_5, transform_hlds__ctgc__selector__S_6);
    }
#line 140 "ctgc.selector.m"
  }
#line 48 "ctgc.selector.m"
}

#line 137 "ctgc.selector.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0_1(
#line 137 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__closure_arg,
#line 137 "ctgc.selector.m"
  MR_Box transform_hlds__ctgc__selector__wrapper_arg_1)
#line 137 "ctgc.selector.m"
{
#line 137 "ctgc.selector.m"
  {
#line 137 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__wrapper_arg_2;
#line 137 "ctgc.selector.m"
    MR_Box transform_hlds__ctgc__selector__closure = transform_hlds__ctgc__selector__closure_arg;
#line 137 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7;

#line 137 "ctgc.selector.m"
    {
#line 137 "ctgc.selector.m"
      transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7 = transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__137__1_1_f_0(((MR_Word) transform_hlds__ctgc__selector__wrapper_arg_1));
    }
#line 137 "ctgc.selector.m"
    transform_hlds__ctgc__selector__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__selector__conv0_LambdaHeadVar__2_7));
#line 137 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__wrapper_arg_2;
#line 137 "ctgc.selector.m"
  }
#line 137 "ctgc.selector.m"
}

#line 44 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_from_list_1_f_0(
#line 44 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__Types_3)
#line 44 "ctgc.selector.m"
{
#line 137 "ctgc.selector.m"
  {
#line 137 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 137 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__HeadVar__2_2;

#line 137 "ctgc.selector.m"
    {
#line 137 "ctgc.selector.m"
      transform_hlds__ctgc__selector__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &transform_hlds__ctgc__selector_scalar_common_2[1], transform_hlds__ctgc__selector__Types_3);
    }
#line 137 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__HeadVar__2_2;
#line 137 "ctgc.selector.m"
  }
#line 44 "ctgc.selector.m"
}

#line 43 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__selector_init_2_f_0(
#line 43 "ctgc.selector.m"
  MR_Word transform_hlds__ctgc__selector__ConsId_4,
#line 43 "ctgc.selector.m"
  MR_Integer transform_hlds__ctgc__selector__Index_5)
#line 43 "ctgc.selector.m"
{
#line 109 "ctgc.selector.m"
  {
#line 109 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;
#line 109 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__HeadVar__3_3;
#line 109 "ctgc.selector.m"
    MR_Word transform_hlds__ctgc__selector__TermSel_6;

#line 115 "ctgc.selector.m"
#line 115 "ctgc.selector.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__selector__ConsId_4)) {
#line 115 "ctgc.selector.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 115 "ctgc.selector.m"
      case (MR_Integer) 0:
#line 132 "ctgc.selector.m"
        {
#line 133 "ctgc.selector.m"
          {
#line 133 "ctgc.selector.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
#line 132 "ctgc.selector.m"
        }
#line 115 "ctgc.selector.m"
        break;
#line 115 "ctgc.selector.m"
      case (MR_Integer) 1:
#line 132 "ctgc.selector.m"
        {
#line 133 "ctgc.selector.m"
          {
#line 133 "ctgc.selector.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
#line 132 "ctgc.selector.m"
        }
#line 115 "ctgc.selector.m"
        break;
#line 115 "ctgc.selector.m"
      case (MR_Integer) 2:
#line 132 "ctgc.selector.m"
        {
#line 133 "ctgc.selector.m"
          {
#line 133 "ctgc.selector.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
          }
#line 132 "ctgc.selector.m"
        }
#line 115 "ctgc.selector.m"
        break;
#line 115 "ctgc.selector.m"
      case (MR_Integer) 3:
#line 115 "ctgc.selector.m"
#line 115 "ctgc.selector.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__selector__ConsId_4, (MR_Integer) 0)))) {
#line 115 "ctgc.selector.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 115 "ctgc.selector.m"
          case (MR_Integer) 0:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 1:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 4:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 5:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 6:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 7:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 8:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 9:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 10:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 11:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 12:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 13:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 14:
#line 132 "ctgc.selector.m"
            {
#line 133 "ctgc.selector.m"
              {
#line 133 "ctgc.selector.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.selector", (MR_String) "function \140transform_hlds.ctgc.selector.selector_init\'/2", (MR_String) "cannot handle cons_id");
              }
#line 132 "ctgc.selector.m"
            }
#line 115 "ctgc.selector.m"
            break;
#line 115 "ctgc.selector.m"
          case (MR_Integer) 2:
#line 115 "ctgc.selector.m"
          case (MR_Integer) 3:
#line 114 "ctgc.selector.m"
            {
#line 114 "ctgc.selector.m"
              transform_hlds__ctgc__selector__TermSel_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "ctgc.selector.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 0) = ((MR_Box) (transform_hlds__ctgc__selector__ConsId_4));
#line 114 "ctgc.selector.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__selector__TermSel_6, 1) = ((MR_Box) (transform_hlds__ctgc__selector__Index_5));
#line 114 "ctgc.selector.m"
            }
#line 115 "ctgc.selector.m"
            break;
#line 115 "ctgc.selector.m"
        }
#line 115 "ctgc.selector.m"
        break;
#line 115 "ctgc.selector.m"
    }
#line 109 "ctgc.selector.m"
    {
#line 109 "ctgc.selector.m"
      transform_hlds__ctgc__selector__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__selector__TermSel_6));
#line 109 "ctgc.selector.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__selector__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "ctgc.selector.m"
    }
#line 109 "ctgc.selector.m"
    return transform_hlds__ctgc__selector__HeadVar__3_3;
#line 109 "ctgc.selector.m"
  }
#line 43 "ctgc.selector.m"
}

#line 42 "ctgc.selector.m"
MR_Word MR_CALL 
transform_hlds__ctgc__selector__top_selector_0_f_0(void)
#line 42 "ctgc.selector.m"
{
#line 107 "ctgc.selector.m"
  {
#line 107 "ctgc.selector.m"
    MR_bool transform_hlds__ctgc__selector__succeeded;

#line 107 "ctgc.selector.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "ctgc.selector.m"
  }
#line 42 "ctgc.selector.m"
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
