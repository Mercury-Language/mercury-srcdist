/*
** Automatically generated from `type_class_info.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module backend_libs.type_class_info. */
/* :- implementation. */

/*
INIT mercury__backend_libs__type_class_info__init
ENDINIT
*/

#include "backend_libs.type_class_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_class_info__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(
  MR_Integer backend_libs__type_class_info__TVarLength_15,
  MR_Integer backend_libs__type_class_info__LastTVarNum_16);

static MR_Integer MR_CALL 
backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(
  MR_Word backend_libs__type_class_info__HeadVar__1_78);

static void MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(
  MR_Word backend_libs__type_class_info__ClassVarSet_11,
  MR_Word backend_libs__type_class_info__HeadVar__2_44,
  MR_String * backend_libs__type_class_info__HeadVar__3_45);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_tc_type_1_f_0(
  MR_Word backend_libs__type_class_info__Type_3);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_proc_label_2_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_4,
  MR_Word backend_libs__type_class_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_6,
  MR_Word backend_libs__type_class_info__ClassId_7,
  MR_Word backend_libs__type_class_info__InstanceDefn_8,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_14,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_15);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_5(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_4(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_3(
  MR_Box backend_libs__type_class_info__closure_arg);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__ClassId_6,
  MR_Word backend_libs__type_class_info__Instance_7);

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3);

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__HeadVar__2_2,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_9,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_10);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_id_2_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_4,
  MR_Word backend_libs__type_class_info__ClassProc_5);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_3(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box * backend_libs__type_class_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__HeadVar__2_2,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_16,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_17);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1);

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3);

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_1[7][3];

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_2[3][2];

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_3[2][7];

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_5[3][6];

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_6[1][8];




static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[0])),
    ((MR_Box) (backend_libs__type_class_info__generate_class_constraint_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_class_info__generate_class_decl_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[0])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[2])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_class_info__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &backend_libs__type_class_info__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static MR_bool MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(
  MR_Integer backend_libs__type_class_info__TVarLength_15,
  MR_Integer backend_libs__type_class_info__LastTVarNum_16)
{
  {
    MR_bool backend_libs__type_class_info__succeeded = (backend_libs__type_class_info__TVarLength_15 == backend_libs__type_class_info__LastTVarNum_16);

    return backend_libs__type_class_info__succeeded;
  }
}

static MR_Integer MR_CALL 
backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(
  MR_Word backend_libs__type_class_info__HeadVar__1_78)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Integer backend_libs__type_class_info__HeadVar__2_79;

    {
      backend_libs__type_class_info__HeadVar__2_79 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, backend_libs__type_class_info__HeadVar__1_78);
    }
    return backend_libs__type_class_info__HeadVar__2_79;
  }
}

