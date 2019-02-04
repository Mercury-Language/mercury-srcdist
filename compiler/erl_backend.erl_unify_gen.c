/*
** Automatically generated from `erl_unify_gen.m'
** by the Mercury compiler,
** version DEV
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


/* :- module erl_backend.erl_unify_gen. */
/* :- implementation. */

/*
INIT mercury__erl_backend__erl_unify_gen__init
ENDINIT
*/

#include "erl_backend.erl_unify_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
#include "hlds.code_model.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_10,
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
  MR_Word erl_backend__erl_unify_gen__Args_12,
  MR_Word erl_backend__erl_unify_gen__SuccessExpr_15,
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23);

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_9,
  MR_Word erl_backend__erl_unify_gen__ConsId_10,
  MR_Word erl_backend__erl_unify_gen__Args_11,
  MR_Word * erl_backend__erl_unify_gen__Statement_14,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_unify_gen__wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_10,
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
  MR_Word erl_backend__erl_unify_gen__Args_12,
  MR_Word erl_backend__erl_unify_gen__ArgTypes_13,
  MR_Word erl_backend__erl_unify_gen__ArgModes_14,
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box erl_backend__erl_unify_gen__closure_arg);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__118__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_65);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__149__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_33,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_59);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__143__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_54);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
  MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_6,
  MR_Word erl_backend__erl_unify_gen__CurriedArgs_7,
  MR_Word * erl_backend__erl_unify_gen__FunExpr_8,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
  MR_Word erl_backend__erl_unify_gen__ModuleInfo_6,
  MR_Word erl_backend__erl_unify_gen__Var_7,
  MR_Word erl_backend__erl_unify_gen__ArgType_8,
  MR_Word erl_backend__erl_unify_gen__ArgMode_9,
  MR_Word * erl_backend__erl_unify_gen__HeadVar__5_5);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);


static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_1[3][2];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_2[2][8];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_3[2][1];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_4[3][5];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_5[1][3];




