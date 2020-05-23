/*
** Automatically generated from `type_class_info.m'
** by the Mercury compiler,
** version rotd-2020-05-23
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


// :- module backend_libs.type_class_info.
// :- implementation.

/*
INIT mercury__backend_libs__type_class_info__init
ENDINIT
*/

#include "backend_libs.type_class_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_class_info__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(
  MR_Integer TVarLength_15,
  MR_Integer LastTVarNum_16);

static MR_Integer MR_CALL 
backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(
  MR_Word HeadVar__1_76);

static void MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(
  MR_Word ClassVarSet_11,
  MR_Word HeadVar__2_47,
  MR_String * HeadVar__3_48);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_tc_type_1_f_0(
  MR_Word Type_3);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_proc_label_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_RttiDatas_0_14,
  MR_Word * STATE_VARIABLE_RttiDatas_15);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word Instance_7);

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_9,
  MR_Word * STATE_VARIABLE_RttiDatas_10);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_id_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ClassProc_5);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_16,
  MR_Word * STATE_VARIABLE_RttiDatas_17);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word ClassDefn_7);

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_class_info__generate_class_decl_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[0])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[2])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__type_class_info_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_class_info__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_class_info__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&backend_libs__type_class_info__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static MR_bool MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(
  MR_Integer TVarLength_15,
  MR_Integer LastTVarNum_16)
{
  {
    MR_bool succeeded = (TVarLength_15 == LastTVarNum_16);

    return succeeded;
  }
}

static MR_Integer MR_CALL 
backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(
  MR_Word HeadVar__1_76)
{
  {
    MR_Integer HeadVar__2_77;

    HeadVar__2_77 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_76);
    return HeadVar__2_77;
  }
}

