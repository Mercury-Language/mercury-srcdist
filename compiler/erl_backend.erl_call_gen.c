/*
** Automatically generated from `erl_call_gen.m'
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


/* :- module erl_backend.erl_call_gen. */
/* :- implementation. */

/*
INIT mercury__erl_backend__erl_call_gen__init
ENDINIT
*/

#include "erl_backend.erl_call_gen.mih"


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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_code_util.mih"
#include "hlds.code_model.mih"
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
#include "libs.compiler_util.mih"
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




static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
  MR_Word erl_backend__erl_call_gen__TraceExpr_5,
  MR_Word * erl_backend__erl_call_gen__CondExpr_6,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);

static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1);

static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1,
  MR_Word * erl_backend__erl_call_gen__Type_6,
  MR_Word * erl_backend__erl_call_gen__Mode_8);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_2,
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
  MR_Word erl_backend__erl_call_gen__ForeignArgs_9,
  MR_String erl_backend__erl_call_gen__ForeignCode_10,
  MR_Word erl_backend__erl_call_gen__CodeModel_11,
  MR_Word erl_backend__erl_call_gen__OuterContext_12,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
  MR_Word * erl_backend__erl_call_gen__Statement_14,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_35);

static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
  MR_Word erl_backend__erl_call_gen__SimpleExpr_7);

static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
  MR_Word erl_backend__erl_call_gen__InputExprs_9,
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
  MR_Word * erl_backend__erl_call_gen__Statement_12);

static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
  MR_Word erl_backend__erl_call_gen__Var_7);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);


static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_2[6][1];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_3[1][7];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_4[1][6];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_5[5][3];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_6[2][5];




