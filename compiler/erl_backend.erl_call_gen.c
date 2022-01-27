/*
** Automatically generated from `erl_call_gen.m'
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


/* :- module erl_backend.erl_call_gen. */
/* :- implementation. */

/*
INIT mercury__erl_backend__erl_call_gen__init
ENDINIT
*/

#include "erl_backend.erl_call_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "erl_backend.erl_call_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "erl_backend.erl_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "erl_backend.erl_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 766 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
#line 766 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__TraceExpr_5,
#line 766 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__CondExpr_6,
#line 766 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16,
#line 766 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);

#line 689 "erl_call_gen.m"
static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
#line 689 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1);

#line 677 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
#line 677 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1,
#line 677 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Type_6,
#line 677 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Mode_8);

#line 633 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
#line 633 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 633 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 632 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
#line 632 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 632 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 631 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
#line 631 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 631 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 630 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
#line 630 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 630 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1);

#line 625 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
#line 625 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 625 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1,
#line 625 "erl_call_gen.m"
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_2,
#line 625 "erl_call_gen.m"
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_3);

#line 585 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ForeignArgs_9,
#line 585 "erl_call_gen.m"
  MR_String erl_backend__erl_call_gen__ForeignCode_10,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_11,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OuterContext_12,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
#line 585 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_14,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34,
#line 585 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_35);

#line 429 "erl_call_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__SimpleExpr_7);

#line 167 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__InputExprs_9,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
#line 167 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_12);

#line 153 "erl_call_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Var_7);

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 493 "erl_backend.erl_call_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 501 "erl_backend.erl_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 510 "erl_backend.erl_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 70 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_8,
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_9,
#line 70 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_10,
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
#line 70 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
#line 70 "erl_call_gen.m"
{
#line 341 "erl_call_gen.m"
  {
#line 341 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 341 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgTypes_12;
#line 359 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__SrcVar_13;
#line 359 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__DestVar_14;
#line 359 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__DestType_16;
#line 344 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_24_24;
#line 344 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_25_25;
#line 344 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_26_26;
#line 344 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_27_27;
#line 345 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen___SrcType_15;

#line 342 "erl_call_gen.m"
    {
#line 342 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__ArgVars_8, &erl_backend__erl_call_gen__ArgTypes_12);
    }
#line 344 "erl_call_gen.m"
    erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__ArgVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 344 "erl_call_gen.m"
    if (erl_backend__erl_call_gen__succeeded)
#line 344 "erl_call_gen.m"
      {
#line 344 "erl_call_gen.m"
        erl_backend__erl_call_gen__SrcVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgVars_8, (MR_Integer) 0)));
#line 344 "erl_call_gen.m"
        erl_backend__erl_call_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgVars_8, (MR_Integer) 1)));
#line 344 "erl_call_gen.m"
        erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 344 "erl_call_gen.m"
        if (erl_backend__erl_call_gen__succeeded)
#line 344 "erl_call_gen.m"
          {
#line 344 "erl_call_gen.m"
            erl_backend__erl_call_gen__DestVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_24_24, (MR_Integer) 0)));
#line 344 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_24_24, (MR_Integer) 1)));
#line 344 "erl_call_gen.m"
            erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "erl_call_gen.m"
            if (erl_backend__erl_call_gen__succeeded)
#line 344 "erl_call_gen.m"
              {
#line 345 "erl_call_gen.m"
                erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__ArgTypes_12)) == (MR_mktag((MR_Integer) 1)));
#line 345 "erl_call_gen.m"
                if (erl_backend__erl_call_gen__succeeded)
#line 345 "erl_call_gen.m"
                  {
#line 345 "erl_call_gen.m"
                    erl_backend__erl_call_gen___SrcType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgTypes_12, (MR_Integer) 0)));
#line 345 "erl_call_gen.m"
                    erl_backend__erl_call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__ArgTypes_12, (MR_Integer) 1)));
#line 345 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 345 "erl_call_gen.m"
                    if (erl_backend__erl_call_gen__succeeded)
#line 345 "erl_call_gen.m"
                      {
#line 345 "erl_call_gen.m"
                        erl_backend__erl_call_gen__DestType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 0)));
#line 345 "erl_call_gen.m"
                        erl_backend__erl_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 1)));
#line 345 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "erl_call_gen.m"
                      }
#line 345 "erl_call_gen.m"
                  }
#line 344 "erl_call_gen.m"
              }
#line 344 "erl_call_gen.m"
          }
#line 344 "erl_call_gen.m"
      }
#line 359 "erl_call_gen.m"
    if (erl_backend__erl_call_gen__succeeded)
#line 347 "erl_call_gen.m"
      {
#line 347 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__ModuleInfo_17;
#line 347 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__IsDummy_18;

#line 347 "erl_call_gen.m"
        {
#line 347 "erl_call_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__ModuleInfo_17);
        }
#line 348 "erl_call_gen.m"
        {
#line 348 "erl_call_gen.m"
          erl_backend__erl_call_gen__IsDummy_18 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_17, erl_backend__erl_call_gen__DestType_16);
        }
#line 352 "erl_call_gen.m"
#line 352 "erl_call_gen.m"
        switch (erl_backend__erl_call_gen__IsDummy_18) {
#line 352 "erl_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 352 "erl_call_gen.m"
          case (MR_Integer) 0:
#line 351 "erl_call_gen.m"
            {
#line 351 "erl_call_gen.m"
              *erl_backend__erl_call_gen__Statement_10 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_9);
            }
#line 352 "erl_call_gen.m"
            break;
#line 352 "erl_call_gen.m"
          case (MR_Integer) 1:
#line 353 "erl_call_gen.m"
            {
#line 353 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__VarTypes_19;
#line 353 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__SrcVarExpr_20;
#line 353 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Assign_21;
#line 353 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_28_28;
#line 159 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Type_36;
#line 159 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_37_37;

#line 354 "erl_call_gen.m"
              {
#line 354 "erl_call_gen.m"
                erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__VarTypes_19);
              }
#line 159 "erl_call_gen.m"
              {
#line 159 "erl_call_gen.m"
                erl_backend__erl_call_gen__succeeded = parse_tree__prog_data__search_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SrcVar_13, &erl_backend__erl_call_gen__Type_36);
              }
#line 159 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 159 "erl_call_gen.m"
                {
#line 160 "erl_call_gen.m"
                  {
#line 160 "erl_call_gen.m"
                    erl_backend__erl_call_gen__V_37_37 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_17, erl_backend__erl_call_gen__Type_36);
                  }
#line 160 "erl_call_gen.m"
                  erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_37_37 == (MR_Integer) 0);
#line 159 "erl_call_gen.m"
                }
#line 163 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 162 "erl_call_gen.m"
                {
#line 162 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__V_38_38;

#line 162 "erl_call_gen.m"
                  {
#line 162 "erl_call_gen.m"
                    erl_backend__erl_call_gen__V_38_38 = erl_backend__elds__elds_false_0_f_0();
                  }
#line 162 "erl_call_gen.m"
                  {
#line 162 "erl_call_gen.m"
                    erl_backend__erl_call_gen__SrcVarExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SrcVarExpr_20, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_38_38));
#line 162 "erl_call_gen.m"
                  }
#line 162 "erl_call_gen.m"
                }
#line 163 "erl_call_gen.m"
              else
#line 164 "erl_call_gen.m"
                {
#line 164 "erl_call_gen.m"
                  erl_backend__erl_call_gen__SrcVarExpr_20 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__SrcVar_13);
                }
#line 356 "erl_call_gen.m"
              {
#line 356 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__DestVar_14);
              }
#line 356 "erl_call_gen.m"
              {
#line 356 "erl_call_gen.m"
                erl_backend__erl_call_gen__Assign_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 356 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_28_28));
#line 356 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_21, 2) = ((MR_Box) (erl_backend__erl_call_gen__SrcVarExpr_20));
#line 356 "erl_call_gen.m"
              }
#line 357 "erl_call_gen.m"
              {
#line 357 "erl_call_gen.m"
                *erl_backend__erl_call_gen__Statement_10 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__Assign_21, erl_backend__erl_call_gen__MaybeSuccessExpr_9);
              }
#line 353 "erl_call_gen.m"
            }
#line 352 "erl_call_gen.m"
            break;
#line 352 "erl_call_gen.m"
        }
#line 347 "erl_call_gen.m"
      }
#line 359 "erl_call_gen.m"
    else
#line 360 "erl_call_gen.m"
      {
#line 360 "erl_call_gen.m"
        {
#line 360 "erl_call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_cast\'/6", (MR_String) "wrong number of args for cast");
#line 360 "erl_call_gen.m"
          return;
        }
#line 360 "erl_call_gen.m"
      }
#line 341 "erl_call_gen.m"
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22;
#line 341 "erl_call_gen.m"
  }
#line 70 "erl_call_gen.m"
}

#line 63 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__PredId_10,
#line 63 "erl_call_gen.m"
  MR_Integer erl_backend__erl_call_gen__ProcId_11,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_12,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 63 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41,
#line 63 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_42)
#line 63 "erl_call_gen.m"
{
#line 372 "erl_call_gen.m"
  {
#line 372 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 372 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_18;
#line 372 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__VarTypes_19;
#line 372 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleName_20;
#line 372 "erl_call_gen.m"
    MR_String erl_backend__erl_call_gen__PredName_21;
#line 372 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__SimpleCode_22;

#line 373 "erl_call_gen.m"
    {
#line 373 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, &erl_backend__erl_call_gen__ModuleInfo_18);
    }
#line 374 "erl_call_gen.m"
    {
#line 374 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, &erl_backend__erl_call_gen__VarTypes_19);
    }
#line 375 "erl_call_gen.m"
    {
#line 375 "erl_call_gen.m"
      erl_backend__erl_call_gen__ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__PredId_10);
    }
#line 376 "erl_call_gen.m"
    {
#line 376 "erl_call_gen.m"
      erl_backend__erl_call_gen__PredName_21 = hlds__hlds_module__predicate_name_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__PredId_10);
    }
#line 377 "erl_call_gen.m"
    {
#line 377 "erl_call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleName_20, erl_backend__erl_call_gen__PredName_21, erl_backend__erl_call_gen__ProcId_11, erl_backend__erl_call_gen__ArgVars_12, &erl_backend__erl_call_gen__SimpleCode_22);
    }
#line 406 "erl_call_gen.m"
#line 406 "erl_call_gen.m"
    switch (erl_backend__erl_call_gen__CodeModel_13) {
#line 406 "erl_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 406 "erl_call_gen.m"
      case (MR_Integer) 0:
#line 395 "erl_call_gen.m"
#line 395 "erl_call_gen.m"
        switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleCode_22)) {
#line 395 "erl_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 395 "erl_call_gen.m"
          case (MR_Integer) 0:
#line 382 "erl_call_gen.m"
            {
#line 382 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 382 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__SimpleExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 1)));
#line 386 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__LvalType_25;
#line 386 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_63_63;

#line 386 "erl_call_gen.m"
              {
#line 386 "erl_call_gen.m"
                parse_tree__prog_data__lookup_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__Lval_23, &erl_backend__erl_call_gen__LvalType_25);
              }
#line 387 "erl_call_gen.m"
              {
#line 387 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_63_63 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__LvalType_25);
              }
#line 387 "erl_call_gen.m"
              erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_63_63 == (MR_Integer) 0);
#line 390 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 389 "erl_call_gen.m"
                {
#line 389 "erl_call_gen.m"
                  *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
                }
#line 390 "erl_call_gen.m"
              else
#line 391 "erl_call_gen.m"
                {
#line 391 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__Rval_26;
#line 391 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__Assign_27;
#line 391 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__V_64_64;

#line 391 "erl_call_gen.m"
                  {
#line 391 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Rval_26 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SimpleExpr_24);
                  }
#line 392 "erl_call_gen.m"
                  {
#line 392 "erl_call_gen.m"
                    erl_backend__erl_call_gen__V_64_64 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Lval_23);
                  }
#line 392 "erl_call_gen.m"
                  {
#line 392 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Assign_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 392 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_64_64));
#line 392 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Assign_27, 2) = ((MR_Box) (erl_backend__erl_call_gen__Rval_26));
#line 392 "erl_call_gen.m"
                  }