static void MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(
  MR_Word backend_libs__type_class_info__ClassVarSet_11,
  MR_Word backend_libs__type_class_info__HeadVar__2_44,
  MR_String * backend_libs__type_class_info__HeadVar__3_45)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, backend_libs__type_class_info__ClassVarSet_11, backend_libs__type_class_info__HeadVar__2_44, backend_libs__type_class_info__HeadVar__3_45);
    }
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_tc_type_1_f_0(
  MR_Word backend_libs__type_class_info__Type_3)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__TCType_4;

    {
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_class_info__Type_3, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_class_info__TCType_4);
    }
    return backend_libs__type_class_info__TCType_4;
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_proc_label_2_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_4,
  MR_Word backend_libs__type_class_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__HeadVar__3_3;
    MR_Word backend_libs__type_class_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer backend_libs__type_class_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 1)));

    {
      backend_libs__type_class_info__HeadVar__3_3 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_class_info__ModuleInfo_4, backend_libs__type_class_info__PredId_5, backend_libs__type_class_info__ProcId_6);
    }
    return backend_libs__type_class_info__HeadVar__3_3;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_6,
  MR_Word backend_libs__type_class_info__ClassId_7,
  MR_Word backend_libs__type_class_info__InstanceDefn_8,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_14,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_15)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__ImportStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 3)));
    MR_Word backend_libs__type_class_info__Body_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 6)));
    MR_Word backend_libs__type_class_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 1)));
    MR_Word backend_libs__type_class_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 2)));
    MR_Word backend_libs__type_class_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 4)));
    MR_Word backend_libs__type_class_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 5)));
    MR_Word backend_libs__type_class_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 7)));
    MR_Word backend_libs__type_class_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 8)));
    MR_Word backend_libs__type_class_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__InstanceDefn_8, (MR_Integer) 9)));
    MR_Word backend_libs__type_class_info__Var_16;
    MR_Word backend_libs__type_class_info__Var_12;

    backend_libs__type_class_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_class_info__Body_11)) == (MR_mktag((MR_Integer) 1)));
    if (backend_libs__type_class_info__succeeded)
      {
        backend_libs__type_class_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_class_info__Body_11, (MR_Integer) 0)));
        {
          backend_libs__type_class_info__Var_16 = hlds__status__instance_status_defined_in_this_module_1_f_0(backend_libs__type_class_info__ImportStatus_10);
        }
        backend_libs__type_class_info__succeeded = (backend_libs__type_class_info__Var_16 == (MR_Integer) 1);
      }
    if (backend_libs__type_class_info__succeeded)
      {
        MR_Word backend_libs__type_class_info__RttiData_13;

        {
          backend_libs__type_class_info__RttiData_13 = backend_libs__type_class_info__generate_instance_decl_3_f_0(backend_libs__type_class_info__ModuleInfo_6, backend_libs__type_class_info__ClassId_7, backend_libs__type_class_info__InstanceDefn_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_class_info__RttiData_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_14));
        }
      }
    else
      *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_15 = backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_14;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_5(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv4_HeadVar__3_3;

    {
      backend_libs__type_class_info__conv4_HeadVar__3_3 = backend_libs__type_class_info__generate_method_proc_label_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv4_HeadVar__3_3));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_4(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv3_TCConstr_5;

    {
      backend_libs__type_class_info__conv3_TCConstr_5 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv3_TCConstr_5));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_3(
  MR_Box backend_libs__type_class_info__closure_arg)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;

    {
      backend_libs__type_class_info__succeeded = backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_class_info__succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Integer backend_libs__type_class_info__conv1_HeadVar__2_79;

    {
      backend_libs__type_class_info__conv1_HeadVar__2_79 = backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv1_HeadVar__2_79));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv0_TCType_4;

    {
      backend_libs__type_class_info__conv0_TCType_4 = backend_libs__type_class_info__generate_tc_type_1_f_0(((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv0_TCType_4));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__ClassId_6,
  MR_Word backend_libs__type_class_info__Instance_7)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__RttiData_8;
    MR_Word backend_libs__type_class_info__TypeCtorInfo_77_77;
    MR_Word backend_libs__type_class_info__TCName_9;
    MR_Word backend_libs__type_class_info__InstanceTypes_10;
    MR_Word backend_libs__type_class_info__InstanceTCTypes_11;
    MR_Word backend_libs__type_class_info__TVarSet_12;
    MR_Word backend_libs__type_class_info__TVars_13;
    MR_Word backend_libs__type_class_info__TVarNums_14;
    MR_Integer backend_libs__type_class_info__TVarLength_15;
    MR_Integer backend_libs__type_class_info__NumTypeVars_17;
    MR_Word backend_libs__type_class_info__Constraints_18;
    MR_Word backend_libs__type_class_info__TCConstraints_19;
    MR_Word backend_libs__type_class_info__MaybeInterface_20;
    MR_Word backend_libs__type_class_info__MethodProcLabels_22;
    MR_Word backend_libs__type_class_info__TCInstance_23;
    MR_Word backend_libs__type_class_info__Var_35;
    MR_Word backend_libs__type_class_info__Var_36;
    MR_Word backend_libs__type_class_info__Var_37;
    MR_Word backend_libs__type_class_info__Var_38;
    MR_Word backend_libs__type_class_info__Var_39;
    MR_Word backend_libs__type_class_info__Var_40;
    MR_Word backend_libs__type_class_info__Var_41;
    MR_Word backend_libs__type_class_info__Var_42;
    MR_Word backend_libs__type_class_info__Var_43;
    MR_Word backend_libs__type_class_info__Var_44;
    MR_Word backend_libs__type_class_info__Var_45;
    MR_Word backend_libs__type_class_info__Var_46;
    MR_Word backend_libs__type_class_info__Var_47;
    MR_Word backend_libs__type_class_info__Var_48;
    MR_Word backend_libs__type_class_info__Var_49;
    MR_Word backend_libs__type_class_info__Var_50;
    MR_Word backend_libs__type_class_info__Var_51;
    MR_Word backend_libs__type_class_info__Var_52;
    MR_Integer backend_libs__type_class_info__LastTVarNum_16;
    MR_Box backend_libs__type_class_info__conv2_LastTVarNum_16;
    MR_Word backend_libs__type_class_info__Var_53;
    MR_Word backend_libs__type_class_info__Var_54;
    MR_Word backend_libs__type_class_info__Var_55;
    MR_Word backend_libs__type_class_info__Var_56;
    MR_Word backend_libs__type_class_info__Var_57;
    MR_Word backend_libs__type_class_info__Var_58;
    MR_Word backend_libs__type_class_info__Var_59;
    MR_Word backend_libs__type_class_info__Var_60;
    MR_Word backend_libs__type_class_info__Var_61;
    MR_Word backend_libs__type_class_info__Var_62;
    MR_Word backend_libs__type_class_info__Var_63;
    MR_Word backend_libs__type_class_info__Var_64;
    MR_Word backend_libs__type_class_info__Var_65;
    MR_Word backend_libs__type_class_info__Var_66;
    MR_Word backend_libs__type_class_info__Var_67;
    MR_Word backend_libs__type_class_info__Var_68;
    MR_Word backend_libs__type_class_info__Var_69;
    MR_Word backend_libs__type_class_info__Var_70;

    {
      backend_libs__type_class_info__TCName_9 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__type_class_info__ClassId_6);
    }
    backend_libs__type_class_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 0)));
    backend_libs__type_class_info__InstanceTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 1)));
    backend_libs__type_class_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 2)));
    backend_libs__type_class_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 3)));
    backend_libs__type_class_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 4)));
    backend_libs__type_class_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 5)));
    backend_libs__type_class_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 6)));
    backend_libs__type_class_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 7)));
    backend_libs__type_class_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 8)));
    backend_libs__type_class_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 9)));
    {
      backend_libs__type_class_info__InstanceTCTypes_11 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__type_class_info_scalar_common_1[4], backend_libs__type_class_info__InstanceTypes_10);
    }
    backend_libs__type_class_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 0)));
    backend_libs__type_class_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 1)));
    backend_libs__type_class_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 2)));
    backend_libs__type_class_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 3)));
    backend_libs__type_class_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 4)));
    backend_libs__type_class_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 5)));
    backend_libs__type_class_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 6)));
    backend_libs__type_class_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 7)));
    backend_libs__type_class_info__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 8)));
    backend_libs__type_class_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 9)));
    {
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, backend_libs__type_class_info__TVarSet_12, &backend_libs__type_class_info__TVars_13);
    }
    backend_libs__type_class_info__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      backend_libs__type_class_info__TVarNums_14 = mercury__list__map_2_f_0((MR_Word) &backend_libs__type_class_info_scalar_common_2[2], backend_libs__type_class_info__TypeCtorInfo_77_77, (MR_Word) &backend_libs__type_class_info_scalar_common_1[5], backend_libs__type_class_info__TVars_13);
    }
    {
      backend_libs__type_class_info__TVarLength_15 = mercury__list__length_1_f_0(backend_libs__type_class_info__TypeCtorInfo_77_77, backend_libs__type_class_info__TVarNums_14);
    }
    {
      backend_libs__type_class_info__succeeded = mercury__list__last_2_p_0(backend_libs__type_class_info__TypeCtorInfo_77_77, backend_libs__type_class_info__TVarNums_14, &backend_libs__type_class_info__conv2_LastTVarNum_16);
    }
    if (backend_libs__type_class_info__succeeded)
      {
        backend_libs__type_class_info__LastTVarNum_16 = ((MR_Integer) backend_libs__type_class_info__conv2_LastTVarNum_16);
        backend_libs__type_class_info__succeeded = MR_TRUE;
      }
    if (backend_libs__type_class_info__succeeded)
      {
        MR_Word backend_libs__type_class_info__Var_26;

        {
          backend_libs__type_class_info__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_26, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_26, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_3));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_26, 3) = ((MR_Box) (backend_libs__type_class_info__TVarLength_15));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_26, 4) = ((MR_Box) (backend_libs__type_class_info__LastTVarNum_16));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_class_info__Var_26, (MR_String) "backend_libs.type_class_info", (MR_String) "function \140backend_libs.type_class_info.generate_instance_decl\'/3", (MR_String) "tvar num mismatch");
        }
        backend_libs__type_class_info__NumTypeVars_17 = backend_libs__type_class_info__TVarLength_15;
      }
    else
      backend_libs__type_class_info__NumTypeVars_17 = (MR_Integer) 0;
    backend_libs__type_class_info__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 0)));
    backend_libs__type_class_info__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 1)));
    backend_libs__type_class_info__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 2)));
    backend_libs__type_class_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 3)));
    backend_libs__type_class_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 4)));
    backend_libs__type_class_info__Constraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 5)));
    backend_libs__type_class_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 6)));
    backend_libs__type_class_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 7)));
    backend_libs__type_class_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 8)));
    backend_libs__type_class_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 9)));
    {
      backend_libs__type_class_info__TCConstraints_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_class_info_scalar_common_1[6], backend_libs__type_class_info__Constraints_18);
    }
    backend_libs__type_class_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 0)));
    backend_libs__type_class_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 1)));
    backend_libs__type_class_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 2)));
    backend_libs__type_class_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 3)));
    backend_libs__type_class_info__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 4)));
    backend_libs__type_class_info__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 5)));
    backend_libs__type_class_info__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 6)));
    backend_libs__type_class_info__MaybeInterface_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 7)));
    backend_libs__type_class_info__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 8)));
    backend_libs__type_class_info__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Instance_7, (MR_Integer) 9)));
    if ((backend_libs__type_class_info__MaybeInterface_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_class_info", (MR_String) "function \140backend_libs.type_class_info.generate_instance_decl\'/3", (MR_String) "no interface");
        }
      }
    else
      {
        MR_Word backend_libs__type_class_info__Interface_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_class_info__MaybeInterface_20, (MR_Integer) 0)));
        MR_Word backend_libs__type_class_info__Var_34;

        {
          backend_libs__type_class_info__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_34, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_34, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_5));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_34, 3) = ((MR_Box) (backend_libs__type_class_info__ModuleInfo_5));
        }
        {
          backend_libs__type_class_info__MethodProcLabels_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, backend_libs__type_class_info__Var_34, backend_libs__type_class_info__Interface_21);
        }
      }
    {
      backend_libs__type_class_info__TCInstance_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCInstance_23, 0) = ((MR_Box) (backend_libs__type_class_info__TCName_9));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCInstance_23, 1) = ((MR_Box) (backend_libs__type_class_info__InstanceTCTypes_11));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCInstance_23, 2) = ((MR_Box) (backend_libs__type_class_info__NumTypeVars_17));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCInstance_23, 3) = ((MR_Box) (backend_libs__type_class_info__TCConstraints_19));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCInstance_23, 4) = ((MR_Box) (backend_libs__type_class_info__MethodProcLabels_22));
    }
    backend_libs__type_class_info__RttiData_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) backend_libs__type_class_info__TCInstance_23);
    return backend_libs__type_class_info__RttiData_8;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_15;

    {
      backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1), ((MR_Word) backend_libs__type_class_info__wrapper_arg_2), &backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_15);
    }
    *backend_libs__type_class_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_15));
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__HeadVar__2_2,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_9,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_10)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__Instances_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word backend_libs__type_class_info__Var_11;
    MR_Box backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_10;

    {
      backend_libs__type_class_info__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_11, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_11, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decls_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_11, 3) = ((MR_Box) (backend_libs__type_class_info__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_11, 4) = ((MR_Box) (backend_libs__type_class_info__ClassId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &backend_libs__type_class_info_scalar_common_2[0], backend_libs__type_class_info__Var_11, backend_libs__type_class_info__Instances_7, ((MR_Box) (backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_9)), &backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_10);
    }
    *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_10 = ((MR_Word) backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_10);
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_id_2_f_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_4,
  MR_Word backend_libs__type_class_info__ClassProc_5)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__MethodId_6;
    MR_Word backend_libs__type_class_info__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassProc_5, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__PredInfo_9;
    MR_String backend_libs__type_class_info__MethodName_10;
    MR_Integer backend_libs__type_class_info__Arity_11;
    MR_Word backend_libs__type_class_info__PredOrFunc_12;
    MR_Integer backend_libs__type_class_info___ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassProc_5, (MR_Integer) 1)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(backend_libs__type_class_info__ModuleInfo_4, backend_libs__type_class_info__PredId_7, &backend_libs__type_class_info__PredInfo_9);
    }
    {
      backend_libs__type_class_info__MethodName_10 = hlds__hlds_pred__pred_info_name_1_f_0(backend_libs__type_class_info__PredInfo_9);
    }
    {
      backend_libs__type_class_info__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(backend_libs__type_class_info__PredInfo_9);
    }
    {
      backend_libs__type_class_info__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__type_class_info__PredInfo_9);
    }
    {
      backend_libs__type_class_info__MethodId_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__MethodId_6, 0) = ((MR_Box) (backend_libs__type_class_info__MethodName_10));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__MethodId_6, 1) = ((MR_Box) (backend_libs__type_class_info__Arity_11));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__MethodId_6, 2) = ((MR_Box) (backend_libs__type_class_info__PredOrFunc_12));
    }
    return backend_libs__type_class_info__MethodId_6;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_3(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv2_TCConstr_5;

    {
      backend_libs__type_class_info__conv2_TCConstr_5 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv2_TCConstr_5));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv1_MethodId_6;

    {
      backend_libs__type_class_info__conv1_MethodId_6 = backend_libs__type_class_info__generate_method_id_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv1_MethodId_6));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box * backend_libs__type_class_info__wrapper_arg_2)
{
  {
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_String backend_libs__type_class_info__conv0_HeadVar__3_45;

    {
      backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1), &backend_libs__type_class_info__conv0_HeadVar__3_45);
    }
    *backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv0_HeadVar__3_45));
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_5,
  MR_Word backend_libs__type_class_info__HeadVar__2_2,
  MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_16,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_17)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__ClassDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word backend_libs__type_class_info__ImportStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__InThisModule_10;
    MR_Word backend_libs__type_class_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 1)));
    MR_Word backend_libs__type_class_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 2)));
    MR_Word backend_libs__type_class_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 3)));
    MR_Word backend_libs__type_class_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 4)));
    MR_Word backend_libs__type_class_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 5)));
    MR_Word backend_libs__type_class_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 6)));
    MR_Word backend_libs__type_class_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 7)));
    MR_Word backend_libs__type_class_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 8)));
    MR_Word backend_libs__type_class_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 9)));

    {
      backend_libs__type_class_info__InThisModule_10 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(backend_libs__type_class_info__ImportStatus_9);
    }
    switch (backend_libs__type_class_info__InThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_17 = backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__type_class_info__TCId_11;
          MR_Word backend_libs__type_class_info__Supers_12;
          MR_Word backend_libs__type_class_info__TCSupers_13;
          MR_Word backend_libs__type_class_info__RttiData_15;
          MR_Word backend_libs__type_class_info__Var_19;
          MR_Word backend_libs__type_class_info__TCName_47;
          MR_Word backend_libs__type_class_info__ClassVars_48;
          MR_Word backend_libs__type_class_info__ClassVarSet_49;
          MR_Word backend_libs__type_class_info__VarNames_50;
          MR_Word backend_libs__type_class_info__Interface_51;
          MR_Word backend_libs__type_class_info__MethodIds_52;
          MR_Word backend_libs__type_class_info__Var_53;
          MR_Word backend_libs__type_class_info__Var_54;
          MR_Word backend_libs__type_class_info__Var_55;
          MR_Word backend_libs__type_class_info__Var_56;
          MR_Word backend_libs__type_class_info__Var_57;
          MR_Word backend_libs__type_class_info__Var_58;
          MR_Word backend_libs__type_class_info__Var_59;
          MR_Word backend_libs__type_class_info__Var_60;
          MR_Word backend_libs__type_class_info__Var_61;
          MR_Word backend_libs__type_class_info__Var_63;
          MR_Word backend_libs__type_class_info__Var_73;
          MR_Word backend_libs__type_class_info__Var_74;
          MR_Word backend_libs__type_class_info__Var_75;
          MR_Word backend_libs__type_class_info__Var_76;
          MR_Word backend_libs__type_class_info__Var_77;
          MR_Word backend_libs__type_class_info__Var_78;
          MR_Word backend_libs__type_class_info__Var_79;
          MR_Word backend_libs__type_class_info__Var_80;
          MR_Word backend_libs__type_class_info__Var_81;
          MR_Word backend_libs__type_class_info__Var_30;
          MR_Word backend_libs__type_class_info__Var_31;
          MR_Word backend_libs__type_class_info__Var_32;
          MR_Word backend_libs__type_class_info__Var_33;
          MR_Word backend_libs__type_class_info__Var_34;
          MR_Word backend_libs__type_class_info__Var_35;
          MR_Word backend_libs__type_class_info__Var_36;
          MR_Word backend_libs__type_class_info__Var_37;
          MR_Word backend_libs__type_class_info__Var_38;

          {
            backend_libs__type_class_info__TCName_47 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__type_class_info__ClassId_6);
          }
          backend_libs__type_class_info__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 0)));
          backend_libs__type_class_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 1)));
          backend_libs__type_class_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 2)));
          backend_libs__type_class_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 3)));
          backend_libs__type_class_info__ClassVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 4)));
          backend_libs__type_class_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 5)));
          backend_libs__type_class_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 6)));
          backend_libs__type_class_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 7)));
          backend_libs__type_class_info__ClassVarSet_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 8)));
          backend_libs__type_class_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 9)));
          {
            backend_libs__type_class_info__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_53, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_53, 1) = ((MR_Box) (backend_libs__type_class_info__generate_class_decl_4_p_0_1));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_53, 3) = ((MR_Box) (backend_libs__type_class_info__ClassVarSet_49));
          }
          {
            mercury__list__map_3_p_0((MR_Word) &backend_libs__type_class_info_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_class_info__Var_53, backend_libs__type_class_info__ClassVars_48, &backend_libs__type_class_info__VarNames_50);
          }
          backend_libs__type_class_info__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 0)));
          backend_libs__type_class_info__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 1)));
          backend_libs__type_class_info__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 2)));
          backend_libs__type_class_info__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 3)));
          backend_libs__type_class_info__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 4)));
          backend_libs__type_class_info__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 5)));
          backend_libs__type_class_info__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 6)));
          backend_libs__type_class_info__Interface_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 7)));
          backend_libs__type_class_info__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 8)));
          backend_libs__type_class_info__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 9)));
          {
            backend_libs__type_class_info__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_54, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_54, 1) = ((MR_Box) (backend_libs__type_class_info__generate_class_decl_4_p_0_2));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_54, 3) = ((MR_Box) (backend_libs__type_class_info__ModuleInfo_5));
          }
          {
            backend_libs__type_class_info__MethodIds_52 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, backend_libs__type_class_info__Var_54, backend_libs__type_class_info__Interface_51);
          }
          {
            backend_libs__type_class_info__TCId_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCId_11, 0) = ((MR_Box) (backend_libs__type_class_info__TCName_47));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCId_11, 1) = ((MR_Box) (backend_libs__type_class_info__VarNames_50));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCId_11, 2) = ((MR_Box) (backend_libs__type_class_info__MethodIds_52));
          }
          backend_libs__type_class_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 0)));
          backend_libs__type_class_info__Supers_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 1)));
          backend_libs__type_class_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 2)));
          backend_libs__type_class_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 3)));
          backend_libs__type_class_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 4)));
          backend_libs__type_class_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 5)));
          backend_libs__type_class_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 6)));
          backend_libs__type_class_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 7)));
          backend_libs__type_class_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 8)));
          backend_libs__type_class_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassDefn_7, (MR_Integer) 9)));
          {
            backend_libs__type_class_info__TCSupers_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_class_info_scalar_common_1[3], backend_libs__type_class_info__Supers_12);
          }
          {
            backend_libs__type_class_info__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_19, 0) = ((MR_Box) (backend_libs__type_class_info__TCId_11));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_19, 2) = ((MR_Box) (backend_libs__type_class_info__TCSupers_13));
          }
          backend_libs__type_class_info__RttiData_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) backend_libs__type_class_info__Var_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_class_info__RttiData_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_0_16));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_class_info__wrapper_arg_2;
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv0_TCType_4;

    {
      backend_libs__type_class_info__conv0_TCType_4 = backend_libs__type_class_info__generate_tc_type_1_f_0(((MR_Word) backend_libs__type_class_info__wrapper_arg_1));
    }
    backend_libs__type_class_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_class_info__conv0_TCType_4));
    return backend_libs__type_class_info__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0(
  MR_Word backend_libs__type_class_info__HeadVar__1_1)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__TCConstr_5;
    MR_Word backend_libs__type_class_info__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word backend_libs__type_class_info__ClassName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word backend_libs__type_class_info__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer backend_libs__type_class_info__Arity_6;
    MR_Word backend_libs__type_class_info__ClassId_7;
    MR_Word backend_libs__type_class_info__TCClassName_8;
    MR_Word backend_libs__type_class_info__ClassTypes_9;

    {
      backend_libs__type_class_info__Arity_6 = mercury__list__length_1_f_0(backend_libs__type_class_info__TypeCtorInfo_11_11, backend_libs__type_class_info__Types_4);
    }
    {
      backend_libs__type_class_info__ClassId_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassId_7, 0) = ((MR_Box) (backend_libs__type_class_info__ClassName_3));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__ClassId_7, 1) = ((MR_Box) (backend_libs__type_class_info__Arity_6));
    }
    {
      backend_libs__type_class_info__TCClassName_8 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__type_class_info__ClassId_7);
    }
    {
      backend_libs__type_class_info__ClassTypes_9 = mercury__list__map_2_f_0(backend_libs__type_class_info__TypeCtorInfo_11_11, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__type_class_info_scalar_common_1[2], backend_libs__type_class_info__Types_4);
    }
    {
      backend_libs__type_class_info__TCConstr_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCConstr_5, 0) = ((MR_Box) (backend_libs__type_class_info__TCClassName_8));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCConstr_5, 1) = ((MR_Box) (backend_libs__type_class_info__ClassTypes_9));
    }
    return backend_libs__type_class_info__TCConstr_5;
  }
}

MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_name_1_f_0(
  MR_Word backend_libs__type_class_info__HeadVar__1_1)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__TCName_5;
    MR_Word backend_libs__type_class_info__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer backend_libs__type_class_info__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word backend_libs__type_class_info__ModuleName_6;
    MR_String backend_libs__type_class_info__ClassName_7;

    if (((MR_tag((MR_Word) backend_libs__type_class_info__SymName_3)) == (MR_mktag((MR_Integer) 1))))
      {
        backend_libs__type_class_info__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_class_info__SymName_3, (MR_Integer) 0)));
        backend_libs__type_class_info__ClassName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_class_info__SymName_3, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_class_info", (MR_String) "function \140backend_libs.type_class_info.generate_class_name\'/1", (MR_String) "unqualified sym_name");
        }
      }
    {
      backend_libs__type_class_info__TCName_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCName_5, 0) = ((MR_Box) (backend_libs__type_class_info__ModuleName_6));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCName_5, 1) = ((MR_Box) (backend_libs__type_class_info__ClassName_7));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__TCName_5, 2) = ((MR_Box) (backend_libs__type_class_info__Arity_4));
    }
    return backend_libs__type_class_info__TCName_5;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv2_STATE_VARIABLE_RttiDatas_10;

    {
      backend_libs__type_class_info__generate_instance_decls_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1), ((MR_Word) backend_libs__type_class_info__wrapper_arg_2), &backend_libs__type_class_info__conv2_STATE_VARIABLE_RttiDatas_10);
    }
    *backend_libs__type_class_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_class_info__conv2_STATE_VARIABLE_RttiDatas_10));
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1(
  MR_Box backend_libs__type_class_info__closure_arg,
  MR_Box backend_libs__type_class_info__wrapper_arg_1,
  MR_Box backend_libs__type_class_info__wrapper_arg_2,
  MR_Box * backend_libs__type_class_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_class_info__closure = backend_libs__type_class_info__closure_arg;
    MR_Word backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_17;

    {
      backend_libs__type_class_info__generate_class_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_class_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_class_info__wrapper_arg_1), ((MR_Word) backend_libs__type_class_info__wrapper_arg_2), &backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_17);
    }
    *backend_libs__type_class_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_class_info__conv0_STATE_VARIABLE_RttiDatas_17));
  }
}