static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_unify_gen_scalar_common_1[2])))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_10,
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
  MR_Word erl_backend__erl_unify_gen__Args_12,
  MR_Word erl_backend__erl_unify_gen__SuccessExpr_15,
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Word erl_backend__erl_unify_gen__Pattern_19;
    MR_Word erl_backend__erl_unify_gen__SucceedCase_20;
    MR_Word erl_backend__erl_unify_gen__FailCase_21;
    MR_Word erl_backend__erl_unify_gen__Var_31;
    MR_Word erl_backend__erl_unify_gen__Var_32;
    MR_Word erl_backend__erl_unify_gen__Var_33;
    MR_Word erl_backend__erl_unify_gen__Var_34;
    MR_Word erl_backend__erl_unify_gen__Var_35;
    MR_Word erl_backend__erl_unify_gen__Pattern0_18;
    MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25;

    {
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(erl_backend__erl_unify_gen__ConsId_11, erl_backend__erl_unify_gen__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_unify_gen__Pattern0_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25);
    }
    if (erl_backend__erl_unify_gen__succeeded)
      {
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25;
        erl_backend__erl_unify_gen__Pattern_19 = erl_backend__erl_unify_gen__Pattern0_18;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_semidet_deconstruct\'/9", (MR_String) "undeconstructable object");
          return;
        }
      }
    {
      erl_backend__erl_unify_gen__SucceedCase_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__SucceedCase_20, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Pattern_19));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__SucceedCase_20, 1) = ((MR_Box) (erl_backend__erl_unify_gen__SuccessExpr_15));
    }
    {
      erl_backend__erl_unify_gen__Var_32 = erl_backend__elds__elds_fail_0_f_0();
    }
    {
      erl_backend__erl_unify_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Var_31, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_32));
    }
    {
      erl_backend__erl_unify_gen__FailCase_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FailCase_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FailCase_21, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_31));
    }
    {
      erl_backend__erl_unify_gen__Var_33 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_10);
    }
    {
      erl_backend__erl_unify_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_35, 0) = ((MR_Box) (erl_backend__erl_unify_gen__FailCase_21));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_34, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SucceedCase_20));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_34, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_unify_gen__Statement_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_33));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Var_34));
    }
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_9,
  MR_Word erl_backend__erl_unify_gen__ConsId_10,
  MR_Word erl_backend__erl_unify_gen__Args_11,
  MR_Word * erl_backend__erl_unify_gen__Statement_14,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Word erl_backend__erl_unify_gen__LHS_16;
    MR_Word erl_backend__erl_unify_gen__Var_21;

    {
      erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(erl_backend__erl_unify_gen__ConsId_10, erl_backend__erl_unify_gen__Args_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_unify_gen__LHS_16, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18);
    }
    {
      erl_backend__erl_unify_gen__Var_21 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_unify_gen__Statement_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__LHS_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Var_21));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_unify_gen__wrapper_arg_4)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

    {
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__assign_free_var_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_2), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_3), &erl_backend__erl_unify_gen__conv0_HeadVar__5_5);
    }
    if (erl_backend__erl_unify_gen__succeeded)
      {
        *erl_backend__erl_unify_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
      }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
  MR_Word erl_backend__erl_unify_gen__Var_10,
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
  MR_Word erl_backend__erl_unify_gen__Args_12,
  MR_Word erl_backend__erl_unify_gen__ArgTypes_13,
  MR_Word erl_backend__erl_unify_gen__ArgModes_14,
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Word erl_backend__erl_unify_gen__RHS_18;
    MR_Word erl_backend__erl_unify_gen__Construct_19;
    MR_Word erl_backend__erl_unify_gen__ModuleInfo_20;
    MR_Word erl_backend__erl_unify_gen__AssignFreeVars_21;
    MR_Word erl_backend__erl_unify_gen__Var_26;
    MR_Word erl_backend__erl_unify_gen__Var_28;
    MR_Word erl_backend__erl_unify_gen__Var_29;

    {
      erl_backend__erl_unify_gen__Var_26 = erl_backend__elds__elds_false_0_f_0();
    }
    {
      erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(erl_backend__erl_unify_gen__ConsId_11, erl_backend__erl_unify_gen__Args_12, erl_backend__erl_unify_gen__Var_26, &erl_backend__erl_unify_gen__RHS_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25);
    }
    {
      erl_backend__erl_unify_gen__Var_28 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_10);
    }
    {
      erl_backend__erl_unify_gen__Construct_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_28));
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 2) = ((MR_Box) (erl_backend__erl_unify_gen__RHS_18));
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25, &erl_backend__erl_unify_gen__ModuleInfo_20);
    }
    {
      erl_backend__erl_unify_gen__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_29, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_29, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_29, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_20));
    }
    {
      erl_backend__erl_unify_gen__AssignFreeVars_21 = mercury__list__filter_map_corresponding3_4_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__Var_29, erl_backend__erl_unify_gen__Args_12, erl_backend__erl_unify_gen__ArgTypes_13, erl_backend__erl_unify_gen__ArgModes_14);
    }
    if ((erl_backend__erl_unify_gen__AssignFreeVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *erl_backend__erl_unify_gen__Statement_16 = erl_backend__erl_unify_gen__Construct_19;
    else
      {
        MR_Word erl_backend__erl_unify_gen__Var_30;

        {
          erl_backend__erl_unify_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_30, 0) = ((MR_Box) (erl_backend__erl_unify_gen__AssignFreeVars_21));
        }
        {
          *erl_backend__erl_unify_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_unify_gen__Var_30, erl_backend__erl_unify_gen__Construct_19);
        }
      }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box erl_backend__erl_unify_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

    {
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__118__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

    {
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__149__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

    {
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__143__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(
  MR_Word erl_backend__erl_unify_gen__Unification_8,
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__MaybeSuccessExpr_11,
  MR_Word * erl_backend__erl_unify_gen__Statement_12,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_unify_gen__Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 0)));
          MR_Word erl_backend__erl_unify_gen__ConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 1)));
          MR_Word erl_backend__erl_unify_gen__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 2)));
          MR_Word erl_backend__erl_unify_gen__ArgModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 3)));
          MR_Word erl_backend__erl_unify_gen__SubInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 6)));
          MR_Word erl_backend__erl_unify_gen__Var_50;
          MR_Word erl_backend__erl_unify_gen__ModuleInfo_82;
          MR_Word erl_backend__erl_unify_gen__VarType_83;
          MR_Word erl_backend__erl_unify_gen__IsDummy_84;
          MR_Word erl_backend__erl_unify_gen___HowToConstruct_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 4)));
          MR_Word erl_backend__erl_unify_gen___CellIsUnique_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 5)));

          {
            erl_backend__erl_unify_gen__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_50, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_50, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_50, 3) = ((MR_Box) (erl_backend__erl_unify_gen__CodeModel_9));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__Var_50, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "construct not det");
          }
          if ((erl_backend__erl_unify_gen__SubInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__SubInfo_31, (MR_Integer) 1)));
              MR_Word erl_backend__erl_unify_gen__Var_55;
              MR_Word erl_backend__erl_unify_gen___MaybeTakeAddr_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__SubInfo_31, (MR_Integer) 0)));

              {
                erl_backend__erl_unify_gen__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_55, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_55, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_55, 3) = ((MR_Box) (erl_backend__erl_unify_gen__MaybeSizeProfInfo_33));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__Var_55, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "term size profiling not yet supported");
              }
            }
          {
            erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, &erl_backend__erl_unify_gen__ModuleInfo_82);
          }
          {
            erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__Var_25, &erl_backend__erl_unify_gen__VarType_83);
          }
          {
            erl_backend__erl_unify_gen__IsDummy_84 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_82, erl_backend__erl_unify_gen__VarType_83);
          }
          switch (erl_backend__erl_unify_gen__IsDummy_84) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                }
                *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word erl_backend__erl_unify_gen__ArgTypes_34;
                MR_Word erl_backend__erl_unify_gen__Construct_35;

                {
                  erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__Args_27, &erl_backend__erl_unify_gen__ArgTypes_34);
                }
                {
                  erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(erl_backend__erl_unify_gen__Var_25, erl_backend__erl_unify_gen__ConsId_26, erl_backend__erl_unify_gen__Args_27, erl_backend__erl_unify_gen__ArgTypes_34, erl_backend__erl_unify_gen__ArgModes_28, &erl_backend__erl_unify_gen__Construct_35, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44);
                }
                {
                  *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Construct_35, erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_unify_gen__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 4)));
          MR_Word erl_backend__erl_unify_gen__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 0)));
          MR_Word erl_backend__erl_unify_gen__ConsId_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 1)));
          MR_Word erl_backend__erl_unify_gen__Args_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 2)));
          MR_Word erl_backend__erl_unify_gen___CanCGC_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 5)));
          MR_Word erl_backend__erl_unify_gen__ArgModes_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 3)));

          switch (erl_backend__erl_unify_gen__CanFail_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word erl_backend__erl_unify_gen__SuccessExpr_38;

                {
                  erl_backend__erl_unify_gen__SuccessExpr_38 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                }
                {
                  erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(erl_backend__erl_unify_gen__Var_85, erl_backend__erl_unify_gen__ConsId_86, erl_backend__erl_unify_gen__Args_87, erl_backend__erl_unify_gen__SuccessExpr_38, erl_backend__erl_unify_gen__Statement_12, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word erl_backend__erl_unify_gen__Statement0_39;

                {
                  erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(erl_backend__erl_unify_gen__Var_85, erl_backend__erl_unify_gen__ConsId_86, erl_backend__erl_unify_gen__Args_87, &erl_backend__erl_unify_gen__Statement0_39, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44);
                }
                {
                  *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Statement0_39, erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_unify_gen__TargetVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 0)));
          MR_Word erl_backend__erl_unify_gen__SourceVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 1)));
          MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
          MR_Word erl_backend__erl_unify_gen__VarType_17;
          MR_Word erl_backend__erl_unify_gen__IsDummy_18;

          {
            erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, &erl_backend__erl_unify_gen__ModuleInfo_16);
          }
          {
            erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__TargetVar_14, &erl_backend__erl_unify_gen__VarType_17);
          }
          {
            erl_backend__erl_unify_gen__IsDummy_18 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_16, erl_backend__erl_unify_gen__VarType_17);
          }
          switch (erl_backend__erl_unify_gen__IsDummy_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word erl_backend__erl_unify_gen__Assign_19;
                MR_Word erl_backend__erl_unify_gen__Var_77;
                MR_Word erl_backend__erl_unify_gen__Var_78;

                {
                  erl_backend__erl_unify_gen__Var_77 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__TargetVar_14);
                }
                {
                  erl_backend__erl_unify_gen__Var_78 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__SourceVar_15);
                }
                {
                  erl_backend__erl_unify_gen__Assign_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_77));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Var_78));
                }
                {
                  *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Assign_19, erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                }
              }
              break;
          }
          *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_unify_gen__Var1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 1)));
              MR_Word erl_backend__erl_unify_gen__Var2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Unification_8, (MR_Integer) 2)));
              MR_Word erl_backend__erl_unify_gen__Var_61;
              MR_Word erl_backend__erl_unify_gen__ModuleInfo_79;
              MR_Word erl_backend__erl_unify_gen__VarType_80;
              MR_Word erl_backend__erl_unify_gen__IsDummy_81;

              {
                erl_backend__erl_unify_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, 3) = ((MR_Box) (erl_backend__erl_unify_gen__CodeModel_9));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__Var_61, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "simple_test not semidet");
              }
              {
                erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, &erl_backend__erl_unify_gen__ModuleInfo_79);
              }
              {
                erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__Var1_20, &erl_backend__erl_unify_gen__VarType_80);
              }
              {
                erl_backend__erl_unify_gen__IsDummy_81 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_79, erl_backend__erl_unify_gen__VarType_80);
              }
              switch (erl_backend__erl_unify_gen__IsDummy_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *erl_backend__erl_unify_gen__Statement_12 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__erl_unify_gen__Test_22;
                    MR_Word erl_backend__erl_unify_gen__TrueCase_23;
                    MR_Word erl_backend__erl_unify_gen__FalseCase_24;
                    MR_Word erl_backend__erl_unify_gen__Var_67;
                    MR_Word erl_backend__erl_unify_gen__Var_68;
                    MR_Word erl_backend__erl_unify_gen__Var_69;
                    MR_Word erl_backend__erl_unify_gen__Var_70;
                    MR_Word erl_backend__erl_unify_gen__Var_71;
                    MR_Word erl_backend__erl_unify_gen__Var_72;
                    MR_Word erl_backend__erl_unify_gen__Var_73;
                    MR_Word erl_backend__erl_unify_gen__Var_74;
                    MR_Word erl_backend__erl_unify_gen__Var_75;

                    {
                      erl_backend__erl_unify_gen__Var_67 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var1_20);
                    }
                    {
                      erl_backend__erl_unify_gen__Var_68 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var2_21);
                    }
                    {
                      erl_backend__erl_unify_gen__Test_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_22, 1) = ((MR_Box) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_22, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Var_67));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_22, 3) = ((MR_Box) (erl_backend__erl_unify_gen__Var_68));
                    }
                    {
                      erl_backend__erl_unify_gen__Var_69 = erl_backend__elds__elds_true_0_f_0();
                    }
                    {
                      erl_backend__erl_unify_gen__Var_70 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_11);
                    }
                    {
                      erl_backend__erl_unify_gen__TrueCase_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TrueCase_23, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_69));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TrueCase_23, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_70));
                    }
                    {
                      erl_backend__erl_unify_gen__Var_71 = erl_backend__elds__elds_false_0_f_0();
                    }
                    {
                      erl_backend__erl_unify_gen__Var_73 = erl_backend__elds__elds_fail_0_f_0();
                    }
                    {
                      erl_backend__erl_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Var_72, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_73));
                    }
                    {
                      erl_backend__erl_unify_gen__FalseCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FalseCase_24, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_71));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FalseCase_24, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_72));
                    }
                    {
                      erl_backend__erl_unify_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_75, 0) = ((MR_Box) (erl_backend__erl_unify_gen__FalseCase_24));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      erl_backend__erl_unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_74, 0) = ((MR_Box) (erl_backend__erl_unify_gen__TrueCase_23));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_74, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_75));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *erl_backend__erl_unify_gen__Statement_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Test_22));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Var_74));
                    }
                  }
                  break;
              }
              *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__118__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_65)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__CodeModel_9 == erl_backend__erl_unify_gen__HeadVar__2_65);

    return erl_backend__erl_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__149__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_33,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_59)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    {
      erl_backend__erl_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[0], ((MR_Box) (erl_backend__erl_unify_gen__MaybeSizeProfInfo_33)), ((MR_Box) (erl_backend__erl_unify_gen__HeadVar__2_59)));
    }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__143__1_2_p_0(
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_54)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__CodeModel_9 == erl_backend__erl_unify_gen__HeadVar__2_54);

    return erl_backend__erl_unify_gen__succeeded;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__2_2;

    {
      erl_backend__erl_unify_gen__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__2_2));
    return erl_backend__erl_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
  MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_6,
  MR_Word erl_backend__erl_unify_gen__CurriedArgs_7,
  MR_Word * erl_backend__erl_unify_gen__FunExpr_8,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Word erl_backend__erl_unify_gen__TypeInfo_54_54;
    MR_Word erl_backend__erl_unify_gen__ModuleInfo_10;
    MR_Word erl_backend__erl_unify_gen__PredProcId_11;
    MR_Word erl_backend__erl_unify_gen__PredInfo_12;
    MR_Word erl_backend__erl_unify_gen__ProcInfo_13;
    MR_Word erl_backend__erl_unify_gen__CalleeTypes_14;
    MR_Word erl_backend__erl_unify_gen__ArgModes_15;
    MR_Word erl_backend__erl_unify_gen__CodeModel_16;
    MR_Integer erl_backend__erl_unify_gen__NumExtraVars_17;
    MR_Word erl_backend__erl_unify_gen__AllExtraVars_18;
    MR_Word erl_backend__erl_unify_gen__CurriedAndExtraArgs_19;
    MR_Word erl_backend__erl_unify_gen__CallInputVars_20;
    MR_Word erl_backend__erl_unify_gen__CallOutputVars_21;
    MR_Word erl_backend__erl_unify_gen__OutputVarsInclDummy_23;
    MR_Word erl_backend__erl_unify_gen__InputExtraVars_24;
    MR_Word erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25;
    MR_Word erl_backend__erl_unify_gen__ClosureInputArgs_26;
    MR_Word erl_backend__erl_unify_gen__SuccessExpr0_27;
    MR_Word erl_backend__erl_unify_gen__DummyOutputVars_29;
    MR_Word erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30;
    MR_Word erl_backend__erl_unify_gen__SuccessExpr_31;
    MR_Word erl_backend__erl_unify_gen__CallTarget_32;
    MR_Word erl_backend__erl_unify_gen__DoCall_33;
    MR_Integer erl_backend__erl_unify_gen__Var_36;
    MR_Integer erl_backend__erl_unify_gen__Var_37;
    MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
    MR_Word erl_backend__erl_unify_gen__Var_49;
    MR_Word erl_backend__erl_unify_gen__Var_50;
    MR_Word erl_backend__erl_unify_gen__Var_51;
    MR_Word erl_backend__erl_unify_gen__Var_52;
    MR_Word erl_backend__erl_unify_gen___InputVarsInclDummy_22;

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_unify_gen__ModuleInfo_10);
    }
    {
      erl_backend__erl_unify_gen__PredProcId_11 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(erl_backend__erl_unify_gen__ShroudedPredProcId_6);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(erl_backend__erl_unify_gen__ModuleInfo_10, erl_backend__erl_unify_gen__PredProcId_11, &erl_backend__erl_unify_gen__PredInfo_12, &erl_backend__erl_unify_gen__ProcInfo_13);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_unify_gen__PredInfo_12, &erl_backend__erl_unify_gen__CalleeTypes_14);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_unify_gen__ProcInfo_13, &erl_backend__erl_unify_gen__ArgModes_15);
    }
    {
      erl_backend__erl_unify_gen__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(erl_backend__erl_unify_gen__ProcInfo_13);
    }
    {
      erl_backend__erl_unify_gen__Var_36 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_unify_gen__CalleeTypes_14);
    }
    erl_backend__erl_unify_gen__TypeInfo_54_54 = (MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1];
    {
      erl_backend__erl_unify_gen__Var_37 = mercury__list__length_1_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__CurriedArgs_7);
    }
    erl_backend__erl_unify_gen__NumExtraVars_17 = (erl_backend__erl_unify_gen__Var_36 - erl_backend__erl_unify_gen__Var_37);
    {
      erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(erl_backend__erl_unify_gen__NumExtraVars_17, &erl_backend__erl_unify_gen__AllExtraVars_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38);
    }
    {
      erl_backend__erl_unify_gen__CurriedAndExtraArgs_19 = mercury__list__f_43_43_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__CurriedArgs_7, erl_backend__erl_unify_gen__AllExtraVars_18);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__ModuleInfo_10, (MR_Integer) 0, erl_backend__erl_unify_gen__CurriedAndExtraArgs_19, erl_backend__erl_unify_gen__CalleeTypes_14, erl_backend__erl_unify_gen__ArgModes_15, &erl_backend__erl_unify_gen__CallInputVars_20, &erl_backend__erl_unify_gen__CallOutputVars_21);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__ModuleInfo_10, (MR_Integer) 1, erl_backend__erl_unify_gen__CurriedAndExtraArgs_19, erl_backend__erl_unify_gen__CalleeTypes_14, erl_backend__erl_unify_gen__ArgModes_15, &erl_backend__erl_unify_gen___InputVarsInclDummy_22, &erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
    {
      erl_backend__erl_unify_gen__InputExtraVars_24 = mercury__list__delete_elems_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__AllExtraVars_18, erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
    {
      erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
    switch (erl_backend__erl_unify_gen__CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          erl_backend__erl_unify_gen__ClosureInputArgs_26 = erl_backend__erl_unify_gen__InputExtraVars_24;
          {
            erl_backend__erl_unify_gen__SuccessExpr0_27 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25);
          }
          *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_unify_gen__SucceedVar_28;
          MR_Word erl_backend__erl_unify_gen__Var_43;
          MR_Word erl_backend__erl_unify_gen__Var_45;
          MR_Word erl_backend__erl_unify_gen__Var_46;

          {
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Succeed", &erl_backend__erl_unify_gen__SucceedVar_28, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35);
          }
          {
            erl_backend__erl_unify_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_43, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SucceedVar_28));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_unify_gen__ClosureInputArgs_26 = mercury__list__f_43_43_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__InputExtraVars_24, erl_backend__erl_unify_gen__Var_43);
          }
          {
            erl_backend__erl_unify_gen__Var_46 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__SucceedVar_28);
          }
          {
            erl_backend__erl_unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_45, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_46));
          }
          {
            erl_backend__erl_unify_gen__SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_45));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 2) = ((MR_Box) (erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_unify_gen__Var_47;

          erl_backend__erl_unify_gen__ClosureInputArgs_26 = erl_backend__erl_unify_gen__InputExtraVars_24;
          {
            erl_backend__erl_unify_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_47, 1) = ((MR_Box) (erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25));
          }
          {
            erl_backend__erl_unify_gen__SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__SuccessExpr0_27, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_47));
          }
          *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
        }
        break;
    }
    {
      erl_backend__erl_unify_gen__DummyOutputVars_29 = mercury__list__delete_elems_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__OutputVarsInclDummy_23, erl_backend__erl_unify_gen__CallOutputVars_21);
    }
    {
      erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30 = mercury__list__map_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_unify_gen_scalar_common_5[0], erl_backend__erl_unify_gen__DummyOutputVars_29);
    }
    {
      erl_backend__erl_unify_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_49, 0) = ((MR_Box) (erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30));
    }
    {
      erl_backend__erl_unify_gen__SuccessExpr_31 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_unify_gen__Var_49, erl_backend__erl_unify_gen__SuccessExpr0_27);
    }
    {
      erl_backend__erl_unify_gen__CallTarget_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__CallTarget_32, 0) = ((MR_Box) (erl_backend__erl_unify_gen__PredProcId_11));
    }
    {
      erl_backend__erl_unify_gen__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_50, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SuccessExpr_31));
    }
    {
      erl_backend__erl_call_gen__erl_make_call_6_p_0(erl_backend__erl_unify_gen__CodeModel_16, erl_backend__erl_unify_gen__CallTarget_32, erl_backend__erl_unify_gen__CallInputVars_20, erl_backend__erl_unify_gen__CallOutputVars_21, erl_backend__erl_unify_gen__Var_50, &erl_backend__erl_unify_gen__DoCall_33);
    }
    {
      erl_backend__erl_unify_gen__Var_52 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_unify_gen__ClosureInputArgs_26);
    }
    {
      erl_backend__erl_unify_gen__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_51, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_52));
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_51, 1) = ((MR_Box) (erl_backend__erl_unify_gen__DoCall_33));
    }
    *erl_backend__erl_unify_gen__FunExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_unify_gen__Var_51);
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
  MR_Word erl_backend__erl_unify_gen__ModuleInfo_6,
  MR_Word erl_backend__erl_unify_gen__Var_7,
  MR_Word erl_backend__erl_unify_gen__ArgType_8,
  MR_Word erl_backend__erl_unify_gen__ArgMode_9,
  MR_Word * erl_backend__erl_unify_gen__HeadVar__5_5)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;
    MR_Word erl_backend__erl_unify_gen__RHSFromToInsts_11;
    MR_Word erl_backend__erl_unify_gen__Var_10;
    MR_Word erl_backend__erl_unify_gen__Var_13;
    MR_Word erl_backend__erl_unify_gen__Var_14;

    {
      *erl_backend__erl_unify_gen__HeadVar__5_5 = erl_backend__elds__var_eq_false_1_f_0(erl_backend__erl_unify_gen__Var_7);
    }
    erl_backend__erl_unify_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__ArgMode_9, (MR_Integer) 0)));
    erl_backend__erl_unify_gen__RHSFromToInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__ArgMode_9, (MR_Integer) 1)));
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(erl_backend__erl_unify_gen__ModuleInfo_6, erl_backend__erl_unify_gen__RHSFromToInsts_11, erl_backend__erl_unify_gen__ArgType_8, &erl_backend__erl_unify_gen__Var_14);
    }
    erl_backend__erl_unify_gen__succeeded = ((MR_Integer) 0 == erl_backend__erl_unify_gen__Var_14);
    if (erl_backend__erl_unify_gen__succeeded)
      {
        {
          erl_backend__erl_unify_gen__Var_13 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_6, erl_backend__erl_unify_gen__ArgType_8);
        }
        erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__Var_13 == (MR_Integer) 1);
      }
    erl_backend__erl_unify_gen__succeeded = !(erl_backend__erl_unify_gen__succeeded);
    return erl_backend__erl_unify_gen__succeeded;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
  MR_Word erl_backend__erl_unify_gen__Args_8,
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
  MR_Word * erl_backend__erl_unify_gen__Expr_10,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_unify_gen__Var_59;
          MR_Word erl_backend__erl_unify_gen__Var_60;

          {
            erl_backend__erl_unify_gen__Var_60 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_unify_gen__Args_8);
          }
          {
            erl_backend__erl_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_59, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_60));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Expr_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_59));
          }
          *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_unify_gen__Var_59;
          MR_Word erl_backend__erl_unify_gen__Var_60;

          {
            erl_backend__erl_unify_gen__Var_60 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_unify_gen__Args_8);
          }
          {
            erl_backend__erl_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_59, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_60));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Expr_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_59));
          }
          *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "tabling and deep profiling not supported on Erlang backend");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "tabling and deep profiling not supported on Erlang backend");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            {
              MR_Word erl_backend__erl_unify_gen__Term_21;

              {
                erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(erl_backend__erl_unify_gen__ConsId_7, erl_backend__erl_unify_gen__Args_8, erl_backend__erl_unify_gen__DummyVarReplacement_9, &erl_backend__erl_unify_gen__Term_21, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Expr_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Term_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(erl_backend__erl_unify_gen__ShroudedPredProcId_23, erl_backend__erl_unify_gen__Args_8, erl_backend__erl_unify_gen__Expr_10, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "impl_defined_const");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word erl_backend__erl_unify_gen__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
              MR_String erl_backend__erl_unify_gen__TypeCtor_25 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
              MR_Integer erl_backend__erl_unify_gen__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));
              MR_Word erl_backend__erl_unify_gen__RttiTypeCtor_27;
              MR_Word erl_backend__erl_unify_gen__RttiId_28;

              {
                erl_backend__erl_unify_gen__RttiTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_27, 0) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleName_24));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TypeCtor_25));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_27, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Arity_26));
              }
              {
                erl_backend__erl_unify_gen__RttiId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiId_28, 0) = ((MR_Box) (erl_backend__erl_unify_gen__RttiTypeCtor_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Expr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__RttiId_28));
              }
              *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word erl_backend__erl_unify_gen__InstanceModule_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
              MR_Word erl_backend__erl_unify_gen__ClassName_30;
              MR_String erl_backend__erl_unify_gen__InstanceStr_32 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 4)));
              MR_Word erl_backend__erl_unify_gen__ClassModuleName_34;
              MR_String erl_backend__erl_unify_gen__ClassNameStr_35;
              MR_Word erl_backend__erl_unify_gen__TCName_36;
              MR_Word erl_backend__erl_unify_gen__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
              MR_Integer erl_backend__erl_unify_gen__Arity_71;
              MR_Word erl_backend__erl_unify_gen__RttiId_72;
              MR_Integer erl_backend__erl_unify_gen___Instance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));
              MR_Word erl_backend__erl_unify_gen__ClassModuleName0_33;

              erl_backend__erl_unify_gen__ClassName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, (MR_Integer) 0)));
              erl_backend__erl_unify_gen__Arity_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_61, (MR_Integer) 1)));
              {
                erl_backend__erl_unify_gen__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(erl_backend__erl_unify_gen__ClassName_30, &erl_backend__erl_unify_gen__ClassModuleName0_33);
              }
              if (erl_backend__erl_unify_gen__succeeded)
                erl_backend__erl_unify_gen__ClassModuleName_34 = erl_backend__erl_unify_gen__ClassModuleName0_33;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "class has no module name");
                    return;
                  }
                }
              {
                erl_backend__erl_unify_gen__ClassNameStr_35 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__erl_unify_gen__ClassName_30);
              }
              {
                erl_backend__erl_unify_gen__TCName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_36, 0) = ((MR_Box) (erl_backend__erl_unify_gen__ClassModuleName_34));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_36, 1) = ((MR_Box) (erl_backend__erl_unify_gen__ClassNameStr_35));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_36, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Arity_71));
              }
              {
                erl_backend__erl_unify_gen__RttiId_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_72, 0) = ((MR_Box) (erl_backend__erl_unify_gen__TCName_36));
                MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_72, 1) = ((MR_Box) (erl_backend__erl_unify_gen__InstanceModule_29));
                MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_72, 2) = ((MR_Box) (erl_backend__erl_unify_gen__InstanceStr_32));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Expr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__RttiId_72));
              }
              *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_46 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_45;
            }
            break;
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "type_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "typeclass_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "ground_term_const");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv1_HeadVar__5_5;

    {
      erl_backend__erl_unify_gen__conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv1_HeadVar__5_5));
    return erl_backend__erl_unify_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

    {
      erl_backend__erl_unify_gen__conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
    return erl_backend__erl_unify_gen__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
  MR_Word erl_backend__erl_unify_gen__Args_8,
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
  MR_Word * erl_backend__erl_unify_gen__Term_10,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_unify_gen__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
          MR_Word erl_backend__erl_unify_gen__Functor_15;
          MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
          MR_Word erl_backend__erl_unify_gen__VarTypes_17;
          MR_Word erl_backend__erl_unify_gen__TermArgs_18;
          MR_Word erl_backend__erl_unify_gen__Var_27;
          MR_Word erl_backend__erl_unify_gen__Var_28;
          MR_Word erl_backend__erl_unify_gen__Var_29;
          MR_Integer erl_backend__erl_unify_gen___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
          MR_Word erl_backend__erl_unify_gen___TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));

          {
            erl_backend__erl_unify_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Name_12));
          }
          {
            erl_backend__erl_unify_gen__Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Functor_15, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_27));
          }
          {
            erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__ModuleInfo_16);
          }
          {
            erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__VarTypes_17);
          }
          {
            erl_backend__erl_unify_gen__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_16));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_17));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
          }
          {
            erl_backend__erl_unify_gen__TermArgs_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__Var_28, erl_backend__erl_unify_gen__Args_8);
          }
          {
            erl_backend__erl_unify_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_29, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Functor_15));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_29, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_29));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word erl_backend__erl_unify_gen__ModuleInfo_40;
          MR_Word erl_backend__erl_unify_gen__VarTypes_41;
          MR_Word erl_backend__erl_unify_gen__TermArgs_42;
          MR_Word erl_backend__erl_unify_gen__Var_44;
          MR_Word erl_backend__erl_unify_gen__Var_45;

          {
            erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__ModuleInfo_40);
          }
          {
            erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__VarTypes_41);
          }
          {
            erl_backend__erl_unify_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_40));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_41));
            MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
          }
          {
            erl_backend__erl_unify_gen__TermArgs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__Var_44, erl_backend__erl_unify_gen__Args_8);
          }
          {
            erl_backend__erl_unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_45, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_45));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Integer erl_backend__erl_unify_gen__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Int_19));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Unsigned erl_backend__erl_unify_gen__UInt_20 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__UInt_20));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Float erl_backend__erl_unify_gen__Float_21 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(erl_backend__erl_unify_gen__Float_21);
          }
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Char erl_backend__erl_unify_gen__Char_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (erl_backend__erl_unify_gen__Char_22));
          }
        }
        break;
      case (MR_Integer) 9:
        {
          MR_String erl_backend__erl_unify_gen__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_unify_gen__Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__String_23));
          }
        }
        break;
    }
    *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv1_HeadVar__5_5;

    {
      erl_backend__erl_unify_gen__conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv1_HeadVar__5_5));
    return erl_backend__erl_unify_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
  MR_Box erl_backend__erl_unify_gen__closure_arg,
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

    {
      erl_backend__erl_unify_gen__conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
    return erl_backend__erl_unify_gen__wrapper_arg_2;
  }
}