#line 393 "erl_call_gen.m"
                  {
#line 393 "erl_call_gen.m"
                    *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__Assign_27, erl_backend__erl_call_gen__MaybeSuccessExpr_15);
                  }
#line 391 "erl_call_gen.m"
                }
#line 382 "erl_call_gen.m"
            }
#line 395 "erl_call_gen.m"
            break;
#line 395 "erl_call_gen.m"
          case (MR_Integer) 1:
#line 396 "erl_call_gen.m"
            {
#line 397 "erl_call_gen.m"
              {
#line 397 "erl_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "ref_assign not supported in Erlang backend");
#line 397 "erl_call_gen.m"
                return;
              }
#line 396 "erl_call_gen.m"
            }
#line 395 "erl_call_gen.m"
            break;
#line 395 "erl_call_gen.m"
          case (MR_Integer) 2:
#line 400 "erl_call_gen.m"
            {
#line 401 "erl_call_gen.m"
              {
#line 401 "erl_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
#line 401 "erl_call_gen.m"
                return;
              }
#line 400 "erl_call_gen.m"
            }
#line 395 "erl_call_gen.m"
            break;
#line 395 "erl_call_gen.m"
          case (MR_Integer) 3:
#line 404 "erl_call_gen.m"
            {
#line 404 "erl_call_gen.m"
              *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
            }
#line 395 "erl_call_gen.m"
            break;
#line 395 "erl_call_gen.m"
        }
#line 406 "erl_call_gen.m"
        break;
#line 406 "erl_call_gen.m"
      case (MR_Integer) 2:
#line 425 "erl_call_gen.m"
        {
#line 426 "erl_call_gen.m"
          {
#line 426 "erl_call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
#line 426 "erl_call_gen.m"
            return;
          }
#line 425 "erl_call_gen.m"
        }
#line 406 "erl_call_gen.m"
        break;
#line 406 "erl_call_gen.m"
      case (MR_Integer) 1:
#line 416 "erl_call_gen.m"
#line 416 "erl_call_gen.m"
        switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleCode_22)) {
#line 416 "erl_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 416 "erl_call_gen.m"
          case (MR_Integer) 0:
#line 416 "erl_call_gen.m"
          case (MR_Integer) 1:
#line 416 "erl_call_gen.m"
          case (MR_Integer) 3:
#line 420 "erl_call_gen.m"
            {
#line 421 "erl_call_gen.m"
              {
#line 421 "erl_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 421 "erl_call_gen.m"
                return;
              }
#line 420 "erl_call_gen.m"
            }
#line 416 "erl_call_gen.m"
            break;
#line 416 "erl_call_gen.m"
          case (MR_Integer) 2:
#line 409 "erl_call_gen.m"
            {
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__SimpleTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__TestRval_33;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__TrueCase_34;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__FalseCase_35;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_49_49;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_50_50;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_52_52;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_53_53;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_54_54;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_55_55;
#line 409 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_56_56;

#line 410 "erl_call_gen.m"
              {
#line 410 "erl_call_gen.m"
                erl_backend__erl_call_gen__TestRval_33 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_18, erl_backend__erl_call_gen__VarTypes_19, erl_backend__erl_call_gen__SimpleTest_32);
              }
#line 414 "erl_call_gen.m"
              {
#line 414 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_true_0_f_0();
              }
#line 414 "erl_call_gen.m"
              {
#line 414 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_53_53 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_15);
              }
#line 414 "erl_call_gen.m"
              {
#line 414 "erl_call_gen.m"
                erl_backend__erl_call_gen__TrueCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_34, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
#line 414 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_34, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_53_53));
#line 414 "erl_call_gen.m"
              }
#line 415 "erl_call_gen.m"
              {
#line 415 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_54_54 = erl_backend__elds__elds_false_0_f_0();
              }
#line 415 "erl_call_gen.m"
              {
#line 415 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_56_56 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 415 "erl_call_gen.m"
              {
#line 415 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "erl_call_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_55_55, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_56_56));
#line 415 "erl_call_gen.m"
              }
#line 415 "erl_call_gen.m"
              {
#line 415 "erl_call_gen.m"
                erl_backend__erl_call_gen__FalseCase_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_35, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_54_54));
#line 415 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_35, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_55_55));
#line 415 "erl_call_gen.m"
              }
#line 413 "erl_call_gen.m"
              {
#line 413 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_35));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "erl_call_gen.m"
              }
#line 413 "erl_call_gen.m"
              {
#line 413 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_34));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_50_50));
#line 413 "erl_call_gen.m"
              }
#line 413 "erl_call_gen.m"
              {
#line 413 "erl_call_gen.m"
                MR_Word base;
#line 413 "erl_call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 413 "erl_call_gen.m"
                *erl_backend__erl_call_gen__Statement_16 = base;
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__TestRval_33));
#line 413 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_49_49));
#line 413 "erl_call_gen.m"
              }
#line 409 "erl_call_gen.m"
            }
#line 416 "erl_call_gen.m"
            break;
#line 416 "erl_call_gen.m"
        }
#line 406 "erl_call_gen.m"
        break;
#line 406 "erl_call_gen.m"
    }
#line 372 "erl_call_gen.m"
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_42 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41;
#line 372 "erl_call_gen.m"
  }
#line 63 "erl_call_gen.m"
}

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 148 "erl_call_gen.m"
{
#line 148 "erl_call_gen.m"
  {
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 148 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 148 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
#line 148 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
  }
#line 148 "erl_call_gen.m"
}

#line 56 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Modes_12,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Detism_13,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 56 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37,
#line 56 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_38)
#line 56 "erl_call_gen.m"
{
#line 292 "erl_call_gen.m"
  {
#line 292 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__TCIVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 292 "erl_call_gen.m"
    MR_Integer erl_backend__erl_call_gen__MethodNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__BaseTCIVar_22;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__MethodWrapperVar_23;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__BaseTCIVarExpr_24;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__MethodWrapperVarExpr_25;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_26;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgTypes_27;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallInputVars_28;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallOutputVars_29;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31;
#line 292 "erl_call_gen.m"
    MR_Integer erl_backend__erl_call_gen__MethodFieldNum_32;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ExtractMethodWrapper_33;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallCodeModel_34;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallTarget_35;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__DoCall_36;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_44_44;
#line 292 "erl_call_gen.m"
    MR_Integer erl_backend__erl_call_gen__V_45_45;
#line 292 "erl_call_gen.m"
    MR_Integer erl_backend__erl_call_gen__V_47_47;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_48_48;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_49_49;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_50_50;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_59;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__VarTypes_60;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_61;
#line 292 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_62_62;
#line 293 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen___ClassId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 293 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen___CallId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 307 "erl_call_gen.m"
    {
#line 307 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "BaseTypeClassInfo", &erl_backend__erl_call_gen__BaseTCIVar_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40);
    }
#line 308 "erl_call_gen.m"
    {
#line 308 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "MethodWrapper", &erl_backend__erl_call_gen__MethodWrapperVar_23, erl_backend__erl_call_gen__STATE_VARIABLE_Info_40_40, erl_backend__erl_call_gen__STATE_VARIABLE_Info_38);
    }
#line 309 "erl_call_gen.m"
    {
#line 309 "erl_call_gen.m"
      erl_backend__erl_call_gen__BaseTCIVarExpr_24 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__BaseTCIVar_22);
    }
#line 310 "erl_call_gen.m"
    {
#line 310 "erl_call_gen.m"
      erl_backend__erl_call_gen__MethodWrapperVarExpr_25 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__MethodWrapperVar_23);
    }
#line 313 "erl_call_gen.m"
    {
#line 313 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__ModuleInfo_26);
    }
#line 314 "erl_call_gen.m"
    {
#line 314 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_variable_types_3_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, erl_backend__erl_call_gen__ArgVars_11, &erl_backend__erl_call_gen__ArgTypes_27);
    }
#line 315 "erl_call_gen.m"
    {
#line 315 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_26, (MR_Integer) 1, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__ArgTypes_27, erl_backend__erl_call_gen__Modes_12, &erl_backend__erl_call_gen__CallInputVars_28, &erl_backend__erl_call_gen__CallOutputVars_29);
    }
#line 322 "erl_call_gen.m"
    {
#line 322 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_44_44 = erl_backend__elds__elds_call_element_2_f_0(erl_backend__erl_call_gen__TCIVar_18, (MR_Integer) 1);
    }
#line 321 "erl_call_gen.m"
    {
#line 321 "erl_call_gen.m"
      erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 321 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__BaseTCIVarExpr_24));
#line 321 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_44_44));
#line 321 "erl_call_gen.m"
    }
#line 325 "erl_call_gen.m"
    erl_backend__erl_call_gen__V_45_45 = ((MR_Integer) 1 + erl_backend__erl_call_gen__MethodNum_19);
#line 325 "erl_call_gen.m"
    {
#line 325 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_47_47 = erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0();
    }
#line 325 "erl_call_gen.m"
    erl_backend__erl_call_gen__MethodFieldNum_32 = (erl_backend__erl_call_gen__V_45_45 + erl_backend__erl_call_gen__V_47_47);
#line 327 "erl_call_gen.m"
    {
#line 327 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_48_48 = erl_backend__elds__elds_call_element_2_f_0(erl_backend__erl_call_gen__BaseTCIVar_22, erl_backend__erl_call_gen__MethodFieldNum_32);
    }
#line 326 "erl_call_gen.m"
    {
#line 326 "erl_call_gen.m"
      erl_backend__erl_call_gen__ExtractMethodWrapper_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 326 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 1) = ((MR_Box) (erl_backend__erl_call_gen__MethodWrapperVarExpr_25));
#line 326 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ExtractMethodWrapper_33, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_48_48));
#line 326 "erl_call_gen.m"
    }
#line 331 "erl_call_gen.m"
    {
#line 331 "erl_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_call_gen__Detism_13, &erl_backend__erl_call_gen__CallCodeModel_34);
    }
#line 332 "erl_call_gen.m"
    {
#line 332 "erl_call_gen.m"
      erl_backend__erl_call_gen__CallTarget_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "erl_call_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__CallTarget_35, 0) = ((MR_Box) (erl_backend__erl_call_gen__MethodWrapperVarExpr_25));
#line 332 "erl_call_gen.m"
    }
#line 334 "erl_call_gen.m"
    {
#line 334 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "erl_call_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 0) = ((MR_Box) (erl_backend__erl_call_gen__TCIVar_18));
#line 334 "erl_call_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_49_49, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallInputVars_28));
#line 334 "erl_call_gen.m"
    }
#line 146 "erl_call_gen.m"
    {
#line 146 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__ModuleInfo_59);
    }
#line 147 "erl_call_gen.m"
    {
#line 147 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(*erl_backend__erl_call_gen__STATE_VARIABLE_Info_38, &erl_backend__erl_call_gen__VarTypes_60);
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_59));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_62_62, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_60));
#line 148 "erl_call_gen.m"
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_61 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_62_62, erl_backend__erl_call_gen__V_49_49);
    }
#line 150 "erl_call_gen.m"
    {
#line 150 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CallCodeModel_34, erl_backend__erl_call_gen__CallTarget_35, erl_backend__erl_call_gen__InputExprs_61, erl_backend__erl_call_gen__CallOutputVars_29, erl_backend__erl_call_gen__MaybeSuccessExpr_15, &erl_backend__erl_call_gen__DoCall_36);
    }
#line 337 "erl_call_gen.m"
    {
#line 337 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_50_50 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ExtractMethodWrapper_33, erl_backend__erl_call_gen__DoCall_36);
    }
#line 336 "erl_call_gen.m"
    {
#line 336 "erl_call_gen.m"
      *erl_backend__erl_call_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ExtractBaseTypeclassInfo_31, erl_backend__erl_call_gen__V_50_50);
    }
#line 292 "erl_call_gen.m"
  }
#line 56 "erl_call_gen.m"
}

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 148 "erl_call_gen.m"
{
#line 148 "erl_call_gen.m"
  {
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 148 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 148 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
#line 148 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
  }
#line 148 "erl_call_gen.m"
}

