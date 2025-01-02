/*
** Automatically generated from `mmc_analysis.m'
** by the Mercury compiler,
** version rotd-2025-01-02
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


// :- module transform_hlds.mmc_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__mmc_analysis__init
ENDINIT
*/

#include "transform_hlds.mmc_analysis.mih"


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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.tabling_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "transform_hlds.unused_args.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"



struct transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0_s {
  MR_Box * transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_2;
  MR_Box * transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_3;
  MR_Cont transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont;
  void * transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont_env_ptr;
  MR_String transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv1_Name_4;
  MR_Word transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv0_Analysis_5;
};


static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_ordinal_ordered_mmc_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1];

static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1];

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FileName_15);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * MaybeFileName_13);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1(
  MR_String * Name_4,
  MR_Word * Analysis_5,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0(
  MR_String Name_4,
  MR_Word * Analysis_5);

static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0(void);

static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10001(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_1[16][3];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_2[10][2];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_3[10][5];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_4[6][6];


struct transform_hlds__mmc_analysis__vector_common_type_5_0_s {
  const MR_String transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_0;
  const MR_Word transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct transform_hlds__mmc_analysis__vector_common_type_5_0_s transform_hlds__mmc_analysis_vector_common_5[12];



static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_1[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[5])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[4])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_2[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_3[10][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[0])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[1])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[2])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[3])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[4])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[5])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[5])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[6])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[6])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[7])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[7])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[8])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[8])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[9])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[9])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_4[6][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[2])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[3])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[4])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[5])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[6])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[7])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[8])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[9])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};


static /* final */ const struct transform_hlds__mmc_analysis__vector_common_type_5_0_s transform_hlds__mmc_analysis_vector_common_5[12] = {
  /* row   0 */
  {
    (MR_String) "exception_analysis",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[10])
  },
  /* row   1 */
  {
    (MR_String) "mm_tabling_analysis",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[11])
  },
  /* row   2 */
  {
    (MR_String) "structure_reuse",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[12])
  },
  /* row   3 */
  {
    (MR_String) "structure_sharing",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[13])
  },
  /* row   4 */
  {
    (MR_String) "trail_usage",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[14])
  },
  /* row   5 */
  {
    (MR_String) "unused_args",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[15])
  },
  /* row   6 */
  {
    (MR_String) "mm_tabling_analysis",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[11])
  },
  /* row   7 */
  {
    (MR_String) "trail_usage",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[14])
  },
  /* row   8 */
  {
    (MR_String) "exception_analysis",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[10])
  },
  /* row   9 */
  {
    (MR_String) "unused_args",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[15])
  },
  /* row  10 */
  {
    (MR_String) "structure_sharing",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[13])
  },
  /* row  11 */
  {
    (MR_String) "structure_reuse",
    (MR_Word) (&transform_hlds__mmc_analysis_scalar_common_1[12])
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0 = {
  (MR_String) "mmc",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_ordinal_ordered_mmc_0[1] = { &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0 };

static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1] = { &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0 };

static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__mmc_analysis____Unify____mmc_0_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis____Compare____mmc_0_0_10001)),
  (MR_String) "transform_hlds.mmc_analysis",
  (MR_String) "mmc",
  { transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0 },
  { transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_ordinal_ordered_mmc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0_10001))
};

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FileName_15)
{
  MR_String _FileNameProposed_18;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_10, (MR_String) "predicate \140transform_hlds.mmc_analysis.mmc_module_name_to_write_file_name\'/6", Ext_11, ModuleName_12, FileName_15, &_FileNameProposed_18);
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * MaybeFileName_13)
{
  MR_Word SearchAuthDirs_19;
  MR_String FileName0_20;
  MR_String _FileName0Proposed_21;
  MR_Word _SearchDirs_22;

  parse_tree__file_names__module_name_to_search_file_name_8_p_2(Globals_10, (MR_String) "predicate \140transform_hlds.mmc_analysis.mmc_module_name_to_read_file_name\'/6", Ext_11, ModuleName_12, (MR_Word) ((MR_Unsigned) 8U), &SearchAuthDirs_19, &FileName0_20, &_FileName0Proposed_21);
  parse_tree__find_module__search_for_file_6_p_0(SearchAuthDirs_19, FileName0_20, &_SearchDirs_22, MaybeFileName_13);
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1(
  MR_String * Name_4,
  MR_Word * Analysis_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *Name_4 = ((&transform_hlds__mmc_analysis_vector_common_5[6 + slot_0]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_0;
    *Analysis_5 = ((&transform_hlds__mmc_analysis_vector_common_5[6 + slot_0]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 6));
}

static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0(
  MR_String Name_4,
  MR_Word * Analysis_5)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(Name_4, ((&transform_hlds__mmc_analysis_vector_common_5[0 + mid_2]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *Analysis_5 = ((&transform_hlds__mmc_analysis_vector_common_5[0 + mid_2]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0(void)
{
  return (MR_String) "mmc";
}

void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ModuleName_6,
  MR_Word FuncId_7,
  MR_Word * PPId_8)
{
  MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, FuncId_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_String FuncName_10 = ((MR_String) ((MR_hl_field(0, FuncId_7, (MR_Integer) 1))));
  MR_Word PredFormArity_11 = ((MR_Word) ((MR_hl_field(0, FuncId_7, (MR_Integer) 2))));
  MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(0, FuncId_7, (MR_Integer) 3))));
  MR_Word PredTable_13;
  MR_Word PredIds_14;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_13);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable_13, (MR_Integer) 0, PredOrFunc_9, ModuleName_6, FuncName_10, PredFormArity_11, &PredIds_14);
  if ((PredIds_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "no predicate");
      return;
    }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, PredIds_14, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, PredIds_14, (MR_Integer) 0))));

    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *PPId_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_12));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "more than one predicate");
        return;
      }
  }
}