MR_bool MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
  MR_Word erl_backend__erl_unify_gen__Args_8,
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
  MR_Word * erl_backend__erl_unify_gen__Term_10,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) {
      default:
        erl_backend__erl_unify_gen__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) {
          default:
            erl_backend__erl_unify_gen__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_unify_gen__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
              MR_Word erl_backend__erl_unify_gen__Functor_15;
              MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
              MR_Word erl_backend__erl_unify_gen__VarTypes_17;
              MR_Word erl_backend__erl_unify_gen__TermArgs_18;
              MR_Word erl_backend__erl_unify_gen__Var_27;
              MR_Word erl_backend__erl_unify_gen__Var_28;
              MR_Word erl_backend__erl_unify_gen__Var_29;
              MR_Integer erl_backend__erl_unify_gen___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
              MR_Word erl_backend__erl_unify_gen___TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));

              {
                erl_backend__erl_unify_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Var_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Name_12));
              }
              {
                erl_backend__erl_unify_gen__Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Functor_15, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Var_27));
              }
              {
                erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__ModuleInfo_16);
              }
              {
                erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__VarTypes_17);
              }
              {
                erl_backend__erl_unify_gen__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_16));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_17));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_28, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
              }
              {
                erl_backend__erl_unify_gen__TermArgs_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__Var_28, erl_backend__erl_unify_gen__Args_8);
              }
              {
                erl_backend__erl_unify_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_29, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Functor_15));
                MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_29, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_29));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word erl_backend__erl_unify_gen__ModuleInfo_40;
              MR_Word erl_backend__erl_unify_gen__VarTypes_41;
              MR_Word erl_backend__erl_unify_gen__TermArgs_42;
              MR_Word erl_backend__erl_unify_gen__Var_44;
              MR_Word erl_backend__erl_unify_gen__Var_45;

              {
                erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__ModuleInfo_40);
              }
              {
                erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_unify_gen__VarTypes_41);
              }
              {
                erl_backend__erl_unify_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_40));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_41));
                MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__Var_44, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
              }
              {
                erl_backend__erl_unify_gen__TermArgs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__Var_44, erl_backend__erl_unify_gen__Args_8);
              }
              {
                erl_backend__erl_unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
                MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__Var_45, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_42));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Var_45));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer erl_backend__erl_unify_gen__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Int_19));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned erl_backend__erl_unify_gen__UInt_20 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__UInt_20));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float erl_backend__erl_unify_gen__Float_21 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(erl_backend__erl_unify_gen__Float_21);
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Char erl_backend__erl_unify_gen__Char_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (erl_backend__erl_unify_gen__Char_22));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String erl_backend__erl_unify_gen__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_unify_gen__Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__String_23));
              }
              erl_backend__erl_unify_gen__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (erl_backend__erl_unify_gen__succeeded)
      {
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24;
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
      }
    return erl_backend__erl_unify_gen__succeeded;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(
  MR_Word erl_backend__erl_unify_gen__Unification_8,
  MR_Word erl_backend__erl_unify_gen__CodeModel_9,
  MR_Word erl_backend__erl_unify_gen__Context_10,
  MR_Word erl_backend__erl_unify_gen__MaybeSuccessExpr_11,
  MR_Word * erl_backend__erl_unify_gen__Statement_12,
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43,
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44)
{
  {
    MR_bool erl_backend__erl_unify_gen__succeeded;

    {
      erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(erl_backend__erl_unify_gen__Unification_8, erl_backend__erl_unify_gen__CodeModel_9, erl_backend__erl_unify_gen__MaybeSuccessExpr_11, erl_backend__erl_unify_gen__Statement_12, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_43, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_44);
    }
  }
}

void mercury__erl_backend__erl_unify_gen__init(void)
{
}

void mercury__erl_backend__erl_unify_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module erl_backend.erl_unify_gen. */
