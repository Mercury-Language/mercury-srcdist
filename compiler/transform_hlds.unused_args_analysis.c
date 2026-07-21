/*
** Automatically generated from `unused_args_analysis.m'
** by the Mercury compiler,
** version rotd-2026-07-21
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


// :- module transform_hlds.unused_args_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args_analysis__init
ENDINIT
*/

#include "transform_hlds.unused_args_analysis.mih"


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
#include "term_conversion.mih"
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
#include "hlds.goal_refs.mih"
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
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_analysis__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_answer_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_functor_desc_unused_args_call_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_ordinal_ordered_unused_args_call_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_name_ordered_unused_args_call_0[1];

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_call_0[1];

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_func_info_0[1];

static const MR_NotagFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_func_info_0;

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static void MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22);

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_for_ppid_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CalleePredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_17,
  MR_Word * STATE_VARIABLE_AnalysisInfo_18);

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CallerPredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13);

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_for_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcToUnusedArgsMap_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_19,
  MR_Word * STATE_VARIABLE_AnalysisInfo_20);

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcToUnusedArgsMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13);

static void MR_CALL 
transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_5[1][1];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_6[1][8];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_8[1][10];




static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_4[1][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_5[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "any")) },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_analysis_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_analysis__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_analysis__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_answer_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args_answer",
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_analysis__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_String) "args",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis____Compare____unused_args_answer_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_analysis",
  (MR_String) "unused_args_answer",
  { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_answer_0 },
  { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_answer_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_answer_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_ordinal_ordered_unused_args_call_0[1] = { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_functor_desc_unused_args_call_0_0 };

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_name_ordered_unused_args_call_0[1] = { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_functor_desc_unused_args_call_0_0 };

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__unused_args_analysis____Unify____unused_args_call_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis____Compare____unused_args_call_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_analysis",
  (MR_String) "unused_args_call",
  { transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_name_ordered_unused_args_call_0 },
  { transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__enum_ordinal_ordered_unused_args_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_call_0,

};

static const MR_Integer transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_func_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args_analysis____Unify____unused_args_func_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis____Compare____unused_args_func_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_analysis",
  (MR_String) "unused_args_func_info",
  { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_func_info_0 },
  { &transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__notag_functor_desc_unused_args_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__functor_number_map_unused_args_func_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001))
};

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(0, Var_5, 0))));
        succeeded = (strcmp(Var_6, (MR_String) "any") == 0);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_5[0]));
    MR_hl_field(0, Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Args_3;
  MR_Box conv0_Args_3;

  succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_1[0]), Term_4, &conv0_Args_3);
  if (succeeded)
  {
    Args_3 = ((MR_Word) (conv0_Args_3));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) (Args_3);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Term_4;
  MR_Word Args_3 = (MR_Word) (HeadVar__1_1);

  mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Args_3)), &Term_4);
  return Term_4;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0(Args_3, Args_10);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;
  MR_Word Args1_7 = (MR_Word) (Answer1_5);
  MR_Word Args2_8 = (MR_Word) (Answer2_6);
  MR_Word Var_11;
  MR_Word Var_12;

  Var_11 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args2_8);
  Var_12 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args1_7);
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_11, Var_12);
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22)
{
  MR_Word PredId_23;
  MR_Word PredInfo_25;
  MR_Word PredFormArity_26;
  MR_Word Var_27;

  transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(ModuleInfo_17, ModuleName_18, FuncId_19, &Var_27);
  PredId_23 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_23, &PredInfo_25);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_25, &PredFormArity_26);
  *FuncInfo_22 = (MR_Word) (PredFormArity_26);
}

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__3_3;
  MR_Integer Arity_10;
  MR_Word Var_24 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_25;

  Arity_10 = (MR_Integer) (Var_24);
  Var_25 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Arity_10);
  HeadVar__3_3 = (MR_Word) (Var_25);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 3;
}

static MR_String MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void)
{
  return (MR_String) "unused_args";
}

void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_func_info_0_0(
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
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_func_info_0_0(
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
    MR_Integer Var_8 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_9 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_8 == Var_9);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_call_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__unused_args_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_97_108_121_115_105_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
transform_hlds__unused_args_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_97_110_97_108_121_115_105_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_call_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_answer_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_for_ppid_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CalleePredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_17,
  MR_Word * STATE_VARIABLE_AnalysisInfo_18)
{
  MR_bool succeeded;
  MR_Word CalleePredId_8 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_6, 0))));
  MR_Word CalleePredInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, CalleePredId_8, &CalleePredInfo_10);
  succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(CalleePredInfo_10);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(CalleePredInfo_10);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word CalleeModule_11;
    MR_Word CalleeFuncId_12;
    MR_Word FuncInfo_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_FuncInfo_16;

    transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_5, CalleePredProcId_6, &CalleeModule_11, &CalleeFuncId_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_4[0]), 0)), 10))));
    func_0(((MR_Box) ((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_4[0]))), ((MR_Box) (ModuleInfo_5)), ((MR_Box) (CalleeModule_11)), ((MR_Box) (CalleeFuncId_12)), &conv1_FuncInfo_16);
    FuncInfo_16 = ((MR_Word) (conv1_FuncInfo_16));
    analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_4[0]), CalleeModule_11, CalleeFuncId_12, ((MR_Box) (FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_AnalysisInfo_0_17, STATE_VARIABLE_AnalysisInfo_18);
  }
  else
    *STATE_VARIABLE_AnalysisInfo_18 = STATE_VARIABLE_AnalysisInfo_0_17;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_18;

  transform_hlds__unused_args_analysis__record_intermod_dependencies_for_ppid_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_18));
}

