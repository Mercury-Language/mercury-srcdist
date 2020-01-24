/*
** Automatically generated from `bytecode_gen.m'
** by the Mercury compiler,
** version rotd-2020-01-24
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


// :- module bytecode_backend.bytecode_gen.
// :- implementation.

/*
INIT mercury__bytecode_backend__bytecode_gen__init
ENDINIT
*/

#include "bytecode_backend.bytecode_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "bytecode_backend.bytecode.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "int.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0[5];

static const MR_ConstString bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0[5];

static const MR_DuFunctorDesc bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[1];

static const MR_DuPtagLayout bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0[1];

static const MR_Integer bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0[1];

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
  MR_Integer ProcId_5,
  MR_Word PredInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * Code_8);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
  MR_Word ByteInfo0_4,
  MR_Integer * Label_5,
  MR_Integer * Temp_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Integer N0_4,
  MR_Word STATE_VARIABLE_VarMap_0_5,
  MR_Word * STATE_VARIABLE_VarMap_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word STATE_VARIABLE_ByteInfo_0_83,
  MR_Word * STATE_VARIABLE_ByteInfo_84,
  MR_Word * Code_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer EndLabel_3,
  MR_Word STATE_VARIABLE_ByteInfo_0_4,
  MR_Word * STATE_VARIABLE_ByteInfo_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer EndLabel_2,
  MR_Word STATE_VARIABLE_ByteInfo_0_3,
  MR_Word * STATE_VARIABLE_ByteInfo_4,
  MR_Word * Code_5);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ByteInfo_0_2,
  MR_Word * STATE_VARIABLE_ByteInfo_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ByteInfo_0_12,
  MR_Word * STATE_VARIABLE_ByteInfo_13,
  MR_Word * Code_8);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
  MR_Integer * Temp_4,
  MR_Word STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * STATE_VARIABLE_ByteInfo_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
  MR_Integer * Label_4,
  MR_Word STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * STATE_VARIABLE_ByteInfo_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_unify_3_p_0(
  MR_Word Unification_4,
  MR_Word ByteInfo_5,
  MR_Word * Code_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Var_5,
  MR_Word * Type_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Var_5,
  MR_Integer * ByteVar_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Vars_5,
  MR_Word * ByteVars_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word ConsId_5,
  MR_Word * ByteConsId_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_is_func_2_p_0(
  MR_Word PredInfo_3,
  MR_Integer * IsFunc_4);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_module_info_2_p_0(
  MR_Word ByteInfo_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * ByteConsTag_4);

static MR_Integer MR_CALL 
bytecode_backend__bytecode_gen__ptag_to_int_1_f_0(
  MR_Word Ptag_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Dir_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ByteInfo_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word Args_8,
  MR_Word ByteInfo_9,
  MR_Word * Code_10);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_test_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word TestExpr_5,
  MR_Word * Code_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Expr_5,
  MR_Word * ByteArg_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word ArgVars_9,
  MR_Word Detism_10,
  MR_Word ByteInfo_11,
  MR_Word * Code_12);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
  MR_Word PredVar_7,
  MR_Word ArgVars_8,
  MR_Word ArgModes_9,
  MR_Word Detism_10,
  MR_Word ByteInfo_11,
  MR_Word * Code_12);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ByteInfo_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ByteInfo_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[2][3];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[1][1];




static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0[5] = {
  (MR_String) "byteinfo_varmap",
  (MR_String) "byteinfo_vartypes",
  (MR_String) "byteinfo_moduleinfo",
  (MR_String) "byteinfo_label_counter",
  (MR_String) "byteinfo_temp_counter"
};