static void MR_CALL 
backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(
  MR_Word ClassVarSet_11,
  MR_Word HeadVar__2_47,
  MR_String * HeadVar__3_48)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ClassVarSet_11, HeadVar__2_47, HeadVar__3_48);
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_tc_type_1_f_0(
  MR_Word Type_3)
{
  {
    MR_Word TCType_4;

    backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(Type_3, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), &TCType_4);
    return TCType_4;
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_proc_label_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    HeadVar__3_3 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_4, PredId_5, ProcId_6);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_RttiDatas_0_14,
  MR_Word * STATE_VARIABLE_RttiDatas_15)
{
  {
    MR_bool succeeded;
    MR_Word ImportStatus_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3))));
    MR_Word Body_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6))));
    MR_Word Var_16;

    succeeded = (Body_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_16 = hlds__status__instance_status_defined_in_this_module_1_f_0(ImportStatus_10);
      succeeded = (Var_16 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word RttiData_13;

      RttiData_13 = backend_libs__type_class_info__generate_instance_decl_3_f_0(ModuleInfo_6, ClassId_7, InstanceDefn_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RttiDatas_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiData_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RttiDatas_0_14));
      }
    }
    else
      *STATE_VARIABLE_RttiDatas_15 = STATE_VARIABLE_RttiDatas_0_14;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    conv4_HeadVar__3_3 = backend_libs__type_class_info__generate_method_proc_label_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_TCConstr_5;

    conv3_TCConstr_5 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_TCConstr_5));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_class_info__IntroducedFrom__pred__generate_instance_decl__167__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_77;

    conv1_HeadVar__2_77 = backend_libs__type_class_info__IntroducedFrom__func__generate_instance_decl__164__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_77));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_TCType_4;

    conv0_TCType_4 = backend_libs__type_class_info__generate_tc_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TCType_4));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_instance_decl_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word Instance_7)
{
  {
    MR_bool succeeded;
    MR_Word RttiData_8;
    MR_Word TCName_9;
    MR_Word InstanceTypes_10;
    MR_Word InstanceTCTypes_11;
    MR_Word TVarSet_12;
    MR_Word TVars_13;
    MR_Word TVarNums_14;
    MR_Integer TVarLength_15;
    MR_Integer NumTypeVars_17;
    MR_Word Constraints_18;
    MR_Word TCConstraints_19;
    MR_Word MaybeInterface_20;
    MR_Word MethodProcLabels_22;
    MR_Word TCInstance_23;
    MR_Word SymName_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
    MR_Integer Arity_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 1))));
    MR_Word ModuleName_91;
    MR_String ClassName_92;
    MR_Integer LastTVarNum_16;
    MR_Box conv2_LastTVarNum_16;

    if (((MR_tag((MR_Word) SymName_89)) == (MR_Integer) 1))
    {
      ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_89, (MR_Integer) 0))));
      ClassName_92 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_89, (MR_Integer) 1))));
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.type_class_info.generate_class_name\'/1", (MR_String) "unqualified sym_name");
    {
      TCName_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCName_9, 0) = ((MR_Box) (ModuleName_91));
      MR_hl_field(MR_mktag(0), TCName_9, 1) = ((MR_Box) (ClassName_92));
      MR_hl_field(MR_mktag(0), TCName_9, 2) = ((MR_Box) (Arity_90));
    }
    InstanceTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_7, (MR_Integer) 1))));
    InstanceTCTypes_11 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_1[4]), InstanceTypes_10);
    TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_7, (MR_Integer) 8))));
    mercury__varset__vars_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, &TVars_13);
    TVarNums_14 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__type_class_info_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_1[5]), TVars_13);
    TVarLength_15 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TVarNums_14);
    succeeded = mercury__list__last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TVarNums_14, &conv2_LastTVarNum_16);
    if (succeeded)
    {
      LastTVarNum_16 = ((MR_Integer) (conv2_LastTVarNum_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_3));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (TVarLength_15));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (LastTVarNum_16));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "function \140backend_libs.type_class_info.generate_instance_decl\'/3", (MR_String) "tvar num mismatch");
      NumTypeVars_17 = TVarLength_15;
    }
    else
      NumTypeVars_17 = (MR_Integer) 0;
    Constraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_7, (MR_Integer) 5))));
    TCConstraints_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_1[6]), Constraints_18);
    MaybeInterface_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_7, (MR_Integer) 7))));
    if ((MaybeInterface_20 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.type_class_info.generate_instance_decl\'/3", (MR_String) "no interface");
    else
    {
      MR_Word Interface_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInterface_20, (MR_Integer) 0))));
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decl_3_f_0_5));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleInfo_5));
      }
      MethodProcLabels_22 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), Var_32, Interface_21);
    }
    {
      TCInstance_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCInstance_23, 0) = ((MR_Box) (TCName_9));
      MR_hl_field(MR_mktag(0), TCInstance_23, 1) = ((MR_Box) (InstanceTCTypes_11));
      MR_hl_field(MR_mktag(0), TCInstance_23, 2) = ((MR_Box) (NumTypeVars_17));
      MR_hl_field(MR_mktag(0), TCInstance_23, 3) = ((MR_Box) (TCConstraints_19));
      MR_hl_field(MR_mktag(0), TCInstance_23, 4) = ((MR_Box) (MethodProcLabels_22));
    }
    RttiData_8 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (TCInstance_23)));
    return RttiData_8;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RttiDatas_15;

    backend_libs__type_class_info__generate_maybe_instance_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RttiDatas_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RttiDatas_15));
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_instance_decls_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_9,
  MR_Word * STATE_VARIABLE_RttiDatas_10)
{
  {
    MR_Word ClassId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Instances_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Box conv1_STATE_VARIABLE_RttiDatas_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (backend_libs__type_class_info__generate_instance_decls_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (ClassId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_2[0]), Var_11, Instances_7, ((MR_Box) (STATE_VARIABLE_RttiDatas_0_9)), &conv1_STATE_VARIABLE_RttiDatas_10);
    *STATE_VARIABLE_RttiDatas_10 = ((MR_Word) (conv1_STATE_VARIABLE_RttiDatas_10));
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_method_id_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ClassProc_5)
{
  {
    MR_Word MethodId_6;
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassProc_5, (MR_Integer) 0))));
    MR_Word PredInfo_9;
    MR_String MethodName_10;
    MR_Integer Arity_11;
    MR_Word PredOrFunc_12;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_7, &PredInfo_9);
    MethodName_10 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
    Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_9);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
    {
      MethodId_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MethodId_6, 0) = ((MR_Box) (MethodName_10));
      MR_hl_field(MR_mktag(0), MethodId_6, 1) = ((MR_Box) (Arity_11));
      MR_hl_field(MR_mktag(0), MethodId_6, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
    }
    return MethodId_6;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_TCConstr_5;

    conv0_TCConstr_5 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TCConstr_5));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_class_decl_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_16,
  MR_Word * STATE_VARIABLE_RttiDatas_17)
{
  {
    MR_Word ClassId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ClassDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ImportStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 0))));
    MR_Word InThisModule_10;

    InThisModule_10 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(ImportStatus_9);
    switch (InThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_RttiDatas_17 = STATE_VARIABLE_RttiDatas_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TCId_11;
          MR_Word Supers_12;
          MR_Word TCSupers_13;
          MR_Word RttiData_15;
          MR_Word Var_19;

          TCId_11 = backend_libs__type_class_info__generate_class_id_3_f_0(ModuleInfo_5, ClassId_6, ClassDefn_7);
          Supers_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 1))));
          TCSupers_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_1[3]), Supers_12);
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (TCId_11));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (TCSupers_13));
          }
          RttiData_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_19)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RttiDatas_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiData_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RttiDatas_0_16));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_MethodId_6;

    conv1_MethodId_6 = backend_libs__type_class_info__generate_method_id_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_MethodId_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_48;

    backend_libs__type_class_info__IntroducedFrom__pred__generate_class_id__111__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_48);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_48));
  }
}

static MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_id_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word ClassDefn_7)
{
  {
    MR_Word TCId_8;
    MR_Word TCName_9;
    MR_Word ClassVars_10;
    MR_Word ClassVarSet_11;
    MR_Word VarNames_12;
    MR_Word Interface_13;
    MR_Word MethodIds_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word SymName_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
    MR_Integer Arity_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 1))));
    MR_Word ModuleName_59;
    MR_String ClassName_60;

    if (((MR_tag((MR_Word) SymName_57)) == (MR_Integer) 1))
    {
      ModuleName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_57, (MR_Integer) 0))));
      ClassName_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_57, (MR_Integer) 1))));
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.type_class_info.generate_class_name\'/1", (MR_String) "unqualified sym_name");
    {
      TCName_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCName_9, 0) = ((MR_Box) (ModuleName_59));
      MR_hl_field(MR_mktag(0), TCName_9, 1) = ((MR_Box) (ClassName_60));
      MR_hl_field(MR_mktag(0), TCName_9, 2) = ((MR_Box) (Arity_58));
    }
    ClassVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 4))));
    ClassVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 8))));
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (backend_libs__type_class_info__generate_class_id_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ClassVarSet_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_class_info_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, ClassVars_10, &VarNames_12);
    Interface_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_7, (MR_Integer) 7))));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (backend_libs__type_class_info__generate_class_id_3_f_0_2));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
    }
    MethodIds_14 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0), Var_16, Interface_13);
    {
      TCId_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCId_8, 0) = ((MR_Box) (TCName_9));
      MR_hl_field(MR_mktag(0), TCId_8, 1) = ((MR_Box) (VarNames_12));
      MR_hl_field(MR_mktag(0), TCId_8, 2) = ((MR_Box) (MethodIds_14));
    }
    return TCId_8;
  }
}

static MR_Box MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_TCType_4;

    conv0_TCType_4 = backend_libs__type_class_info__generate_tc_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TCType_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_constraint_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word TCConstr_5;
    MR_Word Types_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TCClassName_8;
    MR_Word ClassTypes_9;
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_17;
    MR_Word ModuleName_18;
    MR_String ClassName_19;

    Arity_17 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_4);
    if (((MR_tag((MR_Word) SymName_16)) == (MR_Integer) 1))
    {
      ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_16, (MR_Integer) 0))));
      ClassName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_16, (MR_Integer) 1))));
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.type_class_info.generate_class_name\'/1", (MR_String) "unqualified sym_name");
    {
      TCClassName_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCClassName_8, 0) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(0), TCClassName_8, 1) = ((MR_Box) (ClassName_19));
      MR_hl_field(MR_mktag(0), TCClassName_8, 2) = ((MR_Box) (Arity_17));
    }
    ClassTypes_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_1[2]), Types_4);
    {
      TCConstr_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCConstr_5, 0) = ((MR_Box) (TCClassName_8));
      MR_hl_field(MR_mktag(0), TCConstr_5, 1) = ((MR_Box) (ClassTypes_9));
    }
    return TCConstr_5;
  }
}

MR_Word MR_CALL 
backend_libs__type_class_info__generate_class_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word TCName_5;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ModuleName_6;
    MR_String ClassName_7;

    if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
    {
      ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 0))));
      ClassName_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.type_class_info.generate_class_name\'/1", (MR_String) "unqualified sym_name");
    {
      TCName_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TCName_5, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), TCName_5, 1) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), TCName_5, 2) = ((MR_Box) (Arity_4));
    }
    return TCName_5;
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_RttiDatas_10;

    backend_libs__type_class_info__generate_instance_decls_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RttiDatas_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RttiDatas_10));
  }
}

static void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RttiDatas_17;

    backend_libs__type_class_info__generate_class_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RttiDatas_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RttiDatas_17));
  }
}

void MR_CALL 
backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word GenerateAll_5,
  MR_Word * STATE_VARIABLE_RttiDatas_11)
{
  {
    MR_Word ClassTable_7;
    MR_Word Classes_8;
    MR_Word Var_12;
    MR_Word STATE_VARIABLE_RttiDatas_14_14;
    MR_Box conv1_STATE_VARIABLE_RttiDatas_14_14;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_4, &ClassTable_7);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_7, &Classes_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__type_class_info_scalar_common_1[0]), (MR_Word) (&backend_libs__type_class_info_scalar_common_2[0]), Var_12, Classes_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_STATE_VARIABLE_RttiDatas_14_14);
    STATE_VARIABLE_RttiDatas_14_14 = ((MR_Word) (conv1_STATE_VARIABLE_RttiDatas_14_14));
    switch (GenerateAll_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_RttiDatas_11 = STATE_VARIABLE_RttiDatas_14_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstanceTable_9;
          MR_Word Instances_10;
          MR_Word Var_15;
          MR_Box conv3_STATE_VARIABLE_RttiDatas_11;

          hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &InstanceTable_9);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&backend_libs__type_class_info_scalar_common_2[1]), InstanceTable_9, &Instances_10);
          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&backend_libs__type_class_info_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_4));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__type_class_info_scalar_common_1[1]), (MR_Word) (&backend_libs__type_class_info_scalar_common_2[0]), Var_15, Instances_10, ((MR_Box) (STATE_VARIABLE_RttiDatas_14_14)), &conv3_STATE_VARIABLE_RttiDatas_11);
          *STATE_VARIABLE_RttiDatas_11 = ((MR_Word) (conv3_STATE_VARIABLE_RttiDatas_11));
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

// :- end_module backend_libs.type_class_info.