#line 46 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Modes_12,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Detism_13,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 46 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
#line 46 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
#line 46 "erl_call_gen.m"
{
#line 271 "erl_call_gen.m"
  {
#line 271 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ClosureVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_22;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgTypes_23;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputVars_24;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__OutputVars_25;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallCodeModel_26;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallTarget_27;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_31_31;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_40;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__VarTypes_41;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_42;
#line 271 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_43_43;
#line 272 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 272 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 272 "erl_call_gen.m"
    MR_Integer erl_backend__erl_call_gen__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 279 "erl_call_gen.m"
    {
#line 279 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_22);
    }
#line 280 "erl_call_gen.m"
    {
#line 280 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__ArgVars_11, &erl_backend__erl_call_gen__ArgTypes_23);
    }
#line 281 "erl_call_gen.m"
    {
#line 281 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_22, (MR_Integer) 1, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__ArgTypes_23, erl_backend__erl_call_gen__Modes_12, &erl_backend__erl_call_gen__InputVars_24, &erl_backend__erl_call_gen__OutputVars_25);
    }
#line 284 "erl_call_gen.m"
    {
#line 284 "erl_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_call_gen__Detism_13, &erl_backend__erl_call_gen__CallCodeModel_26);
    }
#line 285 "erl_call_gen.m"
    {
#line 285 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_31_31 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__ClosureVar_18);
    }
#line 285 "erl_call_gen.m"
    {
#line 285 "erl_call_gen.m"
      erl_backend__erl_call_gen__CallTarget_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "erl_call_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__CallTarget_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_31_31));
#line 285 "erl_call_gen.m"
    }
#line 146 "erl_call_gen.m"
    {
#line 146 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_40);
    }
#line 147 "erl_call_gen.m"
    {
#line 147 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__VarTypes_41);
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_40));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_41));
#line 148 "erl_call_gen.m"
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_43_43, erl_backend__erl_call_gen__InputVars_24);
    }
#line 150 "erl_call_gen.m"
    {
#line 150 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CallCodeModel_26, erl_backend__erl_call_gen__CallTarget_27, erl_backend__erl_call_gen__InputExprs_42, erl_backend__erl_call_gen__OutputVars_25, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16);
    }
#line 271 "erl_call_gen.m"
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28;
#line 271 "erl_call_gen.m"
  }
#line 46 "erl_call_gen.m"
}

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 148 "erl_call_gen.m"
{
#line 148 "erl_call_gen.m"
  {
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 148 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 148 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
#line 148 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
  }
#line 148 "erl_call_gen.m"
}

#line 37 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__PredId_11,
#line 37 "erl_call_gen.m"
  MR_Integer erl_backend__erl_call_gen__ProcId_12,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_13,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_15,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_17,
#line 37 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_18,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
#line 37 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
#line 37 "erl_call_gen.m"
{
#line 121 "erl_call_gen.m"
  {
#line 121 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_20;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__PredInfo_21;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ProcInfo_22;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CalleeTypes_23;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgModes_24;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputVars_25;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__OutputVars_26;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__CallTarget_27;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_31_31;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_40;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__VarTypes_41;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_42;
#line 121 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_43_43;

#line 122 "erl_call_gen.m"
    {
#line 122 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_20);
    }
#line 125 "erl_call_gen.m"
    {
#line 125 "erl_call_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(erl_backend__erl_call_gen__ModuleInfo_20, erl_backend__erl_call_gen__PredId_11, erl_backend__erl_call_gen__ProcId_12, &erl_backend__erl_call_gen__PredInfo_21, &erl_backend__erl_call_gen__ProcInfo_22);
    }
#line 126 "erl_call_gen.m"
    {
#line 126 "erl_call_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_call_gen__PredInfo_21, &erl_backend__erl_call_gen__CalleeTypes_23);
    }
#line 127 "erl_call_gen.m"
    {
#line 127 "erl_call_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_call_gen__ProcInfo_22, &erl_backend__erl_call_gen__ArgModes_24);
    }
#line 129 "erl_call_gen.m"
    {
#line 129 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], erl_backend__erl_call_gen__ModuleInfo_20, (MR_Integer) 0, erl_backend__erl_call_gen__ArgVars_13, erl_backend__erl_call_gen__CalleeTypes_23, erl_backend__erl_call_gen__ArgModes_24, &erl_backend__erl_call_gen__InputVars_25, &erl_backend__erl_call_gen__OutputVars_26);
    }
#line 132 "erl_call_gen.m"
    {
#line 132 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_31_31, 0) = ((MR_Box) (erl_backend__erl_call_gen__PredId_11));
#line 132 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__ProcId_12));
#line 132 "erl_call_gen.m"
    }
#line 132 "erl_call_gen.m"
    {
#line 132 "erl_call_gen.m"
      erl_backend__erl_call_gen__CallTarget_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 132 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__CallTarget_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_31_31));
#line 132 "erl_call_gen.m"
    }
#line 146 "erl_call_gen.m"
    {
#line 146 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__ModuleInfo_40);
    }
#line 147 "erl_call_gen.m"
    {
#line 147 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, &erl_backend__erl_call_gen__VarTypes_41);
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_40));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_41));
#line 148 "erl_call_gen.m"
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_42 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_43_43, erl_backend__erl_call_gen__InputVars_25);
    }
#line 150 "erl_call_gen.m"
    {
#line 150 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_15, erl_backend__erl_call_gen__CallTarget_27, erl_backend__erl_call_gen__InputExprs_42, erl_backend__erl_call_gen__OutputVars_26, erl_backend__erl_call_gen__MaybeSuccessExpr_17, erl_backend__erl_call_gen__Statement_18);
    }
#line 121 "erl_call_gen.m"
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28;
#line 121 "erl_call_gen.m"
  }
#line 37 "erl_call_gen.m"
}

#line 766 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
#line 766 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__TraceExpr_5,
#line 766 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__CondExpr_6,
#line 766 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16,
#line 766 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_17)
#line 766 "erl_call_gen.m"
{
#line 769 "erl_call_gen.m"
  {
#line 769 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 769 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__Args_9;
#line 769 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_40_40;

#line 777 "erl_call_gen.m"
#line 777 "erl_call_gen.m"
    switch (MR_tag((MR_Word) erl_backend__erl_call_gen__TraceExpr_5)) {
#line 777 "erl_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "erl_call_gen.m"
      case (MR_Integer) 0:
#line 771 "erl_call_gen.m"
        {
#line 771 "erl_call_gen.m"
          MR_String erl_backend__erl_call_gen__EnvVar_8;
#line 771 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
#line 771 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_36_36;
#line 771 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_37_37;
#line 771 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_38_38;

#line 771 "erl_call_gen.m"
          erl_backend__erl_call_gen__EnvVar_8 = (MR_String) erl_backend__erl_call_gen__V_31_31;
#line 772 "erl_call_gen.m"
          {
#line 772 "erl_call_gen.m"
            erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(erl_backend__erl_call_gen__EnvVar_8, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
#line 775 "erl_call_gen.m"
          {
#line 775 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 775 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_38_38, 1) = ((MR_Box) (erl_backend__erl_call_gen__EnvVar_8));
#line 775 "erl_call_gen.m"
          }
#line 775 "erl_call_gen.m"
          {
#line 775 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_37_37, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_38_38));
#line 775 "erl_call_gen.m"
          }
#line 776 "erl_call_gen.m"
          {
#line 776 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_37_37));
#line 776 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "erl_call_gen.m"
          }
#line 774 "erl_call_gen.m"
          {
#line 774 "erl_call_gen.m"
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[4])));
#line 774 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_36_36));
#line 774 "erl_call_gen.m"
          }
#line 771 "erl_call_gen.m"
        }
#line 777 "erl_call_gen.m"
        break;
#line 777 "erl_call_gen.m"
      case (MR_Integer) 1:
#line 778 "erl_call_gen.m"
        {
#line 778 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__ExprA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
#line 778 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__CondA_11;
#line 778 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_29_29;

#line 779 "erl_call_gen.m"
          {
#line 779 "erl_call_gen.m"
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprA_10, &erl_backend__erl_call_gen__CondA_11, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
#line 780 "erl_call_gen.m"
          {
#line 780 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_29_29, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondA_11));
#line 780 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "erl_call_gen.m"
          }
#line 780 "erl_call_gen.m"
          {
#line 780 "erl_call_gen.m"
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[5])));
#line 780 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_29_29));
#line 780 "erl_call_gen.m"
          }
#line 778 "erl_call_gen.m"
        }
#line 777 "erl_call_gen.m"
        break;
#line 777 "erl_call_gen.m"
      case (MR_Integer) 2:
#line 782 "erl_call_gen.m"
        {
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__TraceOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 0)));
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__ExprB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 2)));
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__CondB_14;
#line 782 "erl_call_gen.m"
          MR_String erl_backend__erl_call_gen__Op_15;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_20_20;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_21_21;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_22_22;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_23_23;
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__ExprA_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__TraceExpr_5, (MR_Integer) 1)));
#line 782 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__CondA_42;

#line 783 "erl_call_gen.m"
          {
#line 783 "erl_call_gen.m"
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprA_41, &erl_backend__erl_call_gen__CondA_42, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_16, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18);
          }
#line 784 "erl_call_gen.m"
          {
#line 784 "erl_call_gen.m"
            erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__ExprB_13, &erl_backend__erl_call_gen__CondB_14, erl_backend__erl_call_gen__STATE_VARIABLE_Info_18_18, erl_backend__erl_call_gen__STATE_VARIABLE_Info_17);
          }
#line 788 "erl_call_gen.m"
#line 788 "erl_call_gen.m"
          switch (erl_backend__erl_call_gen__TraceOp_12) {
#line 788 "erl_call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 788 "erl_call_gen.m"
            case (MR_Integer) 1:
#line 790 "erl_call_gen.m"
              erl_backend__erl_call_gen__Op_15 = (MR_String) "and";
#line 788 "erl_call_gen.m"
              break;
#line 788 "erl_call_gen.m"
            case (MR_Integer) 0:
#line 787 "erl_call_gen.m"
              erl_backend__erl_call_gen__Op_15 = (MR_String) "or";
#line 788 "erl_call_gen.m"
              break;
#line 788 "erl_call_gen.m"
          }
#line 792 "erl_call_gen.m"
          {
#line 792 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_21_21, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_15));
#line 792 "erl_call_gen.m"
          }
#line 792 "erl_call_gen.m"
          {
#line 792 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_20_20, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_21_21));
#line 792 "erl_call_gen.m"
          }
#line 792 "erl_call_gen.m"
          {
#line 792 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_23_23, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondB_14));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "erl_call_gen.m"
          }
#line 792 "erl_call_gen.m"
          {
#line 792 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_22_22, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondA_42));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_22_22, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_23_23));
#line 792 "erl_call_gen.m"
          }
#line 792 "erl_call_gen.m"
          {
#line 792 "erl_call_gen.m"
            erl_backend__erl_call_gen__Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_20_20));
#line 792 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__Args_9, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_22_22));
#line 792 "erl_call_gen.m"
          }
#line 782 "erl_call_gen.m"
        }
#line 777 "erl_call_gen.m"
        break;
#line 777 "erl_call_gen.m"
    }
#line 794 "erl_call_gen.m"
    {
#line 794 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 794 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_40_40, 1) = ((MR_Box) (erl_backend__erl_call_gen__Args_9));
#line 794 "erl_call_gen.m"
    }
#line 794 "erl_call_gen.m"
    {
#line 794 "erl_call_gen.m"
      MR_Word base;
#line 794 "erl_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 794 "erl_call_gen.m"
      *erl_backend__erl_call_gen__CondExpr_6 = base;
#line 794 "erl_call_gen.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_40_40));
#line 794 "erl_call_gen.m"
    }
#line 769 "erl_call_gen.m"
  }
#line 766 "erl_call_gen.m"
}