void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word * PredModule_7,
  MR_Word * FuncId_8)
{
  MR_String PredName_9;
  MR_Word PredOrFunc_10;
  MR_Word PredFormArity_11;

  *PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  PredFormArity_11 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FuncId_8 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredName_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredFormArity_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcId_6));
  }
}

void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word * PredModule_8,
  MR_Word * FuncId_9)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word PredInfo_10;
  MR_String PredName_11;
  MR_Word PredOrFunc_12;
  MR_Word PredFormArity_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_10);
  *PredModule_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_10);
  PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
  PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
  PredFormArity_13 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FuncId_9 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredName_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredFormArity_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcId_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__mmc_analysis____Unify____mmc_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__mmc_analysis____Compare____mmc_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__compiler_name_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Analysis_5;

  succeeded = transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_0(((MR_String) (wrapper_arg_2)), &conv0_Analysis_5);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Analysis_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10001(
  void * env_ptr_arg)
{
  struct transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0_s * env_ptr = (struct transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv1_Name_4));
  *((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_3) = ((MR_Box) ((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv0_Analysis_5));
  ((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont)((env_ptr)->transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0_s env;

  (env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__wrapper_arg_3 = wrapper_arg_3;
  (env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont = cont;
  (env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1(&(env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv1_Name_4, &(env).transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10002_env_0__conv0_Analysis_5, transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__analyses_3_3_p_1_10001, &env);
  }
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeFileName_13;

  transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_read_file_name_7_7_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_MaybeFileName_13);
  *wrapper_arg_5 = ((MR_Box) (conv0_MaybeFileName_13));
}

static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_15;

  transform_hlds__mmc_analysis__ClassMethod_for_analysis__framework__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__framework__module_name_to_write_file_name_7_7_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_FileName_15);
  *wrapper_arg_5 = ((MR_Box) (conv0_FileName_15));
}

void mercury__transform_hlds__mmc_analysis__init(void)
{
}

void mercury__transform_hlds__mmc_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0);
}

void mercury__transform_hlds__mmc_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__mmc_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.mmc_analysis.