static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "ML_erlang_global_server"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "trace_evaluate_runtime_condition"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "trace_evaluate_runtime_condition_ack"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "env_var"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "not"))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_2[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[2])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[3])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[4])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[5])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[7])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_5[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_6[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_6[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word erl_backend__erl_call_gen__ArgVars_8,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_9,
  MR_Word * erl_backend__erl_call_gen__Statement_10,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__ArgTypes_12;
    MR_Word erl_backend__erl_call_gen__SrcVar_13;
    MR_Word erl_backend__erl_call_gen__DestVar_14;
    MR_Word erl_backend__erl_call_gen__DestType_16;
    MR_Word erl_backend__erl_call_gen__V_24_24;
    MR_Word erl_backend__erl_call_gen__V_25_25;
    MR_Word erl_backend__erl_call_gen__V_26_26;
    MR_Word erl_backend__erl_call_gen__V_27_27;
    MR_Word erl_backend__erl_call_gen___SrcType_15;

    {
      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__ArgVars_8, &erl_backend__erl_call_gen__ArgTypes_12);
    }
    erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__ArgVars_8)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__erl_call_gen__succeeded)
      {
        erl_backend__erl_call_gen__SrcVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgVars_8, (MR_Integer) 0)));
        erl_backend__erl_call_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgVars_8, (MR_Integer) 1)));
        erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_24_24)) == (MR_mktag((MR_Integer) 1)));
        if (erl_backend__erl_call_gen__succeeded)
          {
            erl_backend__erl_call_gen__DestVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_24_24, (MR_Integer) 0)));
            erl_backend__erl_call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_24_24, (MR_Integer) 1)));
            erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (erl_backend__erl_call_gen__succeeded)
              {
                erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__ArgTypes_12)) == (MR_mktag((MR_Integer) 1)));
                if (erl_backend__erl_call_gen__succeeded)
                  {
                    erl_backend__erl_call_gen___SrcType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgTypes_12, (MR_Integer) 0)));
                    erl_backend__erl_call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgTypes_12, (MR_Integer) 1)));
                    erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                    if (erl_backend__erl_call_gen__succeeded)
                      {
                        erl_backend__erl_call_gen__DestType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 0)));
                        erl_backend__erl_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 1)));
                        erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (erl_backend__erl_call_gen__succeeded)
      {
        MR_Word erl_backend__erl_call_gen__ModuleInfo_17;
        MR_Word erl_backend__erl_call_gen__IsDummy_18;

        {
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__ModuleInfo_17);
        }
        {
          erl_backend__erl_call_gen__IsDummy_18 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_17, erl_backend__erl_call_gen__DestType_16);
        }
        switch (erl_backend__erl_call_gen__IsDummy_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *erl_backend__erl_call_gen__Statement_10 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_call_gen__VarTypes_19;
              MR_Word erl_backend__erl_call_gen__SrcVarExpr_20;
              MR_Word erl_backend__erl_call_gen__Assign_21;
              MR_Word erl_backend__erl_call_gen__V_28_28;
              MR_Word erl_backend__erl_call_gen__Type_36;
              MR_Word erl_backend__erl_call_gen__V_37_37;

              {
                erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__VarTypes_19);
              }
              {
                erl_backend__erl_call_gen__succeeded = hlds__vartypes__search_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SrcVar_13, &erl_backend__erl_call_gen__Type_36);
              }
              if (erl_backend__erl_call_gen__succeeded)
                {
                  {
                    erl_backend__erl_call_gen__V_37_37 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_17, erl_backend__erl_call_gen__Type_36);
                  }
                  erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_37_37 == (MR_Integer) 0);
                }
              if (erl_backend__erl_call_gen__succeeded)
                {
                  MR_Word erl_backend__erl_call_gen__V_38_38;

                  {
                    erl_backend__erl_call_gen__V_38_38 = erl_backend__elds__elds_false_0_f_0();
                  }
                  {
                    erl_backend__erl_call_gen__SrcVarExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SrcVarExpr_20, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_38_38));
                  }
                }
              else
                {
                  erl_backend__erl_call_gen__SrcVarExpr_20 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__SrcVar_13);
                }
              {
                erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__DestVar_14);
              }
              {
                erl_backend__erl_call_gen__Assign_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_28_28));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 2) = ((MR_Box) (erl_backend__erl_call_gen__SrcVarExpr_20));
              }
              {
                *erl_backend__erl_call_gen__Statement_10 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__Assign_21, erl_backend__erl_call_gen__MaybeSuccessExpr_9);
              }
            }
            break;
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_cast\'/6", (MR_String) "wrong number of args for cast");
          return;
        }
      }
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_call_gen__PredId_10,
  MR_Integer erl_backend__erl_call_gen__ProcId_11,
  MR_Word erl_backend__erl_call_gen__ArgVars_12,
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_42)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_18;
    MR_Word erl_backend__erl_call_gen__VarTypes_19;
    MR_Word erl_backend__erl_call_gen__ModuleName_20;
    MR_String erl_backend__erl_call_gen__PredName_21;
    MR_Word erl_backend__erl_call_gen__SimpleCode_22;

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, &erl_backend__erl_call_gen__ModuleInfo_18);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, &erl_backend__erl_call_gen__VarTypes_19);
    }
    {
      erl_backend__erl_call_gen__ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__PredId_10);
    }
    {
      erl_backend__erl_call_gen__PredName_21 = hlds__hlds_module__predicate_name_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__PredId_10);
    }
    {
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleName_20, erl_backend__erl_call_gen__PredName_21, erl_backend__erl_call_gen__ProcId_11, erl_backend__erl_call_gen__ArgVars_12, &erl_backend__erl_call_gen__SimpleCode_22);
    }
    switch (erl_backend__erl_call_gen__CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_call_gen__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 0)));
              MR_Word erl_backend__erl_call_gen__SimpleExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 1)));
              MR_Word erl_backend__erl_call_gen__LvalType_25;
              MR_Word erl_backend__erl_call_gen__V_63_63;

              {
                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__Lval_23, &erl_backend__erl_call_gen__LvalType_25);
              }
              {
                erl_backend__erl_call_gen__V_63_63 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__LvalType_25);
              }
              erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_63_63 == (MR_Integer) 0);
              if (erl_backend__erl_call_gen__succeeded)
                {
                  *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
                }
              else
                {
                  MR_Word erl_backend__erl_call_gen__Rval_26;
                  MR_Word erl_backend__erl_call_gen__Assign_27;
                  MR_Word erl_backend__erl_call_gen__V_64_64;

                  {
                    erl_backend__erl_call_gen__Rval_26 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SimpleExpr_24);
                  }
                  {
                    erl_backend__erl_call_gen__V_64_64 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Lval_23);
                  }
                  {
                    erl_backend__erl_call_gen__Assign_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_64_64));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 2) = ((MR_Box) (erl_backend__erl_call_gen__Rval_26));
                  }
                  {
                    *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__Assign_27, erl_backend__erl_call_gen__MaybeSuccessExpr_15);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "ref_assign not supported in Erlang backend");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_call_gen__SimpleTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 0)));
              MR_Word erl_backend__erl_call_gen__TestRval_33;
              MR_Word erl_backend__erl_call_gen__TrueCase_34;
              MR_Word erl_backend__erl_call_gen__FalseCase_35;
              MR_Word erl_backend__erl_call_gen__V_49_49;
              MR_Word erl_backend__erl_call_gen__V_50_50;
              MR_Word erl_backend__erl_call_gen__V_52_52;
              MR_Word erl_backend__erl_call_gen__V_53_53;
              MR_Word erl_backend__erl_call_gen__V_54_54;
              MR_Word erl_backend__erl_call_gen__V_55_55;
              MR_Word erl_backend__erl_call_gen__V_56_56;

              {
                erl_backend__erl_call_gen__TestRval_33 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SimpleTest_32);
              }
              {
                erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_true_0_f_0();
              }
              {
                erl_backend__erl_call_gen__V_53_53 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
              }
              {
                erl_backend__erl_call_gen__TrueCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_34, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_34, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_53_53));
              }
              {
                erl_backend__erl_call_gen__V_54_54 = erl_backend__elds__elds_false_0_f_0();
              }
              {
                erl_backend__erl_call_gen__V_56_56 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_call_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_55_55, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_56_56));
              }
              {
                erl_backend__erl_call_gen__FalseCase_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_35, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_54_54));
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_35, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_55_55));
              }
              {
                erl_backend__erl_call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_35));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                erl_backend__erl_call_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_34));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_50_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_call_gen__Statement_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__TestRval_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_49_49));
              }
            }
            break;
        }
        break;
    }
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_42 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

    {
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
  MR_Word erl_backend__erl_call_gen__Modes_12,
  MR_Word erl_backend__erl_call_gen__Detism_13,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_38)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__TCIVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 0)));
    MR_Integer erl_backend__erl_call_gen__MethodNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 1)));
    MR_Word erl_backend__erl_call_gen__BaseTCIVar_22;
    MR_Word erl_backend__erl_call_gen__MethodWrapperVar_23;
    MR_Word erl_backend__erl_call_gen__BaseTCIVarExpr_24;
    MR_Word erl_backend__erl_call_gen__MethodWrapperVarExpr_25;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_26;
    MR_Word erl_backend__erl_call_gen__ArgTypes_27;
    MR_Word erl_backend__erl_call_gen__CallInputVars_28;
    MR_Word erl_backend__erl_call_gen__CallOutputVars_29;
    MR_Word erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31;
    MR_Integer erl_backend__erl_call_gen__MethodFieldNum_32;
    MR_Word erl_backend__erl_call_gen__ExtractMethodWrapper_33;
    MR_Word erl_backend__erl_call_gen__CallCodeModel_34;
    MR_Word erl_backend__erl_call_gen__CallTarget_35;
    MR_Word erl_backend__erl_call_gen__DoCall_36;
    MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40;
    MR_Word erl_backend__erl_call_gen__V_44_44;
    MR_Integer erl_backend__erl_call_gen__V_45_45;
    MR_Integer erl_backend__erl_call_gen__V_47_47;
    MR_Word erl_backend__erl_call_gen__V_48_48;
    MR_Word erl_backend__erl_call_gen__V_49_49;
    MR_Word erl_backend__erl_call_gen__V_50_50;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_59;
    MR_Word erl_backend__erl_call_gen__VarTypes_60;
    MR_Word erl_backend__erl_call_gen__InputExprs_61;
    MR_Word erl_backend__erl_call_gen__V_62_62;
    MR_Word erl_backend__erl_call_gen___ClassId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 2)));
    MR_Word erl_backend__erl_call_gen___CallId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 3)));

    {
      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "BaseTypeClassInfo", &erl_backend__erl_call_gen__BaseTCIVar_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "MethodWrapper", &erl_backend__erl_call_gen__MethodWrapperVar_23, erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40, erl_backend__erl_call_gen__STATE_VARIABLE_Info_38);
    }
    {
      erl_backend__erl_call_gen__BaseTCIVarExpr_24 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__BaseTCIVar_22);
    }
    {
      erl_backend__erl_call_gen__MethodWrapperVarExpr_25 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__MethodWrapperVar_23);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__ModuleInfo_26);
    }
    {
      erl_backend__erl_code_util__erl_variable_types_3_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, erl_backend__erl_call_gen__ArgVars_11, &erl_backend__erl_call_gen__ArgTypes_27);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_26, (MR_Integer) 1, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__ArgTypes_27, erl_backend__erl_call_gen__Modes_12, &erl_backend__erl_call_gen__CallInputVars_28, &erl_backend__erl_call_gen__CallOutputVars_29);
    }
    {
      erl_backend__erl_call_gen__V_44_44 = erl_backend__elds__elds_call_element_2_f_0(erl_backend__erl_call_gen__TCIVar_18, (MR_Integer) 1);
    }
    {
      erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__BaseTCIVarExpr_24));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_44_44));
    }
    erl_backend__erl_call_gen__V_45_45 = ((MR_Integer) 1 + erl_backend__erl_call_gen__MethodNum_19);
    {
      erl_backend__erl_call_gen__V_47_47 = erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0();
    }
    erl_backend__erl_call_gen__MethodFieldNum_32 = (erl_backend__erl_call_gen__V_45_45 + erl_backend__erl_call_gen__V_47_47);
    {
      erl_backend__erl_call_gen__V_48_48 = erl_backend__elds__elds_call_element_2_f_0(erl_backend__erl_call_gen__BaseTCIVar_22, erl_backend__erl_call_gen__MethodFieldNum_32);
    }
    {
      erl_backend__erl_call_gen__ExtractMethodWrapper_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 1) = ((MR_Box) (erl_backend__erl_call_gen__MethodWrapperVarExpr_25));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_48_48));
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_call_gen__Detism_13, &erl_backend__erl_call_gen__CallCodeModel_34);
    }
    {
      erl_backend__erl_call_gen__CallTarget_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__CallTarget_35, 0) = ((MR_Box) (erl_backend__erl_call_gen__MethodWrapperVarExpr_25));
    }
    {
      erl_backend__erl_call_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 0) = ((MR_Box) (erl_backend__erl_call_gen__TCIVar_18));
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallInputVars_28));
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__ModuleInfo_59);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__VarTypes_60);
    }
    {
      erl_backend__erl_call_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_59));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_60));
    }
    {
      erl_backend__erl_call_gen__InputExprs_61 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_62_62, erl_backend__erl_call_gen__V_49_49);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CallCodeModel_34, erl_backend__erl_call_gen__CallTarget_35, erl_backend__erl_call_gen__InputExprs_61, erl_backend__erl_call_gen__CallOutputVars_29, erl_backend__erl_call_gen__MaybeSuccessExpr_15, &erl_backend__erl_call_gen__DoCall_36);
    }
    {
      erl_backend__erl_call_gen__V_50_50 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ExtractMethodWrapper_33, erl_backend__erl_call_gen__DoCall_36);
    }
    {
      *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, erl_backend__erl_call_gen__V_50_50);
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

    {
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
  MR_Word erl_backend__erl_call_gen__Modes_12,
  MR_Word erl_backend__erl_call_gen__Detism_13,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__ClosureVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_call_gen__ModuleInfo_22;
    MR_Word erl_backend__erl_call_gen__ArgTypes_23;
    MR_Word erl_backend__erl_call_gen__InputVars_24;
    MR_Word erl_backend__erl_call_gen__OutputVars_25;
    MR_Word erl_backend__erl_call_gen__CallCodeModel_26;
    MR_Word erl_backend__erl_call_gen__CallTarget_27;
    MR_Word erl_backend__erl_call_gen__V_31_31;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_40;
    MR_Word erl_backend__erl_call_gen__VarTypes_41;
    MR_Word erl_backend__erl_call_gen__InputExprs_42;
    MR_Word erl_backend__erl_call_gen__V_43_43;
    MR_Word erl_backend__erl_call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 1)));
    MR_Word erl_backend__erl_call_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 2)));
    MR_Integer erl_backend__erl_call_gen__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 3)));

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_22);
    }
    {
      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__ArgVars_11, &erl_backend__erl_call_gen__ArgTypes_23);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_22, (MR_Integer) 1, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__ArgTypes_23, erl_backend__erl_call_gen__Modes_12, &erl_backend__erl_call_gen__InputVars_24, &erl_backend__erl_call_gen__OutputVars_25);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_call_gen__Detism_13, &erl_backend__erl_call_gen__CallCodeModel_26);
    }
    {
      erl_backend__erl_call_gen__V_31_31 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__ClosureVar_18);
    }
    {
      erl_backend__erl_call_gen__CallTarget_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__CallTarget_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_31_31));
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_40);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__VarTypes_41);
    }
    {
      erl_backend__erl_call_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_40));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_41));
    }
    {
      erl_backend__erl_call_gen__InputExprs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_43_43, erl_backend__erl_call_gen__InputVars_24);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CallCodeModel_26, erl_backend__erl_call_gen__CallTarget_27, erl_backend__erl_call_gen__InputExprs_42, erl_backend__erl_call_gen__OutputVars_25, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16);
    }
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

    {
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(
  MR_Word erl_backend__erl_call_gen__PredId_11,
  MR_Integer erl_backend__erl_call_gen__ProcId_12,
  MR_Word erl_backend__erl_call_gen__ArgVars_13,
  MR_Word erl_backend__erl_call_gen__CodeModel_15,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_17,
  MR_Word * erl_backend__erl_call_gen__Statement_18,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_20;
    MR_Word erl_backend__erl_call_gen__PredInfo_21;
    MR_Word erl_backend__erl_call_gen__ProcInfo_22;
    MR_Word erl_backend__erl_call_gen__CalleeTypes_23;
    MR_Word erl_backend__erl_call_gen__ArgModes_24;
    MR_Word erl_backend__erl_call_gen__InputVars_25;
    MR_Word erl_backend__erl_call_gen__OutputVars_26;
    MR_Word erl_backend__erl_call_gen__CallTarget_27;
    MR_Word erl_backend__erl_call_gen__V_31_31;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_40;
    MR_Word erl_backend__erl_call_gen__VarTypes_41;
    MR_Word erl_backend__erl_call_gen__InputExprs_42;
    MR_Word erl_backend__erl_call_gen__V_43_43;

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_20);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(erl_backend__erl_call_gen__ModuleInfo_20, erl_backend__erl_call_gen__PredId_11, erl_backend__erl_call_gen__ProcId_12, &erl_backend__erl_call_gen__PredInfo_21, &erl_backend__erl_call_gen__ProcInfo_22);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_call_gen__PredInfo_21, &erl_backend__erl_call_gen__CalleeTypes_23);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_call_gen__ProcInfo_22, &erl_backend__erl_call_gen__ArgModes_24);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_20, (MR_Integer) 0, erl_backend__erl_call_gen__ArgVars_13, erl_backend__erl_call_gen__CalleeTypes_23, erl_backend__erl_call_gen__ArgModes_24, &erl_backend__erl_call_gen__InputVars_25, &erl_backend__erl_call_gen__OutputVars_26);
    }
    {
      erl_backend__erl_call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_31_31, 0) = ((MR_Box) (erl_backend__erl_call_gen__PredId_11));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__ProcId_12));
    }
    {
      erl_backend__erl_call_gen__CallTarget_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__CallTarget_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_31_31));
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_40);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__VarTypes_41);
    }
    {
      erl_backend__erl_call_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_40));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_41));
    }
    {
      erl_backend__erl_call_gen__InputExprs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_43_43, erl_backend__erl_call_gen__InputVars_25);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_15, erl_backend__erl_call_gen__CallTarget_27, erl_backend__erl_call_gen__InputExprs_42, erl_backend__erl_call_gen__OutputVars_26, erl_backend__erl_call_gen__MaybeSuccessExpr_17, erl_backend__erl_call_gen__Statement_18);
    }
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
  MR_Word erl_backend__erl_call_gen__TraceExpr_5,
  MR_Word * erl_backend__erl_call_gen__CondExpr_6,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_17)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__Args_9;
    MR_Word erl_backend__erl_call_gen__V_40_40;

    switch (MR_tag((MR_Word) erl_backend__erl_call_gen__TraceExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String erl_backend__erl_call_gen__EnvVar_8;
          MR_Word erl_backend__erl_call_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__V_36_36;
          MR_Word erl_backend__erl_call_gen__V_37_37;
          MR_Word erl_backend__erl_call_gen__V_38_38;

          erl_backend__erl_call_gen__EnvVar_8 = (MR_String) erl_backend__erl_call_gen__V_31_31;
          {
            erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(erl_backend__erl_call_gen__EnvVar_8, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
          {
            erl_backend__erl_call_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_38_38, 1) = ((MR_Box) (erl_backend__erl_call_gen__EnvVar_8));
          }
          {
            erl_backend__erl_call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_37_37, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_38_38));
          }
          {
            erl_backend__erl_call_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_37_37));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[4])));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_36_36));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_call_gen__ExprA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__CondA_11;
          MR_Word erl_backend__erl_call_gen__V_29_29;

          {
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprA_10, &erl_backend__erl_call_gen__CondA_11, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
          {
            erl_backend__erl_call_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_29_29, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondA_11));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[5])));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_29_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_call_gen__TraceOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__ExprB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 2)));
          MR_Word erl_backend__erl_call_gen__CondB_14;
          MR_String erl_backend__erl_call_gen__Op_15;
          MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18;
          MR_Word erl_backend__erl_call_gen__V_20_20;
          MR_Word erl_backend__erl_call_gen__V_21_21;
          MR_Word erl_backend__erl_call_gen__V_22_22;
          MR_Word erl_backend__erl_call_gen__V_23_23;
          MR_Word erl_backend__erl_call_gen__ExprA_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 1)));
          MR_Word erl_backend__erl_call_gen__CondA_42;

          {
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprA_41, &erl_backend__erl_call_gen__CondA_42, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18);
          }
          {
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprB_13, &erl_backend__erl_call_gen__CondB_14, erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
          switch (erl_backend__erl_call_gen__TraceOp_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              erl_backend__erl_call_gen__Op_15 = (MR_String) "and";
              break;
            case (MR_Integer) 0:
              erl_backend__erl_call_gen__Op_15 = (MR_String) "or";
              break;
          }
          {
            erl_backend__erl_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_21_21, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_15));
          }
          {
            erl_backend__erl_call_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_20_20, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_21_21));
          }
          {
            erl_backend__erl_call_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_23_23, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondB_14));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_call_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_22_22, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondA_42));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_22_22, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_23_23));
          }
          {
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_20_20));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_22_22));
          }
        }
        break;
    }
    {
      erl_backend__erl_call_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_40_40, 1) = ((MR_Box) (erl_backend__erl_call_gen__Args_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_call_gen__CondExpr_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_40_40));
    }
  }
}