#line 689 "erl_call_gen.m"
static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
#line 689 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1)
#line 689 "erl_call_gen.m"
{
#line 691 "erl_call_gen.m"
  {
#line 691 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 691 "erl_call_gen.m"
    MR_String erl_backend__erl_call_gen__Name_7;
#line 691 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__MaybeNameMode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 691 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 691 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 691 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 3)));

#line 694 "erl_call_gen.m"
    if ((erl_backend__erl_call_gen__MaybeNameMode_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "erl_call_gen.m"
      erl_backend__erl_call_gen__Name_7 = (MR_String) "_";
#line 694 "erl_call_gen.m"
    else
#line 693 "erl_call_gen.m"
      {
#line 693 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeNameMode_4, (MR_Integer) 0)));
#line 693 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_8_8;

#line 693 "erl_call_gen.m"
        erl_backend__erl_call_gen__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_9_9, (MR_Integer) 0)));
#line 693 "erl_call_gen.m"
        erl_backend__erl_call_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_9_9, (MR_Integer) 1)));
#line 693 "erl_call_gen.m"
      }
#line 691 "erl_call_gen.m"
    return erl_backend__erl_call_gen__Name_7;
#line 691 "erl_call_gen.m"
  }
#line 689 "erl_call_gen.m"
}

#line 677 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
#line 677 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__HeadVar__1_1,
#line 677 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Type_6,
#line 677 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Mode_8)
#line 677 "erl_call_gen.m"
{
#line 680 "erl_call_gen.m"
  {
#line 680 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 680 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__MaybeNameMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 680 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 680 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_7_7;

#line 680 "erl_call_gen.m"
    *erl_backend__erl_call_gen__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 680 "erl_call_gen.m"
    erl_backend__erl_call_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 683 "erl_call_gen.m"
    if ((erl_backend__erl_call_gen__MaybeNameMode_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "erl_call_gen.m"
      {
#line 686 "erl_call_gen.m"
        *erl_backend__erl_call_gen__Mode_8 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[6];
#line 684 "erl_call_gen.m"
      }
#line 683 "erl_call_gen.m"
    else
#line 682 "erl_call_gen.m"
      {
#line 682 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeNameMode_5, (MR_Integer) 0)));
#line 682 "erl_call_gen.m"
        MR_String erl_backend__erl_call_gen___Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_12_12, (MR_Integer) 0)));

#line 682 "erl_call_gen.m"
        *erl_backend__erl_call_gen__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_12_12, (MR_Integer) 1)));
#line 682 "erl_call_gen.m"
      }
#line 680 "erl_call_gen.m"
  }
#line 677 "erl_call_gen.m"
}

#line 633 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
#line 633 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 633 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 633 "erl_call_gen.m"
{
#line 633 "erl_call_gen.m"
  {
#line 633 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 633 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 633 "erl_call_gen.m"
    MR_String erl_backend__erl_call_gen__conv5_Name_7;

#line 633 "erl_call_gen.m"
    {
#line 633 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv5_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 633 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv5_Name_7));
#line 633 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 633 "erl_call_gen.m"
  }
#line 633 "erl_call_gen.m"
}

#line 632 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
#line 632 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 632 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 632 "erl_call_gen.m"
{
#line 632 "erl_call_gen.m"
  {
#line 632 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 632 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 632 "erl_call_gen.m"
    MR_String erl_backend__erl_call_gen__conv4_Name_7;

#line 632 "erl_call_gen.m"
    {
#line 632 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv4_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 632 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv4_Name_7));
#line 632 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 632 "erl_call_gen.m"
  }
#line 632 "erl_call_gen.m"
}

#line 631 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
#line 631 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 631 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 631 "erl_call_gen.m"
{
#line 631 "erl_call_gen.m"
  {
#line 631 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 631 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 631 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv3_HeadVar__2_2;

#line 631 "erl_call_gen.m"
    {
#line 631 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 631 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv3_HeadVar__2_2));
#line 631 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 631 "erl_call_gen.m"
  }
#line 631 "erl_call_gen.m"
}

#line 630 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
#line 630 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 630 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 630 "erl_call_gen.m"
{
#line 630 "erl_call_gen.m"
  {
#line 630 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 630 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 630 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv2_HeadVar__2_2;

#line 630 "erl_call_gen.m"
    {
#line 630 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 630 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv2_HeadVar__2_2));
#line 630 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 630 "erl_call_gen.m"
  }
#line 630 "erl_call_gen.m"
}

#line 625 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
#line 625 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 625 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1,
#line 625 "erl_call_gen.m"
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_2,
#line 625 "erl_call_gen.m"
  MR_Box * erl_backend__erl_call_gen__wrapper_arg_3)
#line 625 "erl_call_gen.m"
{
#line 625 "erl_call_gen.m"
  {
#line 625 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 625 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv1_Type_6;
#line 625 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv0_Mode_8;

#line 625 "erl_call_gen.m"
    {
#line 625 "erl_call_gen.m"
      erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1), &erl_backend__erl_call_gen__conv1_Type_6, &erl_backend__erl_call_gen__conv0_Mode_8);
    }
#line 625 "erl_call_gen.m"
    *erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv1_Type_6));
#line 625 "erl_call_gen.m"
    *erl_backend__erl_call_gen__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Mode_8));
#line 625 "erl_call_gen.m"
  }
#line 625 "erl_call_gen.m"
}

#line 585 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ForeignArgs_9,
#line 585 "erl_call_gen.m"
  MR_String erl_backend__erl_call_gen__ForeignCode_10,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_11,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OuterContext_12,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
#line 585 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_14,
#line 585 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34,
#line 585 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_35)
#line 585 "erl_call_gen.m"
{
#line 590 "erl_call_gen.m"
  {
#line 590 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__TypeCtorInfo_63_63;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__TypeInfo_66_66;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__TypeCtorInfo_71_71;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_16;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgTypes_17;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ArgModes_18;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputForeignArgs_19;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__OutputForeignArgs_20;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputVars_21;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__OutputVars_22;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputVarsNames_23;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__OutputVarsNames_24;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ForeignCodeExpr_25;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InnerFunStatement_27;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InnerFun_33;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_57_57;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_58_58;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_59_59;
#line 590 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_82;

#line 624 "erl_call_gen.m"
    {
#line 624 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_call_gen__ModuleInfo_16);
    }
#line 2340 "erl_backend.erl_call_gen.c"
    erl_backend__erl_call_gen__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 625 "erl_call_gen.m"
    {
#line 625 "erl_call_gen.m"
      mercury__list__map2_4_p_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[0], erl_backend__erl_call_gen__ForeignArgs_9, &erl_backend__erl_call_gen__ArgTypes_17, &erl_backend__erl_call_gen__ArgModes_18);
    }
#line 626 "erl_call_gen.m"
    {
#line 626 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__ModuleInfo_16, (MR_Integer) 0, erl_backend__erl_call_gen__ForeignArgs_9, erl_backend__erl_call_gen__ArgTypes_17, erl_backend__erl_call_gen__ArgModes_18, &erl_backend__erl_call_gen__InputForeignArgs_19, &erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
#line 2352 "erl_backend.erl_call_gen.c"
    erl_backend__erl_call_gen__TypeInfo_66_66 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0];
#line 630 "erl_call_gen.m"
    {
#line 630 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputVars_21 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeInfo_66_66, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[1], erl_backend__erl_call_gen__InputForeignArgs_19);
    }
#line 631 "erl_call_gen.m"
    {
#line 631 "erl_call_gen.m"
      erl_backend__erl_call_gen__OutputVars_22 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeInfo_66_66, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[2], erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
#line 2364 "erl_backend.erl_call_gen.c"
    erl_backend__erl_call_gen__TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 632 "erl_call_gen.m"
    {
#line 632 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputVarsNames_23 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeCtorInfo_71_71, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[3], erl_backend__erl_call_gen__InputForeignArgs_19);
    }
#line 633 "erl_call_gen.m"
    {
#line 633 "erl_call_gen.m"
      erl_backend__erl_call_gen__OutputVarsNames_24 = mercury__list__map_2_f_0(erl_backend__erl_call_gen__TypeCtorInfo_63_63, erl_backend__erl_call_gen__TypeCtorInfo_71_71, (MR_Word) &erl_backend__erl_call_gen_scalar_common_5[4], erl_backend__erl_call_gen__OutputForeignArgs_20);
    }
#line 635 "erl_call_gen.m"
    {
#line 635 "erl_call_gen.m"
      erl_backend__erl_call_gen__ForeignCodeExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 635 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 635 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 1) = ((MR_Box) (erl_backend__erl_call_gen__ForeignCode_10));
#line 635 "erl_call_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__ForeignCodeExpr_25, 2) = ((MR_Box) (erl_backend__erl_call_gen__OuterContext_12));
#line 635 "erl_call_gen.m"
    }
#line 650 "erl_call_gen.m"
#line 650 "erl_call_gen.m"
    switch (erl_backend__erl_call_gen__CodeModel_11) {
#line 650 "erl_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 650 "erl_call_gen.m"
      case (MR_Integer) 0:
#line 639 "erl_call_gen.m"
        {
#line 639 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__OutputExpr_26;
#line 639 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_56_56;

#line 648 "erl_call_gen.m"
          {
#line 648 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_56_56 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__OutputVarsNames_24);
          }
#line 647 "erl_call_gen.m"
          {
#line 647 "erl_call_gen.m"
            erl_backend__erl_call_gen__OutputExpr_26 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_call_gen__V_56_56);
          }
#line 649 "erl_call_gen.m"
          {
#line 649 "erl_call_gen.m"
            erl_backend__erl_call_gen__InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ForeignCodeExpr_25, erl_backend__erl_call_gen__OutputExpr_26);
          }
#line 639 "erl_call_gen.m"
        }
#line 650 "erl_call_gen.m"
        break;
#line 650 "erl_call_gen.m"
      case (MR_Integer) 2:
#line 667 "erl_call_gen.m"
        {
#line 668 "erl_call_gen.m"
          {
#line 668 "erl_call_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_ordinary_pragma_foreign_proc\'/8", (MR_String) "model_non foreign_procs in Erlang backend");
#line 668 "erl_call_gen.m"
            return;
          }
#line 667 "erl_call_gen.m"
        }
#line 650 "erl_call_gen.m"
        break;
#line 650 "erl_call_gen.m"
      case (MR_Integer) 1:
#line 651 "erl_call_gen.m"
        {
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__MaybePlaceOutputs_28;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__OutputTuple_29;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__OnTrue_31;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__OnFalse_32;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_45_45;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_46_46;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_47_47;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_48_48;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_52_52;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_53_53;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_54_54;
#line 651 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_55_55;

#line 661 "erl_call_gen.m"
          {
#line 661 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_46_46 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__OutputVarsNames_24);
          }
#line 660 "erl_call_gen.m"
          {
#line 660 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 660 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_46_46));
#line 660 "erl_call_gen.m"
          }
#line 660 "erl_call_gen.m"
          {
#line 660 "erl_call_gen.m"
            erl_backend__erl_call_gen__OutputTuple_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 660 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__OutputTuple_29, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_45_45));
#line 660 "erl_call_gen.m"
          }
#line 664 "erl_call_gen.m"
          {
#line 664 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_true_0_f_0();
          }
#line 664 "erl_call_gen.m"
          {
#line 664 "erl_call_gen.m"
            erl_backend__erl_call_gen__OnTrue_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "erl_call_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnTrue_31, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
#line 664 "erl_call_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnTrue_31, 1) = ((MR_Box) (erl_backend__erl_call_gen__OutputTuple_29));
#line 664 "erl_call_gen.m"
          }
#line 665 "erl_call_gen.m"
          {
#line 665 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_53_53 = erl_backend__elds__elds_false_0_f_0();
          }
#line 665 "erl_call_gen.m"
          {
#line 665 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_55_55 = erl_backend__elds__elds_fail_0_f_0();
          }
#line 665 "erl_call_gen.m"
          {
#line 665 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 665 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_54_54, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_55_55));
#line 665 "erl_call_gen.m"
          }
#line 665 "erl_call_gen.m"
          {
#line 665 "erl_call_gen.m"
            erl_backend__erl_call_gen__OnFalse_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "erl_call_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnFalse_32, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_53_53));
#line 665 "erl_call_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__OnFalse_32, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_54_54));
#line 665 "erl_call_gen.m"
          }