static void MR_CALL 
transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CallerPredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13)
{
  MR_Word CallerProcInfo_9;
  MR_Word Goal_10;
  MR_Word CalleePredProcIds_11;
  MR_Word Var_14;
  MR_Word _CallerPredInfo_8;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_13;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, CallerPredProcId_6, &_CallerPredInfo_8, &CallerProcInfo_9);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(CallerProcInfo_9, &Goal_10);
  hlds__goal_refs__pred_proc_ids_called_from_goal_2_p_0(Goal_10, &CalleePredProcIds_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_7[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, CalleePredProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
  *STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_for_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcToUnusedArgsMap_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_19,
  MR_Word * STATE_VARIABLE_AnalysisInfo_20)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_8, PredInfo_11, ProcId_12);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_11);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word PPId_14;
    MR_Word Answer_16;
    MR_Word ModuleName_17;
    MR_Word FuncId_18;
    MR_Word UnusedArgs_15;
    MR_Box conv0_UnusedArgs_15;

    {
      PPId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PPId_14, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(0, PPId_14, 1) = ((MR_Box) (ProcId_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_1[0]), ProcToUnusedArgsMap_9, ((MR_Box) (PPId_14)), &conv0_UnusedArgs_15);
    if (succeeded)
    {
      UnusedArgs_15 = ((MR_Word) (conv0_UnusedArgs_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Answer_16 = (MR_Word) (UnusedArgs_15);
    else
      Answer_16 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_8, PPId_14, &ModuleName_17, &FuncId_18);
    analysis__operations__record_result_7_p_0((MR_Word) (&transform_hlds__unused_args_analysis_scalar_common_4[0]), ModuleName_17, FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Answer_16)), (MR_Integer) 2, STATE_VARIABLE_AnalysisInfo_0_19, STATE_VARIABLE_AnalysisInfo_20);
  }
  else
    *STATE_VARIABLE_AnalysisInfo_20 = STATE_VARIABLE_AnalysisInfo_0_19;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_20;

  transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_for_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_20));
}

static void MR_CALL 
transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcToUnusedArgsMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13)
{
  MR_Word PredInfo_10;
  MR_Word ProcIds_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
  ProcIds_11 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_10);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (ProcToUnusedArgsMap_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (PredId_8));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (PredInfo_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, ProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
  *STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_13));
}

MR_String MR_CALL 
transform_hlds__unused_args_analysis__analysis_name_0_f_0(void)
{
  return (MR_String) "unused_args";
}

MR_Word MR_CALL 
transform_hlds__unused_args_analysis__get_unused_args_1_f_0(
  MR_Word UnusedArgs_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (UnusedArgs_3);

  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args_analysis__record_intermod_dependencies_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args_analysis__maybe_record_intermod_unused_args_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_13));
}

void MR_CALL 
transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0(
  MR_Word ProcToUnusedArgsMap_5,
  MR_Word FixpointPredProcIds_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word AnalysisInfo0_8;
  MR_Word PredIds_9;
  MR_Word AnalysisInfo1_10;
  MR_Word AnalysisInfo_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv1_AnalysisInfo1_10;
  MR_Box conv3_AnalysisInfo_11;

  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &AnalysisInfo0_8);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredIds_9);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_6[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (ProcToUnusedArgsMap_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, PredIds_9, ((MR_Box) (AnalysisInfo0_8)), &conv1_AnalysisInfo1_10);
  AnalysisInfo1_10 = ((MR_Word) (conv1_AnalysisInfo1_10));
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__unused_args_analysis_scalar_common_7[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__unused_args_analysis__record_analysis_unused_args_4_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_15, FixpointPredProcIds_6, ((MR_Box) (AnalysisInfo1_10)), &conv3_AnalysisInfo_11);
  AnalysisInfo_11 = ((MR_Word) (conv3_AnalysisInfo_11));
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_analysis____Compare____unused_args_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_analysis____Unify____unused_args_call_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_analysis____Compare____unused_args_call_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis____Unify____unused_args_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_analysis____Unify____unused_args_func_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_analysis____Compare____unused_args_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_analysis____Compare____unused_args_func_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  conv0_Term_4 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncInfo_22;

  transform_hlds__unused_args_analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_FuncInfo_22);
  *wrapper_arg_6 = ((MR_Box) (conv0_FuncInfo_22));
}

void mercury__transform_hlds__unused_args_analysis__init(void)
{
}

void mercury__transform_hlds__unused_args_analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0);
}

void mercury__transform_hlds__unused_args_analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args_analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args_analysis.