static const MR_DuFunctorDesc bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0 = {
  (MR_String) "byte_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[1] = {
  &bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

static const MR_DuPtagLayout bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0[1] = {
  &bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

static const MR_Integer bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode_gen",
  (MR_String) "byte_info",
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0 },
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0
};

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_module____Compare____module_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__counter____Compare____counter_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode_gen__gen_module_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Code_6)
{
  {
    MR_Word PredIds_8;
    MR_Word CodeTree_9;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &PredIds_8);
    bytecode_backend__bytecode_gen__gen_preds_5_p_0(ModuleInfo_5, PredIds_8, &CodeTree_9);
    *Code_6 = mercury__cord__list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), CodeTree_9);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
  else
  {
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredTable_15;
    MR_Word PredInfo_16;
    MR_Word ProcIds_17;
    MR_Word PredCode_18;
    MR_Word OtherCode_28;
    MR_Box conv0_PredInfo_16;

    hlds__hlds_module__module_info_get_preds_2_p_0(HeadVar__1_1, &PredTable_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_15, ((MR_Box) (PredId_11)), &conv0_PredInfo_16);
    PredInfo_16 = ((MR_Word) (conv0_PredInfo_16));
    ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_16);
    if ((ProcIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
      PredCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
    else
    {
      MR_Word ProcsCode_21;
      MR_String PredName_22;
      MR_Integer ProcsCount_23;
      MR_Integer Arity_24;
      MR_Integer IsFunc_25;
      MR_Word EnterCode_26;
      MR_Word EndofCode_27;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word PredOrFunc_45;
      MR_Integer ProcId_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_17, (MR_Integer) 0))));
      MR_Word ProcIds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_17, (MR_Integer) 1))));
      MR_Word ProcCode_59;
      MR_Word ProcsCode_60;

      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", PredId_11, ProcId_53, HeadVar__1_1);
      bytecode_backend__bytecode_gen__gen_proc_4_p_0(ProcId_53, PredInfo_16, HeadVar__1_1, &ProcCode_59);
      bytecode_backend__bytecode_gen__gen_pred_7_p_0(PredId_11, ProcIds_54, PredInfo_16, HeadVar__1_1, &ProcsCode_60);
      ProcsCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ProcCode_59, ProcsCode_60);
      PredName_22 = hlds__hlds_module__predicate_name_2_f_0(HeadVar__1_1, PredId_11);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds_17, &ProcsCount_23);
      Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_16);
      PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
      switch (PredOrFunc_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          IsFunc_25 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          IsFunc_25 = (MR_Integer) 0;
          break;
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (PredName_22));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Arity_24));
        MR_hl_field(MR_mktag(1), Var_32, 2) = ((MR_Box) (IsFunc_25));
        MR_hl_field(MR_mktag(1), Var_32, 3) = ((MR_Box) (ProcsCount_23));
      }
      EnterCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_32)));
      EndofCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 0U)));
      Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ProcsCode_21, EndofCode_27);
      PredCode_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_26, Var_34);
    }
    bytecode_backend__bytecode_gen__gen_preds_5_p_0(HeadVar__1_1, PredIds_12, &OtherCode_28);
    *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), PredCode_18, OtherCode_28);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
  else
  {
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ProcIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ProcCode_21;
    MR_Word ProcsCode_22;

    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", HeadVar__1_1, ProcId_15, HeadVar__4_4);
    bytecode_backend__bytecode_gen__gen_proc_4_p_0(ProcId_15, HeadVar__3_3, HeadVar__4_4, &ProcCode_21);
    bytecode_backend__bytecode_gen__gen_pred_7_p_0(HeadVar__1_1, ProcIds_16, HeadVar__3_3, HeadVar__4_4, &ProcsCode_22);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ProcCode_21, ProcsCode_22);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
  MR_Integer ProcId_5,
  MR_Word PredInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * Code_8)
{
  {
    MR_bool succeeded;
    MR_Word ProcTable_9;
    MR_Word ProcInfo_10;
    MR_Word Goal_11;
    MR_Word VarTypes_12;
    MR_Word VarSet_13;
    MR_Word Detism_14;
    MR_Word CodeModel_15;
    MR_Word GoalVars_16;
    MR_Word ArgVars_17;
    MR_Word Vars_18;
    MR_Word VarList_19;
    MR_Word VarMap0_20;
    MR_Word VarMap_21;
    MR_Word VarInfos_22;
    MR_Word ByteInfo0_23;
    MR_Integer ZeroLabel_24;
    MR_Word ByteInfo1_25;
    MR_Word ArgInfo_26;
    MR_Word Args_27;
    MR_Word InputArgs_28;
    MR_Word ByteInfo_29;
    MR_Word PickupCode_30;
    MR_Word OutputArgs_31;
    MR_Word PlaceCode_32;
    MR_Word GoalCode_36;
    MR_Integer EndLabel_37;
    MR_Integer LabelCount_38;
    MR_Integer TempCount_39;
    MR_Word ZeroLabelCode_40;
    MR_Word BodyCode0_41;
    MR_Word BodyInstrs_42;
    MR_Word BodyCode_43;
    MR_Integer ProcInt_44;
    MR_Word EnterCode_45;
    MR_Word EndofCode_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_66;
    MR_Word Var_80;
    MR_Word LabelCounter0_86;
    MR_Word LabelCounter_87;
    MR_Box conv0_ProcInfo_10;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_6, &ProcTable_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_9, ((MR_Box) (ProcId_5)), &conv0_ProcInfo_10);
    ProcInfo_10 = ((MR_Word) (conv0_ProcInfo_10));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &Goal_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_12);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_13);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_10, &Detism_14);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_14, &CodeModel_15);
    hlds__goal_util__goal_vars_2_p_0(Goal_11, &GoalVars_16);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &ArgVars_17);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_17, GoalVars_16, &Vars_18);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_18, &VarList_19);
    mercury__map__init_1_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &VarMap0_20);
    bytecode_backend__bytecode_gen__create_varmap_7_p_0(VarList_19, VarSet_13, VarTypes_12, (MR_Integer) 0, VarMap0_20, &VarMap_21, &VarInfos_22);
    LabelCounter0_86 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_80 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      ByteInfo0_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ByteInfo0_23, 0) = ((MR_Box) (VarMap_21));
      MR_hl_field(MR_mktag(0), ByteInfo0_23, 1) = ((MR_Box) (VarTypes_12));
      MR_hl_field(MR_mktag(0), ByteInfo0_23, 2) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ByteInfo0_23, 3) = ((MR_Box) (LabelCounter0_86));
      MR_hl_field(MR_mktag(0), ByteInfo0_23, 4) = ((MR_Box) (Var_80));
    }
    mercury__counter__allocate_3_p_0(&ZeroLabel_24, LabelCounter0_86, &LabelCounter_87);
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_23, (MR_Integer) 0))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_23, (MR_Integer) 1))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_23, (MR_Integer) 2))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_23, (MR_Integer) 4))));
    {
      ByteInfo1_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ByteInfo1_25, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), ByteInfo1_25, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), ByteInfo1_25, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), ByteInfo1_25, 3) = ((MR_Box) (LabelCounter_87));
      MR_hl_field(MR_mktag(0), ByteInfo1_25, 4) = ((MR_Box) (Var_97));
    }
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_10, &ArgInfo_26);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), ArgVars_17, ArgInfo_26, &Args_27);
    ll_backend__call_gen__input_arg_locs_2_p_0(Args_27, &InputArgs_28);
    ll_backend__call_gen__output_arg_locs_2_p_0(Args_27, &OutputArgs_31);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (ZeroLabel_24));
    }
    ZeroLabelCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_48)));
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_5, &ProcInt_44);
    switch (CodeModel_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word ByteInfo3_35;

          bytecode_backend__bytecode_gen__gen_goal_4_p_0(Goal_11, ByteInfo1_25, &ByteInfo3_35, &GoalCode_36);
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_37, ByteInfo3_35, &ByteInfo_29);
          {
            MR_Word Var_54;
            MR_Word Var_55;

            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (EndLabel_37));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[3])));
            }
            EndofCode_46 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_54);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word ByteInfo2_98;
          MR_Word ByteInfo3_99;
          MR_Integer _FrameTemp_33;

          bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&_FrameTemp_33, ByteInfo1_25, &ByteInfo2_98);
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(Goal_11, ByteInfo2_98, &ByteInfo3_99, &GoalCode_36);
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_37, ByteInfo3_99, &ByteInfo_29);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (EndLabel_37));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[3])));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          EndofCode_46 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_59);
        }
        break;
    }
    bytecode_backend__bytecode_gen__gen_pickups_3_p_0(InputArgs_28, ByteInfo_29, &PickupCode_30);
    bytecode_backend__bytecode_gen__gen_places_3_p_0(OutputArgs_31, ByteInfo_29, &PlaceCode_32);
    bytecode_backend__bytecode_gen__get_counts_3_p_0(ByteInfo_29, &LabelCount_38, &TempCount_39);
    Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), GoalCode_36, PlaceCode_32);
    Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ZeroLabelCode_40, Var_50);
    BodyCode0_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), PickupCode_30, Var_49);
    BodyInstrs_42 = mercury__cord__list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), BodyCode0_41);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 36U)), BodyInstrs_42);
    if (succeeded)
      BodyCode_43 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 36U)));
    else
      BodyCode_43 = BodyCode0_41;
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (ProcInt_44));
      MR_hl_field(MR_mktag(2), Var_53, 1) = (MR_Box) ((MR_Unsigned) (Detism_14));
      MR_hl_field(MR_mktag(2), Var_53, 2) = ((MR_Box) (LabelCount_38));
      MR_hl_field(MR_mktag(2), Var_53, 3) = ((MR_Box) (EndLabel_37));
      MR_hl_field(MR_mktag(2), Var_53, 4) = ((MR_Box) (TempCount_39));
      MR_hl_field(MR_mktag(2), Var_53, 5) = ((MR_Box) (VarInfos_22));
    }
    EnterCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_53)));
    Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), BodyCode_43, EndofCode_46);
    *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_45, Var_66);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
  MR_Word ByteInfo0_4,
  MR_Integer * Label_5,
  MR_Integer * Temp_6)
{
  {
    MR_Word LabelCounter0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_4, (MR_Integer) 3))));
    MR_Word TempCounter0_9;
    MR_Word _LabelCounter_8;
    MR_Word _TempCounter_10;

    mercury__counter__allocate_3_p_0(Label_5, LabelCounter0_7, &_LabelCounter_8);
    TempCounter0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo0_4, (MR_Integer) 4))));
    mercury__counter__allocate_3_p_0(Temp_6, TempCounter0_9, &_TempCounter_10);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Integer N0_4,
  MR_Word STATE_VARIABLE_VarMap_0_5,
  MR_Word * STATE_VARIABLE_VarMap_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarMap_6 = STATE_VARIABLE_VarMap_0_5;
  }
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarList_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer N1_21;
    MR_String VarName_22;
    MR_Word VarType_23;
    MR_Word VarInfosTail_24;
    MR_Word STATE_VARIABLE_VarMap_27_27;
    MR_Word Var_30;

    mercury__map__det_insert_4_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_14)), ((MR_Box) (N0_4)), STATE_VARIABLE_VarMap_0_5, &STATE_VARIABLE_VarMap_27_27);
    N1_21 = (MR_Integer) ((MR_Unsigned) N0_4 + (MR_Unsigned) 1);
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_14, &VarName_22);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_14, &VarType_23);
    bytecode_backend__bytecode_gen__create_varmap_7_p_0(VarList_15, VarSet_2, VarTypes_3, N1_21, STATE_VARIABLE_VarMap_27_27, STATE_VARIABLE_VarMap_6, &VarInfosTail_24);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (VarName_22));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (VarType_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarInfosTail_24));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word STATE_VARIABLE_ByteInfo_0_83,
  MR_Word * STATE_VARIABLE_ByteInfo_84,
  MR_Word * Code_9)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_37 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word SomeCode_38;
          MR_Integer EndLabel_39;
          MR_Integer FrameTemp_40;
          MR_Word EnterCode_41;
          MR_Word EndofCode_42;
          MR_Word STATE_VARIABLE_ByteInfo_142_142;
          MR_Word STATE_VARIABLE_ByteInfo_143_143;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_149;
          MR_Word Var_153;

          bytecode_backend__bytecode_gen__gen_goal_4_p_0(Goal_37, STATE_VARIABLE_ByteInfo_0_83, &STATE_VARIABLE_ByteInfo_142_142, &SomeCode_38);
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_39, STATE_VARIABLE_ByteInfo_142_142, &STATE_VARIABLE_ByteInfo_143_143);
          bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&FrameTemp_40, STATE_VARIABLE_ByteInfo_143_143, STATE_VARIABLE_ByteInfo_84);
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (FrameTemp_40));
            MR_hl_field(MR_mktag(3), Var_145, 2) = ((MR_Box) (EndLabel_39));
          }
          EnterCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_145)));
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (FrameTemp_40));
          }
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (EndLabel_39));
          }
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[2])));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
          }
          EndofCode_42 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_146);
          Var_153 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), SomeCode_38, EndofCode_42);
          *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_41, Var_153);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

          bytecode_backend__bytecode_gen__gen_unify_3_p_0(Unification_35, STATE_VARIABLE_ByteInfo_0_83, Code_9);
          *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_0_83;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
          MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
          MR_Word BuiltinState_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ArgVars_158 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          switch (BuiltinState_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              bytecode_backend__bytecode_gen__gen_builtin_5_p_0(PredId_27, ProcId_28, ArgVars_158, STATE_VARIABLE_ByteInfo_0_83, Code_9);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Detism_156;

                Detism_156 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_7);
                bytecode_backend__bytecode_gen__gen_call_6_p_0(PredId_27, ProcId_28, ArgVars_158, Detism_156, STATE_VARIABLE_ByteInfo_0_83, Code_9);
              }
              break;
          }
          *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_0_83;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCallType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgModes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) GenericCallType_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word PredVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCallType_10, (MR_Integer) 0))));

                    bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(PredVar_15, ArgVars_11, ArgModes_12, Detism_14, STATE_VARIABLE_ByteInfo_0_83, Code_9);
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    MR_String _GenericCallFunctor_25;
                    MR_Integer Var_26;

                    mercury__deconstruct__functor_4_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0), ((MR_Box) (GenericCallType_10)), (MR_Integer) 1, &_GenericCallFunctor_25, &Var_26);
                    *Code_9 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 36U)));
                  }
                  break;
              }
              *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_0_83;
            }
            break;
          case (MR_Integer) 1:
            {
              *Code_9 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 36U)));
              *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_0_83;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Var_191 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (Var_191) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "bytecode_gen of parallel conjunction");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  bytecode_backend__bytecode_gen__gen_conj_4_p_0(Var_190, STATE_VARIABLE_ByteInfo_0_83, STATE_VARIABLE_ByteInfo_84, Code_9);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalList_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              if ((GoalList_175 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Code_9 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 32U)));
                *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_0_83;
              }
              else
              {
                MR_Word DisjCode_57;
                MR_Word STATE_VARIABLE_ByteInfo_122_122;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Word Var_130;
                MR_Integer EndLabel_166;
                MR_Word EnterCode_167;
                MR_Word EndofCode_168;

                bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_166, STATE_VARIABLE_ByteInfo_0_83, &STATE_VARIABLE_ByteInfo_122_122);
                bytecode_backend__bytecode_gen__gen_disj_5_p_0(GoalList_175, EndLabel_166, STATE_VARIABLE_ByteInfo_122_122, STATE_VARIABLE_ByteInfo_84, &DisjCode_57);
                {
                  Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (EndLabel_166));
                }
                EnterCode_167 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_124)));
                {
                  Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (EndLabel_166));
                }
                {
                  Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
                  MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
                }
                EndofCode_168 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_125);
                Var_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), DisjCode_57, EndofCode_168);
                *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_167, Var_130);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word CasesList_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word SwitchCode_61;
              MR_Integer ByteVar_62;
              MR_Word STATE_VARIABLE_ByteInfo_113_113;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_121;
              MR_Integer EndLabel_176;
              MR_Word EnterCode_177;
              MR_Word EndofCode_178;

              bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_176, STATE_VARIABLE_ByteInfo_0_83, &STATE_VARIABLE_ByteInfo_113_113);
              bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(CasesList_60, EndLabel_176, STATE_VARIABLE_ByteInfo_113_113, STATE_VARIABLE_ByteInfo_84, &SwitchCode_61);
              bytecode_backend__bytecode_gen__map_var_3_p_0(*STATE_VARIABLE_ByteInfo_84, Var_58, &ByteVar_62);
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (ByteVar_62));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (EndLabel_176));
              }
              EnterCode_177 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_115)));
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (EndLabel_176));
              }
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
              }
              EndofCode_178 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_116);
              Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), SwitchCode_61, EndofCode_178);
              *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_177, Var_121);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word InnerGoal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word InnerCode_45;
              MR_Word OuterDetism_46;
              MR_Word InnerGoalInfo_48;
              MR_Word InnerDetism_49;
              MR_Word OuterCodeModel_50;
              MR_Word InnerCodeModel_51;
              MR_Word STATE_VARIABLE_ByteInfo_137_137;

              bytecode_backend__bytecode_gen__gen_goal_4_p_0(InnerGoal_44, STATE_VARIABLE_ByteInfo_0_83, &STATE_VARIABLE_ByteInfo_137_137, &InnerCode_45);
              OuterDetism_46 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_7);
              InnerGoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerGoal_44, (MR_Integer) 1))));
              InnerDetism_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_48);
              hlds__code_model__determinism_to_code_model_2_p_0(OuterDetism_46, &OuterCodeModel_50);
              hlds__code_model__determinism_to_code_model_2_p_0(InnerDetism_49, &InnerCodeModel_51);
              succeeded = (InnerCodeModel_51 == OuterCodeModel_50);
              if (succeeded)
              {
                *Code_9 = InnerCode_45;
                *STATE_VARIABLE_ByteInfo_84 = STATE_VARIABLE_ByteInfo_137_137;
              }
              else
              {
                MR_Integer Temp_52;
                MR_Word Var_139;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word EnterCode_160;
                MR_Word EndofCode_161;

                bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&Temp_52, STATE_VARIABLE_ByteInfo_137_137, STATE_VARIABLE_ByteInfo_84);
                {
                  Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Temp_52));
                }
                EnterCode_160 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_139)));
                {
                  Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (Temp_52));
                }
                EndofCode_161 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_140)));
                Var_141 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), InnerCode_45, EndofCode_161);
                *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_160, Var_141);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Integer ElseLabel_67;
              MR_Word CondCode_68;
              MR_Word ThenCode_69;
              MR_Word ElseCode_70;
              MR_Word EnterIfCode_71;
              MR_Word EnterThenCode_72;
              MR_Word EndofThenCode_73;
              MR_Word EndofIfCode_74;
              MR_Word STATE_VARIABLE_ByteInfo_88_88;
              MR_Word STATE_VARIABLE_ByteInfo_89_89;
              MR_Word STATE_VARIABLE_ByteInfo_90_90;
              MR_Word STATE_VARIABLE_ByteInfo_91_91;
              MR_Word STATE_VARIABLE_ByteInfo_92_92;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word Var_103;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Integer EndLabel_179;
              MR_Integer FrameTemp_180;

              bytecode_backend__bytecode_gen__get_next_label_3_p_0(&EndLabel_179, STATE_VARIABLE_ByteInfo_0_83, &STATE_VARIABLE_ByteInfo_88_88);
              bytecode_backend__bytecode_gen__get_next_label_3_p_0(&ElseLabel_67, STATE_VARIABLE_ByteInfo_88_88, &STATE_VARIABLE_ByteInfo_89_89);
              bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&FrameTemp_180, STATE_VARIABLE_ByteInfo_89_89, &STATE_VARIABLE_ByteInfo_90_90);
              bytecode_backend__bytecode_gen__gen_goal_4_p_0(Cond_64, STATE_VARIABLE_ByteInfo_90_90, &STATE_VARIABLE_ByteInfo_91_91, &CondCode_68);
              bytecode_backend__bytecode_gen__gen_goal_4_p_0(Then_65, STATE_VARIABLE_ByteInfo_91_91, &STATE_VARIABLE_ByteInfo_92_92, &ThenCode_69);
              bytecode_backend__bytecode_gen__gen_goal_4_p_0(Else_66, STATE_VARIABLE_ByteInfo_92_92, STATE_VARIABLE_ByteInfo_84, &ElseCode_70);
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (ElseLabel_67));
                MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (EndLabel_179));
                MR_hl_field(MR_mktag(3), Var_94, 3) = ((MR_Box) (FrameTemp_180));
              }
              EnterIfCode_71 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_94)));
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (FrameTemp_180));
              }
              EnterThenCode_72 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_95)));
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (EndLabel_179));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (ElseLabel_67));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (FrameTemp_180));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
              }
              EndofThenCode_73 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_96);
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (EndLabel_179));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
              }
              EndofIfCode_74 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_103);
              Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ElseCode_70, EndofIfCode_74);
              Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EndofThenCode_73, Var_112);
              Var_110 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ThenCode_69, Var_111);
              Var_109 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterThenCode_72, Var_110);
              Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), CondCode_68, Var_109);
              *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterIfCode_71, Var_108);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ByteConsId_6;

    bytecode_backend__bytecode_gen__map_cons_id_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ByteConsId_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ByteConsId_6));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer EndLabel_3,
  MR_Word STATE_VARIABLE_ByteInfo_0_4,
  MR_Word * STATE_VARIABLE_ByteInfo_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
    *STATE_VARIABLE_ByteInfo_5 = STATE_VARIABLE_ByteInfo_0_4;
  }
  else
  {
    MR_Word Case_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 0))));
    MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 1))));
    MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 2))));
    MR_Word ByteMainConsId_21;
    MR_Word ByteOtherConsIds_22;
    MR_Word GoalCode_23;
    MR_Word CasesCode_24;
    MR_Integer NextLabel_25;
    MR_Word EnterCode_26;
    MR_Word EndofCode_27;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_ByteInfo_31_31;
    MR_Word STATE_VARIABLE_ByteInfo_32_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word GoalExpr_51;
    MR_Word GoalInfo_52;
    MR_Word GoalCode_54;
    MR_Word Context_55;
    MR_Integer Line_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word LabelCounter0_65;
    MR_Word LabelCounter_66;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;

    bytecode_backend__bytecode_gen__map_cons_id_3_p_0(STATE_VARIABLE_ByteInfo_0_4, MainConsId_18, &ByteMainConsId_21);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (STATE_VARIABLE_ByteInfo_0_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0), Var_30, OtherConsIds_19, &ByteOtherConsIds_22);
    GoalExpr_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_20, (MR_Integer) 0))));
    GoalInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_20, (MR_Integer) 1))));
    bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(GoalExpr_51, GoalInfo_52, STATE_VARIABLE_ByteInfo_0_4, &STATE_VARIABLE_ByteInfo_31_31, &GoalCode_54);
    Context_55 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_52);
    mercury__term__context_line_2_p_0(Context_55, &Line_56);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 29U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Line_56));
    }
    Var_58 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_59)));
    GoalCode_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_58, GoalCode_54);
    bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(Cases_13, EndLabel_3, STATE_VARIABLE_ByteInfo_31_31, &STATE_VARIABLE_ByteInfo_32_32, &CasesCode_24);
    LabelCounter0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 3))));
    mercury__counter__allocate_3_p_0(&NextLabel_25, LabelCounter0_65, &LabelCounter_66);
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 2))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ByteInfo_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (LabelCounter_66));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ByteMainConsId_21));
      MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (ByteOtherConsIds_22));
      MR_hl_field(MR_mktag(3), Var_34, 3) = ((MR_Box) (NextLabel_25));
    }
    EnterCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_34)));
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (EndLabel_3));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (NextLabel_25));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    EndofCode_27 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_35);
    Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EndofCode_27, CasesCode_24);
    Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), GoalCode_23, Var_41);
    *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_26, Var_40);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer EndLabel_2,
  MR_Word STATE_VARIABLE_ByteInfo_0_3,
  MR_Word * STATE_VARIABLE_ByteInfo_4,
  MR_Word * Code_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_disj\'/5", (MR_String) "empty disjunction");
      return;
    }
  else
  {
    MR_Word Disjunct_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_17;
    MR_Word STATE_VARIABLE_ByteInfo_26_26;
    MR_Word GoalExpr_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_12, (MR_Integer) 0))));
    MR_Word GoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_12, (MR_Integer) 1))));
    MR_Word GoalCode_51;
    MR_Word Context_52;
    MR_Integer Line_53;
    MR_Word Var_55;
    MR_Word Var_56;

    bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(GoalExpr_48, GoalInfo_49, STATE_VARIABLE_ByteInfo_0_3, &STATE_VARIABLE_ByteInfo_26_26, &GoalCode_51);
    Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_49);
    mercury__term__context_line_2_p_0(Context_52, &Line_53);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 29U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Line_53));
    }
    Var_55 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_56)));
    ThisCode_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_55, GoalCode_51);
    if ((Disjuncts_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word EnterCode_18;
      MR_Word EndofCode_19;
      MR_Word Var_39;
      MR_Word Var_40;

      EnterCode_18 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (MR_mkword(MR_mktag(3), &bytecode_backend__bytecode_gen_scalar_common_1[1]))));
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (EndLabel_2));
      }
      EndofCode_19 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_39)));
      Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ThisCode_17, EndofCode_19);
      *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_18, Var_40);
      *STATE_VARIABLE_ByteInfo_4 = STATE_VARIABLE_ByteInfo_26_26;
    }
    else
    {
      MR_Word OtherCode_22;
      MR_Integer NextLabel_23;
      MR_Word STATE_VARIABLE_ByteInfo_27_27;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word EnterCode_41;
      MR_Word EndofCode_42;
      MR_Word LabelCounter0_62;
      MR_Word LabelCounter_63;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;

      bytecode_backend__bytecode_gen__gen_disj_5_p_0(Disjuncts_13, EndLabel_2, STATE_VARIABLE_ByteInfo_26_26, &STATE_VARIABLE_ByteInfo_27_27, &OtherCode_22);
      LabelCounter0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_27_27, (MR_Integer) 3))));
      mercury__counter__allocate_3_p_0(&NextLabel_23, LabelCounter0_62, &LabelCounter_63);
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_27_27, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_27_27, (MR_Integer) 1))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_27_27, (MR_Integer) 2))));
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_27_27, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ByteInfo_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (LabelCounter_63));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_73));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (NextLabel_23));
      }
      EnterCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_29)));
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (EndLabel_2));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (NextLabel_23));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
      }
      EndofCode_42 = mercury__cord__from_list_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_30);
      Var_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EndofCode_42, OtherCode_22);
      Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ThisCode_17, Var_36);
      *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), EnterCode_41, Var_35);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ByteInfo_0_2,
  MR_Word * STATE_VARIABLE_ByteInfo_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
    *STATE_VARIABLE_ByteInfo_3 = STATE_VARIABLE_ByteInfo_0_2;
  }
  else
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_12;
    MR_Word OtherCode_13;
    MR_Word STATE_VARIABLE_ByteInfo_16_16;
    MR_Word GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    MR_Word GoalCode_26;
    MR_Word Context_27;
    MR_Integer Line_28;
    MR_Word Var_30;
    MR_Word Var_31;

    bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(GoalExpr_23, GoalInfo_24, STATE_VARIABLE_ByteInfo_0_2, &STATE_VARIABLE_ByteInfo_16_16, &GoalCode_26);
    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_24);
    mercury__term__context_line_2_p_0(Context_27, &Line_28);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 29U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Line_28));
    }
    Var_30 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_31)));
    ThisCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_30, GoalCode_26);
    bytecode_backend__bytecode_gen__gen_conj_4_p_0(Goals_9, STATE_VARIABLE_ByteInfo_16_16, STATE_VARIABLE_ByteInfo_3, &OtherCode_13);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ThisCode_12, OtherCode_13);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ByteInfo_0_12,
  MR_Word * STATE_VARIABLE_ByteInfo_13,
  MR_Word * Code_8)
{
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalCode_9;
    MR_Word Context_10;
    MR_Integer Line_11;
    MR_Word Var_15;
    MR_Word Var_16;

    bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(GoalExpr_5, GoalInfo_6, STATE_VARIABLE_ByteInfo_0_12, STATE_VARIABLE_ByteInfo_13, &GoalCode_9);
    Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
    mercury__term__context_line_2_p_0(Context_10, &Line_11);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 29U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Line_11));
    }
    Var_15 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_16)));
    *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_15, GoalCode_9);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
  MR_Integer * Temp_4,
  MR_Word STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * STATE_VARIABLE_ByteInfo_9)
{
  {
    MR_Word TempCounter0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4))));
    MR_Word TempCounter_7;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__counter__allocate_3_p_0(Temp_4, TempCounter0_6, &TempCounter_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ByteInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TempCounter_7));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
  MR_Integer * Label_4,
  MR_Word STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * STATE_VARIABLE_ByteInfo_9)
{
  {
    MR_Word LabelCounter0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3))));
    MR_Word LabelCounter_7;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    mercury__counter__allocate_3_p_0(Label_4, LabelCounter0_6, &LabelCounter_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ByteInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (LabelCounter_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_unify_3_p_0(
  MR_Word Unification_4,
  MR_Word ByteInfo_5,
  MR_Word * Code_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_4, (MR_Integer) 0))));
          MR_Word ConsId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_4, (MR_Integer) 1))));
          MR_Word Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_4, (MR_Integer) 2))));
          MR_Word UniModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_4, (MR_Integer) 3))));
          MR_Integer ByteVar_14;
          MR_Word ByteArgs_15;
          MR_Word ByteConsId_16;

          bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Var_7, &ByteVar_14);
          bytecode_backend__bytecode_gen__map_vars_3_p_0(ByteInfo_5, Args_9, &ByteArgs_15);
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(ByteInfo_5, ConsId_8, &ByteConsId_16);
          succeeded = ((((MR_tag((MR_Word) ByteConsId_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ByteConsId_16, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            MR_Word Var_117;

            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (ByteVar_14));
              MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (ByteConsId_16));
              MR_hl_field(MR_mktag(3), Var_117, 3) = ((MR_Box) (ByteArgs_15));
            }
            *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_117)));
          }
          else
          {
            MR_Word Dirs_22;

            bytecode_backend__bytecode_gen__map_arg_dirs_4_p_0(UniModes_10, Args_9, ByteInfo_5, &Dirs_22);
            succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(Dirs_22, (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word Var_119;

              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (ByteVar_14));
                MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (ByteConsId_16));
                MR_hl_field(MR_mktag(3), Var_119, 3) = ((MR_Box) (ByteArgs_15));
              }
              *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_119)));
            }
            else
            {
              MR_Word Pairs_23;
              MR_Word Var_120;

              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0), ByteArgs_15, Dirs_22, &Pairs_23);
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (ByteVar_14));
                MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (ByteConsId_16));
                MR_hl_field(MR_mktag(3), Var_120, 3) = ((MR_Box) (Pairs_23));
              }
              *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_120)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_4, (MR_Integer) 0))));
          MR_Word ConsId_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_4, (MR_Integer) 1))));
          MR_Word Args_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_4, (MR_Integer) 2))));
          MR_Word UniModes_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_4, (MR_Integer) 3))));
          MR_Integer ByteVar_127;
          MR_Word ByteArgs_128;
          MR_Word ByteConsId_129;
          MR_Word Dirs_130;

          bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Var_123, &ByteVar_127);
          bytecode_backend__bytecode_gen__map_vars_3_p_0(ByteInfo_5, Args_125, &ByteArgs_128);
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(ByteInfo_5, ConsId_124, &ByteConsId_129);
          bytecode_backend__bytecode_gen__map_arg_dirs_4_p_0(UniModes_126, Args_125, ByteInfo_5, &Dirs_130);
          succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(Dirs_130, (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_115;

            {
              Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (ByteVar_127));
              MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (ByteConsId_129));
              MR_hl_field(MR_mktag(3), Var_115, 3) = ((MR_Box) (ByteArgs_128));
            }
            *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_115)));
          }
          else
          {
            MR_Word Var_116;
            MR_Word Pairs_121;

            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0), ByteArgs_128, Dirs_130, &Pairs_121);
            {
              Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (ByteVar_127));
              MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (ByteConsId_129));
              MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (Pairs_121));
            }
            *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_116)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Target_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_4, (MR_Integer) 0))));
          MR_Word Source_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_4, (MR_Integer) 1))));
          MR_Integer ByteTarget_28;
          MR_Integer ByteSource_29;
          MR_Word Var_113;

          bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Target_26, &ByteTarget_28);
          bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Source_27, &ByteSource_29);
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (ByteTarget_28));
            MR_hl_field(MR_mktag(3), Var_113, 2) = ((MR_Box) (ByteSource_29));
          }
          *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_113)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_4, (MR_Integer) 1))));
              MR_Word Var2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_4, (MR_Integer) 2))));
              MR_Integer ByteVar1_32;
              MR_Integer ByteVar2_33;
              MR_Word Var1Type_34;
              MR_Word Var2Type_35;
              MR_Word TypeCtor1_36;
              MR_Word TypeCtor2_37;
              MR_Word TypeCtor_38;
              MR_Word ModuleInfo_41;
              MR_Word TypeCategory_44;
              MR_Word TestId_45;
              MR_Word Var_112;

              bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Var1_30, &ByteVar1_32);
              bytecode_backend__bytecode_gen__map_var_3_p_0(ByteInfo_5, Var2_31, &ByteVar2_33);
              bytecode_backend__bytecode_gen__get_var_type_3_p_0(ByteInfo_5, Var1_30, &Var1Type_34);
              bytecode_backend__bytecode_gen__get_var_type_3_p_0(ByteInfo_5, Var2_31, &Var2Type_35);
              parse_tree__prog_type__type_to_ctor_det_2_p_0(Var1Type_34, &TypeCtor1_36);
              parse_tree__prog_type__type_to_ctor_det_2_p_0(Var2Type_35, &TypeCtor2_37);
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor2_37, TypeCtor1_36);
              if (succeeded)
                TypeCtor_38 = TypeCtor1_36;
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "simple_test between different types");
                  return;
                }
              ModuleInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_5, (MR_Integer) 2))));
              TypeCategory_44 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_41, TypeCtor_38);
              switch (MR_tag((MR_Word) TypeCategory_44)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(TypeCategory_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "higher_order_type");
                        return;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "tuple_type");
                        return;
                      }
                      break;
                    case (MR_Integer) 2:
                      TestId_45 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "variable_type");
                        return;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "void_type");
                        return;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCategory_44, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) Var_143)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(Var_143)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            TestId_45 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 1:
                            TestId_45 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            TestId_45 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_145 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 0))) & (MR_Integer) 15);

                          switch (Var_145) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              TestId_45 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 4:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "int16");
                                return;
                              }
                              break;
                            case (MR_Integer) 6:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "int32");
                                return;
                              }
                              break;
                            case (MR_Integer) 8:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "int64");
                                return;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "int8");
                                return;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "uint");
                                return;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "uint16");
                                return;
                              }
                              break;
                            case (MR_Integer) 7:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "uint32");
                                return;
                              }
                              break;
                            case (MR_Integer) 9:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "uint64");
                                return;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "uint8");
                                return;
                              }
                              break;
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_144 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TypeCategory_44, (MR_Integer) 0))) & (MR_Integer) 1);

                    switch (Var_144) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "foreign enums with bytecode backend");
                          return;
                        }
                        break;
                      case (MR_Integer) 0:
                        TestId_45 = (MR_Integer) 4;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeCategory_44, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "system type");
                        return;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "user_ctor_type");
                        return;
                      }
                      break;
                  }
                  break;
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ByteVar1_32));
                MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (ByteVar2_33));
                MR_hl_field(MR_mktag(3), Var_112, 3) = (MR_Box) ((MR_Unsigned) (TestId_45));
              }
              *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_112)));
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/3", (MR_String) "complicated unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_4, (MR_Integer) 1))));

    hlds__vartypes__lookup_var_type_3_p_0(Var_7, Var_5, Type_6);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Var_5,
  MR_Integer * ByteVar_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_4, (MR_Integer) 0))));
    MR_Box conv0_ByteVar_6;

    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_7, ((MR_Box) (Var_5)), &conv0_ByteVar_6);
    *ByteVar_6 = ((MR_Integer) (conv0_ByteVar_6));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Vars_5,
  MR_Word * ByteVars_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_4, (MR_Integer) 0))));

    bytecode_backend__bytecode_gen__map_vars_2_3_p_0(Var_7, Vars_5, ByteVars_6);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ByteVar_8;
    MR_Word ByteVars_9;
    MR_Box conv0_ByteVar_8;

    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_1, ((MR_Box) (Var_6)), &conv0_ByteVar_8);
    ByteVar_8 = ((MR_Integer) (conv0_ByteVar_8));
    bytecode_backend__bytecode_gen__map_vars_2_3_p_0(HeadVar__1_1, Vars_7, &ByteVars_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ByteVar_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ByteVars_9));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word ConsId_5,
  MR_Word * ByteConsId_6)
{
  {
    MR_Word ModuleInfo_7;

    bytecode_backend__bytecode_gen__get_module_info_2_p_0(ByteInfo_4, &ModuleInfo_7);
    switch (MR_tag((MR_Word) ConsId_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ByteConsId_6 = (MR_Word) ((MR_Unsigned) 4U);
        break;
      case (MR_Integer) 1:
        *ByteConsId_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement tabling");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement table io entry desc");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement deep profiling");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Functor_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_Word ModuleName_11;
              MR_String FunctorName_12;
              MR_Word ConsTag_14;
              MR_Word ByteConsTag_15;

              if (((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 1))
              {
                ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_8, (MR_Integer) 0))));
                FunctorName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Functor_8, (MR_Integer) 1))));
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "unqualified cons");
                  return;
                }
              ConsTag_14 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_5);
              bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(ConsTag_14, &ByteConsTag_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FunctorName_12));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Arity_9));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ByteConsTag_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Arity_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word ConsTag_99;
              MR_Word ByteConsTag_100;

              ConsTag_99 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_5);
              bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(ConsTag_99, &ByteConsTag_100);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_4[0]));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_String) "{}"));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Arity_96));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ByteConsTag_100));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
              MR_Word PredId_18;
              MR_Integer ProcId_19;
              MR_String PredName_20;
              MR_Word PredInfo_21;
              MR_Integer IsFunc_22;
              MR_Integer ProcInt_23;
              MR_Word Var_92;
              MR_Integer Arity_101;
              MR_Word ModuleName_102;

              Var_92 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_16);
              PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));
              ProcId_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 1))));
              hlds__hlds_module__predicate_id_5_p_0(ModuleInfo_7, PredId_18, &ModuleName_102, &PredName_20, &Arity_101);
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_18, &PredInfo_21);
              bytecode_backend__bytecode_gen__get_is_func_2_p_0(PredInfo_21, &IsFunc_22);
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_19, &ProcInt_23);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_102));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredName_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Arity_101));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (IsFunc_22));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ProcInt_23));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer IntVal_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IntVal_24));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "uint");
              return;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "int8");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "uint8");
              return;
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "int16");
              return;
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "uint16");
              return;
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "int32");
              return;
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "uint32");
              return;
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "int64");
              return;
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_gen.m", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "uint64");
              return;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float FloatVal_34 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(FloatVal_34);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char CharVal_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (CharVal_35));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String StringVal_36 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (StringVal_36));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "impl_defined_const");
              return;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_String TypeName_38 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_Integer TypeArity_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 3))));
              MR_Word ModuleName_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_103));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TypeName_38));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeArity_39));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ClassId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2))));
              MR_String Instance_42 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 4))));
              MR_Word ModuleName_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_104));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ClassId_40));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Instance_42));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement type_info_const");
              return;
            }
            break;
          case (MR_Integer) 22:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement typeclass_info_const");
              return;
            }
            break;
          case (MR_Integer) 23:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement ground_term_const");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_is_func_2_p_0(
  MR_Word PredInfo_3,
  MR_Integer * IsFunc_4)
{
  {
    MR_Word PredOrFunc_5;

    PredOrFunc_5 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *IsFunc_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        *IsFunc_4 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_module_info_2_p_0(
  MR_Word ByteInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_3, (MR_Integer) 2))));
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * ByteConsTag_4)
{
  switch (MR_tag((MR_Word) ConsTag_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with dummy tags");
            return;
          }
          break;
        case (MR_Integer) 1:
          *ByteConsTag_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTagType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTagType_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer IntVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTagType_16, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ByteConsTag_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (IntVal_17));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with uint or fixed size int");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with uint or fixed size int");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "float_tag cons tag for non-float_constant cons id");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "string_tag cons tag for non-string_constant cons id");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with foreign tags");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
            MR_Word LocalSecTag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
            MR_Unsigned SectagUint_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSecTag_7, (MR_Integer) 0))));
            MR_Integer Sectag_12;
            MR_Integer Var_97;

            Sectag_12 = mercury__uint__cast_to_int_1_f_0(SectagUint_9);
            Var_97 = bytecode_backend__bytecode_gen__ptag_to_int_1_f_0(Ptag_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *ByteConsTag_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Sectag_12));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "ground_term_const cons tag for non-ground_term_const cons id");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_info_const cons tag for non-type_info_const cons id");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "typeclass_info_const cons tag for non-typeclass_info_const cons id");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_ctor_info_tag cons tag for non-type_ctor_info_constant cons id");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "base_typeclass_info_tag cons tag for non-base_typeclass_info_constant cons id");
            return;
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "deep_profiling_proc_layout_tag cons tag for non-deep_profiling_proc_static cons id");
            return;
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "tabling_info_tag cons tag for non-tabling_info_constant cons id");
            return;
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "table_io_entry_tag cons tag for non-table_io_entry_desc cons id");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with remote_args_tag");
            return;
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with local_args_tag");
            return;
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with direct_arg_tag");
            return;
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "closure_tag cons tag for non-closure_cons cons id");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Integer MR_CALL 
bytecode_backend__bytecode_gen__ptag_to_int_1_f_0(
  MR_Word Ptag_3)
{
  {
    MR_Integer PtagInt_4;
    uint8_t PtagUint8_5 = (uint8_t) (Ptag_3);

    PtagInt_4 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_5);
    return PtagInt_4;
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Dir_2)
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
      MR_Word Dir_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Dirs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Dir_2;

      succeeded = (Dir_2 == Dir_4);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Dirs_5;
        next_value_of_Dir_2 = Dir_4;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Dir_2 = next_value_of_Dir_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ByteInfo_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_arg_dirs\'/4", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_arg_dirs\'/4", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Arg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Dir_23;
        MR_Word Dirs_24;
        MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_3, (MR_Integer) 2))));
        MR_Word Type_26;
        MR_Word VarInitInst_27;
        MR_Word VarFinalInst_28;
        MR_Word ArgInitInst_29;
        MR_Word ArgFinalInst_30;
        MR_Word VarTopFunctorMode_31;
        MR_Word ArgTopFunctorMode_32;
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_3, (MR_Integer) 1))));

        hlds__vartypes__lookup_var_type_3_p_0(Var_39, Arg_20, &Type_26);
        VarInitInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        VarFinalInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        ArgInitInst_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))));
        ArgFinalInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3))));
        check_hlds__mode_util__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_25, VarInitInst_27, VarFinalInst_28, Type_26, &VarTopFunctorMode_31);
        check_hlds__mode_util__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_25, ArgInitInst_29, ArgFinalInst_30, Type_26, &ArgTopFunctorMode_32);
        succeeded = (VarTopFunctorMode_31 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ArgTopFunctorMode_32 == (MR_Integer) 1);
        if (succeeded)
          Dir_23 = (MR_Integer) 0;
        else
        {
          succeeded = (VarTopFunctorMode_31 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ArgTopFunctorMode_32 == (MR_Integer) 0);
          if (succeeded)
            Dir_23 = (MR_Integer) 1;
          else
          {
            succeeded = (VarTopFunctorMode_31 == (MR_Integer) 2);
            if (succeeded)
              succeeded = (ArgTopFunctorMode_32 == (MR_Integer) 2);
            if (succeeded)
              Dir_23 = (MR_Integer) 2;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.map_arg_dirs\'/4", (MR_String) "invalid mode for (de)construct unification");
                return;
              }
          }
        }
        bytecode_backend__bytecode_gen__map_arg_dirs_4_p_0(Var_35, Args_21, ByteInfo_3, &Dirs_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dir_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Dirs_24));
        }
      }
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word Args_8,
  MR_Word ByteInfo_9,
  MR_Word * Code_10)
{
  {
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_9, (MR_Integer) 2))));
    MR_Word ModuleName_12;
    MR_String PredName_13;
    MR_Word SimpleCode_14;

    ModuleName_12 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_11, PredId_6);
    PredName_13 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_11, PredId_6);
    backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), ModuleName_12, PredName_13, ProcId_7, Args_8, &SimpleCode_14);
    switch (MR_tag((MR_Word) SimpleCode_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_14, (MR_Integer) 0))));
          MR_Word Expr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_14, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) Expr_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_41;
                MR_Word X_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expr_17, (MR_Integer) 0))));
                MR_Integer ByteX_48;
                MR_Integer ByteVar_49;
                MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_9, (MR_Integer) 0))));
                MR_Word Var_76;
                MR_Box conv1_ByteX_48;
                MR_Box conv2_ByteVar_49;

                mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_66, ((MR_Box) (X_47)), &conv1_ByteX_48);
                ByteX_48 = ((MR_Integer) (conv1_ByteX_48));
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_9, (MR_Integer) 0))));
                mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_76, ((MR_Box) (Var_16)), &conv2_ByteVar_49);
                ByteVar_49 = ((MR_Integer) (conv2_ByteVar_49));
                {
                  Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                  MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ByteVar_49));
                  MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (ByteX_48));
                }
                *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_41)));
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 9:
                  {
                    MR_Word Unop_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 1))));
                    MR_Word Var_42;
                    MR_Word X_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 2))));
                    MR_Word ByteX_45;
                    MR_Integer ByteVar_46;
                    MR_Word Var_86;
                    MR_Box conv3_ByteVar_46;

                    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_9, X_44, &ByteX_45);
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_9, (MR_Integer) 0))));
                    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_86, ((MR_Box) (Var_16)), &conv3_ByteVar_46);
                    ByteVar_46 = ((MR_Integer) (conv3_ByteVar_46));
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 26U));
                      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Unop_40));
                      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (ByteX_45));
                      MR_hl_field(MR_mktag(3), Var_42, 3) = ((MR_Box) (ByteVar_46));
                    }
                    *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_42)));
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Binop_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 1))));
                    MR_Word X_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 2))));
                    MR_Word Y_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_17, (MR_Integer) 3))));
                    MR_Word ByteX_37;
                    MR_Word ByteY_38;
                    MR_Integer ByteVar_39;
                    MR_Word Var_43;
                    MR_Word Var_56;
                    MR_Box conv0_ByteVar_39;

                    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_9, X_35, &ByteX_37);
                    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_9, Y_36, &ByteY_38);
                    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_9, (MR_Integer) 0))));
                    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_56, ((MR_Box) (Var_16)), &conv0_ByteVar_39);
                    ByteVar_39 = ((MR_Integer) (conv0_ByteVar_39));
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 25U));
                      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Binop_34));
                      MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (ByteX_37));
                      MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (ByteY_38));
                      MR_hl_field(MR_mktag(3), Var_43, 4) = ((MR_Box) (ByteVar_39));
                    }
                    *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_43)));
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_builtin\'/5", (MR_String) "ref_assign");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Test_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleCode_14, (MR_Integer) 0))));

          bytecode_backend__bytecode_gen__map_test_3_p_0(ByteInfo_9, Test_15, Code_10);
        }
        break;
      case (MR_Integer) 3:
        *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_test_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word TestExpr_5,
  MR_Word * Code_6)
{
  if (((((MR_tag((MR_Word) TestExpr_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
  {
    MR_Word Binop_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 1))));
    MR_Word X_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 2))));
    MR_Word Y_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 3))));
    MR_Word ByteX_10;
    MR_Word ByteY_11;
    MR_Word Var_14;

    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_4, X_8, &ByteX_10);
    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_4, Y_9, &ByteY_11);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Binop_7));
      MR_hl_field(MR_mktag(3), Var_14, 2) = ((MR_Box) (ByteX_10));
      MR_hl_field(MR_mktag(3), Var_14, 3) = ((MR_Box) (ByteY_11));
    }
    *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_14)));
  }
  else
  {
    MR_Word Unop_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Word X_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_5, (MR_Integer) 2))));
    MR_Word ByteX_16;

    bytecode_backend__bytecode_gen__map_arg_3_p_0(ByteInfo_4, X_15, &ByteX_16);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Unop_12));
      MR_hl_field(MR_mktag(3), Var_13, 2) = ((MR_Box) (ByteX_16));
    }
    *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_13)));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
  MR_Word ByteInfo_4,
  MR_Word Expr_5,
  MR_Word * ByteArg_6)
{
  switch (MR_tag((MR_Word) Expr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expr_5, (MR_Integer) 0))));
        MR_Integer ByteVar_8;
        MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_4, (MR_Integer) 0))));
        MR_Box conv0_ByteVar_8;

        mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_23, ((MR_Box) (Var_7)), &conv0_ByteVar_8);
        ByteVar_8 = ((MR_Integer) (conv0_ByteVar_8));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *ByteArg_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ByteVar_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer IntVal_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Expr_5, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ByteArg_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IntVal_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned UIntVal_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ByteArg_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UIntVal_11));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t Int8Val_12 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8Val_12));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t UInt8Val_13 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8Val_13));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t Int16Val_14 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16Val_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t UInt16Val_15 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16Val_15));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t Int32Val_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32Val_16));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t UInt32Val_17 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32Val_17));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t Int64Val_18 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64Val_18);
            }
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t UInt64Val_19 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64Val_19);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Float FloatVal_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ByteArg_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(FloatVal_10);
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word ArgVars_9,
  MR_Word Detism_10,
  MR_Word ByteInfo_11,
  MR_Word * Code_12)
{
  {
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_11, (MR_Integer) 2))));
    MR_Word ProcInfo_15;
    MR_Word ArgInfo_16;
    MR_Word ArgVarsInfos_17;
    MR_Word PredInfo_18;
    MR_Integer IsFunc_19;
    MR_Word InputArgs_20;
    MR_Word PlaceArgs_21;
    MR_Word OutputArgs_22;
    MR_Word PickupArgs_23;
    MR_Word ModuleName_24;
    MR_String PredName_25;
    MR_Integer Arity_26;
    MR_Integer ProcInt_27;
    MR_Word Call_28;
    MR_Word CodeModel_29;
    MR_Word Check_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word PredOrFunc_45;
    MR_Word Var_14;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_13, PredId_7, ProcId_8, &Var_14, &ProcInfo_15);
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_15, &ArgInfo_16);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), ArgVars_9, ArgInfo_16, &ArgVarsInfos_17);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_7, &PredInfo_18);
    PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_18);
    switch (PredOrFunc_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IsFunc_19 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        IsFunc_19 = (MR_Integer) 0;
        break;
    }
    ll_backend__call_gen__input_arg_locs_2_p_0(ArgVarsInfos_17, &InputArgs_20);
    bytecode_backend__bytecode_gen__gen_places_3_p_0(InputArgs_20, ByteInfo_11, &PlaceArgs_21);
    ll_backend__call_gen__output_arg_locs_2_p_0(ArgVarsInfos_17, &OutputArgs_22);
    bytecode_backend__bytecode_gen__gen_pickups_3_p_0(OutputArgs_22, ByteInfo_11, &PickupArgs_23);
    hlds__hlds_module__predicate_id_5_p_0(ModuleInfo_13, PredId_7, &ModuleName_24, &PredName_25, &Arity_26);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_8, &ProcInt_27);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (ModuleName_24));
      MR_hl_field(MR_mktag(3), Var_31, 2) = ((MR_Box) (PredName_25));
      MR_hl_field(MR_mktag(3), Var_31, 3) = ((MR_Box) (Arity_26));
      MR_hl_field(MR_mktag(3), Var_31, 4) = ((MR_Box) (IsFunc_19));
      MR_hl_field(MR_mktag(3), Var_31, 5) = ((MR_Box) (ProcInt_27));
    }
    Call_28 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_31)));
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_10, &CodeModel_29);
    switch (CodeModel_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        Check_30 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
        break;
      case (MR_Integer) 1:
        Check_30 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 28U)));
        break;
    }
    Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Check_30, PickupArgs_23);
    Var_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Call_28, Var_34);
    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), PlaceArgs_21, Var_33);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    bytecode_backend__bytecode_gen__get_var_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
  MR_Word PredVar_7,
  MR_Word ArgVars_8,
  MR_Word ArgModes_9,
  MR_Word Detism_10,
  MR_Word ByteInfo_11,
  MR_Word * Code_12)
{
  {
    MR_Word CodeModel_13;
    MR_Word ModuleInfo_14;
    MR_Word ArgTypes_15;
    MR_Word ArgInfo_16;
    MR_Word ArgVarsInfos_17;
    MR_Word InVars_18;
    MR_Word OutVars_19;
    MR_Integer NInVars_20;
    MR_Integer NOutVars_21;
    MR_Word InputArgs_22;
    MR_Word PlaceArgs_23;
    MR_Word OutputArgs_24;
    MR_Word PickupArgs_25;
    MR_Integer BytePredVar_26;
    MR_Word Call_27;
    MR_Word Check_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_49;
    MR_Box conv1_BytePredVar_26;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_10, &CodeModel_13);
    ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_11, (MR_Integer) 2))));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ByteInfo_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_29, ArgVars_8, &ArgTypes_15);
    hlds__arg_info__make_standard_arg_infos_5_p_0(ArgTypes_15, ArgModes_9, CodeModel_13, ModuleInfo_14, &ArgInfo_16);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), ArgVars_8, ArgInfo_16, &ArgVarsInfos_17);
    hlds__arg_info__partition_args_3_p_0(ArgVarsInfos_17, &InVars_18, &OutVars_19);
    mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_2[0]), InVars_18, &NInVars_20);
    mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_2[0]), OutVars_19, &NOutVars_21);
    ll_backend__call_gen__input_arg_locs_2_p_0(ArgVarsInfos_17, &InputArgs_22);
    bytecode_backend__bytecode_gen__gen_places_3_p_0(InputArgs_22, ByteInfo_11, &PlaceArgs_23);
    ll_backend__call_gen__output_arg_locs_2_p_0(ArgVarsInfos_17, &OutputArgs_24);
    bytecode_backend__bytecode_gen__gen_pickups_3_p_0(OutputArgs_24, ByteInfo_11, &PickupArgs_25);
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_11, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_49, ((MR_Box) (PredVar_7)), &conv1_BytePredVar_26);
    BytePredVar_26 = ((MR_Integer) (conv1_BytePredVar_26));
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (BytePredVar_26));
      MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (NInVars_20));
      MR_hl_field(MR_mktag(3), Var_30, 3) = ((MR_Box) (NOutVars_21));
      MR_hl_field(MR_mktag(3), Var_30, 4) = (MR_Box) ((MR_Unsigned) (Detism_10));
    }
    Call_27 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_30)));
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        Check_28 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
        break;
      case (MR_Integer) 1:
        Check_28 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) ((MR_Unsigned) 28U)));
        break;
    }
    Var_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Check_28, PickupArgs_25);
    Var_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Call_27, Var_33);
    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), PlaceArgs_23, Var_32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ByteInfo_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
  else
  {
    MR_Word Var_5;
    MR_Word Loc_6;
    MR_Word OutputArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OtherCode_10;
    MR_Integer ByteVar_11;
    MR_Integer RegNum_12;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer Var_24;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Box conv0_ByteVar_11;

    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    Loc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    bytecode_backend__bytecode_gen__gen_pickups_3_p_0(OutputArgs_7, ByteInfo_2, &OtherCode_10);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_2, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_29, ((MR_Box) (Var_5)), &conv0_ByteVar_11);
    ByteVar_11 = ((MR_Integer) (conv0_ByteVar_11));
    Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Loc_6, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Loc_6, (MR_Integer) 1))));
    switch (Var_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_pickups\'/3", (MR_String) "floating point register");
          return;
        }
        break;
      case (MR_Integer) 0:
        RegNum_12 = Var_24;
        break;
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 22U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = NULL;
      MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) (RegNum_12));
      MR_hl_field(MR_mktag(3), Var_20, 3) = ((MR_Box) (ByteVar_11));
    }
    Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_20)));
    *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_19, OtherCode_10);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ByteInfo_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0));
  else
  {
    MR_Word Var_5;
    MR_Word Loc_6;
    MR_Word OutputArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OtherCode_10;
    MR_Integer ByteVar_11;
    MR_Integer RegNum_12;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer Var_24;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Box conv0_ByteVar_11;

    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    Loc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    bytecode_backend__bytecode_gen__gen_places_3_p_0(OutputArgs_7, ByteInfo_2, &OtherCode_10);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ByteInfo_2, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&bytecode_backend__bytecode_gen_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_29, ((MR_Box) (Var_5)), &conv0_ByteVar_11);
    ByteVar_11 = ((MR_Integer) (conv0_ByteVar_11));
    Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Loc_6, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Loc_6, (MR_Integer) 1))));
    switch (Var_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_places\'/3", (MR_String) "floating point register");
          return;
        }
        break;
      case (MR_Integer) 0:
        RegNum_12 = Var_24;
        break;
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = NULL;
      MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) (RegNum_12));
      MR_hl_field(MR_mktag(3), Var_20, 3) = ((MR_Box) (ByteVar_11));
    }
    Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), ((MR_Box) (Var_20)));
    *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0), Var_19, OtherCode_10);
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode_gen____Unify____byte_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode_gen____Compare____byte_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__bytecode_backend__bytecode_gen__init(void)
{
}

void mercury__bytecode_backend__bytecode_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0);
}

void mercury__bytecode_backend__bytecode_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bytecode_backend__bytecode_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bytecode_backend.bytecode_gen.