#line 662 "erl_call_gen.m"
          {
#line 662 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_48_48, 0) = ((MR_Box) (erl_backend__erl_call_gen__OnFalse_32));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "erl_call_gen.m"
          }
#line 662 "erl_call_gen.m"
          {
#line 662 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_call_gen__OnTrue_31));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_47_47, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_48_48));
#line 662 "erl_call_gen.m"
          }
#line 662 "erl_call_gen.m"
          {
#line 662 "erl_call_gen.m"
            erl_backend__erl_call_gen__MaybePlaceOutputs_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[3])));
#line 662 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__MaybePlaceOutputs_28, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_47_47));
#line 662 "erl_call_gen.m"
          }
#line 659 "erl_call_gen.m"
          {
#line 659 "erl_call_gen.m"
            erl_backend__erl_call_gen__InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__ForeignCodeExpr_25, erl_backend__erl_call_gen__MaybePlaceOutputs_28);
          }
#line 651 "erl_call_gen.m"
        }
#line 650 "erl_call_gen.m"
        break;
#line 650 "erl_call_gen.m"
    }
#line 670 "erl_call_gen.m"
    {
#line 670 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_58_58 = erl_backend__elds__terms_from_fixed_vars_1_f_0(erl_backend__erl_call_gen__InputVarsNames_23);
    }
#line 670 "erl_call_gen.m"
    {
#line 670 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_58_58));
#line 670 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__InnerFunStatement_27));
#line 670 "erl_call_gen.m"
    }
#line 670 "erl_call_gen.m"
    erl_backend__erl_call_gen__InnerFun_33 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_call_gen__V_57_57);
#line 674 "erl_call_gen.m"
    {
#line 674 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "erl_call_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_call_gen__InnerFun_33));
#line 674 "erl_call_gen.m"
    }
#line 140 "erl_call_gen.m"
    {
#line 140 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_82 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__InputVars_21);
    }
#line 141 "erl_call_gen.m"
    {
#line 141 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_11, erl_backend__erl_call_gen__V_59_59, erl_backend__erl_call_gen__InputExprs_82, erl_backend__erl_call_gen__OutputVars_22, erl_backend__erl_call_gen__MaybeSuccessExpr_13, erl_backend__erl_call_gen__Statement_14);
    }
#line 590 "erl_call_gen.m"
    *erl_backend__erl_call_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_34;
#line 590 "erl_call_gen.m"
  }
#line 585 "erl_call_gen.m"
}

#line 429 "erl_call_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
#line 429 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__SimpleExpr_7)
#line 429 "erl_call_gen.m"
{
#line 434 "erl_call_gen.m"
  {
#line 434 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 434 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__Expr_8;

#line 434 "erl_call_gen.m"
#line 434 "erl_call_gen.m"
    switch (MR_tag((MR_Word) erl_backend__erl_call_gen__SimpleExpr_7)) {
#line 434 "erl_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 434 "erl_call_gen.m"
      case (MR_Integer) 0:
#line 434 "erl_call_gen.m"
        {
#line 434 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
#line 434 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_28_28;

#line 437 "erl_call_gen.m"
          {
#line 437 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__elds_false_0_f_0();
          }
#line 437 "erl_call_gen.m"
          {
#line 437 "erl_call_gen.m"
            return erl_backend__erl_call_gen__Expr_8 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__V_28_28, erl_backend__erl_call_gen__Var_9);
          }
#line 434 "erl_call_gen.m"
        }
#line 434 "erl_call_gen.m"
        break;
#line 434 "erl_call_gen.m"
      case (MR_Integer) 1:
#line 440 "erl_call_gen.m"
        {
#line 440 "erl_call_gen.m"
          MR_Integer erl_backend__erl_call_gen__Int_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
#line 440 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_27_27;

#line 441 "erl_call_gen.m"
          {
#line 441 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_27_27, 0) = ((MR_Box) (erl_backend__erl_call_gen__Int_10));
#line 441 "erl_call_gen.m"
          }
#line 441 "erl_call_gen.m"
          {
#line 441 "erl_call_gen.m"
            erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_27_27));
#line 441 "erl_call_gen.m"
          }
#line 440 "erl_call_gen.m"
        }
#line 434 "erl_call_gen.m"
        break;
#line 434 "erl_call_gen.m"
      case (MR_Integer) 2:
#line 443 "erl_call_gen.m"
        {
#line 443 "erl_call_gen.m"
          MR_Float erl_backend__erl_call_gen__Float_11 = MR_unbox_float((MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)));
#line 443 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_26_26;

#line 444 "erl_call_gen.m"
          {
#line 444 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 444 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_26_26, 1) = MR_box_float(erl_backend__erl_call_gen__Float_11);
#line 444 "erl_call_gen.m"
          }
#line 444 "erl_call_gen.m"
          {
#line 444 "erl_call_gen.m"
            erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "erl_call_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_26_26));
#line 444 "erl_call_gen.m"
          }
#line 443 "erl_call_gen.m"
        }
#line 434 "erl_call_gen.m"
        break;
#line 434 "erl_call_gen.m"
      case (MR_Integer) 3:
#line 434 "erl_call_gen.m"
#line 434 "erl_call_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 0)))) {
#line 434 "erl_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 434 "erl_call_gen.m"
          case (MR_Integer) 0:
#line 446 "erl_call_gen.m"
            {
#line 446 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__StdOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 1)));
#line 446 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Expr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 2)));
#line 450 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Op_14;

#line 488 "erl_call_gen.m"
#line 488 "erl_call_gen.m"
              switch (erl_backend__erl_call_gen__StdOp_12) {
#line 488 "erl_call_gen.m"
                default:
#line 488 "erl_call_gen.m"
                  erl_backend__erl_call_gen__succeeded = MR_FALSE;
#line 488 "erl_call_gen.m"
                  break;
#line 488 "erl_call_gen.m"
                case (MR_Integer) 6:
#line 489 "erl_call_gen.m"
                  {
#line 489 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Op_14 = (MR_Integer) 2;
#line 489 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 489 "erl_call_gen.m"
                  }
#line 488 "erl_call_gen.m"
                  break;
#line 488 "erl_call_gen.m"
                case (MR_Integer) 7:
#line 490 "erl_call_gen.m"
                  {
#line 490 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Op_14 = (MR_Integer) 3;
#line 490 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 490 "erl_call_gen.m"
                  }
#line 488 "erl_call_gen.m"
                  break;
#line 488 "erl_call_gen.m"
              }
#line 450 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 448 "erl_call_gen.m"
                {
#line 448 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__SimpleExpr1_15;

#line 448 "erl_call_gen.m"
                  {
#line 448 "erl_call_gen.m"
                    erl_backend__erl_call_gen__SimpleExpr1_15 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr0_13);
                  }
#line 449 "erl_call_gen.m"
                  {
#line 449 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 449 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 449 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_14));
#line 449 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 2) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr1_15));
#line 449 "erl_call_gen.m"
                  }
#line 448 "erl_call_gen.m"
                }
#line 450 "erl_call_gen.m"
              else
#line 451 "erl_call_gen.m"
                {
#line 451 "erl_call_gen.m"
                  {
#line 451 "erl_call_gen.m"
                    mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "unary builtin not supported on erlang target");
                  }
#line 451 "erl_call_gen.m"
                }
#line 446 "erl_call_gen.m"
            }
#line 434 "erl_call_gen.m"
            break;
#line 434 "erl_call_gen.m"
          case (MR_Integer) 1:
