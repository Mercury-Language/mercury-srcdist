/*
** Automatically generated from `bytecode_gen.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module bytecode_backend.bytecode_gen. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_3,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__6_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5);

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo0_4,
  MR_Integer * bytecode_backend__bytecode_gen__Label_5,
  MR_Integer * bytecode_backend__bytecode_gen__Temp_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
  MR_Integer * bytecode_backend__bytecode_gen__Temp_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
  MR_Integer * bytecode_backend__bytecode_gen__Label_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Var_5,
  MR_Word * bytecode_backend__bytecode_gen__Type_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Var_5,
  MR_Integer * bytecode_backend__bytecode_gen__ByteVar_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Vars_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteVars_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__VarSet_2,
  MR_Word bytecode_backend__bytecode_gen__VarTypes_3,
  MR_Integer bytecode_backend__bytecode_gen__N0_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__7_7);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__ConsId_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteConsId_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_2,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4,
  MR_Word * bytecode_backend__bytecode_gen__Code_5);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4);

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__Dir_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_3,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Expr_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteArg_6);

static void MR_CALL 
bytecode_backend__bytecode_gen__map_assign_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_5,
  MR_Word bytecode_backend__bytecode_gen__Var_6,
  MR_Word bytecode_backend__bytecode_gen__Expr_7,
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredId_6,
  MR_Integer bytecode_backend__bytecode_gen__ProcId_7,
  MR_Word bytecode_backend__bytecode_gen__Args_8,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_9,
  MR_Word * bytecode_backend__bytecode_gen__Code_10);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredId_7,
  MR_Integer bytecode_backend__bytecode_gen__ProcId_8,
  MR_Word bytecode_backend__bytecode_gen__ArgVars_9,
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
  MR_Word * bytecode_backend__bytecode_gen__Code_12);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredVar_7,
  MR_Word bytecode_backend__bytecode_gen__ArgVars_8,
  MR_Word bytecode_backend__bytecode_gen__ArgModes_9,
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
  MR_Word * bytecode_backend__bytecode_gen__Code_12);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__GoalExpr_6,
  MR_Word bytecode_backend__bytecode_gen__GoalInfo_7,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83,
  MR_Word * bytecode_backend__bytecode_gen__Code_9);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13,
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
  MR_Integer bytecode_backend__bytecode_gen__ProcId_5,
  MR_Word bytecode_backend__bytecode_gen__PredInfo_6,
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7,
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5);

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);


static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[3][3];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[2][1];


/* sealed */ struct bytecode_backend__bytecode_gen__vector_common_type_5_0_s {
  const MR_Word bytecode_backend__bytecode_gen__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct bytecode_backend__bytecode_gen__vector_common_type_5_0_s bytecode_backend__bytecode_gen_vector_common_5[4];



static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[3][3] = {
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
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct bytecode_backend__bytecode_gen__vector_common_type_5_0_s bytecode_backend__bytecode_gen_vector_common_5[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 2 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0[5] = {
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[1] = {
  &bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

static const MR_DuPtagLayout bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode_gen",
  (MR_String) "byte_info",
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0 },
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0
};

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    {
      bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen____Unify____byte_info_0_0(((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_2));
    }
    return bytecode_backend__bytecode_gen__succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_3)
{
  {
    MR_Word bytecode_backend__bytecode_gen__conv0_HeadVar__1_1;

    {
      bytecode_backend__bytecode_gen____Compare____byte_info_0_0(&bytecode_backend__bytecode_gen__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_3));
    }
    *bytecode_backend__bytecode_gen__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2)
{
  {
    MR_Box bytecode_backend__bytecode_gen__closure = bytecode_backend__bytecode_gen__closure_arg;
    MR_Word bytecode_backend__bytecode_gen__conv0_ByteConsId_6;

    {
      bytecode_backend__bytecode_gen__map_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__closure, (MR_Integer) 3))), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), &bytecode_backend__bytecode_gen__conv0_ByteConsId_6);
    }
    *bytecode_backend__bytecode_gen__wrapper_arg_2 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_ByteConsId_6));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_3,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__6_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4;
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_47_47;
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_60;
        MR_Word bytecode_backend__bytecode_gen__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 2)));
        MR_Word bytecode_backend__bytecode_gen__ByteMainConsId_21;
        MR_Word bytecode_backend__bytecode_gen__ByteOtherConsIds_22;
        MR_Word bytecode_backend__bytecode_gen__GoalCode_23;
        MR_Word bytecode_backend__bytecode_gen__CasesCode_24;
        MR_Integer bytecode_backend__bytecode_gen__NextLabel_25;
        MR_Word bytecode_backend__bytecode_gen__EnterCode_26;
        MR_Word bytecode_backend__bytecode_gen__EndofCode_27;
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31;
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32;
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
        MR_Word bytecode_backend__bytecode_gen__V_35_35;
        MR_Word bytecode_backend__bytecode_gen__V_36_36;
        MR_Word bytecode_backend__bytecode_gen__V_37_37;
        MR_Word bytecode_backend__bytecode_gen__V_38_38;
        MR_Word bytecode_backend__bytecode_gen__V_40_40;
        MR_Word bytecode_backend__bytecode_gen__V_41_41;
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_51;
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_52;
        MR_Word bytecode_backend__bytecode_gen__GoalCode_54;
        MR_Word bytecode_backend__bytecode_gen__Context_55;
        MR_Integer bytecode_backend__bytecode_gen__Line_56;
        MR_Word bytecode_backend__bytecode_gen__V_58_58;
        MR_Word bytecode_backend__bytecode_gen__V_59_59;
        MR_Word bytecode_backend__bytecode_gen__LabelCounter0_65;
        MR_Word bytecode_backend__bytecode_gen__LabelCounter_66;
        MR_Word bytecode_backend__bytecode_gen__V_68_68;
        MR_Word bytecode_backend__bytecode_gen__V_69_69;
        MR_Word bytecode_backend__bytecode_gen__V_70_70;
        MR_Word bytecode_backend__bytecode_gen__V_71_71;
        MR_Word bytecode_backend__bytecode_gen__V_72_72;
        MR_Word bytecode_backend__bytecode_gen__V_73_73;
        MR_Word bytecode_backend__bytecode_gen__V_74_74;
        MR_Word bytecode_backend__bytecode_gen__V_76_76;
        MR_Word bytecode_backend__bytecode_gen__V_75_75;

        {
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4, bytecode_backend__bytecode_gen__MainConsId_18, &bytecode_backend__bytecode_gen__ByteMainConsId_21);
        }
        {
          bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1));
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0, bytecode_backend__bytecode_gen__V_30_30, bytecode_backend__bytecode_gen__OtherConsIds_19, &bytecode_backend__bytecode_gen__ByteOtherConsIds_22);
        }
        bytecode_backend__bytecode_gen__GoalExpr_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_20, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__GoalInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_20, (MR_Integer) 1)));
        {
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_51, bytecode_backend__bytecode_gen__GoalInfo_52, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31, &bytecode_backend__bytecode_gen__GoalCode_54);
        }
        {
          bytecode_backend__bytecode_gen__Context_55 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_52);
        }
        {
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_55, &bytecode_backend__bytecode_gen__Line_56);
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_60 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        {
          bytecode_backend__bytecode_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_59_59, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_56));
        }
        {
          bytecode_backend__bytecode_gen__V_58_58 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_60, ((MR_Box) (bytecode_backend__bytecode_gen__V_59_59)));
        }
        {
          bytecode_backend__bytecode_gen__GoalCode_23 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_60, bytecode_backend__bytecode_gen__V_58_58, bytecode_backend__bytecode_gen__GoalCode_54);
        }
        {
          bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(bytecode_backend__bytecode_gen__Cases_13, bytecode_backend__bytecode_gen__EndLabel_3, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, &bytecode_backend__bytecode_gen__CasesCode_24);
        }
        bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 1)));
        bytecode_backend__bytecode_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 2)));
        bytecode_backend__bytecode_gen__LabelCounter0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 3)));
        bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 4)));
        {
          mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__NextLabel_25, bytecode_backend__bytecode_gen__LabelCounter0_65, &bytecode_backend__bytecode_gen__LabelCounter_66);
        }
        bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 1)));
        bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 2)));
        bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 3)));
        bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 4)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_72_72));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_73_73));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_74_74));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_66));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_76_76));
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_47_47 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        {
          bytecode_backend__bytecode_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteMainConsId_21));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteOtherConsIds_22));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_25));
        }
        {
          bytecode_backend__bytecode_gen__EnterCode_26 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, ((MR_Box) (bytecode_backend__bytecode_gen__V_34_34)));
        }
        {
          bytecode_backend__bytecode_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_36_36, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_3));
        }
        {
          bytecode_backend__bytecode_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_38_38, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_25));
        }
        {
          bytecode_backend__bytecode_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_37_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_38_38));
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          bytecode_backend__bytecode_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_35_35, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_36_36));
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_35_35, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_37_37));
        }
        {
          bytecode_backend__bytecode_gen__EndofCode_27 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__V_35_35);
        }
        {
          bytecode_backend__bytecode_gen__V_41_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__EndofCode_27, bytecode_backend__bytecode_gen__CasesCode_24);
        }
        {
          bytecode_backend__bytecode_gen__V_40_40 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__GoalCode_23, bytecode_backend__bytecode_gen__V_41_41);
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__EnterCode_26, bytecode_backend__bytecode_gen__V_40_40);
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word bytecode_backend__bytecode_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__UniModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer bytecode_backend__bytecode_gen__ByteVar_17;
          MR_Word bytecode_backend__bytecode_gen__ByteArgs_18;
          MR_Word bytecode_backend__bytecode_gen__ByteConsId_19;
          MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 5)));
          MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 6)));
          MR_Word bytecode_backend__bytecode_gen__V_20_20;
          MR_String bytecode_backend__bytecode_gen__V_21_21;
          MR_Integer bytecode_backend__bytecode_gen__V_22_22;
          MR_Integer bytecode_backend__bytecode_gen__V_23_23;
          MR_Integer bytecode_backend__bytecode_gen__V_24_24;

          {
            bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var_6, &bytecode_backend__bytecode_gen__ByteVar_17);
          }
          {
            bytecode_backend__bytecode_gen__map_vars_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Args_8, &bytecode_backend__bytecode_gen__ByteArgs_18);
          }
          {
            bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__ConsId_7, &bytecode_backend__bytecode_gen__ByteConsId_19);
          }
          bytecode_backend__bytecode_gen__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ByteConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (bytecode_backend__bytecode_gen__succeeded)
            {
              bytecode_backend__bytecode_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 1)));
              bytecode_backend__bytecode_gen__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 2)));
              bytecode_backend__bytecode_gen__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 3)));
              bytecode_backend__bytecode_gen__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 4)));
              bytecode_backend__bytecode_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 5)));
              {
                MR_Word bytecode_backend__bytecode_gen__V_27_27;

                {
                  bytecode_backend__bytecode_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_18));
                }
                {
                  *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_27_27)));
                }
              }
            }
          else
            {
              MR_Word bytecode_backend__bytecode_gen__Dirs_25;

              {
                bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__UniModes_9, bytecode_backend__bytecode_gen__Args_8, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__Dirs_25);
              }
              {
                bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(bytecode_backend__bytecode_gen__Dirs_25, (MR_Integer) 1);
              }
              if (bytecode_backend__bytecode_gen__succeeded)
                {
                  MR_Word bytecode_backend__bytecode_gen__V_29_29;

                  {
                    bytecode_backend__bytecode_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_18));
                  }
                  {
                    *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_29_29)));
                  }
                }
              else
                {
                  MR_Word bytecode_backend__bytecode_gen__Pairs_26;
                  MR_Word bytecode_backend__bytecode_gen__V_30_30;

                  {
                    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0, bytecode_backend__bytecode_gen__ByteArgs_18, bytecode_backend__bytecode_gen__Dirs_25, &bytecode_backend__bytecode_gen__Pairs_26);
                  }
                  {
                    bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Pairs_26));
                  }
                  {
                    *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word bytecode_backend__bytecode_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__ConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__UniModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer bytecode_backend__bytecode_gen__ByteVar_41;
          MR_Word bytecode_backend__bytecode_gen__ByteArgs_42;
          MR_Word bytecode_backend__bytecode_gen__ByteConsId_43;
          MR_Word bytecode_backend__bytecode_gen__Dirs_44;
          MR_Word bytecode_backend__bytecode_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word bytecode_backend__bytecode_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 5)));

          {
            bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var_31, &bytecode_backend__bytecode_gen__ByteVar_41);
          }
          {
            bytecode_backend__bytecode_gen__map_vars_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Args_33, &bytecode_backend__bytecode_gen__ByteArgs_42);
          }
          {
            bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__ConsId_32, &bytecode_backend__bytecode_gen__ByteConsId_43);
          }
          {
            bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__UniModes_34, bytecode_backend__bytecode_gen__Args_33, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__Dirs_44);
          }
          {
            bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(bytecode_backend__bytecode_gen__Dirs_44, (MR_Integer) 0);
          }
          if (bytecode_backend__bytecode_gen__succeeded)
            {
              MR_Word bytecode_backend__bytecode_gen__V_47_47;

              {
                bytecode_backend__bytecode_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_41));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_43));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_42));
              }
              {
                *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_47_47)));
              }
            }
          else
            {
              MR_Word bytecode_backend__bytecode_gen__Pairs_45;
              MR_Word bytecode_backend__bytecode_gen__V_48_48;

              {
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0, bytecode_backend__bytecode_gen__ByteArgs_42, bytecode_backend__bytecode_gen__Dirs_44, &bytecode_backend__bytecode_gen__Pairs_45);
              }
              {
                bytecode_backend__bytecode_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_41));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_43));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Pairs_45));
              }
              {
                *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_48_48)));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word bytecode_backend__bytecode_gen__Target_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__Source_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer bytecode_backend__bytecode_gen__ByteTarget_55;
          MR_Integer bytecode_backend__bytecode_gen__ByteSource_56;
          MR_Word bytecode_backend__bytecode_gen__V_57_57;

          {
            bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Target_49, &bytecode_backend__bytecode_gen__ByteTarget_55);
          }
          {
            bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Source_50, &bytecode_backend__bytecode_gen__ByteSource_56);
          }
          {
            bytecode_backend__bytecode_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteTarget_55));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteSource_56));
          }
          {
            *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_57_57)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word bytecode_backend__bytecode_gen__Var1_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__Var2_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer bytecode_backend__bytecode_gen__ByteVar1_64;
              MR_Integer bytecode_backend__bytecode_gen__ByteVar2_65;
              MR_Word bytecode_backend__bytecode_gen__Var1Type_66;
              MR_Word bytecode_backend__bytecode_gen__Var2Type_67;
              MR_Word bytecode_backend__bytecode_gen__TypeCtor_70;
              MR_Word bytecode_backend__bytecode_gen__ModuleInfo_73;
              MR_Word bytecode_backend__bytecode_gen__TypeCategory_76;
              MR_Word bytecode_backend__bytecode_gen__TestId_77;
              MR_Word bytecode_backend__bytecode_gen__V_113_113;
              MR_Word bytecode_backend__bytecode_gen__TypeCtor1_68;
              MR_Word bytecode_backend__bytecode_gen__TypeCtor2_69;
              MR_Word bytecode_backend__bytecode_gen__V_71_71;
              MR_Word bytecode_backend__bytecode_gen__V_72_72;
              MR_Word bytecode_backend__bytecode_gen__V_74_74;
              MR_Word bytecode_backend__bytecode_gen__V_75_75;

              {
                bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var1_58, &bytecode_backend__bytecode_gen__ByteVar1_64);
              }
              {
                bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var2_59, &bytecode_backend__bytecode_gen__ByteVar2_65);
              }
              {
                bytecode_backend__bytecode_gen__get_var_type_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var1_58, &bytecode_backend__bytecode_gen__Var1Type_66);
              }
              {
                bytecode_backend__bytecode_gen__get_var_type_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var2_59, &bytecode_backend__bytecode_gen__Var2Type_67);
              }
              {
                bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(bytecode_backend__bytecode_gen__Var1Type_66, &bytecode_backend__bytecode_gen__TypeCtor1_68);
              }
              if (bytecode_backend__bytecode_gen__succeeded)
                {
                  bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(bytecode_backend__bytecode_gen__Var2Type_67, &bytecode_backend__bytecode_gen__TypeCtor2_69);
                }
              if (bytecode_backend__bytecode_gen__succeeded)
                {
                  {
                    bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(bytecode_backend__bytecode_gen__TypeCtor2_69, bytecode_backend__bytecode_gen__TypeCtor1_68);
                  }
                  if (bytecode_backend__bytecode_gen__succeeded)
                    bytecode_backend__bytecode_gen__TypeCtor_70 = bytecode_backend__bytecode_gen__TypeCtor1_68;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "simple_test between different types");
                        return;
                      }
                    }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "failed lookup of type id");
                    return;
                  }
                }
              bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 0)));
              bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 1)));
              bytecode_backend__bytecode_gen__ModuleInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 2)));
              bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 3)));
              bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 4)));
              {
                bytecode_backend__bytecode_gen__TypeCategory_76 = check_hlds__type_util__classify_type_ctor_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_73, bytecode_backend__bytecode_gen__TypeCtor_70);
              }
              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__TypeCategory_76)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(bytecode_backend__bytecode_gen__TypeCategory_76)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "higher_order_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "tuple_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "variable_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "void_type");
                          return;
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word bytecode_backend__bytecode_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)));

                    bytecode_backend__bytecode_gen__TestId_77 = ((&bytecode_backend__bytecode_gen_vector_common_5[0 + bytecode_backend__bytecode_gen__V_135_135]))->bytecode_backend__bytecode_gen__vector_common_type_5_0__vct_5_f_0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word bytecode_backend__bytecode_gen__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)));

                    switch (bytecode_backend__bytecode_gen__V_136_136) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "foreign enums with bytecode backend");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 4;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "system type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "user_ctor_type");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                bytecode_backend__bytecode_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar1_64));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar2_65));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__TestId_77));
              }
              {
                *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_113_113)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Integer bytecode_backend__bytecode_gen__CastX_18 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__2_2;
    MR_Integer bytecode_backend__bytecode_gen__CastY_19 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__3_3;

    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CastX_18 == bytecode_backend__bytecode_gen__CastY_19);
    if (bytecode_backend__bytecode_gen__succeeded)
      *bytecode_backend__bytecode_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word bytecode_backend__bytecode_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word bytecode_backend__bytecode_gen__V_14_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[1], &bytecode_backend__bytecode_gen__V_14_14, ((MR_Box) (bytecode_backend__bytecode_gen__V_4_4)), ((MR_Box) (bytecode_backend__bytecode_gen__V_9_9)));
        }
        bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_14_14 == (MR_Integer) 0);
        bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
        if (bytecode_backend__bytecode_gen__succeeded)
          *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_14_14;
        else
          {
            MR_Word bytecode_backend__bytecode_gen__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[2], &bytecode_backend__bytecode_gen__V_15_15, ((MR_Box) (bytecode_backend__bytecode_gen__V_5_5)), ((MR_Box) (bytecode_backend__bytecode_gen__V_10_10)));
            }
            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_15_15 == (MR_Integer) 0);
            bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
            if (bytecode_backend__bytecode_gen__succeeded)
              *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_15_15;
            else
              {
                MR_Word bytecode_backend__bytecode_gen__V_16_16;

                {
                  hlds__hlds_module____Compare____module_info_0_0(&bytecode_backend__bytecode_gen__V_16_16, bytecode_backend__bytecode_gen__V_6_6, bytecode_backend__bytecode_gen__V_11_11);
                }
                bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_16_16 == (MR_Integer) 0);
                bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
                if (bytecode_backend__bytecode_gen__succeeded)
                  *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_16_16;
                else
                  {
                    MR_Word bytecode_backend__bytecode_gen__V_17_17;

                    {
                      mercury__counter____Compare____counter_0_0(&bytecode_backend__bytecode_gen__V_17_17, bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__V_12_12);
                    }
                    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_17_17 == (MR_Integer) 0);
                    bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
                    if (bytecode_backend__bytecode_gen__succeeded)
                      *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_17_17;
                    else
                      {
                        mercury__counter____Compare____counter_0_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__V_8_8, bytecode_backend__bytecode_gen__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Integer bytecode_backend__bytecode_gen__CastX_13 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__1_1;
    MR_Integer bytecode_backend__bytecode_gen__CastY_14 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__2_2;

    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CastX_13 == bytecode_backend__bytecode_gen__CastY_14);
    if (bytecode_backend__bytecode_gen__succeeded)
      bytecode_backend__bytecode_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeInfo_16_16;
        MR_Word bytecode_backend__bytecode_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word bytecode_backend__bytecode_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 4)));

        {
          bytecode_backend__bytecode_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[1], ((MR_Box) (bytecode_backend__bytecode_gen__V_3_3)), ((MR_Box) (bytecode_backend__bytecode_gen__V_8_8)));
        }
        if (bytecode_backend__bytecode_gen__succeeded)
          {
            bytecode_backend__bytecode_gen__TypeInfo_16_16 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[2];
            {
              bytecode_backend__bytecode_gen__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode_gen__TypeInfo_16_16, ((MR_Box) (bytecode_backend__bytecode_gen__V_4_4)), ((MR_Box) (bytecode_backend__bytecode_gen__V_9_9)));
            }
            if (bytecode_backend__bytecode_gen__succeeded)
              {
                {
                  bytecode_backend__bytecode_gen__succeeded = hlds__hlds_module____Unify____module_info_0_0(bytecode_backend__bytecode_gen__V_5_5, bytecode_backend__bytecode_gen__V_10_10);
                }
                if (bytecode_backend__bytecode_gen__succeeded)
                  {
                    {
                      bytecode_backend__bytecode_gen__succeeded = mercury__counter____Unify____counter_0_0(bytecode_backend__bytecode_gen__V_6_6, bytecode_backend__bytecode_gen__V_11_11);
                    }
                    if (bytecode_backend__bytecode_gen__succeeded)
                      {
                        bytecode_backend__bytecode_gen__succeeded = mercury__counter____Unify____counter_0_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__V_12_12);
                      }
                  }
              }
          }
      }
    return bytecode_backend__bytecode_gen__succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo0_4,
  MR_Integer * bytecode_backend__bytecode_gen__Label_5,
  MR_Integer * bytecode_backend__bytecode_gen__Temp_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__TempCounter0_9;
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 4)));
    MR_Word bytecode_backend__bytecode_gen___LabelCounter_8;
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
    MR_Word bytecode_backend__bytecode_gen__V_18_18;
    MR_Word bytecode_backend__bytecode_gen___TempCounter_10;

    {
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Label_5, bytecode_backend__bytecode_gen__LabelCounter0_7, &bytecode_backend__bytecode_gen___LabelCounter_8);
    }
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__TempCounter0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Temp_6, bytecode_backend__bytecode_gen__TempCounter0_9, &bytecode_backend__bytecode_gen___TempCounter_10);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
  MR_Integer * bytecode_backend__bytecode_gen__Temp_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__TempCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
    MR_Word bytecode_backend__bytecode_gen__TempCounter_7;
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
    MR_Word bytecode_backend__bytecode_gen__V_18_18;
    MR_Word bytecode_backend__bytecode_gen__V_19_19;

    {
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Temp_4, bytecode_backend__bytecode_gen__TempCounter0_6, &bytecode_backend__bytecode_gen__TempCounter_7);
    }
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__TempCounter_7));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
  MR_Integer * bytecode_backend__bytecode_gen__Label_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__LabelCounter_7;
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
    MR_Word bytecode_backend__bytecode_gen__V_19_19;
    MR_Word bytecode_backend__bytecode_gen__V_18_18;

    {
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Label_4, bytecode_backend__bytecode_gen__LabelCounter0_6, &bytecode_backend__bytecode_gen__LabelCounter_7);
    }
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_19_19));
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Var_5,
  MR_Word * bytecode_backend__bytecode_gen__Type_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

    {
      hlds__vartypes__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__Var_5, bytecode_backend__bytecode_gen__Type_6);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Var_5,
  MR_Integer * bytecode_backend__bytecode_gen__ByteVar_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));
    MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_7_7, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_6);
    }
    *bytecode_backend__bytecode_gen__ByteVar_6 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_6);
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *bytecode_backend__bytecode_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word bytecode_backend__bytecode_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_8;
        MR_Word bytecode_backend__bytecode_gen__ByteVars_9;
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_8;

        {
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__HeadVar__1_1, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv0_ByteVar_8);
        }
        bytecode_backend__bytecode_gen__ByteVar_8 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_8);
        {
          bytecode_backend__bytecode_gen__map_vars_2_3_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__Vars_7, &bytecode_backend__bytecode_gen__ByteVars_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVars_9));
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Vars_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteVars_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

    {
      bytecode_backend__bytecode_gen__map_vars_2_3_p_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__Vars_5, bytecode_backend__bytecode_gen__ByteVars_6);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__VarSet_2,
  MR_Word bytecode_backend__bytecode_gen__VarTypes_3,
  MR_Integer bytecode_backend__bytecode_gen__N0_4,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__7_7)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *bytecode_backend__bytecode_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6 = bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5;
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__VarList_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer bytecode_backend__bytecode_gen__N1_21;
        MR_String bytecode_backend__bytecode_gen__VarName_22;
        MR_Word bytecode_backend__bytecode_gen__VarType_23;
        MR_Word bytecode_backend__bytecode_gen__VarInfosTail_24;
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27;
        MR_Word bytecode_backend__bytecode_gen__V_30_30;

        {
          mercury__map__det_insert_4_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (bytecode_backend__bytecode_gen__Var_14)), ((MR_Box) (bytecode_backend__bytecode_gen__N0_4)), bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5, &bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27);
        }
        bytecode_backend__bytecode_gen__N1_21 = (bytecode_backend__bytecode_gen__N0_4 + (MR_Integer) 1);
        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, bytecode_backend__bytecode_gen__VarSet_2, bytecode_backend__bytecode_gen__Var_14, &bytecode_backend__bytecode_gen__VarName_22);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__VarTypes_3, bytecode_backend__bytecode_gen__Var_14, &bytecode_backend__bytecode_gen__VarType_23);
        }
        {
          bytecode_backend__bytecode_gen__create_varmap_7_p_0(bytecode_backend__bytecode_gen__VarList_15, bytecode_backend__bytecode_gen__VarSet_2, bytecode_backend__bytecode_gen__VarTypes_3, bytecode_backend__bytecode_gen__N1_21, bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27, bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6, &bytecode_backend__bytecode_gen__VarInfosTail_24);
        }
        {
          bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarName_22));
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarType_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *bytecode_backend__bytecode_gen__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInfosTail_24));
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__2_2)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(bytecode_backend__bytecode_gen__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *bytecode_backend__bytecode_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_4[1]);
            }
            break;
          case (MR_Integer) 1:
            *bytecode_backend__bytecode_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "string_tag cons tag for non-string_constant cons id");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "float_tag cons tag for non-float_constant cons id");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer bytecode_backend__bytecode_gen__IntVal_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_21));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with foreign tags");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "closure_tag cons tag for non-closure_cons cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_ctor_info_tag cons tag for non-type_ctor_info_constant cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "base_typeclass_info_tag cons tag for non-base_typeclass_info_constant cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_info_const cons tag for non-type_info_const cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "typeclass_info_const cons tag for non-typeclass_info_const cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "ground_term_const cons tag for non-ground_term_const cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "tabling_info_tag cons tag for non-tabling_info_constant cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "deep_profiling_proc_layout_tag cons tag for non-deep_profiling_proc_static cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "table_io_entry_tag cons tag for non-table_io_entry_desc cons id");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer bytecode_backend__bytecode_gen__Primary_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_4));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with direct_arg_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer bytecode_backend__bytecode_gen__Primary_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer bytecode_backend__bytecode_gen__Secondary_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_10));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Secondary_11));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer bytecode_backend__bytecode_gen__Primary_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer bytecode_backend__bytecode_gen__Secondary_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_12));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Secondary_13));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with --num-reserved-addresses or --num-reserved-objects");
                return;
              }
            }
            break;
          case (MR_Integer) 16:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with --num-reserved-addresses or --num-reserved-objects");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__ConsId_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteConsId_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *bytecode_backend__bytecode_gen__ByteConsId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
      case (MR_Integer) 1:
        *bytecode_backend__bytecode_gen__ByteConsId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement tabling");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement table io entry desc");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement deep profiling");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word bytecode_backend__bytecode_gen__Functor_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
              MR_Integer bytecode_backend__bytecode_gen__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__ModuleName_11;
              MR_String bytecode_backend__bytecode_gen__FunctorName_12;
              MR_Word bytecode_backend__bytecode_gen__ConsTag_14;
              MR_Word bytecode_backend__bytecode_gen__ByteConsTag_15;
              MR_Word bytecode_backend__bytecode_gen___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));

              if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Functor_8)) == (MR_mktag((MR_Integer) 1))))
                {
                  bytecode_backend__bytecode_gen__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Functor_8, (MR_Integer) 0)));
                  bytecode_backend__bytecode_gen__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Functor_8, (MR_Integer) 1)));
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "unqualified cons");
                    return;
                  }
                }
              {
                bytecode_backend__bytecode_gen__ConsTag_14 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__ConsId_5);
              }
              {
                bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(bytecode_backend__bytecode_gen__ConsTag_14, &bytecode_backend__bytecode_gen__ByteConsTag_15);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FunctorName_12));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_9));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsTag_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer bytecode_backend__bytecode_gen__Arity_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__ConsTag_71;
              MR_Word bytecode_backend__bytecode_gen__ByteConsTag_72;

              {
                bytecode_backend__bytecode_gen__ConsTag_71 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__ConsId_5);
              }
              {
                bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(bytecode_backend__bytecode_gen__ConsTag_71, &bytecode_backend__bytecode_gen__ByteConsTag_72);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_4[0]));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_String) "{}"));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_68));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsTag_72));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word bytecode_backend__bytecode_gen__ShroudedPredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__PredId_18;
              MR_Integer bytecode_backend__bytecode_gen__ProcId_19;
              MR_String bytecode_backend__bytecode_gen__PredName_20;
              MR_Word bytecode_backend__bytecode_gen__PredInfo_21;
              MR_Integer bytecode_backend__bytecode_gen__IsFunc_22;
              MR_Integer bytecode_backend__bytecode_gen__ProcInt_23;
              MR_Word bytecode_backend__bytecode_gen__V_63_63;
              MR_Integer bytecode_backend__bytecode_gen__Arity_73;
              MR_Word bytecode_backend__bytecode_gen__ModuleName_74;
              MR_Word bytecode_backend__bytecode_gen__PredOrFunc_84;

              {
                bytecode_backend__bytecode_gen__V_63_63 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(bytecode_backend__bytecode_gen__ShroudedPredProcId_16);
              }
              bytecode_backend__bytecode_gen__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_63_63, (MR_Integer) 0)));
              bytecode_backend__bytecode_gen__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_63_63, (MR_Integer) 1)));
              {
                hlds__hlds_module__predicate_id_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__PredId_18, &bytecode_backend__bytecode_gen__ModuleName_74, &bytecode_backend__bytecode_gen__PredName_20, &bytecode_backend__bytecode_gen__Arity_73);
              }
              {
                hlds__hlds_module__module_info_pred_info_3_p_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__PredId_18, &bytecode_backend__bytecode_gen__PredInfo_21);
              }
              {
                bytecode_backend__bytecode_gen__PredOrFunc_84 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_21);
              }
              switch (bytecode_backend__bytecode_gen__PredOrFunc_84) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  bytecode_backend__bytecode_gen__IsFunc_22 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  bytecode_backend__bytecode_gen__IsFunc_22 = (MR_Integer) 0;
                  break;
              }
              {
                hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_19, &bytecode_backend__bytecode_gen__ProcInt_23);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_74));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_73));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_22));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_23));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer bytecode_backend__bytecode_gen__IntVal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_24));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float bytecode_backend__bytecode_gen__FloatVal_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_25);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char bytecode_backend__bytecode_gen__CharVal_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (bytecode_backend__bytecode_gen__CharVal_26));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String bytecode_backend__bytecode_gen__StringVal_27 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__StringVal_27));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "impl_defined_const");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String bytecode_backend__bytecode_gen__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
              MR_Integer bytecode_backend__bytecode_gen__TypeArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_75));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__TypeName_29));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__TypeArity_30));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word bytecode_backend__bytecode_gen__ClassId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
              MR_String bytecode_backend__bytecode_gen__Instance_33 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 4)));
              MR_Word bytecode_backend__bytecode_gen__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
              MR_Integer bytecode_backend__bytecode_gen__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_76));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ClassId_31));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Instance_33));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement type_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement typeclass_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement ground_term_const");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_2,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4,
  MR_Word * bytecode_backend__bytecode_gen__Code_5)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_disj\'/5", (MR_String) "empty disjunction");
          return;
        }
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_58;
        MR_Word bytecode_backend__bytecode_gen__Disjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__Disjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__ThisCode_18;
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27;
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Disjunct_13, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Disjunct_13, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__GoalCode_52;
        MR_Word bytecode_backend__bytecode_gen__Context_53;
        MR_Integer bytecode_backend__bytecode_gen__Line_54;
        MR_Word bytecode_backend__bytecode_gen__V_56_56;
        MR_Word bytecode_backend__bytecode_gen__V_57_57;

        {
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_49, bytecode_backend__bytecode_gen__GoalInfo_50, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27, &bytecode_backend__bytecode_gen__GoalCode_52);
        }
        {
          bytecode_backend__bytecode_gen__Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_50);
        }
        {
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_53, &bytecode_backend__bytecode_gen__Line_54);
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_58 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        {
          bytecode_backend__bytecode_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_54));
        }
        {
          bytecode_backend__bytecode_gen__V_56_56 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_58, ((MR_Box) (bytecode_backend__bytecode_gen__V_57_57)));
        }
        {
          bytecode_backend__bytecode_gen__ThisCode_18 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_58, bytecode_backend__bytecode_gen__V_56_56, bytecode_backend__bytecode_gen__GoalCode_52);
        }
        if ((bytecode_backend__bytecode_gen__Disjuncts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_44_44 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
            MR_Word bytecode_backend__bytecode_gen__EnterCode_19;
            MR_Word bytecode_backend__bytecode_gen__EndofCode_20;
            MR_Word bytecode_backend__bytecode_gen__V_40_40;
            MR_Word bytecode_backend__bytecode_gen__V_41_41;

            {
              bytecode_backend__bytecode_gen__EnterCode_19 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, ((MR_Box) (MR_mkword(MR_mktag(3), &bytecode_backend__bytecode_gen_scalar_common_1[3]))));
            }
            {
              bytecode_backend__bytecode_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_2));
            }
            {
              bytecode_backend__bytecode_gen__EndofCode_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, ((MR_Box) (bytecode_backend__bytecode_gen__V_40_40)));
            }
            {
              bytecode_backend__bytecode_gen__V_41_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, bytecode_backend__bytecode_gen__ThisCode_18, bytecode_backend__bytecode_gen__EndofCode_20);
            }
            {
              *bytecode_backend__bytecode_gen__Code_5 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, bytecode_backend__bytecode_gen__EnterCode_19, bytecode_backend__bytecode_gen__V_41_41);
            }
            *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27;
          }
        else
          {
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_45_45;
            MR_Word bytecode_backend__bytecode_gen__OtherCode_23;
            MR_Integer bytecode_backend__bytecode_gen__NextLabel_24;
            MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28;
            MR_Word bytecode_backend__bytecode_gen__V_30_30;
            MR_Word bytecode_backend__bytecode_gen__V_31_31;
            MR_Word bytecode_backend__bytecode_gen__V_32_32;
            MR_Word bytecode_backend__bytecode_gen__V_33_33;
            MR_Word bytecode_backend__bytecode_gen__V_34_34;
            MR_Word bytecode_backend__bytecode_gen__V_36_36;
            MR_Word bytecode_backend__bytecode_gen__V_37_37;
            MR_Word bytecode_backend__bytecode_gen__EnterCode_42;
            MR_Word bytecode_backend__bytecode_gen__EndofCode_43;
            MR_Word bytecode_backend__bytecode_gen__LabelCounter0_63;
            MR_Word bytecode_backend__bytecode_gen__LabelCounter_64;
            MR_Word bytecode_backend__bytecode_gen__V_66_66;
            MR_Word bytecode_backend__bytecode_gen__V_67_67;
            MR_Word bytecode_backend__bytecode_gen__V_68_68;
            MR_Word bytecode_backend__bytecode_gen__V_69_69;
            MR_Word bytecode_backend__bytecode_gen__V_70_70;
            MR_Word bytecode_backend__bytecode_gen__V_71_71;
            MR_Word bytecode_backend__bytecode_gen__V_72_72;
            MR_Word bytecode_backend__bytecode_gen__V_74_74;
            MR_Word bytecode_backend__bytecode_gen__V_73_73;

            {
              bytecode_backend__bytecode_gen__gen_disj_5_p_0(bytecode_backend__bytecode_gen__Disjuncts_14, bytecode_backend__bytecode_gen__EndLabel_2, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, &bytecode_backend__bytecode_gen__OtherCode_23);
            }
            bytecode_backend__bytecode_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 0)));
            bytecode_backend__bytecode_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 1)));
            bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 2)));
            bytecode_backend__bytecode_gen__LabelCounter0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 3)));
            bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 4)));
            {
              mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__NextLabel_24, bytecode_backend__bytecode_gen__LabelCounter0_63, &bytecode_backend__bytecode_gen__LabelCounter_64);
            }
            bytecode_backend__bytecode_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 0)));
            bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 1)));
            bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 2)));
            bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 3)));
            bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 4)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_70_70));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_71_71));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_72_72));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_64));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_74_74));
            }
            bytecode_backend__bytecode_gen__TypeCtorInfo_45_45 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
            {
              bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_24));
            }
            {
              bytecode_backend__bytecode_gen__EnterCode_42 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
            }
            {
              bytecode_backend__bytecode_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_32_32, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_2));
            }
            {
              bytecode_backend__bytecode_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_24));
            }
            {
              bytecode_backend__bytecode_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_33_33, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_34_34));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_32_32));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_33_33));
            }
            {
              bytecode_backend__bytecode_gen__EndofCode_43 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__V_31_31);
            }
            {
              bytecode_backend__bytecode_gen__V_37_37 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__EndofCode_43, bytecode_backend__bytecode_gen__OtherCode_23);
            }
            {
              bytecode_backend__bytecode_gen__V_36_36 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__ThisCode_18, bytecode_backend__bytecode_gen__V_37_37);
            }
            {
              *bytecode_backend__bytecode_gen__Code_5 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__EnterCode_42, bytecode_backend__bytecode_gen__V_36_36);
            }
          }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2;
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_32;
        MR_Word bytecode_backend__bytecode_gen__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__ThisCode_12;
        MR_Word bytecode_backend__bytecode_gen__OtherCode_13;
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16;
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_8, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_8, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__GoalCode_26;
        MR_Word bytecode_backend__bytecode_gen__Context_27;
        MR_Integer bytecode_backend__bytecode_gen__Line_28;
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
        MR_Word bytecode_backend__bytecode_gen__V_31_31;

        {
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_23, bytecode_backend__bytecode_gen__GoalInfo_24, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16, &bytecode_backend__bytecode_gen__GoalCode_26);
        }
        {
          bytecode_backend__bytecode_gen__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_24);
        }
        {
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_27, &bytecode_backend__bytecode_gen__Line_28);
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_32 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        {
          bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_28));
        }
        {
          bytecode_backend__bytecode_gen__V_30_30 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_32, ((MR_Box) (bytecode_backend__bytecode_gen__V_31_31)));
        }
        {
          bytecode_backend__bytecode_gen__ThisCode_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_32, bytecode_backend__bytecode_gen__V_30_30, bytecode_backend__bytecode_gen__GoalCode_26);
        }
        {
          bytecode_backend__bytecode_gen__gen_conj_4_p_0(bytecode_backend__bytecode_gen__Goals_9, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3, &bytecode_backend__bytecode_gen__OtherCode_13);
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ThisCode_12, bytecode_backend__bytecode_gen__OtherCode_13);
        }
      }
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__Dir_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool bytecode_backend__bytecode_gen__succeeded;

        if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          bytecode_backend__bytecode_gen__succeeded = MR_TRUE;
        else
          {
            MR_Word bytecode_backend__bytecode_gen__Dir_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word bytecode_backend__bytecode_gen__Dirs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__Dir_2 == bytecode_backend__bytecode_gen__Dir_4);
            if (bytecode_backend__bytecode_gen__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word bytecode_backend__bytecode_gen__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode_gen__Dirs_5;
                  MR_Word bytecode_backend__bytecode_gen__Dir__tmp_copy_2 = bytecode_backend__bytecode_gen__Dir_4;

                  bytecode_backend__bytecode_gen__Dir_2 = bytecode_backend__bytecode_gen__Dir__tmp_copy_2;
                  bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return bytecode_backend__bytecode_gen__succeeded;
      }
      break;
    }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_3,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *bytecode_backend__bytecode_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word bytecode_backend__bytecode_gen__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word bytecode_backend__bytecode_gen__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word bytecode_backend__bytecode_gen__Dir_11;
            MR_Word bytecode_backend__bytecode_gen__Dirs_12;
            MR_Word bytecode_backend__bytecode_gen__VarInitial_13;
            MR_Word bytecode_backend__bytecode_gen__ArgInitial_14;
            MR_Word bytecode_backend__bytecode_gen__VarFinal_15;
            MR_Word bytecode_backend__bytecode_gen__ArgFinal_16;
            MR_Word bytecode_backend__bytecode_gen__ModuleInfo_17;
            MR_Word bytecode_backend__bytecode_gen__Type_18;
            MR_Word bytecode_backend__bytecode_gen__VarMode_19;
            MR_Word bytecode_backend__bytecode_gen__ArgMode_20;
            MR_Word bytecode_backend__bytecode_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_43_43, (MR_Integer) 0)));
            MR_Word bytecode_backend__bytecode_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_43_43, (MR_Integer) 1)));
            MR_Word bytecode_backend__bytecode_gen__V_23_23;
            MR_Word bytecode_backend__bytecode_gen__V_24_24;
            MR_Word bytecode_backend__bytecode_gen__V_46_46;
            MR_Word bytecode_backend__bytecode_gen__V_45_45;
            MR_Word bytecode_backend__bytecode_gen__V_47_47;
            MR_Word bytecode_backend__bytecode_gen__V_48_48;

            bytecode_backend__bytecode_gen__VarInitial_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_21_21, (MR_Integer) 0)));
            bytecode_backend__bytecode_gen__ArgInitial_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_21_21, (MR_Integer) 1)));
            bytecode_backend__bytecode_gen__VarFinal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_22_22, (MR_Integer) 0)));
            bytecode_backend__bytecode_gen__ArgFinal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_22_22, (MR_Integer) 1)));
            bytecode_backend__bytecode_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 0)));
            bytecode_backend__bytecode_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 1)));
            bytecode_backend__bytecode_gen__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 2)));
            bytecode_backend__bytecode_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 3)));
            bytecode_backend__bytecode_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 4)));
            {
              hlds__vartypes__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__V_46_46, bytecode_backend__bytecode_gen__Arg_8, &bytecode_backend__bytecode_gen__Type_18);
            }
            {
              bytecode_backend__bytecode_gen__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_23_23, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInitial_13));
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_23_23, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarFinal_15));
            }
            {
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(bytecode_backend__bytecode_gen__ModuleInfo_17, bytecode_backend__bytecode_gen__V_23_23, bytecode_backend__bytecode_gen__Type_18, &bytecode_backend__bytecode_gen__VarMode_19);
            }
            {
              bytecode_backend__bytecode_gen__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_24_24, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ArgInitial_14));
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_24_24, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ArgFinal_16));
            }
            {
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(bytecode_backend__bytecode_gen__ModuleInfo_17, bytecode_backend__bytecode_gen__V_24_24, bytecode_backend__bytecode_gen__Type_18, &bytecode_backend__bytecode_gen__ArgMode_20);
            }
            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 0);
            if (bytecode_backend__bytecode_gen__succeeded)
              bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 1);
            if (bytecode_backend__bytecode_gen__succeeded)
              bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 0;
            else
              {
                bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 1);
                if (bytecode_backend__bytecode_gen__succeeded)
                  bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 0);
                if (bytecode_backend__bytecode_gen__succeeded)
                  bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 1;
                else
                  {
                    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 2);
                    if (bytecode_backend__bytecode_gen__succeeded)
                      bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 2);
                    if (bytecode_backend__bytecode_gen__succeeded)
                      bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 2;
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "invalid mode for (de)construct unification");
                          return;
                        }
                      }
                  }
              }
            {
              bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__V_42_42, bytecode_backend__bytecode_gen__Args_9, bytecode_backend__bytecode_gen__ByteInfo_3, &bytecode_backend__bytecode_gen__Dirs_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *bytecode_backend__bytecode_gen__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Dir_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Dirs_12));
            }
          }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
  MR_Word bytecode_backend__bytecode_gen__Expr_5,
  MR_Word * bytecode_backend__bytecode_gen__ByteArg_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word bytecode_backend__bytecode_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));
          MR_Integer bytecode_backend__bytecode_gen__ByteVar_8;
          MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
          MR_Word bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));
          MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_8;

          {
            mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_14_14, ((MR_Box) (bytecode_backend__bytecode_gen__Var_7)), &bytecode_backend__bytecode_gen__conv0_ByteVar_8);
          }
          bytecode_backend__bytecode_gen__ByteVar_8 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_8);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *bytecode_backend__bytecode_gen__ByteArg_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer bytecode_backend__bytecode_gen__IntVal_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *bytecode_backend__bytecode_gen__ByteArg_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_9));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float bytecode_backend__bytecode_gen__FloatVal_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *bytecode_backend__bytecode_gen__ByteArg_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_10);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__map_assign_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_5,
  MR_Word bytecode_backend__bytecode_gen__Var_6,
  MR_Word bytecode_backend__bytecode_gen__Expr_7,
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word bytecode_backend__bytecode_gen__V_16_16;
          MR_Word bytecode_backend__bytecode_gen__X_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 0)));
          MR_Integer bytecode_backend__bytecode_gen__ByteX_23;
          MR_Integer bytecode_backend__bytecode_gen__ByteVar_24;
          MR_Word bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__V_85_85;
          MR_Word bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
          MR_Word bytecode_backend__bytecode_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
          MR_Box bytecode_backend__bytecode_gen__conv3_ByteX_23;
          MR_Word bytecode_backend__bytecode_gen__V_86_86;
          MR_Word bytecode_backend__bytecode_gen__V_87_87;
          MR_Word bytecode_backend__bytecode_gen__V_88_88;
          MR_Word bytecode_backend__bytecode_gen__V_89_89;
          MR_Box bytecode_backend__bytecode_gen__conv4_ByteVar_24;

          {
            mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_75_75, ((MR_Box) (bytecode_backend__bytecode_gen__X_22)), &bytecode_backend__bytecode_gen__conv3_ByteX_23);
          }
          bytecode_backend__bytecode_gen__ByteX_23 = ((MR_Integer) bytecode_backend__bytecode_gen__conv3_ByteX_23);
          bytecode_backend__bytecode_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
          bytecode_backend__bytecode_gen__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
          bytecode_backend__bytecode_gen__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
          bytecode_backend__bytecode_gen__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
          bytecode_backend__bytecode_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
          {
            mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_85_85, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv4_ByteVar_24);
          }
          bytecode_backend__bytecode_gen__ByteVar_24 = ((MR_Integer) bytecode_backend__bytecode_gen__conv4_ByteVar_24);
          {
            bytecode_backend__bytecode_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_24));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_23));
          }
          {
            *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word bytecode_backend__bytecode_gen__Unop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__V_17_17;
              MR_Word bytecode_backend__bytecode_gen__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__ByteX_20;
              MR_Integer bytecode_backend__bytecode_gen__ByteVar_21;

              {
                bytecode_backend__bytecode_gen__map_arg_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_5, bytecode_backend__bytecode_gen__X_19, &bytecode_backend__bytecode_gen__ByteX_20);
              }
              {
                bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_5, bytecode_backend__bytecode_gen__Var_6, &bytecode_backend__bytecode_gen__ByteVar_21);
              }
              {
                bytecode_backend__bytecode_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Unop_15));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_20));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_21));
              }
              {
                *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word bytecode_backend__bytecode_gen__Binop_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__ByteX_12;
              MR_Word bytecode_backend__bytecode_gen__ByteY_13;
              MR_Integer bytecode_backend__bytecode_gen__ByteVar_14;
              MR_Word bytecode_backend__bytecode_gen__V_18_18;
              MR_Word bytecode_backend__bytecode_gen__V_65_65;
              MR_Word bytecode_backend__bytecode_gen__V_66_66;
              MR_Word bytecode_backend__bytecode_gen__V_67_67;
              MR_Word bytecode_backend__bytecode_gen__V_68_68;
              MR_Word bytecode_backend__bytecode_gen__V_69_69;
              MR_Box bytecode_backend__bytecode_gen__conv2_ByteVar_14;

              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));
                    MR_Integer bytecode_backend__bytecode_gen__ByteVar_32;
                    MR_Word bytecode_backend__bytecode_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
                    MR_Word bytecode_backend__bytecode_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
                    MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
                    MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_32;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_38_38, ((MR_Box) (bytecode_backend__bytecode_gen__Var_31)), &bytecode_backend__bytecode_gen__conv0_ByteVar_32);
                    }
                    bytecode_backend__bytecode_gen__ByteVar_32 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_32);
                    {
                      bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_12, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_32));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer bytecode_backend__bytecode_gen__IntVal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_12, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_33));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float bytecode_backend__bytecode_gen__FloatVal_34 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_12, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_34);
                    }
                  }
                  break;
              }
              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));
                    MR_Integer bytecode_backend__bytecode_gen__ByteVar_49;
                    MR_Word bytecode_backend__bytecode_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
                    MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
                    MR_Word bytecode_backend__bytecode_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
                    MR_Box bytecode_backend__bytecode_gen__conv1_ByteVar_49;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_55_55, ((MR_Box) (bytecode_backend__bytecode_gen__Var_48)), &bytecode_backend__bytecode_gen__conv1_ByteVar_49);
                    }
                    bytecode_backend__bytecode_gen__ByteVar_49 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_ByteVar_49);
                    {
                      bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteY_13, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_49));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer bytecode_backend__bytecode_gen__IntVal_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteY_13, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_50));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float bytecode_backend__bytecode_gen__FloatVal_51 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteY_13, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_51);
                    }
                  }
                  break;
              }
              bytecode_backend__bytecode_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
              bytecode_backend__bytecode_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
              bytecode_backend__bytecode_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
              bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
              bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
              {
                mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_65_65, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv2_ByteVar_14);
              }
              bytecode_backend__bytecode_gen__ByteVar_14 = ((MR_Integer) bytecode_backend__bytecode_gen__conv2_ByteVar_14);
              {
                bytecode_backend__bytecode_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Binop_9));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_12));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteY_13));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_14));
              }
              {
                *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_18_18)));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredId_6,
  MR_Integer bytecode_backend__bytecode_gen__ProcId_7,
  MR_Word bytecode_backend__bytecode_gen__Args_8,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_9,
  MR_Word * bytecode_backend__bytecode_gen__Code_10)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__ModuleName_12;
    MR_String bytecode_backend__bytecode_gen__PredName_13;
    MR_Word bytecode_backend__bytecode_gen__SimpleCode_14;
    MR_Word bytecode_backend__bytecode_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));

    {
      bytecode_backend__bytecode_gen__ModuleName_12 = hlds__hlds_module__predicate_module_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_11, bytecode_backend__bytecode_gen__PredId_6);
    }
    {
      bytecode_backend__bytecode_gen__PredName_13 = hlds__hlds_module__predicate_name_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_11, bytecode_backend__bytecode_gen__PredId_6);
    }
    {
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], bytecode_backend__bytecode_gen__ModuleName_12, bytecode_backend__bytecode_gen__PredName_13, bytecode_backend__bytecode_gen__ProcId_7, bytecode_backend__bytecode_gen__Args_8, &bytecode_backend__bytecode_gen__SimpleCode_14);
    }
    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__SimpleCode_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word bytecode_backend__bytecode_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__Expr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 1)));

          {
            bytecode_backend__bytecode_gen__map_assign_4_p_0(bytecode_backend__bytecode_gen__ByteInfo_9, bytecode_backend__bytecode_gen__Var_16, bytecode_backend__bytecode_gen__Expr_17, bytecode_backend__bytecode_gen__Code_10);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_builtin\'/5", (MR_String) "ref_assign");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word bytecode_backend__bytecode_gen__Test_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 0)));

          if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Test_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Word bytecode_backend__bytecode_gen__Binop_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__X_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__Y_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__ByteX_37;
              MR_Word bytecode_backend__bytecode_gen__ByteY_38;
              MR_Word bytecode_backend__bytecode_gen__V_41_41;

              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));
                    MR_Integer bytecode_backend__bytecode_gen__ByteVar_50;
                    MR_Word bytecode_backend__bytecode_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
                    MR_Word bytecode_backend__bytecode_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
                    MR_Word bytecode_backend__bytecode_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
                    MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_50;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_56_56, ((MR_Box) (bytecode_backend__bytecode_gen__Var_49)), &bytecode_backend__bytecode_gen__conv0_ByteVar_50);
                    }
                    bytecode_backend__bytecode_gen__ByteVar_50 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_50);
                    {
                      bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_50));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer bytecode_backend__bytecode_gen__IntVal_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_51));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float bytecode_backend__bytecode_gen__FloatVal_52 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_37, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_52);
                    }
                  }
                  break;
              }
              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));
                    MR_Integer bytecode_backend__bytecode_gen__ByteVar_67;
                    MR_Word bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
                    MR_Word bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
                    MR_Word bytecode_backend__bytecode_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
                    MR_Box bytecode_backend__bytecode_gen__conv1_ByteVar_67;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_73_73, ((MR_Box) (bytecode_backend__bytecode_gen__Var_66)), &bytecode_backend__bytecode_gen__conv1_ByteVar_67);
                    }
                    bytecode_backend__bytecode_gen__ByteVar_67 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_ByteVar_67);
                    {
                      bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteY_38, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_67));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer bytecode_backend__bytecode_gen__IntVal_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteY_38, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_68));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float bytecode_backend__bytecode_gen__FloatVal_69 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteY_38, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_69);
                    }
                  }
                  break;
              }
              {
                bytecode_backend__bytecode_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Binop_34));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_37));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteY_38));
              }
              {
                *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_41_41)));
              }
            }
          else
            {
              MR_Word bytecode_backend__bytecode_gen__Unop_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__V_40_40;
              MR_Word bytecode_backend__bytecode_gen__X_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__ByteX_43;

              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_42)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));
                    MR_Integer bytecode_backend__bytecode_gen__ByteVar_84;
                    MR_Word bytecode_backend__bytecode_gen__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
                    MR_Word bytecode_backend__bytecode_gen__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
                    MR_Word bytecode_backend__bytecode_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
                    MR_Box bytecode_backend__bytecode_gen__conv2_ByteVar_84;

                    {
                      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_90_90, ((MR_Box) (bytecode_backend__bytecode_gen__Var_83)), &bytecode_backend__bytecode_gen__conv2_ByteVar_84);
                    }
                    bytecode_backend__bytecode_gen__ByteVar_84 = ((MR_Integer) bytecode_backend__bytecode_gen__conv2_ByteVar_84);
                    {
                      bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_43, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_84));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer bytecode_backend__bytecode_gen__IntVal_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_43, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_85));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float bytecode_backend__bytecode_gen__FloatVal_86 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));

                    {
                      bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_43, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_86);
                    }
                  }
                  break;
              }
              {
                bytecode_backend__bytecode_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Unop_39));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_43));
              }
              {
                *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_40_40)));
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredId_7,
  MR_Integer bytecode_backend__bytecode_gen__ProcId_8,
  MR_Word bytecode_backend__bytecode_gen__ArgVars_9,
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
  MR_Word * bytecode_backend__bytecode_gen__Code_12)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_37_37;
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
    MR_Word bytecode_backend__bytecode_gen__ProcInfo_15;
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_16;
    MR_Word bytecode_backend__bytecode_gen__ArgVarsInfos_17;
    MR_Word bytecode_backend__bytecode_gen__PredInfo_18;
    MR_Integer bytecode_backend__bytecode_gen__IsFunc_19;
    MR_Word bytecode_backend__bytecode_gen__InputArgs_20;
    MR_Word bytecode_backend__bytecode_gen__PlaceArgs_21;
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_22;
    MR_Word bytecode_backend__bytecode_gen__PickupArgs_23;
    MR_Word bytecode_backend__bytecode_gen__ModuleName_24;
    MR_String bytecode_backend__bytecode_gen__PredName_25;
    MR_Integer bytecode_backend__bytecode_gen__Arity_26;
    MR_Integer bytecode_backend__bytecode_gen__ProcInt_27;
    MR_Word bytecode_backend__bytecode_gen__Call_28;
    MR_Word bytecode_backend__bytecode_gen__CodeModel_29;
    MR_Word bytecode_backend__bytecode_gen__Check_30;
    MR_Word bytecode_backend__bytecode_gen__V_31_31;
    MR_Word bytecode_backend__bytecode_gen__V_33_33;
    MR_Word bytecode_backend__bytecode_gen__V_34_34;
    MR_Word bytecode_backend__bytecode_gen__PredOrFunc_45;
    MR_Word bytecode_backend__bytecode_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
    MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
    MR_Word bytecode_backend__bytecode_gen__V_14_14;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, bytecode_backend__bytecode_gen__ProcId_8, &bytecode_backend__bytecode_gen__V_14_14, &bytecode_backend__bytecode_gen__ProcInfo_15);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_15, &bytecode_backend__bytecode_gen__ArgInfo_16);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_9, bytecode_backend__bytecode_gen__ArgInfo_16, &bytecode_backend__bytecode_gen__ArgVarsInfos_17);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, &bytecode_backend__bytecode_gen__PredInfo_18);
    }
    {
      bytecode_backend__bytecode_gen__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_18);
    }
    switch (bytecode_backend__bytecode_gen__PredOrFunc_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        bytecode_backend__bytecode_gen__IsFunc_19 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        bytecode_backend__bytecode_gen__IsFunc_19 = (MR_Integer) 0;
        break;
    }
    {
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InputArgs_20);
    }
    {
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__InputArgs_20, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PlaceArgs_21);
    }
    {
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__OutputArgs_22);
    }
    {
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_22, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PickupArgs_23);
    }
    {
      hlds__hlds_module__predicate_id_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, &bytecode_backend__bytecode_gen__ModuleName_24, &bytecode_backend__bytecode_gen__PredName_25, &bytecode_backend__bytecode_gen__Arity_26);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_8, &bytecode_backend__bytecode_gen__ProcInt_27);
    }
    bytecode_backend__bytecode_gen__TypeCtorInfo_37_37 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
    {
      bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_24));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_25));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_26));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_19));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_27));
    }
    {
      bytecode_backend__bytecode_gen__Call_28 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, ((MR_Box) (bytecode_backend__bytecode_gen__V_31_31)));
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_10, &bytecode_backend__bytecode_gen__CodeModel_29);
    }
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CodeModel_29 == (MR_Integer) 1);
    if (bytecode_backend__bytecode_gen__succeeded)
      {
        {
          bytecode_backend__bytecode_gen__Check_30 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
        }
      }
    else
      {
        bytecode_backend__bytecode_gen__Check_30 = mercury__cord__empty_0_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37);
      }
    {
      bytecode_backend__bytecode_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__Check_30, bytecode_backend__bytecode_gen__PickupArgs_23);
    }
    {
      bytecode_backend__bytecode_gen__V_33_33 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__Call_28, bytecode_backend__bytecode_gen__V_34_34);
    }
    {
      *bytecode_backend__bytecode_gen__Code_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__PlaceArgs_21, bytecode_backend__bytecode_gen__V_33_33);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2)
{
  {
    MR_Box bytecode_backend__bytecode_gen__closure = bytecode_backend__bytecode_gen__closure_arg;
    MR_Word bytecode_backend__bytecode_gen__conv0_Type_6;

    {
      bytecode_backend__bytecode_gen__get_var_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__closure, (MR_Integer) 3))), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), &bytecode_backend__bytecode_gen__conv0_Type_6);
    }
    *bytecode_backend__bytecode_gen__wrapper_arg_2 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_Type_6));
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
  MR_Word bytecode_backend__bytecode_gen__PredVar_7,
  MR_Word bytecode_backend__bytecode_gen__ArgVars_8,
  MR_Word bytecode_backend__bytecode_gen__ArgModes_9,
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
  MR_Word * bytecode_backend__bytecode_gen__Code_12)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_36_36;
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_39_39;
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_40_40;
    MR_Word bytecode_backend__bytecode_gen__CodeModel_13;
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_14;
    MR_Word bytecode_backend__bytecode_gen__ArgTypes_15;
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_16;
    MR_Word bytecode_backend__bytecode_gen__ArgVarsInfos_17;
    MR_Word bytecode_backend__bytecode_gen__InVars_18;
    MR_Word bytecode_backend__bytecode_gen__OutVars_19;
    MR_Integer bytecode_backend__bytecode_gen__NInVars_20;
    MR_Integer bytecode_backend__bytecode_gen__NOutVars_21;
    MR_Word bytecode_backend__bytecode_gen__InputArgs_22;
    MR_Word bytecode_backend__bytecode_gen__PlaceArgs_23;
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_24;
    MR_Word bytecode_backend__bytecode_gen__PickupArgs_25;
    MR_Integer bytecode_backend__bytecode_gen__BytePredVar_26;
    MR_Word bytecode_backend__bytecode_gen__Call_27;
    MR_Word bytecode_backend__bytecode_gen__Check_28;
    MR_Word bytecode_backend__bytecode_gen__V_29_29;
    MR_Word bytecode_backend__bytecode_gen__V_30_30;
    MR_Word bytecode_backend__bytecode_gen__V_32_32;
    MR_Word bytecode_backend__bytecode_gen__V_33_33;
    MR_Word bytecode_backend__bytecode_gen__V_49_49;
    MR_Word bytecode_backend__bytecode_gen__V_42_42;
    MR_Word bytecode_backend__bytecode_gen__V_43_43;
    MR_Word bytecode_backend__bytecode_gen__V_44_44;
    MR_Word bytecode_backend__bytecode_gen__V_45_45;
    MR_Word bytecode_backend__bytecode_gen__V_50_50;
    MR_Word bytecode_backend__bytecode_gen__V_51_51;
    MR_Word bytecode_backend__bytecode_gen__V_52_52;
    MR_Word bytecode_backend__bytecode_gen__V_53_53;
    MR_Box bytecode_backend__bytecode_gen__conv1_BytePredVar_26;

    {
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_10, &bytecode_backend__bytecode_gen__CodeModel_13);
    }
    bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
    {
      bytecode_backend__bytecode_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteInfo_11));
    }
    bytecode_backend__bytecode_gen__TypeInfo_36_36 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0];
    {
      mercury__list__map_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, bytecode_backend__bytecode_gen__V_29_29, bytecode_backend__bytecode_gen__ArgVars_8, &bytecode_backend__bytecode_gen__ArgTypes_15);
    }
    {
      hlds__arg_info__make_standard_arg_infos_5_p_0(bytecode_backend__bytecode_gen__ArgTypes_15, bytecode_backend__bytecode_gen__ArgModes_9, bytecode_backend__bytecode_gen__CodeModel_13, bytecode_backend__bytecode_gen__ModuleInfo_14, &bytecode_backend__bytecode_gen__ArgInfo_16);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_36_36, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_8, bytecode_backend__bytecode_gen__ArgInfo_16, &bytecode_backend__bytecode_gen__ArgVarsInfos_17);
    }
    {
      hlds__arg_info__partition_args_3_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InVars_18, &bytecode_backend__bytecode_gen__OutVars_19);
    }
    bytecode_backend__bytecode_gen__TypeInfo_39_39 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[0];
    {
      mercury__list__length_2_p_0(bytecode_backend__bytecode_gen__TypeInfo_39_39, bytecode_backend__bytecode_gen__InVars_18, &bytecode_backend__bytecode_gen__NInVars_20);
    }
    {
      mercury__list__length_2_p_0(bytecode_backend__bytecode_gen__TypeInfo_39_39, bytecode_backend__bytecode_gen__OutVars_19, &bytecode_backend__bytecode_gen__NOutVars_21);
    }
    {
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InputArgs_22);
    }
    {
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__InputArgs_22, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PlaceArgs_23);
    }
    {
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__OutputArgs_24);
    }
    {
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_24, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PickupArgs_25);
    }
    bytecode_backend__bytecode_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
    {
      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_49_49, ((MR_Box) (bytecode_backend__bytecode_gen__PredVar_7)), &bytecode_backend__bytecode_gen__conv1_BytePredVar_26);
    }
    bytecode_backend__bytecode_gen__BytePredVar_26 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_BytePredVar_26);
    bytecode_backend__bytecode_gen__TypeCtorInfo_40_40 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
    {
      bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__BytePredVar_26));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__NInVars_20));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__NOutVars_21));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__Detism_10));
    }
    {
      bytecode_backend__bytecode_gen__Call_27 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
    }
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CodeModel_13 == (MR_Integer) 1);
    if (bytecode_backend__bytecode_gen__succeeded)
      {
        {
          bytecode_backend__bytecode_gen__Check_28 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
        }
      }
    else
      {
        bytecode_backend__bytecode_gen__Check_28 = mercury__cord__empty_0_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40);
      }
    {
      bytecode_backend__bytecode_gen__V_33_33 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__Check_28, bytecode_backend__bytecode_gen__PickupArgs_25);
    }
    {
      bytecode_backend__bytecode_gen__V_32_32 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__Call_27, bytecode_backend__bytecode_gen__V_33_33);
    }
    {
      *bytecode_backend__bytecode_gen__Code_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__PlaceArgs_23, bytecode_backend__bytecode_gen__V_32_32);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_24_24;
        MR_Word bytecode_backend__bytecode_gen__Var_5;
        MR_Word bytecode_backend__bytecode_gen__Loc_6;
        MR_Word bytecode_backend__bytecode_gen__OutputArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__OtherCode_10;
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_11;
        MR_Integer bytecode_backend__bytecode_gen__RegNum_12;
        MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_20_20;
        MR_Word bytecode_backend__bytecode_gen__V_21_21;
        MR_Integer bytecode_backend__bytecode_gen__V_25_25;
        MR_Word bytecode_backend__bytecode_gen__V_26_26;
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
        MR_Word bytecode_backend__bytecode_gen__V_31_31;
        MR_Word bytecode_backend__bytecode_gen__V_32_32;
        MR_Word bytecode_backend__bytecode_gen__V_33_33;
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_11;

        bytecode_backend__bytecode_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__Loc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 1)));
        {
          bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_7, bytecode_backend__bytecode_gen__ByteInfo_2, &bytecode_backend__bytecode_gen__OtherCode_10);
        }
        bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 1)));
        bytecode_backend__bytecode_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 2)));
        bytecode_backend__bytecode_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 3)));
        bytecode_backend__bytecode_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 4)));
        {
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_30_30, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        }
        bytecode_backend__bytecode_gen__ByteVar_11 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        bytecode_backend__bytecode_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 1)));
        switch (bytecode_backend__bytecode_gen__V_26_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_pickups\'/3", (MR_String) "floating point register");
                return;
              }
            }
            break;
          case (MR_Integer) 0:
            bytecode_backend__bytecode_gen__RegNum_12 = bytecode_backend__bytecode_gen__V_25_25;
            break;
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_24_24 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          bytecode_backend__bytecode_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 1) = NULL;
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__RegNum_12));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_11));
        }
        {
          bytecode_backend__bytecode_gen__V_20_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, ((MR_Box) (bytecode_backend__bytecode_gen__V_21_21)));
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, bytecode_backend__bytecode_gen__V_20_20, bytecode_backend__bytecode_gen__OtherCode_10);
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_24_24;
        MR_Word bytecode_backend__bytecode_gen__Var_5;
        MR_Word bytecode_backend__bytecode_gen__Loc_6;
        MR_Word bytecode_backend__bytecode_gen__OutputArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__OtherCode_10;
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_11;
        MR_Integer bytecode_backend__bytecode_gen__RegNum_12;
        MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__V_20_20;
        MR_Word bytecode_backend__bytecode_gen__V_21_21;
        MR_Integer bytecode_backend__bytecode_gen__V_25_25;
        MR_Word bytecode_backend__bytecode_gen__V_26_26;
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
        MR_Word bytecode_backend__bytecode_gen__V_31_31;
        MR_Word bytecode_backend__bytecode_gen__V_32_32;
        MR_Word bytecode_backend__bytecode_gen__V_33_33;
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_11;

        bytecode_backend__bytecode_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__Loc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 1)));
        {
          bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_7, bytecode_backend__bytecode_gen__ByteInfo_2, &bytecode_backend__bytecode_gen__OtherCode_10);
        }
        bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 1)));
        bytecode_backend__bytecode_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 2)));
        bytecode_backend__bytecode_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 3)));
        bytecode_backend__bytecode_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 4)));
        {
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_30_30, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        }
        bytecode_backend__bytecode_gen__ByteVar_11 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        bytecode_backend__bytecode_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 0)));
        bytecode_backend__bytecode_gen__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 1)));
        switch (bytecode_backend__bytecode_gen__V_26_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_places\'/3", (MR_String) "floating point register");
                return;
              }
            }
            break;
          case (MR_Integer) 0:
            bytecode_backend__bytecode_gen__RegNum_12 = bytecode_backend__bytecode_gen__V_25_25;
            break;
        }
        bytecode_backend__bytecode_gen__TypeCtorInfo_24_24 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          bytecode_backend__bytecode_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 1) = NULL;
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__RegNum_12));
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_11));
        }
        {
          bytecode_backend__bytecode_gen__V_20_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, ((MR_Box) (bytecode_backend__bytecode_gen__V_21_21)));
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, bytecode_backend__bytecode_gen__V_20_20, bytecode_backend__bytecode_gen__OtherCode_10);
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__GoalExpr_6,
  MR_Word bytecode_backend__bytecode_gen__GoalInfo_7,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83,
  MR_Word * bytecode_backend__bytecode_gen__Code_9)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_185_185;
          MR_Word bytecode_backend__bytecode_gen__Goal_37 = (MR_Word) MR_body(((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6), (MR_Integer) 0);
          MR_Word bytecode_backend__bytecode_gen__SomeCode_38;
          MR_Integer bytecode_backend__bytecode_gen__EndLabel_39;
          MR_Integer bytecode_backend__bytecode_gen__FrameTemp_40;
          MR_Word bytecode_backend__bytecode_gen__EnterCode_41;
          MR_Word bytecode_backend__bytecode_gen__EndofCode_42;
          MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143;
          MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144;
          MR_Word bytecode_backend__bytecode_gen__V_146_146;
          MR_Word bytecode_backend__bytecode_gen__V_147_147;
          MR_Word bytecode_backend__bytecode_gen__V_148_148;
          MR_Word bytecode_backend__bytecode_gen__V_149_149;
          MR_Word bytecode_backend__bytecode_gen__V_150_150;
          MR_Word bytecode_backend__bytecode_gen__V_154_154;

          {
            bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_37, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143, &bytecode_backend__bytecode_gen__SomeCode_38);
          }
          {
            bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_39, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144);
          }
          {
            bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__FrameTemp_40, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83);
          }
          bytecode_backend__bytecode_gen__TypeCtorInfo_185_185 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
          {
            bytecode_backend__bytecode_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_40));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_39));
          }
          {
            bytecode_backend__bytecode_gen__EnterCode_41 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, ((MR_Box) (bytecode_backend__bytecode_gen__V_146_146)));
          }
          {
            bytecode_backend__bytecode_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_148_148, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_40));
          }
          {
            bytecode_backend__bytecode_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_150_150, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_39));
          }
          {
            bytecode_backend__bytecode_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_149_149, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_150_150));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[2])));
          }
          {
            bytecode_backend__bytecode_gen__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_147_147, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_148_148));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_147_147, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_149_149));
          }
          {
            bytecode_backend__bytecode_gen__EndofCode_42 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__V_147_147);
          }
          {
            bytecode_backend__bytecode_gen__V_154_154 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__SomeCode_38, bytecode_backend__bytecode_gen__EndofCode_42);
          }
          {
            *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__EnterCode_41, bytecode_backend__bytecode_gen__V_154_154);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word bytecode_backend__bytecode_gen__Unification_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
          MR_Word bytecode_backend__bytecode_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)));
          MR_Word bytecode_backend__bytecode_gen__RHS_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen___Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));

          {
            bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(bytecode_backend__bytecode_gen__Unification_35, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
          }
          *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word bytecode_backend__bytecode_gen__PredId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)));
          MR_Integer bytecode_backend__bytecode_gen__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
          MR_Word bytecode_backend__bytecode_gen__BuiltinState_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
          MR_Word bytecode_backend__bytecode_gen__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
          MR_Word bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));
          MR_Word bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 5)));

          switch (bytecode_backend__bytecode_gen__BuiltinState_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                bytecode_backend__bytecode_gen__gen_builtin_5_p_0(bytecode_backend__bytecode_gen__PredId_27, bytecode_backend__bytecode_gen__ProcId_28, bytecode_backend__bytecode_gen__ArgVars_159, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word bytecode_backend__bytecode_gen__Detism_157;

                {
                  bytecode_backend__bytecode_gen__Detism_157 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_7);
                }
                {
                  bytecode_backend__bytecode_gen__gen_call_6_p_0(bytecode_backend__bytecode_gen__PredId_27, bytecode_backend__bytecode_gen__ProcId_28, bytecode_backend__bytecode_gen__ArgVars_159, bytecode_backend__bytecode_gen__Detism_157, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
                }
              }
              break;
          }
          *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word bytecode_backend__bytecode_gen__GenericCallType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__ArgVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__ArgModes_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 5)));
              MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) bytecode_backend__bytecode_gen__GenericCallType_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word bytecode_backend__bytecode_gen__PredVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 0)));
                    MR_Word bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 1)));
                    MR_Word bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 2)));
                    MR_Integer bytecode_backend__bytecode_gen__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 3)));

                    {
                      bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(bytecode_backend__bytecode_gen__PredVar_15, bytecode_backend__bytecode_gen__ArgVars_11, bytecode_backend__bytecode_gen__ArgModes_12, bytecode_backend__bytecode_gen__Detism_14, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    MR_String bytecode_backend__bytecode_gen___GenericCallFunctor_25;
                    MR_Integer bytecode_backend__bytecode_gen__V_26_26;

                    {
                      mercury__deconstruct__functor_4_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0, ((MR_Box) (bytecode_backend__bytecode_gen__GenericCallType_10)), (MR_Integer) 1, &bytecode_backend__bytecode_gen___GenericCallFunctor_25, &bytecode_backend__bytecode_gen__V_26_26);
                    }
                    {
                      *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
                    }
                  }
                  break;
              }
              *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
              }
              *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word bytecode_backend__bytecode_gen__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

              switch (bytecode_backend__bytecode_gen__V_193_193) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "bytecode_gen of parallel conjunction");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    bytecode_backend__bytecode_gen__gen_conj_4_p_0(bytecode_backend__bytecode_gen__V_192_192, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, bytecode_backend__bytecode_gen__Code_9);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word bytecode_backend__bytecode_gen__GoalList_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

              if ((bytecode_backend__bytecode_gen__GoalList_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
                  }
                  *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
                }
              else
                {
                  MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_188_188;
                  MR_Word bytecode_backend__bytecode_gen__DisjCode_57;
                  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122;
                  MR_Word bytecode_backend__bytecode_gen__V_124_124;
                  MR_Word bytecode_backend__bytecode_gen__V_125_125;
                  MR_Word bytecode_backend__bytecode_gen__V_127_127;
                  MR_Word bytecode_backend__bytecode_gen__V_128_128;
                  MR_Word bytecode_backend__bytecode_gen__V_130_130;
                  MR_Integer bytecode_backend__bytecode_gen__EndLabel_167;
                  MR_Word bytecode_backend__bytecode_gen__EnterCode_168;
                  MR_Word bytecode_backend__bytecode_gen__EndofCode_169;

                  {
                    bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_167, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122);
                  }
                  {
                    bytecode_backend__bytecode_gen__gen_disj_5_p_0(bytecode_backend__bytecode_gen__GoalList_176, bytecode_backend__bytecode_gen__EndLabel_167, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__DisjCode_57);
                  }
                  bytecode_backend__bytecode_gen__TypeCtorInfo_188_188 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
                  {
                    bytecode_backend__bytecode_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_124_124, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_167));
                  }
                  {
                    bytecode_backend__bytecode_gen__EnterCode_168 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, ((MR_Box) (bytecode_backend__bytecode_gen__V_124_124)));
                  }
                  {
                    bytecode_backend__bytecode_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_128_128, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_167));
                  }
                  {
                    bytecode_backend__bytecode_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_127_127, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_128_128));
                    MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    bytecode_backend__bytecode_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_125_125, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_127_127));
                  }
                  {
                    bytecode_backend__bytecode_gen__EndofCode_169 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__V_125_125);
                  }
                  {
                    bytecode_backend__bytecode_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__DisjCode_57, bytecode_backend__bytecode_gen__EndofCode_169);
                  }
                  {
                    *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__EnterCode_168, bytecode_backend__bytecode_gen__V_130_130);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_189_189;
              MR_Word bytecode_backend__bytecode_gen__CasesList_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__SwitchCode_60;
              MR_Integer bytecode_backend__bytecode_gen__ByteVar_61;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113;
              MR_Word bytecode_backend__bytecode_gen__V_115_115;
              MR_Word bytecode_backend__bytecode_gen__V_116_116;
              MR_Word bytecode_backend__bytecode_gen__V_118_118;
              MR_Word bytecode_backend__bytecode_gen__V_119_119;
              MR_Word bytecode_backend__bytecode_gen__V_121_121;
              MR_Word bytecode_backend__bytecode_gen__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
              MR_Integer bytecode_backend__bytecode_gen__EndLabel_178;
              MR_Word bytecode_backend__bytecode_gen__EnterCode_179;
              MR_Word bytecode_backend__bytecode_gen__EndofCode_180;
              MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));

              {
                bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_178, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113);
              }
              {
                bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(bytecode_backend__bytecode_gen__CasesList_59, bytecode_backend__bytecode_gen__EndLabel_178, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__SwitchCode_60);
              }
              {
                bytecode_backend__bytecode_gen__map_var_3_p_0(*bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, bytecode_backend__bytecode_gen__Var_177, &bytecode_backend__bytecode_gen__ByteVar_61);
              }
              bytecode_backend__bytecode_gen__TypeCtorInfo_189_189 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
              {
                bytecode_backend__bytecode_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_61));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_178));
              }
              {
                bytecode_backend__bytecode_gen__EnterCode_179 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, ((MR_Box) (bytecode_backend__bytecode_gen__V_115_115)));
              }
              {
                bytecode_backend__bytecode_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_119_119, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_178));
              }
              {
                bytecode_backend__bytecode_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_118_118, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_119_119));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                bytecode_backend__bytecode_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_116_116, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_118_118));
              }
              {
                bytecode_backend__bytecode_gen__EndofCode_180 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__V_116_116);
              }
              {
                bytecode_backend__bytecode_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__SwitchCode_60, bytecode_backend__bytecode_gen__EndofCode_180);
              }
              {
                *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__EnterCode_179, bytecode_backend__bytecode_gen__V_121_121);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word bytecode_backend__bytecode_gen__InnerGoal_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__InnerCode_45;
              MR_Word bytecode_backend__bytecode_gen__OuterDetism_46;
              MR_Word bytecode_backend__bytecode_gen__InnerGoalInfo_48;
              MR_Word bytecode_backend__bytecode_gen__InnerDetism_49;
              MR_Word bytecode_backend__bytecode_gen__OuterCodeModel_50;
              MR_Word bytecode_backend__bytecode_gen__InnerCodeModel_51;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138;
              MR_Word bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
              MR_Word bytecode_backend__bytecode_gen__V_47_47;

              {
                bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__InnerGoal_44, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138, &bytecode_backend__bytecode_gen__InnerCode_45);
              }
              {
                bytecode_backend__bytecode_gen__OuterDetism_46 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_7);
              }
              bytecode_backend__bytecode_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__InnerGoal_44, (MR_Integer) 0)));
              bytecode_backend__bytecode_gen__InnerGoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__InnerGoal_44, (MR_Integer) 1)));
              {
                bytecode_backend__bytecode_gen__InnerDetism_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__InnerGoalInfo_48);
              }
              {
                hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__OuterDetism_46, &bytecode_backend__bytecode_gen__OuterCodeModel_50);
              }
              {
                hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__InnerDetism_49, &bytecode_backend__bytecode_gen__InnerCodeModel_51);
              }
              bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__InnerCodeModel_51 == bytecode_backend__bytecode_gen__OuterCodeModel_50);
              if (bytecode_backend__bytecode_gen__succeeded)
                {
                  *bytecode_backend__bytecode_gen__Code_9 = bytecode_backend__bytecode_gen__InnerCode_45;
                  *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138;
                }
              else
                {
                  MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_186_186;
                  MR_Integer bytecode_backend__bytecode_gen__Temp_52;
                  MR_Word bytecode_backend__bytecode_gen__V_140_140;
                  MR_Word bytecode_backend__bytecode_gen__V_141_141;
                  MR_Word bytecode_backend__bytecode_gen__V_142_142;
                  MR_Word bytecode_backend__bytecode_gen__EnterCode_161;
                  MR_Word bytecode_backend__bytecode_gen__EndofCode_162;

                  {
                    bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__Temp_52, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83);
                  }
                  bytecode_backend__bytecode_gen__TypeCtorInfo_186_186 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
                  {
                    bytecode_backend__bytecode_gen__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_140_140, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Temp_52));
                  }
                  {
                    bytecode_backend__bytecode_gen__EnterCode_161 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, ((MR_Box) (bytecode_backend__bytecode_gen__V_140_140)));
                  }
                  {
                    bytecode_backend__bytecode_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                    MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_141_141, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Temp_52));
                  }
                  {
                    bytecode_backend__bytecode_gen__EndofCode_162 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, ((MR_Box) (bytecode_backend__bytecode_gen__V_141_141)));
                  }
                  {
                    bytecode_backend__bytecode_gen__V_142_142 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, bytecode_backend__bytecode_gen__InnerCode_45, bytecode_backend__bytecode_gen__EndofCode_162);
                  }
                  {
                    *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, bytecode_backend__bytecode_gen__EnterCode_161, bytecode_backend__bytecode_gen__V_142_142);
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_190_190;
              MR_Word bytecode_backend__bytecode_gen__Cond_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
              MR_Word bytecode_backend__bytecode_gen__Then_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
              MR_Word bytecode_backend__bytecode_gen__Else_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));
              MR_Integer bytecode_backend__bytecode_gen__ElseLabel_66;
              MR_Word bytecode_backend__bytecode_gen__CondCode_67;
              MR_Word bytecode_backend__bytecode_gen__ThenCode_68;
              MR_Word bytecode_backend__bytecode_gen__ElseCode_69;
              MR_Word bytecode_backend__bytecode_gen__EnterIfCode_70;
              MR_Word bytecode_backend__bytecode_gen__EnterThenCode_71;
              MR_Word bytecode_backend__bytecode_gen__EndofThenCode_72;
              MR_Word bytecode_backend__bytecode_gen__EndofIfCode_73;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91;
              MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92;
              MR_Word bytecode_backend__bytecode_gen__V_94_94;
              MR_Word bytecode_backend__bytecode_gen__V_95_95;
              MR_Word bytecode_backend__bytecode_gen__V_96_96;
              MR_Word bytecode_backend__bytecode_gen__V_97_97;
              MR_Word bytecode_backend__bytecode_gen__V_98_98;
              MR_Word bytecode_backend__bytecode_gen__V_99_99;
              MR_Word bytecode_backend__bytecode_gen__V_100_100;
              MR_Word bytecode_backend__bytecode_gen__V_101_101;
              MR_Word bytecode_backend__bytecode_gen__V_103_103;
              MR_Word bytecode_backend__bytecode_gen__V_105_105;
              MR_Word bytecode_backend__bytecode_gen__V_106_106;
              MR_Word bytecode_backend__bytecode_gen__V_108_108;
              MR_Word bytecode_backend__bytecode_gen__V_109_109;
              MR_Word bytecode_backend__bytecode_gen__V_110_110;
              MR_Word bytecode_backend__bytecode_gen__V_111_111;
              MR_Word bytecode_backend__bytecode_gen__V_112_112;
              MR_Integer bytecode_backend__bytecode_gen__EndLabel_181;
              MR_Integer bytecode_backend__bytecode_gen__FrameTemp_182;
              MR_Word bytecode_backend__bytecode_gen___Vars_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

              {
                bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_181, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88);
              }
              {
                bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__ElseLabel_66, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89);
              }
              {
                bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__FrameTemp_182, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90);
              }
              {
                bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Cond_63, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91, &bytecode_backend__bytecode_gen__CondCode_67);
              }
              {
                bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Then_64, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92, &bytecode_backend__bytecode_gen__ThenCode_68);
              }
              {
                bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Else_65, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__ElseCode_69);
              }
              bytecode_backend__bytecode_gen__TypeCtorInfo_190_190 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
              {
                bytecode_backend__bytecode_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ElseLabel_66));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
              }
              {
                bytecode_backend__bytecode_gen__EnterIfCode_70 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, ((MR_Box) (bytecode_backend__bytecode_gen__V_94_94)));
              }
              {
                bytecode_backend__bytecode_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_95_95, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
              }
              {
                bytecode_backend__bytecode_gen__EnterThenCode_71 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, ((MR_Box) (bytecode_backend__bytecode_gen__V_95_95)));
              }
              {
                bytecode_backend__bytecode_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_97_97, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
              }
              {
                bytecode_backend__bytecode_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_99_99, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ElseLabel_66));
              }
              {
                bytecode_backend__bytecode_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_101_101, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
              }
              {
                bytecode_backend__bytecode_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_100_100, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_101_101));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                bytecode_backend__bytecode_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_98_98, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_99_99));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_98_98, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_100_100));
              }
              {
                bytecode_backend__bytecode_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_96_96, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_97_97));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_96_96, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_98_98));
              }
              {
                bytecode_backend__bytecode_gen__EndofThenCode_72 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__V_96_96);
              }
              {
                bytecode_backend__bytecode_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_106_106, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
              }
              {
                bytecode_backend__bytecode_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_105_105, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_106_106));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                bytecode_backend__bytecode_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_103_103, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_105_105));
              }
              {
                bytecode_backend__bytecode_gen__EndofIfCode_73 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__V_103_103);
              }
              {
                bytecode_backend__bytecode_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__ElseCode_69, bytecode_backend__bytecode_gen__EndofIfCode_73);
              }
              {
                bytecode_backend__bytecode_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EndofThenCode_72, bytecode_backend__bytecode_gen__V_112_112);
              }
              {
                bytecode_backend__bytecode_gen__V_110_110 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__ThenCode_68, bytecode_backend__bytecode_gen__V_111_111);
              }
              {
                bytecode_backend__bytecode_gen__V_109_109 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EnterThenCode_71, bytecode_backend__bytecode_gen__V_110_110);
              }
              {
                bytecode_backend__bytecode_gen__V_108_108 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__CondCode_67, bytecode_backend__bytecode_gen__V_109_109);
              }
              {
                *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EnterIfCode_70, bytecode_backend__bytecode_gen__V_108_108);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12,
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13,
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_17;
    MR_Word bytecode_backend__bytecode_gen__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word bytecode_backend__bytecode_gen__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word bytecode_backend__bytecode_gen__GoalCode_9;
    MR_Word bytecode_backend__bytecode_gen__Context_10;
    MR_Integer bytecode_backend__bytecode_gen__Line_11;
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
    MR_Word bytecode_backend__bytecode_gen__V_16_16;

    {
      bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_5, bytecode_backend__bytecode_gen__GoalInfo_6, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13, &bytecode_backend__bytecode_gen__GoalCode_9);
    }
    {
      bytecode_backend__bytecode_gen__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_6);
    }
    {
      mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_10, &bytecode_backend__bytecode_gen__Line_11);
    }
    bytecode_backend__bytecode_gen__TypeCtorInfo_17_17 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
    {
      bytecode_backend__bytecode_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_11));
    }
    {
      bytecode_backend__bytecode_gen__V_15_15 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_17, ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16)));
    }
    {
      *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_17, bytecode_backend__bytecode_gen__V_15_15, bytecode_backend__bytecode_gen__GoalCode_9);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
  MR_Integer bytecode_backend__bytecode_gen__ProcId_5,
  MR_Word bytecode_backend__bytecode_gen__PredInfo_6,
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7,
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_69_69;
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_70_70;
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_72_72;
    MR_Word bytecode_backend__bytecode_gen__ProcTable_9;
    MR_Word bytecode_backend__bytecode_gen__ProcInfo_10;
    MR_Word bytecode_backend__bytecode_gen__Goal_11;
    MR_Word bytecode_backend__bytecode_gen__VarTypes_12;
    MR_Word bytecode_backend__bytecode_gen__VarSet_13;
    MR_Word bytecode_backend__bytecode_gen__Detism_14;
    MR_Word bytecode_backend__bytecode_gen__CodeModel_15;
    MR_Word bytecode_backend__bytecode_gen__GoalVars_16;
    MR_Word bytecode_backend__bytecode_gen__ArgVars_17;
    MR_Word bytecode_backend__bytecode_gen__Vars_18;
    MR_Word bytecode_backend__bytecode_gen__VarList_19;
    MR_Word bytecode_backend__bytecode_gen__VarMap0_20;
    MR_Word bytecode_backend__bytecode_gen__VarMap_21;
    MR_Word bytecode_backend__bytecode_gen__VarInfos_22;
    MR_Word bytecode_backend__bytecode_gen__ByteInfo0_23;
    MR_Integer bytecode_backend__bytecode_gen__ZeroLabel_24;
    MR_Word bytecode_backend__bytecode_gen__ByteInfo1_25;
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_26;
    MR_Word bytecode_backend__bytecode_gen__Args_27;
    MR_Word bytecode_backend__bytecode_gen__InputArgs_28;
    MR_Word bytecode_backend__bytecode_gen__ByteInfo_29;
    MR_Word bytecode_backend__bytecode_gen__PickupCode_30;
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_31;
    MR_Word bytecode_backend__bytecode_gen__PlaceCode_32;
    MR_Word bytecode_backend__bytecode_gen__GoalCode_36;
    MR_Integer bytecode_backend__bytecode_gen__EndLabel_37;
    MR_Integer bytecode_backend__bytecode_gen__LabelCount_38;
    MR_Integer bytecode_backend__bytecode_gen__TempCount_39;
    MR_Word bytecode_backend__bytecode_gen__ZeroLabelCode_40;
    MR_Word bytecode_backend__bytecode_gen__BodyCode0_41;
    MR_Word bytecode_backend__bytecode_gen__BodyInstrs_42;
    MR_Word bytecode_backend__bytecode_gen__BodyCode_43;
    MR_Integer bytecode_backend__bytecode_gen__ProcInt_44;
    MR_Word bytecode_backend__bytecode_gen__EnterCode_45;
    MR_Word bytecode_backend__bytecode_gen__EndofCode_46;
    MR_Word bytecode_backend__bytecode_gen__V_48_48;
    MR_Word bytecode_backend__bytecode_gen__V_49_49;
    MR_Word bytecode_backend__bytecode_gen__V_50_50;
    MR_Word bytecode_backend__bytecode_gen__V_53_53;
    MR_Word bytecode_backend__bytecode_gen__V_66_66;
    MR_Word bytecode_backend__bytecode_gen__V_79_79;
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_85;
    MR_Word bytecode_backend__bytecode_gen__LabelCounter_86;
    MR_Box bytecode_backend__bytecode_gen__conv0_ProcInfo_10;
    MR_Word bytecode_backend__bytecode_gen__V_92_92;
    MR_Word bytecode_backend__bytecode_gen__V_93_93;
    MR_Word bytecode_backend__bytecode_gen__V_94_94;
    MR_Word bytecode_backend__bytecode_gen__V_96_96;
    MR_Word bytecode_backend__bytecode_gen__V_95_95;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(bytecode_backend__bytecode_gen__PredInfo_6, &bytecode_backend__bytecode_gen__ProcTable_9);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, bytecode_backend__bytecode_gen__ProcTable_9, bytecode_backend__bytecode_gen__ProcId_5, &bytecode_backend__bytecode_gen__conv0_ProcInfo_10);
    }
    bytecode_backend__bytecode_gen__ProcInfo_10 = ((MR_Word) bytecode_backend__bytecode_gen__conv0_ProcInfo_10);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__Goal_11);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__VarTypes_12);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__VarSet_13);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__Detism_14);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_14, &bytecode_backend__bytecode_gen__CodeModel_15);
    }
    {
      hlds__goal_util__goal_vars_2_p_0(bytecode_backend__bytecode_gen__Goal_11, &bytecode_backend__bytecode_gen__GoalVars_16);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__ArgVars_17);
    }
    bytecode_backend__bytecode_gen__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__insert_list_3_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_69_69, bytecode_backend__bytecode_gen__ArgVars_17, bytecode_backend__bytecode_gen__GoalVars_16, &bytecode_backend__bytecode_gen__Vars_18);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_69_69, bytecode_backend__bytecode_gen__Vars_18, &bytecode_backend__bytecode_gen__VarList_19);
    }
    bytecode_backend__bytecode_gen__TypeInfo_70_70 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(bytecode_backend__bytecode_gen__TypeInfo_70_70, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &bytecode_backend__bytecode_gen__VarMap0_20);
    }
    {
      bytecode_backend__bytecode_gen__create_varmap_7_p_0(bytecode_backend__bytecode_gen__VarList_19, bytecode_backend__bytecode_gen__VarSet_13, bytecode_backend__bytecode_gen__VarTypes_12, (MR_Integer) 0, bytecode_backend__bytecode_gen__VarMap0_20, &bytecode_backend__bytecode_gen__VarMap_21, &bytecode_backend__bytecode_gen__VarInfos_22);
    }
    {
      bytecode_backend__bytecode_gen__LabelCounter0_85 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      bytecode_backend__bytecode_gen__V_79_79 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      bytecode_backend__bytecode_gen__ByteInfo0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarMap_21));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarTypes_12));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter0_85));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_79_79));
    }
    {
      mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__ZeroLabel_24, bytecode_backend__bytecode_gen__LabelCounter0_85, &bytecode_backend__bytecode_gen__LabelCounter_86);
    }
    bytecode_backend__bytecode_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 0)));
    bytecode_backend__bytecode_gen__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 1)));
    bytecode_backend__bytecode_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 2)));
    bytecode_backend__bytecode_gen__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 3)));
    bytecode_backend__bytecode_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 4)));
    {
      bytecode_backend__bytecode_gen__ByteInfo1_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_92_92));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_93_93));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_94_94));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_86));
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_96_96));
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__ArgInfo_26);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_70_70, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_17, bytecode_backend__bytecode_gen__ArgInfo_26, &bytecode_backend__bytecode_gen__Args_27);
    }
    {
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__Args_27, &bytecode_backend__bytecode_gen__InputArgs_28);
    }
    {
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__Args_27, &bytecode_backend__bytecode_gen__OutputArgs_31);
    }
    bytecode_backend__bytecode_gen__TypeCtorInfo_72_72 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
    {
      bytecode_backend__bytecode_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ZeroLabel_24));
    }
    {
      bytecode_backend__bytecode_gen__ZeroLabelCode_40 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, ((MR_Box) (bytecode_backend__bytecode_gen__V_48_48)));
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_5, &bytecode_backend__bytecode_gen__ProcInt_44);
    }
    switch (bytecode_backend__bytecode_gen__CodeModel_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word bytecode_backend__bytecode_gen__ByteInfo3_35;

          {
            bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_11, bytecode_backend__bytecode_gen__ByteInfo1_25, &bytecode_backend__bytecode_gen__ByteInfo3_35, &bytecode_backend__bytecode_gen__GoalCode_36);
          }
          {
            bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_37, bytecode_backend__bytecode_gen__ByteInfo3_35, &bytecode_backend__bytecode_gen__ByteInfo_29);
          }
          {
            MR_Word bytecode_backend__bytecode_gen__V_54_54;
            MR_Word bytecode_backend__bytecode_gen__V_55_55;

            {
              bytecode_backend__bytecode_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_55_55, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
            }
            {
              bytecode_backend__bytecode_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_54_54, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_55_55));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[1])));
            }
            {
              bytecode_backend__bytecode_gen__EndofCode_46 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__V_54_54);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word bytecode_backend__bytecode_gen__V_59_59;
          MR_Word bytecode_backend__bytecode_gen__V_61_61;
          MR_Word bytecode_backend__bytecode_gen__V_62_62;
          MR_Word bytecode_backend__bytecode_gen__ByteInfo2_97;
          MR_Word bytecode_backend__bytecode_gen__ByteInfo3_98;
          MR_Integer bytecode_backend__bytecode_gen___FrameTemp_33;

          {
            bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen___FrameTemp_33, bytecode_backend__bytecode_gen__ByteInfo1_25, &bytecode_backend__bytecode_gen__ByteInfo2_97);
          }
          {
            bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_11, bytecode_backend__bytecode_gen__ByteInfo2_97, &bytecode_backend__bytecode_gen__ByteInfo3_98, &bytecode_backend__bytecode_gen__GoalCode_36);
          }
          {
            bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_37, bytecode_backend__bytecode_gen__ByteInfo3_98, &bytecode_backend__bytecode_gen__ByteInfo_29);
          }
          {
            bytecode_backend__bytecode_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_62_62, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
          }
          {
            bytecode_backend__bytecode_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_61_61, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_62_62));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[1])));
          }
          {
            bytecode_backend__bytecode_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_59_59, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_61_61));
          }
          {
            bytecode_backend__bytecode_gen__EndofCode_46 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__V_59_59);
          }
        }
        break;
    }
    {
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__InputArgs_28, bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__PickupCode_30);
    }
    {
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_31, bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__PlaceCode_32);
    }
    {
      bytecode_backend__bytecode_gen__get_counts_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__LabelCount_38, &bytecode_backend__bytecode_gen__TempCount_39);
    }
    {
      bytecode_backend__bytecode_gen__V_50_50 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__GoalCode_36, bytecode_backend__bytecode_gen__PlaceCode_32);
    }
    {
      bytecode_backend__bytecode_gen__V_49_49 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__ZeroLabelCode_40, bytecode_backend__bytecode_gen__V_50_50);
    }
    {
      bytecode_backend__bytecode_gen__BodyCode0_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__PickupCode_30, bytecode_backend__bytecode_gen__V_49_49);
    }
    {
      bytecode_backend__bytecode_gen__BodyInstrs_42 = mercury__cord__list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__BodyCode0_41);
    }
    {
      bytecode_backend__bytecode_gen__succeeded = mercury__list__member_2_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))), bytecode_backend__bytecode_gen__BodyInstrs_42);
    }
    if (bytecode_backend__bytecode_gen__succeeded)
      {
        {
          bytecode_backend__bytecode_gen__BodyCode_43 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
        }
      }
    else
      bytecode_backend__bytecode_gen__BodyCode_43 = bytecode_backend__bytecode_gen__BodyCode0_41;
    {
      bytecode_backend__bytecode_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_44));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Detism_14));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCount_38));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__TempCount_39));
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInfos_22));
    }
    {
      bytecode_backend__bytecode_gen__EnterCode_45 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, ((MR_Box) (bytecode_backend__bytecode_gen__V_53_53)));
    }
    {
      bytecode_backend__bytecode_gen__V_66_66 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__BodyCode_43, bytecode_backend__bytecode_gen__EndofCode_46);
    }
    {
      *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_72_72, bytecode_backend__bytecode_gen__EnterCode_45, bytecode_backend__bytecode_gen__V_66_66);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
      }
    else
      {
        MR_Integer bytecode_backend__bytecode_gen__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__ProcCode_21;
        MR_Word bytecode_backend__bytecode_gen__ProcsCode_22;

        {
          hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__ProcId_15, bytecode_backend__bytecode_gen__HeadVar__4_4);
        }
        {
          bytecode_backend__bytecode_gen__gen_proc_4_p_0(bytecode_backend__bytecode_gen__ProcId_15, bytecode_backend__bytecode_gen__HeadVar__3_3, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__ProcCode_21);
        }
        {
          bytecode_backend__bytecode_gen__gen_pred_7_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__ProcIds_16, bytecode_backend__bytecode_gen__HeadVar__3_3, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__ProcsCode_22);
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ProcCode_21, bytecode_backend__bytecode_gen__ProcsCode_22);
        }
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;

    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
      }
    else
      {
        MR_Word bytecode_backend__bytecode_gen__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word bytecode_backend__bytecode_gen__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word bytecode_backend__bytecode_gen__PredTable_15;
        MR_Word bytecode_backend__bytecode_gen__PredInfo_16;
        MR_Word bytecode_backend__bytecode_gen__ProcIds_17;
        MR_Word bytecode_backend__bytecode_gen__PredCode_18;
        MR_Word bytecode_backend__bytecode_gen__OtherCode_28;
        MR_Box bytecode_backend__bytecode_gen__conv0_PredInfo_16;

        {
          hlds__hlds_module__module_info_get_preds_2_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__PredTable_15);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, bytecode_backend__bytecode_gen__PredTable_15, ((MR_Box) (bytecode_backend__bytecode_gen__PredId_11)), &bytecode_backend__bytecode_gen__conv0_PredInfo_16);
        }
        bytecode_backend__bytecode_gen__PredInfo_16 = ((MR_Word) bytecode_backend__bytecode_gen__conv0_PredInfo_16);
        {
          bytecode_backend__bytecode_gen__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
        }
        if ((bytecode_backend__bytecode_gen__ProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              bytecode_backend__bytecode_gen__PredCode_18 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
            }
          }
        else
          {
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_41_41;
            MR_Word bytecode_backend__bytecode_gen__ProcsCode_21;
            MR_String bytecode_backend__bytecode_gen__PredName_22;
            MR_Integer bytecode_backend__bytecode_gen__ProcsCount_23;
            MR_Integer bytecode_backend__bytecode_gen__Arity_24;
            MR_Integer bytecode_backend__bytecode_gen__IsFunc_25;
            MR_Word bytecode_backend__bytecode_gen__EnterCode_26;
            MR_Word bytecode_backend__bytecode_gen__EndofCode_27;
            MR_Word bytecode_backend__bytecode_gen__V_32_32;
            MR_Word bytecode_backend__bytecode_gen__V_34_34;
            MR_Word bytecode_backend__bytecode_gen__PredOrFunc_45;
            MR_Integer bytecode_backend__bytecode_gen__ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ProcIds_17, (MR_Integer) 0)));
            MR_Word bytecode_backend__bytecode_gen__ProcIds_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ProcIds_17, (MR_Integer) 1)));
            MR_Word bytecode_backend__bytecode_gen__ProcCode_59;
            MR_Word bytecode_backend__bytecode_gen__ProcsCode_60;

            {
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", bytecode_backend__bytecode_gen__PredId_11, bytecode_backend__bytecode_gen__ProcId_53, bytecode_backend__bytecode_gen__HeadVar__1_1);
            }
            {
              bytecode_backend__bytecode_gen__gen_proc_4_p_0(bytecode_backend__bytecode_gen__ProcId_53, bytecode_backend__bytecode_gen__PredInfo_16, bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__ProcCode_59);
            }
            {
              bytecode_backend__bytecode_gen__gen_pred_7_p_0(bytecode_backend__bytecode_gen__PredId_11, bytecode_backend__bytecode_gen__ProcIds_54, bytecode_backend__bytecode_gen__PredInfo_16, bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__ProcsCode_60);
            }
            {
              bytecode_backend__bytecode_gen__ProcsCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ProcCode_59, bytecode_backend__bytecode_gen__ProcsCode_60);
            }
            {
              bytecode_backend__bytecode_gen__PredName_22 = hlds__hlds_module__predicate_name_2_f_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__PredId_11);
            }
            {
              mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__ProcIds_17, &bytecode_backend__bytecode_gen__ProcsCount_23);
            }
            {
              bytecode_backend__bytecode_gen__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
            }
            {
              bytecode_backend__bytecode_gen__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
            }
            switch (bytecode_backend__bytecode_gen__PredOrFunc_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                bytecode_backend__bytecode_gen__IsFunc_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                bytecode_backend__bytecode_gen__IsFunc_25 = (MR_Integer) 0;
                break;
            }
            bytecode_backend__bytecode_gen__TypeCtorInfo_41_41 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
            {
              bytecode_backend__bytecode_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_22));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_24));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_25));
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcsCount_23));
            }
            {
              bytecode_backend__bytecode_gen__EnterCode_26 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, ((MR_Box) (bytecode_backend__bytecode_gen__V_32_32)));
            }
            {
              bytecode_backend__bytecode_gen__EndofCode_27 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
            }
            {
              bytecode_backend__bytecode_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, bytecode_backend__bytecode_gen__ProcsCode_21, bytecode_backend__bytecode_gen__EndofCode_27);
            }
            {
              bytecode_backend__bytecode_gen__PredCode_18 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, bytecode_backend__bytecode_gen__EnterCode_26, bytecode_backend__bytecode_gen__V_34_34);
            }
          }
        {
          bytecode_backend__bytecode_gen__gen_preds_5_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__PredIds_12, &bytecode_backend__bytecode_gen__OtherCode_28);
        }
        {
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__PredCode_18, bytecode_backend__bytecode_gen__OtherCode_28);
        }
      }
  }
}

void MR_CALL 
bytecode_backend__bytecode_gen__gen_module_4_p_0(
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_5,
  MR_Word * bytecode_backend__bytecode_gen__Code_6)
{
  {
    MR_bool bytecode_backend__bytecode_gen__succeeded;
    MR_Word bytecode_backend__bytecode_gen__PredIds_8;
    MR_Word bytecode_backend__bytecode_gen__CodeTree_9;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(bytecode_backend__bytecode_gen__ModuleInfo_5, &bytecode_backend__bytecode_gen__PredIds_8);
    }
    {
      bytecode_backend__bytecode_gen__gen_preds_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_5, bytecode_backend__bytecode_gen__PredIds_8, &bytecode_backend__bytecode_gen__CodeTree_9);
    }
    {
      *bytecode_backend__bytecode_gen__Code_6 = mercury__cord__list_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__CodeTree_9);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bytecode_backend.bytecode_gen. */