void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(
  MR_Word backend_libs__type_class_info__ModuleInfo_4,
  MR_Word backend_libs__type_class_info__GenerateAll_5,
  MR_Word * backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_11)
{
  {
    MR_bool backend_libs__type_class_info__succeeded;
    MR_Word backend_libs__type_class_info__TypeCtorInfo_17_17;
    MR_Word backend_libs__type_class_info__TypeInfo_23_23;
    MR_Word backend_libs__type_class_info__ClassTable_7;
    MR_Word backend_libs__type_class_info__Classes_8;
    MR_Word backend_libs__type_class_info__Var_12;
    MR_Word backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_14_14;
    MR_Box backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_14_14;

    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__type_class_info__ModuleInfo_4, &backend_libs__type_class_info__ClassTable_7);
    }
    backend_libs__type_class_info__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    {
      mercury__map__to_assoc_list_2_p_0(backend_libs__type_class_info__TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__type_class_info__ClassTable_7, &backend_libs__type_class_info__Classes_8);
    }
    {
      backend_libs__type_class_info__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_12, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_12, 1) = ((MR_Box) (backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_12, 3) = ((MR_Box) (backend_libs__type_class_info__ModuleInfo_4));
    }
    backend_libs__type_class_info__TypeInfo_23_23 = (MR_Word) &backend_libs__type_class_info_scalar_common_2[0];
    {
      mercury__list__foldl_4_p_0((MR_Word) &backend_libs__type_class_info_scalar_common_1[0], backend_libs__type_class_info__TypeInfo_23_23, backend_libs__type_class_info__Var_12, backend_libs__type_class_info__Classes_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_14_14);
    }
    backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_14_14 = ((MR_Word) backend_libs__type_class_info__conv1_STATE_VARIABLE_RttiDatas_14_14);
    switch (backend_libs__type_class_info__GenerateAll_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_11 = backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_14_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__type_class_info__InstanceTable_9;
          MR_Word backend_libs__type_class_info__Instances_10;
          MR_Word backend_libs__type_class_info__Var_15;
          MR_Box backend_libs__type_class_info__conv3_STATE_VARIABLE_RttiDatas_11;

          {
            hlds__hlds_module__module_info_get_instance_table_2_p_0(backend_libs__type_class_info__ModuleInfo_4, &backend_libs__type_class_info__InstanceTable_9);
          }
          {
            mercury__map__to_assoc_list_2_p_0(backend_libs__type_class_info__TypeCtorInfo_17_17, (MR_Word) &backend_libs__type_class_info_scalar_common_2[1], backend_libs__type_class_info__InstanceTable_9, &backend_libs__type_class_info__Instances_10);
          }
          {
            backend_libs__type_class_info__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_15, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_15, 1) = ((MR_Box) (backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), backend_libs__type_class_info__Var_15, 3) = ((MR_Box) (backend_libs__type_class_info__ModuleInfo_4));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__type_class_info_scalar_common_1[1], backend_libs__type_class_info__TypeInfo_23_23, backend_libs__type_class_info__Var_15, backend_libs__type_class_info__Instances_10, ((MR_Box) (backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_14_14)), &backend_libs__type_class_info__conv3_STATE_VARIABLE_RttiDatas_11);
          }
          *backend_libs__type_class_info__STATE_VARIABLE_RttiDatas_11 = ((MR_Word) backend_libs__type_class_info__conv3_STATE_VARIABLE_RttiDatas_11);
        }
        break;
    }
  }
}

void mercury__backend_libs__type_class_info__init(void)
{
}

void mercury__backend_libs__type_class_info__init_type_tables(void)
{
}

void mercury__backend_libs__type_class_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__type_class_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.type_class_info. */