#line 455 "erl_call_gen.m"
            {
#line 455 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Expr1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 2)));
#line 455 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Expr2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 3)));
#line 455 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__StdOp_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SimpleExpr_7, (MR_Integer) 1)));
#line 460 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Op_30;

#line 509 "erl_call_gen.m"
#line 509 "erl_call_gen.m"
              switch (MR_tag((MR_Word) erl_backend__erl_call_gen__StdOp_32)) {
#line 509 "erl_call_gen.m"
                default:
#line 509 "erl_call_gen.m"
                  erl_backend__erl_call_gen__succeeded = MR_FALSE;
#line 509 "erl_call_gen.m"
                  break;
#line 509 "erl_call_gen.m"
                case (MR_Integer) 0:
#line 509 "erl_call_gen.m"
#line 509 "erl_call_gen.m"
                  switch (MR_unmkbody(erl_backend__erl_call_gen__StdOp_32)) {
#line 509 "erl_call_gen.m"
                    default:
#line 509 "erl_call_gen.m"
                      erl_backend__erl_call_gen__succeeded = MR_FALSE;
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 0:
#line 510 "erl_call_gen.m"
                      {
#line 510 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 5;
#line 510 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 510 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 1:
#line 511 "erl_call_gen.m"
                      {
#line 511 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 6;
#line 511 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 511 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 2:
#line 512 "erl_call_gen.m"
                      {
#line 512 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 0;
#line 512 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 512 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 3:
#line 513 "erl_call_gen.m"
                      {
#line 513 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 2;
#line 513 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 513 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 4:
#line 514 "erl_call_gen.m"
                      {
#line 514 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 3;
#line 514 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 514 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 5:
#line 515 "erl_call_gen.m"
                      {
#line 515 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 9;
#line 515 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 515 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 6:
#line 516 "erl_call_gen.m"
                      {
#line 516 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 10;
#line 516 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 516 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 7:
#line 517 "erl_call_gen.m"
                      {
#line 517 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 4;
#line 517 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 517 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 8:
#line 518 "erl_call_gen.m"
                      {
#line 518 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 7;
#line 518 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 518 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 9:
#line 519 "erl_call_gen.m"
                      {
#line 519 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 8;
#line 519 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 519 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 10:
#line 520 "erl_call_gen.m"
                      {
#line 520 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 17;
#line 520 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 520 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 11:
#line 521 "erl_call_gen.m"
                      {
#line 521 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 18;
#line 521 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 521 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 12:
#line 522 "erl_call_gen.m"
                      {
#line 522 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
#line 522 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 522 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 13:
#line 523 "erl_call_gen.m"
                      {
#line 523 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
#line 523 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 523 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 16:
#line 525 "erl_call_gen.m"
                      {
#line 525 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
#line 525 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 525 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 17:
#line 526 "erl_call_gen.m"
                      {
#line 526 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
#line 526 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 526 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 18:
#line 527 "erl_call_gen.m"
                      {
#line 527 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
#line 527 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 527 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 19:
#line 528 "erl_call_gen.m"
                      {
#line 528 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
#line 528 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 528 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 20:
#line 529 "erl_call_gen.m"
                      {
#line 529 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
#line 529 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 529 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 21:
#line 530 "erl_call_gen.m"
                      {
#line 530 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
#line 530 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 530 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 23:
#line 531 "erl_call_gen.m"
                      {
#line 531 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
#line 531 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 531 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 24:
#line 532 "erl_call_gen.m"
                      {
#line 532 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
#line 532 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 532 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 25:
#line 533 "erl_call_gen.m"
                      {
#line 533 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
#line 533 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 533 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 26:
#line 534 "erl_call_gen.m"
                      {
#line 534 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
#line 534 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 534 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 28:
#line 535 "erl_call_gen.m"
                      {
#line 535 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 5;
#line 535 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 535 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 29:
#line 536 "erl_call_gen.m"
                      {
#line 536 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 6;
#line 536 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 536 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 30:
#line 537 "erl_call_gen.m"
                      {
#line 537 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 0;
#line 537 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 537 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 31:
#line 538 "erl_call_gen.m"
                      {
#line 538 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 1;
#line 538 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 538 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 32:
#line 539 "erl_call_gen.m"
                      {
#line 539 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
#line 539 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 539 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 33:
#line 540 "erl_call_gen.m"
                      {
#line 540 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 16;
#line 540 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 540 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 34:
#line 541 "erl_call_gen.m"
                      {
#line 541 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
#line 541 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 541 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 35:
#line 542 "erl_call_gen.m"
                      {
#line 542 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 14;
#line 542 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 542 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 36:
#line 543 "erl_call_gen.m"
                      {
#line 543 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 11;
#line 543 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 543 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 37:
#line 544 "erl_call_gen.m"
                      {
#line 544 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 13;
#line 544 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 544 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 41:
#line 545 "erl_call_gen.m"
                      {
#line 545 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
#line 545 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 545 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                    case (MR_Integer) 42:
#line 546 "erl_call_gen.m"
                      {
#line 546 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Op_30 = (MR_Integer) 12;
#line 546 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 546 "erl_call_gen.m"
                      }
#line 509 "erl_call_gen.m"
                      break;
#line 509 "erl_call_gen.m"
                  }
#line 509 "erl_call_gen.m"
                  break;
#line 509 "erl_call_gen.m"
                case (MR_Integer) 2:
#line 524 "erl_call_gen.m"
                  {
#line 524 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Op_30 = (MR_Integer) 15;
#line 524 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 524 "erl_call_gen.m"
                  }
#line 509 "erl_call_gen.m"
                  break;
#line 509 "erl_call_gen.m"
              }
#line 460 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 457 "erl_call_gen.m"
                {
#line 457 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__SimpleExpr2_18;
#line 457 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__SimpleExpr1_29;

#line 457 "erl_call_gen.m"
                  {
#line 457 "erl_call_gen.m"
                    erl_backend__erl_call_gen__SimpleExpr1_29 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr1_16);
                  }
#line 458 "erl_call_gen.m"
                  {
#line 458 "erl_call_gen.m"
                    erl_backend__erl_call_gen__SimpleExpr2_18 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Expr2_17);
                  }
#line 459 "erl_call_gen.m"
                  {
#line 459 "erl_call_gen.m"
                    erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 459 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 1) = ((MR_Box) (erl_backend__erl_call_gen__Op_30));
#line 459 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 2) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr1_29));
#line 459 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Expr_8, 3) = ((MR_Box) (erl_backend__erl_call_gen__SimpleExpr2_18));
#line 459 "erl_call_gen.m"
                  }
#line 457 "erl_call_gen.m"
                }
#line 460 "erl_call_gen.m"
              else
#line 463 "erl_call_gen.m"
                {
#line 460 "erl_call_gen.m"
                  erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__StdOp_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40))));
#line 463 "erl_call_gen.m"
                  if (erl_backend__erl_call_gen__succeeded)
#line 462 "erl_call_gen.m"
                    {
#line 462 "erl_call_gen.m"
                      MR_Word erl_backend__erl_call_gen__V_19_19;

#line 462 "erl_call_gen.m"
                      {
#line 462 "erl_call_gen.m"
                        erl_backend__erl_call_gen__V_19_19 = erl_backend__elds__elds_false_0_f_0();
                      }
#line 462 "erl_call_gen.m"
                      {
#line 462 "erl_call_gen.m"
                        erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "erl_call_gen.m"
                        MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_19_19));
#line 462 "erl_call_gen.m"
                      }
#line 462 "erl_call_gen.m"
                    }
#line 463 "erl_call_gen.m"
                  else
#line 464 "erl_call_gen.m"
                    {
#line 464 "erl_call_gen.m"
                      {
#line 464 "erl_call_gen.m"
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_call_gen", (MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "binary builtin not supported on erlang target");
                      }
#line 464 "erl_call_gen.m"
                    }
#line 463 "erl_call_gen.m"
                }
#line 455 "erl_call_gen.m"
            }
#line 434 "erl_call_gen.m"
            break;
#line 434 "erl_call_gen.m"
        }
#line 434 "erl_call_gen.m"
        break;
#line 434 "erl_call_gen.m"
    }
#line 434 "erl_call_gen.m"
    return erl_backend__erl_call_gen__Expr_8;
#line 434 "erl_call_gen.m"
  }
#line 429 "erl_call_gen.m"
}

#line 167 "erl_call_gen.m"
static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__InputExprs_9,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
#line 167 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
#line 167 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_12)
#line 167 "erl_call_gen.m"
{
#line 174 "erl_call_gen.m"
  {
#line 174 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 174 "erl_call_gen.m"
#line 174 "erl_call_gen.m"
    switch (erl_backend__erl_call_gen__CodeModel_7) {
#line 174 "erl_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 174 "erl_call_gen.m"
      case (MR_Integer) 0:
#line 193 "erl_call_gen.m"
        {
#line 193 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__CallExpr_20;

#line 194 "erl_call_gen.m"
          {
#line 194 "erl_call_gen.m"
            erl_backend__erl_call_gen__CallExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 194 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 194 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
#line 194 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_20, 2) = ((MR_Box) (erl_backend__erl_call_gen__InputExprs_9));
#line 194 "erl_call_gen.m"
          }
#line 207 "erl_call_gen.m"
          if ((erl_backend__erl_call_gen__OutputVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "erl_call_gen.m"
            {
#line 199 "erl_call_gen.m"
              if ((erl_backend__erl_call_gen__MaybeSuccessExpr_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "erl_call_gen.m"
                erl_backend__erl_call_gen__succeeded = MR_TRUE;
#line 199 "erl_call_gen.m"
              else
#line 198 "erl_call_gen.m"
                {
#line 198 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeSuccessExpr_11, (MR_Integer) 0)));
#line 198 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__V_27_27;
#line 198 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__V_28_28;

#line 198 "erl_call_gen.m"
                  erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_26_26)) == (MR_mktag((MR_Integer) 2)));
#line 198 "erl_call_gen.m"
                  if (erl_backend__erl_call_gen__succeeded)
#line 198 "erl_call_gen.m"
                    {
#line 198 "erl_call_gen.m"
                      erl_backend__erl_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_26_26, (MR_Integer) 0)));
#line 198 "erl_call_gen.m"
                      {
#line 198 "erl_call_gen.m"
                        erl_backend__erl_call_gen__V_28_28 = erl_backend__elds__elds_empty_tuple_0_f_0();
                      }
#line 198 "erl_call_gen.m"
                      {
#line 198 "erl_call_gen.m"
                        erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_call_gen__V_27_27, erl_backend__erl_call_gen__V_28_28);
                      }
#line 198 "erl_call_gen.m"
                    }
#line 198 "erl_call_gen.m"
                }
#line 204 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 203 "erl_call_gen.m"
                *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_20;
#line 204 "erl_call_gen.m"
              else
#line 205 "erl_call_gen.m"
                {
#line 205 "erl_call_gen.m"
                  *erl_backend__erl_call_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__CallExpr_20, erl_backend__erl_call_gen__MaybeSuccessExpr_11);
                }
#line 204 "erl_call_gen.m"
            }
#line 207 "erl_call_gen.m"
          else
#line 208 "erl_call_gen.m"
            {
#line 208 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__UnpackTerm_23;
#line 208 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_25_25;
#line 211 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_29_29;

#line 209 "erl_call_gen.m"
              {
#line 209 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_25_25 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
              }
#line 209 "erl_call_gen.m"
              {
#line 209 "erl_call_gen.m"
                erl_backend__erl_call_gen__UnpackTerm_23 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_call_gen__V_25_25);
              }
#line 211 "erl_call_gen.m"
              erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__MaybeSuccessExpr_11)) == (MR_mktag((MR_Integer) 1)));
#line 211 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 211 "erl_call_gen.m"
                {
#line 211 "erl_call_gen.m"
                  erl_backend__erl_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeSuccessExpr_11, (MR_Integer) 0)));
#line 211 "erl_call_gen.m"
                  {
#line 211 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__erl_call_gen__UnpackTerm_23, erl_backend__erl_call_gen__V_29_29);
                  }
#line 211 "erl_call_gen.m"
                }
#line 215 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 214 "erl_call_gen.m"
                *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_20;
#line 215 "erl_call_gen.m"
              else
#line 216 "erl_call_gen.m"
                {
#line 216 "erl_call_gen.m"
                  MR_Word erl_backend__erl_call_gen__AssignCall_24;

#line 216 "erl_call_gen.m"
                  {
#line 216 "erl_call_gen.m"
                    erl_backend__erl_call_gen__AssignCall_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 216 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 216 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 1) = ((MR_Box) (erl_backend__erl_call_gen__UnpackTerm_23));
#line 216 "erl_call_gen.m"
                    MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AssignCall_24, 2) = ((MR_Box) (erl_backend__erl_call_gen__CallExpr_20));
#line 216 "erl_call_gen.m"
                  }
#line 217 "erl_call_gen.m"
                  {
#line 217 "erl_call_gen.m"
                    *erl_backend__erl_call_gen__Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_call_gen__AssignCall_24, erl_backend__erl_call_gen__MaybeSuccessExpr_11);
                  }
#line 216 "erl_call_gen.m"
                }
#line 208 "erl_call_gen.m"
            }
#line 193 "erl_call_gen.m"
        }
#line 174 "erl_call_gen.m"
        break;
#line 174 "erl_call_gen.m"
      case (MR_Integer) 2:
#line 183 "erl_call_gen.m"
        {
#line 183 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__SuccessExpr_14;
#line 183 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__SuccessCont_38;
#line 183 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_43_43;
#line 183 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_44_44;
#line 259 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__SuccessCont1_37;
#line 254 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__TypeInfo_22_48;
#line 254 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_39_39;
#line 254 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_40_40;
#line 254 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_47_47;

#line 184 "erl_call_gen.m"
          {
#line 184 "erl_call_gen.m"
            erl_backend__erl_call_gen__SuccessExpr_14 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_11);
          }
#line 254 "erl_call_gen.m"
          erl_backend__erl_call_gen__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_call_gen__SuccessExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 254 "erl_call_gen.m"
          if (erl_backend__erl_call_gen__succeeded)
#line 254 "erl_call_gen.m"
            {
#line 254 "erl_call_gen.m"
              erl_backend__erl_call_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 1)));
#line 254 "erl_call_gen.m"
              erl_backend__erl_call_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__SuccessExpr_14, (MR_Integer) 2)));
#line 254 "erl_call_gen.m"
              erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 254 "erl_call_gen.m"
              if (erl_backend__erl_call_gen__succeeded)
#line 254 "erl_call_gen.m"
                {
#line 254 "erl_call_gen.m"
                  erl_backend__erl_call_gen__SuccessCont1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_39_39, (MR_Integer) 0)));
#line 255 "erl_call_gen.m"
                  {
#line 255 "erl_call_gen.m"
                    erl_backend__erl_call_gen__V_47_47 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
                  }
#line 3615 "erl_backend.erl_call_gen.c"
                  erl_backend__erl_call_gen__TypeInfo_22_48 = (MR_Word) &erl_backend__erl_call_gen_scalar_common_1[1];
#line 255 "erl_call_gen.m"
                  {
#line 255 "erl_call_gen.m"
                    erl_backend__erl_call_gen__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_call_gen__TypeInfo_22_48, ((MR_Box) (erl_backend__erl_call_gen__V_40_40)), ((MR_Box) (erl_backend__erl_call_gen__V_47_47)));
                  }
#line 254 "erl_call_gen.m"
                }
#line 254 "erl_call_gen.m"
            }
#line 259 "erl_call_gen.m"
          if (erl_backend__erl_call_gen__succeeded)
#line 258 "erl_call_gen.m"
            erl_backend__erl_call_gen__SuccessCont_38 = erl_backend__erl_call_gen__SuccessCont1_37;
#line 259 "erl_call_gen.m"
          else
#line 260 "erl_call_gen.m"
            {
#line 260 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_41_41;
#line 260 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_42_42;

#line 260 "erl_call_gen.m"
              {
#line 260 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_42_42 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
              }
#line 260 "erl_call_gen.m"
              {
#line 260 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_41_41, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_42_42));
#line 260 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_41_41, 1) = ((MR_Box) (erl_backend__erl_call_gen__SuccessExpr_14));
#line 260 "erl_call_gen.m"
              }
#line 260 "erl_call_gen.m"
              erl_backend__erl_call_gen__SuccessCont_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_call_gen__V_41_41);
#line 260 "erl_call_gen.m"
            }
#line 263 "erl_call_gen.m"
          {
#line 263 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_44_44, 0) = ((MR_Box) (erl_backend__erl_call_gen__SuccessCont_38));
#line 263 "erl_call_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "erl_call_gen.m"
          }
#line 263 "erl_call_gen.m"
          {
#line 263 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__InputExprs_9, erl_backend__erl_call_gen__V_44_44);
          }