static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_String erl_backend__erl_call_gen__Name_7;
    MR_Word erl_backend__erl_call_gen__MaybeNameMode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word erl_backend__erl_call_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word erl_backend__erl_call_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word erl_backend__erl_call_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 3)));

    if ((erl_backend__erl_call_gen__MaybeNameMode_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      erl_backend__erl_call_gen__Name_7 = (MR_String) "_";
    else
      {
        MR_Word erl_backend__erl_call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeNameMode_4, (MR_Integer) 0)));
        MR_Word erl_backend__erl_call_gen__V_8_8;

        erl_backend__erl_call_gen__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_9_9, (MR_Integer) 0)));
        erl_backend__erl_call_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_9_9, (MR_Integer) 1)));
      }
    return erl_backend__erl_call_gen__Name_7;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1,
  MR_Word * erl_backend__erl_call_gen__Type_6,
  MR_Word * erl_backend__erl_call_gen__Mode_8)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__MaybeNameMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word erl_backend__erl_call_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word erl_backend__erl_call_gen__V_7_7;

    *erl_backend__erl_call_gen__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 2)));
    erl_backend__erl_call_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 3)));
    if ((erl_backend__erl_call_gen__MaybeNameMode_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *erl_backend__erl_call_gen__Mode_8 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[6];
      }
    else
      {
        MR_Word erl_backend__erl_call_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeNameMode_5, (MR_Integer) 0)));
        MR_String erl_backend__erl_call_gen___Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_12_12, (MR_Integer) 0)));

        *erl_backend__erl_call_gen__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_12_12, (MR_Integer) 1)));
      }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_String erl_backend__erl_call_gen__conv5_Name_7;

    {
      erl_backend__erl_call_gen__conv5_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv5_Name_7));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_String erl_backend__erl_call_gen__conv4_Name_7;

    {
      erl_backend__erl_call_gen__conv4_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv4_Name_7));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv3_HeadVar__2_2;

    {
      erl_backend__erl_call_gen__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv3_HeadVar__2_2));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv2_HeadVar__2_2;

    {
      erl_backend__erl_call_gen__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv2_HeadVar__2_2));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_2,
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv1_Type_6;
    MR_Word erl_backend__erl_call_gen__conv0_Mode_8;

    {
      erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1), &erl_backend__erl_call_gen__conv1_Type_6, &erl_backend__erl_call_gen__conv0_Mode_8);
    }
    *erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv1_Type_6));
    *erl_backend__erl_call_gen__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Mode_8));
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
  MR_Word erl_backend__erl_call_gen__ForeignArgs_9,
  MR_String erl_backend__erl_call_gen__ForeignCode_10,
  MR_Word erl_backend__erl_call_gen__CodeModel_11,
  MR_Word erl_backend__erl_call_gen__OuterContext_12,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
  MR_Word * erl_backend__erl_call_gen__Statement_14,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_35)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__TypeCtorInfo_63_63;
    MR_Word erl_backend__erl_call_gen__TypeInfo_66_66;
    MR_Word erl_backend__erl_call_gen__TypeCtorInfo_71_71;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_16;
    MR_Word erl_backend__erl_call_gen__ArgTypes_17;
    MR_Word erl_backend__erl_call_gen__ArgModes_18;
    MR_Word erl_backend__erl_call_gen__InputForeignArgs_19;
    MR_Word erl_backend__erl_call_gen__OutputForeignArgs_20;
    MR_Word erl_backend__erl_call_gen__InputVars_21;
    MR_Word erl_backend__erl_call_gen__OutputVars_22;
    MR_Word erl_backend__erl_call_gen__InputVarsNames_23;
    MR_Word erl_backend__erl_call_gen__OutputVarsNames_24;
    MR_Word erl_backend__erl_call_gen__ForeignCodeExpr_25;
    MR_Word erl_backend__erl_call_gen__InnerFunStatement_27;
    MR_Word erl_backend__erl_call_gen__InnerFun_33;
    MR_Word erl_backend__erl_call_gen__V_57_57;
    MR_Word erl_backend__erl_call_gen__V_58_58;
    MR_Word erl_backend__erl_call_gen__V_59_59;
    MR_Word erl_backend__erl_call_gen__InputExprs_82;

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_call_gen__ModuleInfo_16);
    }
    erl_backend__erl_call_gen__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
    {
      mercury__list__map2_4_p_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[0], erl_backend__erl_call_gen__ForeignArgs_9, &erl_backend__erl_call_gen__ArgTypes_17, &erl_backend__erl_call_gen__ArgModes_18);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__ModuleInfo_16, (MR_Integer) 0, erl_backend__erl_call_gen__ForeignArgs_9, erl_backend__erl_call_gen__ArgTypes_17, erl_backend__erl_call_gen__ArgModes_18, &erl_backend__erl_call_gen__InputForeignArgs_19, &erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
    erl_backend__erl_call_gen__TypeInfo_66_66 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0];
    {
      erl_backend__erl_call_gen__InputVars_21 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeInfo_66_66, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[1], erl_backend__erl_call_gen__InputForeignArgs_19);
    }
    {
      erl_backend__erl_call_gen__OutputVars_22 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeInfo_66_66, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[2], erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
    erl_backend__erl_call_gen__TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      erl_backend__erl_call_gen__InputVarsNames_23 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeCtorInfo_71_71, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[3], erl_backend__erl_call_gen__InputForeignArgs_19);
    }
    {
      erl_backend__erl_call_gen__OutputVarsNames_24 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeCtorInfo_71_71, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[4], erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
    {
      erl_backend__erl_call_gen__ForeignCodeExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 1) = ((MR_Box) (erl_backend__erl_call_gen__ForeignCode_10));
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 2) = ((MR_Box) (erl_backend__erl_call_gen__OuterContext_12));
    }
    switch (erl_backend__erl_call_gen__CodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_call_gen__OutputExpr_26;
          MR_Word erl_backend__erl_call_gen__V_56_56;

          {
            erl_backend__erl_call_gen__V_56_56 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__OutputVarsNames_24);
          }
          {
            erl_backend__erl_call_gen__OutputExpr_26 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_call_gen__V_56_56);
          }
          {
            erl_backend__erl_call_gen__InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ForeignCodeExpr_25, erl_backend__erl_call_gen__OutputExpr_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_ordinary_pragma_foreign_proc\'/8", (MR_String) "model_non foreign_procs in Erlang backend");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_call_gen__MaybePlaceOutputs_28;
          MR_Word erl_backend__erl_call_gen__OutputTuple_29;
          MR_Word erl_backend__erl_call_gen__OnTrue_31;
          MR_Word erl_backend__erl_call_gen__OnFalse_32;
          MR_Word erl_backend__erl_call_gen__V_45_45;
          MR_Word erl_backend__erl_call_gen__V_46_46;
          MR_Word erl_backend__erl_call_gen__V_47_47;
          MR_Word erl_backend__erl_call_gen__V_48_48;
          MR_Word erl_backend__erl_call_gen__V_52_52;
          MR_Word erl_backend__erl_call_gen__V_53_53;
          MR_Word erl_backend__erl_call_gen__V_54_54;
          MR_Word erl_backend__erl_call_gen__V_55_55;

          {
            erl_backend__erl_call_gen__V_46_46 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__OutputVarsNames_24);
          }
          {
            erl_backend__erl_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_46_46));
          }
          {
            erl_backend__erl_call_gen__OutputTuple_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__OutputTuple_29, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_45_45));
          }
          {
            erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_true_0_f_0();
          }
          {
            erl_backend__erl_call_gen__OnTrue_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnTrue_31, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnTrue_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__OutputTuple_29));
          }
          {
            erl_backend__erl_call_gen__V_53_53 = erl_backend__elds__elds_false_0_f_0();
          }
          {
            erl_backend__erl_call_gen__V_55_55 = erl_backend__elds__elds_fail_0_f_0();
          }
          {
            erl_backend__erl_call_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_54_54, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_55_55));
          }
          {
            erl_backend__erl_call_gen__OnFalse_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnFalse_32, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_53_53));
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnFalse_32, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_54_54));
          }
          {
            erl_backend__erl_call_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_48_48, 0) = ((MR_Box) (erl_backend__erl_call_gen__OnFalse_32));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_call_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_call_gen__OnTrue_31));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_47_47, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_48_48));
          }
          {
            erl_backend__erl_call_gen__MaybePlaceOutputs_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[3])));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_47_47));
          }
          {
            erl_backend__erl_call_gen__InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ForeignCodeExpr_25, erl_backend__erl_call_gen__MaybePlaceOutputs_28);
          }
        }
        break;
    }
    {
      erl_backend__erl_call_gen__V_58_58 = erl_backend__elds__terms_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__InputVarsNames_23);
    }
    {
      erl_backend__erl_call_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_58_58));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__InnerFunStatement_27));
    }
    erl_backend__erl_call_gen__InnerFun_33 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_call_gen__V_57_57);
    {
      erl_backend__erl_call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_call_gen__InnerFun_33));
    }
    {
      erl_backend__erl_call_gen__InputExprs_82 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__InputVars_21);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_11, erl_backend__erl_call_gen__V_59_59, erl_backend__erl_call_gen__InputExprs_82, erl_backend__erl_call_gen__OutputVars_22, erl_backend__erl_call_gen__MaybeSuccessExpr_13, erl_backend__erl_call_gen__Statement_14);
    }
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
  MR_Word erl_backend__erl_call_gen__SimpleExpr_7)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__Expr_8;

    switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__V_28_28;

          {
            erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__elds_false_0_f_0();
          }
          {
            erl_backend__erl_call_gen__Expr_8 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__V_28_28, erl_backend__erl_call_gen__Var_9);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer erl_backend__erl_call_gen__Int_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__V_27_27;

          {
            erl_backend__erl_call_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_27_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__Int_10));
          }
          {
            erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_27_27));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float erl_backend__erl_call_gen__Float_11 = MR_unbox_float((MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
          MR_Word erl_backend__erl_call_gen__V_26_26;

          {
            erl_backend__erl_call_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_26_26, 1) = MR_box_float(erl_backend__erl_call_gen__Float_11);
          }
          {
            erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_26_26));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_call_gen__StdOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 1)));
              MR_Word erl_backend__erl_call_gen__Expr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 2)));
              MR_Word erl_backend__erl_call_gen__Op_14;

              switch (erl_backend__erl_call_gen__StdOp_12) {
                default:
                  erl_backend__erl_call_gen__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 6:
                  {
                    erl_backend__erl_call_gen__Op_14 = (MR_Integer) 2;
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    erl_backend__erl_call_gen__Op_14 = (MR_Integer) 3;
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (erl_backend__erl_call_gen__succeeded)
                {
                  MR_Word erl_backend__erl_call_gen__SimpleExpr1_15;

                  {
                    erl_backend__erl_call_gen__SimpleExpr1_15 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr0_13);
                  }
                  {
                    erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_14));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 2) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr1_15));
                  }
                }
              else
                {
                  {
                    mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "unary builtin not supported on erlang target");
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_call_gen__Expr1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 2)));
              MR_Word erl_backend__erl_call_gen__Expr2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 3)));
              MR_Word erl_backend__erl_call_gen__StdOp_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 1)));
              MR_Word erl_backend__erl_call_gen__Op_30;

              switch (MR_tag((MR_Word) erl_backend__erl_call_gen__StdOp_32)) {
                default:
                  erl_backend__erl_call_gen__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(erl_backend__erl_call_gen__StdOp_32)) {
                    default:
                      erl_backend__erl_call_gen__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 5;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 6;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 0;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 2;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 3;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 9;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 10;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 4;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 7;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 8;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 17;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 18;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 28:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 5;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 29:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 6;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 30:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 0;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 31:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 1;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 32:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 33:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 34:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 35:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 36:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 37:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 41:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 42:
                      {
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (erl_backend__erl_call_gen__succeeded)
                {
                  MR_Word erl_backend__erl_call_gen__SimpleExpr2_18;
                  MR_Word erl_backend__erl_call_gen__SimpleExpr1_29;

                  {
                    erl_backend__erl_call_gen__SimpleExpr1_29 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr1_16);
                  }
                  {
                    erl_backend__erl_call_gen__SimpleExpr2_18 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr2_17);
                  }
                  {
                    erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_30));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 2) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr1_29));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 3) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr2_18));
                  }
                }
              else
                {
                  erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__StdOp_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40))));
                  if (erl_backend__erl_call_gen__succeeded)
                    {
                      MR_Word erl_backend__erl_call_gen__V_19_19;

                      {
                        erl_backend__erl_call_gen__V_19_19 = erl_backend__elds__elds_false_0_f_0();
                      }
                      {
                        erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_19_19));
                      }
                    }
                  else
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "binary builtin not supported on erlang target");
                      }
                    }
                }
            }
            break;
        }
        break;
    }
    return erl_backend__erl_call_gen__Expr_8;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
  MR_Word erl_backend__erl_call_gen__InputExprs_9,
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
  MR_Word * erl_backend__erl_call_gen__Statement_12)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    switch (erl_backend__erl_call_gen__CodeModel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_call_gen__CallExpr_20;

          {
            erl_backend__erl_call_gen__CallExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 2) = ((MR_Box) (erl_backend__erl_call_gen__InputExprs_9));
          }
          if ((erl_backend__erl_call_gen__OutputVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              if ((erl_backend__erl_call_gen__MaybeSuccessExpr_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                erl_backend__erl_call_gen__succeeded = MR_TRUE;
              else
                {
                  MR_Word erl_backend__erl_call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeSuccessExpr_11, (MR_Integer) 0)));
                  MR_Word erl_backend__erl_call_gen__V_27_27;
                  MR_Word erl_backend__erl_call_gen__V_28_28;

                  erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_26_26)) == (MR_mktag((MR_Integer) 2)));
                  if (erl_backend__erl_call_gen__succeeded)
                    {
                      erl_backend__erl_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 0)));
                      {
                        erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__elds_empty_tuple_0_f_0();
                      }
                      {
                        erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_call_gen__V_27_27, erl_backend__erl_call_gen__V_28_28);
                      }
                    }
                }
              if (erl_backend__erl_call_gen__succeeded)
                *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_20;
              else
                {
                  *erl_backend__erl_call_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__CallExpr_20, erl_backend__erl_call_gen__MaybeSuccessExpr_11);
                }
            }
          else
            {
              MR_Word erl_backend__erl_call_gen__UnpackTerm_23;
              MR_Word erl_backend__erl_call_gen__V_25_25;
              MR_Word erl_backend__erl_call_gen__V_29_29;

              {
                erl_backend__erl_call_gen__V_25_25 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
              }
              {
                erl_backend__erl_call_gen__UnpackTerm_23 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_call_gen__V_25_25);
              }
              erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__MaybeSuccessExpr_11)) == (MR_mktag((MR_Integer) 1)));
              if (erl_backend__erl_call_gen__succeeded)
                {
                  erl_backend__erl_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeSuccessExpr_11, (MR_Integer) 0)));
                  {
                    erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__erl_call_gen__UnpackTerm_23, erl_backend__erl_call_gen__V_29_29);
                  }
                }
              if (erl_backend__erl_call_gen__succeeded)
                *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_20;
              else
                {
                  MR_Word erl_backend__erl_call_gen__AssignCall_24;

                  {
                    erl_backend__erl_call_gen__AssignCall_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 1) = ((MR_Box) (erl_backend__erl_call_gen__UnpackTerm_23));
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 2) = ((MR_Box) (erl_backend__erl_call_gen__CallExpr_20));
                  }
                  {
                    *erl_backend__erl_call_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__AssignCall_24, erl_backend__erl_call_gen__MaybeSuccessExpr_11);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_call_gen__SuccessExpr_14;
          MR_Word erl_backend__erl_call_gen__SuccessCont_38;
          MR_Word erl_backend__erl_call_gen__V_43_43;
          MR_Word erl_backend__erl_call_gen__V_44_44;
          MR_Word erl_backend__erl_call_gen__SuccessCont1_37;
          MR_Word erl_backend__erl_call_gen__TypeInfo_22_48;
          MR_Word erl_backend__erl_call_gen__V_39_39;
          MR_Word erl_backend__erl_call_gen__V_40_40;
          MR_Word erl_backend__erl_call_gen__V_47_47;

          {
            erl_backend__erl_call_gen__SuccessExpr_14 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_11);
          }
          erl_backend__erl_call_gen__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_call_gen__SuccessExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (erl_backend__erl_call_gen__succeeded)
            {
              erl_backend__erl_call_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 1)));
              erl_backend__erl_call_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 2)));
              erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_39_39)) == (MR_mktag((MR_Integer) 1)));
              if (erl_backend__erl_call_gen__succeeded)
                {
                  erl_backend__erl_call_gen__SuccessCont1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_39_39, (MR_Integer) 0)));
                  {
                    erl_backend__erl_call_gen__V_47_47 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
                  }
                  erl_backend__erl_call_gen__TypeInfo_22_48 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[1];
                  {
                    erl_backend__erl_call_gen__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_call_gen__TypeInfo_22_48, ((MR_Box) (erl_backend__erl_call_gen__V_40_40)), ((MR_Box) (erl_backend__erl_call_gen__V_47_47)));
                  }
                }
            }
          if (erl_backend__erl_call_gen__succeeded)
            erl_backend__erl_call_gen__SuccessCont_38 = erl_backend__erl_call_gen__SuccessCont1_37;
          else
            {
              MR_Word erl_backend__erl_call_gen__V_41_41;
              MR_Word erl_backend__erl_call_gen__V_42_42;

              {
                erl_backend__erl_call_gen__V_42_42 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
              }
              {
                erl_backend__erl_call_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_41_41, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_42_42));
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_41_41, 1) = ((MR_Box) (erl_backend__erl_call_gen__SuccessExpr_14));
              }
              erl_backend__erl_call_gen__SuccessCont_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_call_gen__V_41_41);
            }
          {
            erl_backend__erl_call_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_44_44, 0) = ((MR_Box) (erl_backend__erl_call_gen__SuccessCont_38));
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_call_gen__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__InputExprs_9, erl_backend__erl_call_gen__V_44_44);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_call_gen__Statement_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_43_43));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_call_gen__SuccessExpr_13;
          MR_Word erl_backend__erl_call_gen__CallExpr_54;
          MR_Word erl_backend__erl_call_gen__UnpackTerm_55;
          MR_Word erl_backend__erl_call_gen__V_59_59;
          MR_Word erl_backend__erl_call_gen__V_66_66;

          {
            erl_backend__erl_call_gen__SuccessExpr_13 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_11);
          }
          {
            erl_backend__erl_call_gen__CallExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 2) = ((MR_Box) (erl_backend__erl_call_gen__InputExprs_9));
          }
          {
            erl_backend__erl_call_gen__V_59_59 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
          }
          {
            erl_backend__erl_call_gen__UnpackTerm_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__UnpackTerm_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__UnpackTerm_55, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_59_59));
          }
          erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__SuccessExpr_13)) == (MR_mktag((MR_Integer) 2)));
          if (erl_backend__erl_call_gen__succeeded)
            {
              erl_backend__erl_call_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SuccessExpr_13, (MR_Integer) 0)));
              {
                erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_call_gen__UnpackTerm_55, erl_backend__erl_call_gen__V_66_66);
              }
            }
          if (erl_backend__erl_call_gen__succeeded)
            *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_54;
          else
            {
              MR_Word erl_backend__erl_call_gen__Statement0_56;
              MR_Word erl_backend__erl_call_gen__TrueCase_57;
              MR_Word erl_backend__erl_call_gen__FalseCase_58;
              MR_Word erl_backend__erl_call_gen__V_60_60;
              MR_Word erl_backend__erl_call_gen__V_61_61;
              MR_Word erl_backend__erl_call_gen__V_64_64;
              MR_Word erl_backend__erl_call_gen__V_65_65;

              {
                erl_backend__erl_call_gen__TrueCase_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__UnpackTerm_55));
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__SuccessExpr_13));
              }
              {
                erl_backend__erl_call_gen__V_65_65 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_64_64, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_65_65));
              }
              {
                erl_backend__erl_call_gen__FalseCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_58, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_64_64));
              }
              {
                erl_backend__erl_call_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_58));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                erl_backend__erl_call_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_60_60, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_57));
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_60_60, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_61_61));
              }
              {
                erl_backend__erl_call_gen__Statement0_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallExpr_54));
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_60_60));
              }
              {
                erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_call_gen__Statement0_56, erl_backend__erl_call_gen__Statement_12);
              }
            }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
  MR_Word erl_backend__erl_call_gen__Var_7)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__Expr_8;
    MR_Word erl_backend__erl_call_gen__Type_9;
    MR_Word erl_backend__erl_call_gen__V_10_10;

    {
      erl_backend__erl_call_gen__succeeded = hlds__vartypes__search_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Var_7, &erl_backend__erl_call_gen__Type_9);
    }
    if (erl_backend__erl_call_gen__succeeded)
      {
        {
          erl_backend__erl_call_gen__V_10_10 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__Type_9);
        }
        erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_10_10 == (MR_Integer) 0);
      }
    if (erl_backend__erl_call_gen__succeeded)
      {
        MR_Word erl_backend__erl_call_gen__V_11_11;

        {
          erl_backend__erl_call_gen__V_11_11 = erl_backend__elds__elds_false_0_f_0();
        }
        {
          erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_11_11));
        }
      }
    else
      {
        erl_backend__erl_call_gen__Expr_8 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Var_7);
      }
    return erl_backend__erl_call_gen__Expr_8;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
  MR_Box erl_backend__erl_call_gen__closure_arg,
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

    {
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
    return erl_backend__erl_call_gen__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0(
  MR_Word erl_backend__erl_call_gen__Info_8,
  MR_Word erl_backend__erl_call_gen__CodeModel_9,
  MR_Word erl_backend__erl_call_gen__CallTarget_10,
  MR_Word erl_backend__erl_call_gen__InputVars_11,
  MR_Word erl_backend__erl_call_gen__OutputVars_12,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
  MR_Word * erl_backend__erl_call_gen__Statement_14)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__ModuleInfo_15;
    MR_Word erl_backend__erl_call_gen__VarTypes_16;
    MR_Word erl_backend__erl_call_gen__InputExprs_17;
    MR_Word erl_backend__erl_call_gen__V_18_18;

    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__Info_8, &erl_backend__erl_call_gen__ModuleInfo_15);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__Info_8, &erl_backend__erl_call_gen__VarTypes_16);
    }
    {
      erl_backend__erl_call_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 1) = ((MR_Box) (erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_15));
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_16));
    }
    {
      erl_backend__erl_call_gen__InputExprs_17 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_18_18, erl_backend__erl_call_gen__InputVars_11);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_9, erl_backend__erl_call_gen__CallTarget_10, erl_backend__erl_call_gen__InputExprs_17, erl_backend__erl_call_gen__OutputVars_12, erl_backend__erl_call_gen__MaybeSuccessExpr_13, erl_backend__erl_call_gen__Statement_14);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_6_p_0(
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
  MR_Word erl_backend__erl_call_gen__InputVars_9,
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
  MR_Word * erl_backend__erl_call_gen__Statement_12)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_Word erl_backend__erl_call_gen__InputExprs_13;

    {
      erl_backend__erl_call_gen__InputExprs_13 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__InputVars_9);
    }
    {
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_7, erl_backend__erl_call_gen__CallTarget_8, erl_backend__erl_call_gen__InputExprs_13, erl_backend__erl_call_gen__OutputVars_10, erl_backend__erl_call_gen__MaybeSuccessExpr_11, erl_backend__erl_call_gen__Statement_12);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(
  MR_Word erl_backend__erl_call_gen__ForeignArgs_10,
  MR_Word erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11,
  MR_Word erl_backend__erl_call_gen__PragmaImpl_12,
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
  MR_Word erl_backend__erl_call_gen__OuterContext_14,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;
    MR_String erl_backend__erl_call_gen__ForeignCode_18 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__PragmaImpl_12, (MR_Integer) 0)));
    MR_Word erl_backend__erl_call_gen__MaybeContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__PragmaImpl_12, (MR_Integer) 1)));

    if ((erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word erl_backend__erl_call_gen__Context_20;

        if ((erl_backend__erl_call_gen__MaybeContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          erl_backend__erl_call_gen__Context_20 = erl_backend__erl_call_gen__OuterContext_14;
        else
          erl_backend__erl_call_gen__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeContext_19, (MR_Integer) 0)));
        {
          erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(erl_backend__erl_call_gen__ForeignArgs_10, erl_backend__erl_call_gen__ForeignCode_18, erl_backend__erl_call_gen__CodeModel_13, erl_backend__erl_call_gen__Context_20, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
        }
      }
    else
      {
        MR_Word erl_backend__erl_call_gen__TraceRuntimeCond_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11, (MR_Integer) 0)));
        MR_Word erl_backend__erl_call_gen__CondExpr_31;
        MR_Word erl_backend__erl_call_gen__Send_32;
        MR_Word erl_backend__erl_call_gen__SendMsg_34;
        MR_Word erl_backend__erl_call_gen__Result_35;
        MR_Word erl_backend__erl_call_gen__ResultExpr_36;
        MR_Word erl_backend__erl_call_gen__Receive_37;
        MR_Word erl_backend__erl_call_gen__AckPattern_38;
        MR_Word erl_backend__erl_call_gen__SendAndRecv_39;
        MR_Word erl_backend__erl_call_gen__TrueCase_40;
        MR_Word erl_backend__erl_call_gen__FalseCase_41;
        MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42;
        MR_Word erl_backend__erl_call_gen__V_45_45;
        MR_Word erl_backend__erl_call_gen__V_46_46;
        MR_Word erl_backend__erl_call_gen__V_50_50;
        MR_Word erl_backend__erl_call_gen__V_51_51;
        MR_Word erl_backend__erl_call_gen__V_52_52;
        MR_Word erl_backend__erl_call_gen__V_56_56;
        MR_Word erl_backend__erl_call_gen__V_57_57;
        MR_Word erl_backend__erl_call_gen__V_59_59;
        MR_Word erl_backend__erl_call_gen__V_63_63;
        MR_Word erl_backend__erl_call_gen__V_65_65;
        MR_Word erl_backend__erl_call_gen__V_66_66;
        MR_Word erl_backend__erl_call_gen__V_68_68;
        MR_Word erl_backend__erl_call_gen__V_69_69;
        MR_Word erl_backend__erl_call_gen__V_70_70;
        MR_Word erl_backend__erl_call_gen__V_71_71;
        MR_Word erl_backend__erl_call_gen__V_72_72;
        MR_Word erl_backend__erl_call_gen__V_73_73;

        {
          erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__TraceRuntimeCond_21, &erl_backend__erl_call_gen__CondExpr_31, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42);
        }
        {
          erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_call_self_0_f_0();
        }
        {
          erl_backend__erl_call_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__erl_call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondExpr_31));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_51_51));
        }
        {
          erl_backend__erl_call_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[1])));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_46_46, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_50_50));
        }
        {
          erl_backend__erl_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_46_46));
        }
        {
          erl_backend__erl_call_gen__SendMsg_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SendMsg_34, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_45_45));
        }
        {
          erl_backend__erl_call_gen__Send_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[0])));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 2) = ((MR_Box) (erl_backend__erl_call_gen__SendMsg_34));
        }
        {
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Result", &erl_backend__erl_call_gen__Result_35, erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
        }
        {
          erl_backend__erl_call_gen__ResultExpr_36 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Result_35);
        }
        {
          erl_backend__erl_call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_63_63, 0) = ((MR_Box) (erl_backend__erl_call_gen__ResultExpr_36));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__erl_call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[2])));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_63_63));
        }
        {
          erl_backend__erl_call_gen__AckPattern_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AckPattern_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AckPattern_38, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_59_59));
        }
        {
          erl_backend__erl_call_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__AckPattern_38));
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__ResultExpr_36));
        }
        {
          erl_backend__erl_call_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_56_56, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_57_57));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__erl_call_gen__Receive_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Receive_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Receive_37, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_56_56));
        }
        {
          erl_backend__erl_call_gen__SendAndRecv_39 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__Send_32, erl_backend__erl_call_gen__Receive_37);
        }
        {
          erl_backend__erl_call_gen__V_68_68 = erl_backend__elds__elds_true_0_f_0();
        }
        {
          erl_backend__erl_call_gen__V_70_70 = erl_backend__elds__elds_empty_tuple_0_f_0();
        }
        {
          erl_backend__erl_call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_69_69, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_70_70));
        }
        {
          erl_backend__erl_call_gen__TrueCase_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_40, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_68_68));
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_40, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_69_69));
        }
        {
          erl_backend__erl_call_gen__V_71_71 = erl_backend__elds__elds_false_0_f_0();
        }
        {
          erl_backend__erl_call_gen__V_73_73 = erl_backend__elds__elds_fail_0_f_0();
        }
        {
          erl_backend__erl_call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_72_72, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_73_73));
        }
        {
          erl_backend__erl_call_gen__FalseCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_41, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_71_71));
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_41, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_72_72));
        }
        {
          erl_backend__erl_call_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_66_66, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_41));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__erl_call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_40));
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_65_65, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_66_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_call_gen__Statement_16 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__SendAndRecv_39));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_65_65));
        }
      }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_cast_6_p_0(
  MR_Word erl_backend__erl_call_gen___Context_7,
  MR_Word erl_backend__erl_call_gen__ArgVars_8,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_9,
  MR_Word * erl_backend__erl_call_gen__Statement_10,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    {
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(erl_backend__erl_call_gen__ArgVars_8, erl_backend__erl_call_gen__MaybeSuccessExpr_9, erl_backend__erl_call_gen__Statement_10, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(
  MR_Word erl_backend__erl_call_gen__PredId_10,
  MR_Integer erl_backend__erl_call_gen__ProcId_11,
  MR_Word erl_backend__erl_call_gen__ArgVars_12,
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
  MR_Word erl_backend__erl_call_gen___Context_14,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_42)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    {
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__PredId_10, erl_backend__erl_call_gen__ProcId_11, erl_backend__erl_call_gen__ArgVars_12, erl_backend__erl_call_gen__CodeModel_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, erl_backend__erl_call_gen__STATE_VARIABLE_Info_42);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
  MR_Word erl_backend__erl_call_gen__Modes_12,
  MR_Word erl_backend__erl_call_gen__Detism_13,
  MR_Word erl_backend__erl_call_gen___Context_14,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_38)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    {
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__GenericCall_10, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__Modes_12, erl_backend__erl_call_gen__Detism_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37, erl_backend__erl_call_gen__STATE_VARIABLE_Info_38);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
  MR_Word erl_backend__erl_call_gen__Modes_12,
  MR_Word erl_backend__erl_call_gen__Detism_13,
  MR_Word erl_backend__erl_call_gen___Context_14,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_call_gen__Statement_16,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    {
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__GenericCall_10, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__Modes_12, erl_backend__erl_call_gen__Detism_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__STATE_VARIABLE_Info_29);
    }
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_call_10_p_0(
  MR_Word erl_backend__erl_call_gen__PredId_11,
  MR_Integer erl_backend__erl_call_gen__ProcId_12,
  MR_Word erl_backend__erl_call_gen__ArgVars_13,
  MR_Word erl_backend__erl_call_gen___ActualArgTypes_14,
  MR_Word erl_backend__erl_call_gen__CodeModel_15,
  MR_Word erl_backend__erl_call_gen___Context_16,
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_17,
  MR_Word * erl_backend__erl_call_gen__Statement_18,
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool erl_backend__erl_call_gen__succeeded;

    {
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(erl_backend__erl_call_gen__PredId_11, erl_backend__erl_call_gen__ProcId_12, erl_backend__erl_call_gen__ArgVars_13, erl_backend__erl_call_gen__CodeModel_15, erl_backend__erl_call_gen__MaybeSuccessExpr_17, erl_backend__erl_call_gen__Statement_18, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__STATE_VARIABLE_Info_29);
    }
  }
}

void mercury__erl_backend__erl_call_gen__init(void)
{
}

void mercury__erl_backend__erl_call_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_call_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.erl_call_gen. */