#line 263 "erl_call_gen.m"
          {
#line 263 "erl_call_gen.m"
            MR_Word base;
#line 263 "erl_call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 263 "erl_call_gen.m"
            *erl_backend__erl_call_gen__Statement_12 = base;
#line 263 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 263 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
#line 263 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_43_43));
#line 263 "erl_call_gen.m"
          }
#line 183 "erl_call_gen.m"
        }
#line 174 "erl_call_gen.m"
        break;
#line 174 "erl_call_gen.m"
      case (MR_Integer) 1:
#line 178 "erl_call_gen.m"
        {
#line 178 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__SuccessExpr_13;
#line 178 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__CallExpr_54;
#line 178 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__UnpackTerm_55;
#line 178 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_59_59;
#line 229 "erl_call_gen.m"
          MR_Word erl_backend__erl_call_gen__V_66_66;

#line 179 "erl_call_gen.m"
          {
#line 179 "erl_call_gen.m"
            erl_backend__erl_call_gen__SuccessExpr_13 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_call_gen__MaybeSuccessExpr_11);
          }
#line 226 "erl_call_gen.m"
          {
#line 226 "erl_call_gen.m"
            erl_backend__erl_call_gen__CallExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 226 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 226 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallTarget_8));
#line 226 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__CallExpr_54, 2) = ((MR_Box) (erl_backend__erl_call_gen__InputExprs_9));
#line 226 "erl_call_gen.m"
          }
#line 227 "erl_call_gen.m"
          {
#line 227 "erl_call_gen.m"
            erl_backend__erl_call_gen__V_59_59 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__OutputVars_10);
          }
#line 227 "erl_call_gen.m"
          {
#line 227 "erl_call_gen.m"
            erl_backend__erl_call_gen__UnpackTerm_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__UnpackTerm_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 227 "erl_call_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__UnpackTerm_55, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_59_59));
#line 227 "erl_call_gen.m"
          }
#line 229 "erl_call_gen.m"
          erl_backend__erl_call_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_call_gen__SuccessExpr_13)) == (MR_mktag((MR_Integer) 2)));
#line 229 "erl_call_gen.m"
          if (erl_backend__erl_call_gen__succeeded)
#line 229 "erl_call_gen.m"
            {
#line 229 "erl_call_gen.m"
              erl_backend__erl_call_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SuccessExpr_13, (MR_Integer) 0)));
#line 229 "erl_call_gen.m"
              {
#line 229 "erl_call_gen.m"
                erl_backend__erl_call_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_call_gen__UnpackTerm_55, erl_backend__erl_call_gen__V_66_66);
              }
#line 229 "erl_call_gen.m"
            }
#line 233 "erl_call_gen.m"
          if (erl_backend__erl_call_gen__succeeded)
#line 232 "erl_call_gen.m"
            *erl_backend__erl_call_gen__Statement_12 = erl_backend__erl_call_gen__CallExpr_54;
#line 233 "erl_call_gen.m"
          else
#line 238 "erl_call_gen.m"
            {
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__Statement0_56;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__TrueCase_57;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__FalseCase_58;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_60_60;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_61_61;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_64_64;
#line 238 "erl_call_gen.m"
              MR_Word erl_backend__erl_call_gen__V_65_65;

#line 239 "erl_call_gen.m"
              {
#line 239 "erl_call_gen.m"
                erl_backend__erl_call_gen__TrueCase_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__UnpackTerm_55));
#line 239 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__SuccessExpr_13));
#line 239 "erl_call_gen.m"
              }
#line 240 "erl_call_gen.m"
              {
#line 240 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_65_65 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 240 "erl_call_gen.m"
              {
#line 240 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "erl_call_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_64_64, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_65_65));
#line 240 "erl_call_gen.m"
              }
#line 240 "erl_call_gen.m"
              {
#line 240 "erl_call_gen.m"
                erl_backend__erl_call_gen__FalseCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "erl_call_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_58, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_64_64));
#line 240 "erl_call_gen.m"
              }
#line 238 "erl_call_gen.m"
              {
#line 238 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_58));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "erl_call_gen.m"
              }
#line 238 "erl_call_gen.m"
              {
#line 238 "erl_call_gen.m"
                erl_backend__erl_call_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_60_60, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_57));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_60_60, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_61_61));
#line 238 "erl_call_gen.m"
              }
#line 238 "erl_call_gen.m"
              {
#line 238 "erl_call_gen.m"
                erl_backend__erl_call_gen__Statement0_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 1) = ((MR_Box) (erl_backend__erl_call_gen__CallExpr_54));
#line 238 "erl_call_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Statement0_56, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_60_60));
#line 238 "erl_call_gen.m"
              }
#line 241 "erl_call_gen.m"
              {
#line 241 "erl_call_gen.m"
                erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_call_gen__Statement0_56, erl_backend__erl_call_gen__Statement_12);
#line 241 "erl_call_gen.m"
                return;
              }
#line 238 "erl_call_gen.m"
            }
#line 178 "erl_call_gen.m"
        }
#line 174 "erl_call_gen.m"
        break;
#line 174 "erl_call_gen.m"
    }
#line 174 "erl_call_gen.m"
  }
#line 167 "erl_call_gen.m"
}

#line 153 "erl_call_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ModuleInfo_5,
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__VarTypes_6,
#line 153 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Var_7)
#line 153 "erl_call_gen.m"
{
#line 163 "erl_call_gen.m"
  {
#line 163 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 163 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__Expr_8;
#line 159 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__Type_9;
#line 159 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_10_10;

#line 159 "erl_call_gen.m"
    {
#line 159 "erl_call_gen.m"
      erl_backend__erl_call_gen__succeeded = parse_tree__prog_data__search_var_type_3_p_0(erl_backend__erl_call_gen__VarTypes_6, erl_backend__erl_call_gen__Var_7, &erl_backend__erl_call_gen__Type_9);
    }
#line 159 "erl_call_gen.m"
    if (erl_backend__erl_call_gen__succeeded)
#line 159 "erl_call_gen.m"
      {
#line 160 "erl_call_gen.m"
        {
#line 160 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_10_10 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_call_gen__ModuleInfo_5, erl_backend__erl_call_gen__Type_9);
        }
#line 160 "erl_call_gen.m"
        erl_backend__erl_call_gen__succeeded = (erl_backend__erl_call_gen__V_10_10 == (MR_Integer) 0);
#line 159 "erl_call_gen.m"
      }
#line 163 "erl_call_gen.m"
    if (erl_backend__erl_call_gen__succeeded)
#line 162 "erl_call_gen.m"
      {
#line 162 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_11_11;

#line 162 "erl_call_gen.m"
        {
#line 162 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_11_11 = erl_backend__elds__elds_false_0_f_0();
        }
#line 162 "erl_call_gen.m"
        {
#line 162 "erl_call_gen.m"
          erl_backend__erl_call_gen__Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "erl_call_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__Expr_8, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_11_11));
#line 162 "erl_call_gen.m"
        }
#line 162 "erl_call_gen.m"
      }
#line 163 "erl_call_gen.m"
    else
#line 164 "erl_call_gen.m"
      {
#line 164 "erl_call_gen.m"
        return erl_backend__erl_call_gen__Expr_8 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Var_7);
      }
#line 163 "erl_call_gen.m"
    return erl_backend__erl_call_gen__Expr_8;
#line 163 "erl_call_gen.m"
  }
#line 153 "erl_call_gen.m"
}

#line 148 "erl_call_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__closure_arg,
#line 148 "erl_call_gen.m"
  MR_Box erl_backend__erl_call_gen__wrapper_arg_1)
#line 148 "erl_call_gen.m"
{
#line 148 "erl_call_gen.m"
  {
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
    MR_Box erl_backend__erl_call_gen__closure = erl_backend__erl_call_gen__closure_arg;
#line 148 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__conv0_Expr_8;

#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_call_gen__wrapper_arg_1));
    }
#line 148 "erl_call_gen.m"
    erl_backend__erl_call_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_call_gen__conv0_Expr_8));
#line 148 "erl_call_gen.m"
    return erl_backend__erl_call_gen__wrapper_arg_2;
#line 148 "erl_call_gen.m"
  }
#line 148 "erl_call_gen.m"
}

#line 97 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0(
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Info_8,
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_9,
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CallTarget_10,
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__InputVars_11,
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OutputVars_12,
#line 97 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_13,
#line 97 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_14)
#line 97 "erl_call_gen.m"
{
#line 145 "erl_call_gen.m"
  {
#line 145 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 145 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__ModuleInfo_15;
#line 145 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__VarTypes_16;
#line 145 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_17;
#line 145 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__V_18_18;

#line 146 "erl_call_gen.m"
    {
#line 146 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_call_gen__Info_8, &erl_backend__erl_call_gen__ModuleInfo_15);
    }
#line 147 "erl_call_gen.m"
    {
#line 147 "erl_call_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_call_gen__Info_8, &erl_backend__erl_call_gen__VarTypes_16);
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0]));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 1) = ((MR_Box) (erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 3) = ((MR_Box) (erl_backend__erl_call_gen__ModuleInfo_15));
#line 148 "erl_call_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_18_18, 4) = ((MR_Box) (erl_backend__erl_call_gen__VarTypes_16));
#line 148 "erl_call_gen.m"
    }
#line 148 "erl_call_gen.m"
    {
#line 148 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_17 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_call_gen_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_call_gen__V_18_18, erl_backend__erl_call_gen__InputVars_11);
    }
#line 150 "erl_call_gen.m"
    {
#line 150 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_9, erl_backend__erl_call_gen__CallTarget_10, erl_backend__erl_call_gen__InputExprs_17, erl_backend__erl_call_gen__OutputVars_12, erl_backend__erl_call_gen__MaybeSuccessExpr_13, erl_backend__erl_call_gen__Statement_14);
#line 150 "erl_call_gen.m"
      return;
    }
#line 145 "erl_call_gen.m"
  }
#line 97 "erl_call_gen.m"
}

#line 87 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_6_p_0(
#line 87 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_7,
#line 87 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CallTarget_8,
#line 87 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__InputVars_9,
#line 87 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OutputVars_10,
#line 87 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_11,
#line 87 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_12)
#line 87 "erl_call_gen.m"
{
#line 139 "erl_call_gen.m"
  {
#line 139 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 139 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__InputExprs_13;

#line 140 "erl_call_gen.m"
    {
#line 140 "erl_call_gen.m"
      erl_backend__erl_call_gen__InputExprs_13 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_call_gen__InputVars_9);
    }
#line 141 "erl_call_gen.m"
    {
#line 141 "erl_call_gen.m"
      erl_backend__erl_call_gen__erl_make_call_2_6_p_0(erl_backend__erl_call_gen__CodeModel_7, erl_backend__erl_call_gen__CallTarget_8, erl_backend__erl_call_gen__InputExprs_13, erl_backend__erl_call_gen__OutputVars_10, erl_backend__erl_call_gen__MaybeSuccessExpr_11, erl_backend__erl_call_gen__Statement_12);
#line 141 "erl_call_gen.m"
      return;
    }
#line 139 "erl_call_gen.m"
  }
#line 87 "erl_call_gen.m"
}

#line 75 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ForeignArgs_10,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__PragmaImpl_12,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__OuterContext_14,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 75 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 75 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
#line 75 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
#line 75 "erl_call_gen.m"
{
#line 566 "erl_call_gen.m"
  {
#line 566 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;
#line 566 "erl_call_gen.m"
    MR_String erl_backend__erl_call_gen__ForeignCode_18 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__PragmaImpl_12, (MR_Integer) 0)));
#line 566 "erl_call_gen.m"
    MR_Word erl_backend__erl_call_gen__MaybeContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__PragmaImpl_12, (MR_Integer) 1)));

#line 578 "erl_call_gen.m"
    if ((erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "erl_call_gen.m"
      {
#line 569 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__Context_20;

#line 572 "erl_call_gen.m"
        if ((erl_backend__erl_call_gen__MaybeContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "erl_call_gen.m"
          erl_backend__erl_call_gen__Context_20 = erl_backend__erl_call_gen__OuterContext_14;
#line 572 "erl_call_gen.m"
        else
#line 571 "erl_call_gen.m"
          erl_backend__erl_call_gen__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeContext_19, (MR_Integer) 0)));
#line 576 "erl_call_gen.m"
        {
#line 576 "erl_call_gen.m"
          erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(erl_backend__erl_call_gen__ForeignArgs_10, erl_backend__erl_call_gen__ForeignCode_18, erl_backend__erl_call_gen__CodeModel_13, erl_backend__erl_call_gen__Context_20, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
#line 576 "erl_call_gen.m"
          return;
        }
#line 569 "erl_call_gen.m"
      }
#line 578 "erl_call_gen.m"
    else
#line 579 "erl_call_gen.m"
      {
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__TraceRuntimeCond_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__MaybeTraceRuntimeCond_11, (MR_Integer) 0)));
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__CondExpr_31;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__Send_32;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__SendMsg_34;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__Result_35;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__ResultExpr_36;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__Receive_37;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__AckPattern_38;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__SendAndRecv_39;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__TrueCase_40;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__FalseCase_41;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_45_45;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_46_46;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_50_50;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_51_51;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_52_52;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_56_56;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_57_57;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_59_59;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_63_63;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_65_65;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_66_66;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_68_68;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_69_69;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_70_70;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_71_71;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_72_72;
#line 579 "erl_call_gen.m"
        MR_Word erl_backend__erl_call_gen__V_73_73;

#line 707 "erl_call_gen.m"
        {
#line 707 "erl_call_gen.m"
          erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(erl_backend__erl_call_gen__TraceRuntimeCond_21, &erl_backend__erl_call_gen__CondExpr_31, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42);
        }
#line 720 "erl_call_gen.m"
        {
#line 720 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_52_52 = erl_backend__elds__elds_call_self_0_f_0();
        }
#line 721 "erl_call_gen.m"
        {
#line 721 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_52_52));
#line 721 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "erl_call_gen.m"
        }
#line 719 "erl_call_gen.m"
        {
#line 719 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_call_gen__CondExpr_31));
#line 719 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_50_50, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_51_51));
#line 719 "erl_call_gen.m"
        }
#line 718 "erl_call_gen.m"
        {
#line 718 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[1])));
#line 718 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_46_46, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_50_50));
#line 718 "erl_call_gen.m"
        }
#line 717 "erl_call_gen.m"
        {
#line 717 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 717 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_46_46));
#line 717 "erl_call_gen.m"
        }
#line 717 "erl_call_gen.m"
        {
#line 717 "erl_call_gen.m"
          erl_backend__erl_call_gen__SendMsg_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "erl_call_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__SendMsg_34, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_45_45));
#line 717 "erl_call_gen.m"
        }
#line 715 "erl_call_gen.m"
        {
#line 715 "erl_call_gen.m"
          erl_backend__erl_call_gen__Send_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 715 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 715 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[0])));
#line 715 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Send_32, 2) = ((MR_Box) (erl_backend__erl_call_gen__SendMsg_34));
#line 715 "erl_call_gen.m"
        }
#line 730 "erl_call_gen.m"
        {
#line 730 "erl_call_gen.m"
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Result", &erl_backend__erl_call_gen__Result_35, erl_backend__erl_call_gen__STATE_VARIABLE_Info_21_42, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
        }
#line 731 "erl_call_gen.m"
        {
#line 731 "erl_call_gen.m"
          erl_backend__erl_call_gen__ResultExpr_36 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_call_gen__Result_35);
        }
#line 737 "erl_call_gen.m"
        {
#line 737 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_63_63, 0) = ((MR_Box) (erl_backend__erl_call_gen__ResultExpr_36));
#line 737 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "erl_call_gen.m"
        }
#line 735 "erl_call_gen.m"
        {
#line 735 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_2[2])));
#line 735 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_59_59, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_63_63));
#line 735 "erl_call_gen.m"
        }
#line 734 "erl_call_gen.m"
        {
#line 734 "erl_call_gen.m"
          erl_backend__erl_call_gen__AckPattern_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AckPattern_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 734 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__AckPattern_38, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_59_59));
#line 734 "erl_call_gen.m"
        }
#line 733 "erl_call_gen.m"
        {
#line 733 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 0) = ((MR_Box) (erl_backend__erl_call_gen__AckPattern_38));
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__V_57_57, 1) = ((MR_Box) (erl_backend__erl_call_gen__ResultExpr_36));
#line 733 "erl_call_gen.m"
        }
#line 733 "erl_call_gen.m"
        {
#line 733 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_56_56, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_57_57));
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "erl_call_gen.m"
        }
#line 733 "erl_call_gen.m"
        {
#line 733 "erl_call_gen.m"
          erl_backend__erl_call_gen__Receive_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Receive_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 733 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_call_gen__Receive_37, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_56_56));
#line 733 "erl_call_gen.m"
        }
#line 739 "erl_call_gen.m"
        {
#line 739 "erl_call_gen.m"
          erl_backend__erl_call_gen__SendAndRecv_39 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_call_gen__Send_32, erl_backend__erl_call_gen__Receive_37);
        }
#line 749 "erl_call_gen.m"
        {
#line 749 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_68_68 = erl_backend__elds__elds_true_0_f_0();
        }
#line 749 "erl_call_gen.m"
        {
#line 749 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_70_70 = erl_backend__elds__elds_empty_tuple_0_f_0();
        }
#line 749 "erl_call_gen.m"
        {
#line 749 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 749 "erl_call_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_69_69, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_70_70));
#line 749 "erl_call_gen.m"
        }
#line 749 "erl_call_gen.m"
        {
#line 749 "erl_call_gen.m"
          erl_backend__erl_call_gen__TrueCase_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_40, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_68_68));
#line 749 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__TrueCase_40, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_69_69));
#line 749 "erl_call_gen.m"
        }
#line 750 "erl_call_gen.m"
        {
#line 750 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_71_71 = erl_backend__elds__elds_false_0_f_0();
        }
#line 750 "erl_call_gen.m"
        {
#line 750 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_73_73 = erl_backend__elds__elds_fail_0_f_0();
        }
#line 750 "erl_call_gen.m"
        {
#line 750 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "erl_call_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_call_gen__V_72_72, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_73_73));
#line 750 "erl_call_gen.m"
        }
#line 750 "erl_call_gen.m"
        {
#line 750 "erl_call_gen.m"
          erl_backend__erl_call_gen__FalseCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_41, 0) = ((MR_Box) (erl_backend__erl_call_gen__V_71_71));
#line 750 "erl_call_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_call_gen__FalseCase_41, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_72_72));
#line 750 "erl_call_gen.m"
        }
#line 748 "erl_call_gen.m"
        {
#line 748 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_66_66, 0) = ((MR_Box) (erl_backend__erl_call_gen__FalseCase_41));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "erl_call_gen.m"
        }
#line 748 "erl_call_gen.m"
        {
#line 748 "erl_call_gen.m"
          erl_backend__erl_call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_call_gen__TrueCase_40));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_call_gen__V_65_65, 1) = ((MR_Box) (erl_backend__erl_call_gen__V_66_66));
#line 748 "erl_call_gen.m"
        }
#line 748 "erl_call_gen.m"
        {
#line 748 "erl_call_gen.m"
          MR_Word base;
#line 748 "erl_call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 748 "erl_call_gen.m"
          *erl_backend__erl_call_gen__Statement_16 = base;
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_call_gen__SendAndRecv_39));
#line 748 "erl_call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_call_gen__V_65_65));
#line 748 "erl_call_gen.m"
        }
#line 579 "erl_call_gen.m"
      }
#line 566 "erl_call_gen.m"
  }
#line 75 "erl_call_gen.m"
}

#line 70 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_cast_6_p_0(
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___Context_7,
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_8,
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_9,
#line 70 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_10,
#line 70 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22,
#line 70 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_23)
#line 70 "erl_call_gen.m"
{
#line 341 "erl_call_gen.m"
  {
#line 341 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 341 "erl_call_gen.m"
    {
#line 341 "erl_call_gen.m"
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(erl_backend__erl_call_gen__ArgVars_8, erl_backend__erl_call_gen__MaybeSuccessExpr_9, erl_backend__erl_call_gen__Statement_10, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_call_gen__STATE_VARIABLE_Info_23);
#line 341 "erl_call_gen.m"
      return;
    }
#line 341 "erl_call_gen.m"
  }
#line 70 "erl_call_gen.m"
}

#line 63 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__PredId_10,
#line 63 "erl_call_gen.m"
  MR_Integer erl_backend__erl_call_gen__ProcId_11,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_12,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_13,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___Context_14,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 63 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 63 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41,
#line 63 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_42)
#line 63 "erl_call_gen.m"
{
#line 372 "erl_call_gen.m"
  {
#line 372 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 372 "erl_call_gen.m"
    {
#line 372 "erl_call_gen.m"
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__PredId_10, erl_backend__erl_call_gen__ProcId_11, erl_backend__erl_call_gen__ArgVars_12, erl_backend__erl_call_gen__CodeModel_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_41, erl_backend__erl_call_gen__STATE_VARIABLE_Info_42);
#line 372 "erl_call_gen.m"
      return;
    }
#line 372 "erl_call_gen.m"
  }
#line 63 "erl_call_gen.m"
}

#line 56 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Modes_12,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Detism_13,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___Context_14,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 56 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 56 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37,
#line 56 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_38)
#line 56 "erl_call_gen.m"
{
#line 292 "erl_call_gen.m"
  {
#line 292 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 292 "erl_call_gen.m"
    {
#line 292 "erl_call_gen.m"
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__GenericCall_10, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__Modes_12, erl_backend__erl_call_gen__Detism_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_37, erl_backend__erl_call_gen__STATE_VARIABLE_Info_38);
#line 292 "erl_call_gen.m"
      return;
    }
#line 292 "erl_call_gen.m"
  }
#line 56 "erl_call_gen.m"
}

#line 46 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__GenericCall_10,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_11,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Modes_12,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__Detism_13,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___Context_14,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_15,
#line 46 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_16,
#line 46 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
#line 46 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
#line 46 "erl_call_gen.m"
{
#line 271 "erl_call_gen.m"
  {
#line 271 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 271 "erl_call_gen.m"
    {
#line 271 "erl_call_gen.m"
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_call_gen__GenericCall_10, erl_backend__erl_call_gen__ArgVars_11, erl_backend__erl_call_gen__Modes_12, erl_backend__erl_call_gen__Detism_13, erl_backend__erl_call_gen__MaybeSuccessExpr_15, erl_backend__erl_call_gen__Statement_16, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__STATE_VARIABLE_Info_29);
#line 271 "erl_call_gen.m"
      return;
    }
#line 271 "erl_call_gen.m"
  }
#line 46 "erl_call_gen.m"
}

#line 37 "erl_call_gen.m"
void MR_CALL 
erl_backend__erl_call_gen__erl_gen_call_10_p_0(
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__PredId_11,
#line 37 "erl_call_gen.m"
  MR_Integer erl_backend__erl_call_gen__ProcId_12,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__ArgVars_13,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___ActualArgTypes_14,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__CodeModel_15,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen___Context_16,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__MaybeSuccessExpr_17,
#line 37 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__Statement_18,
#line 37 "erl_call_gen.m"
  MR_Word erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28,
#line 37 "erl_call_gen.m"
  MR_Word * erl_backend__erl_call_gen__STATE_VARIABLE_Info_29)
#line 37 "erl_call_gen.m"
{
#line 121 "erl_call_gen.m"
  {
#line 121 "erl_call_gen.m"
    MR_bool erl_backend__erl_call_gen__succeeded;

#line 121 "erl_call_gen.m"
    {
#line 121 "erl_call_gen.m"
      erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(erl_backend__erl_call_gen__PredId_11, erl_backend__erl_call_gen__ProcId_12, erl_backend__erl_call_gen__ArgVars_13, erl_backend__erl_call_gen__CodeModel_15, erl_backend__erl_call_gen__MaybeSuccessExpr_17, erl_backend__erl_call_gen__Statement_18, erl_backend__erl_call_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_call_gen__STATE_VARIABLE_Info_29);
#line 121 "erl_call_gen.m"
      return;
    }
#line 121 "erl_call_gen.m"
  }
#line 37 "erl_call_gen.m"
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
