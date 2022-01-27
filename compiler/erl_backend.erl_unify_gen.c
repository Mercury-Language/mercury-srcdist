/*
** Automatically generated from `erl_unify_gen.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "erl_backend.erl_unify_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 150 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

#line 225 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_10,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_12,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__SuccessExpr_15,
#line 225 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22,
#line 225 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23);

#line 216 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_9,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_10,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_11,
#line 216 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_14,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17,
#line 216 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18);

#line 193 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_2,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_3,
#line 193 "erl_unify_gen.m"
  MR_Box * erl_backend__erl_unify_gen__wrapper_arg_4);

#line 180 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_10,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_12,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ArgTypes_13,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__UniModes_14,
#line 180 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
#line 180 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25);

#line 113 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
#line 113 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg);

#line 144 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
#line 144 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg);

#line 139 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
#line 139 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg);

#line 113 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__113__1_2_p_0(
#line 113 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 113 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_44);

#line 144 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__144__1_2_p_0(
#line 144 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_70,
#line 144 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_87);

#line 139 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__139__1_2_p_0(
#line 139 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 139 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_82);

#line 393 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
#line 393 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 393 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

#line 343 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_6,
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__CurriedArgs_7,
#line 343 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__FunExpr_8,
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34,
#line 343 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35);

#line 202 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ModuleInfo_6,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_7,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ArgType_8,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__UniMode_9,
#line 202 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__HeadVar__5_5);

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1);

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 455 "erl_backend.erl_unify_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 463 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 472 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 480 "erl_backend.erl_unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

#line 225 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_10,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_12,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__SuccessExpr_15,
#line 225 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
#line 225 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22,
#line 225 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23)
#line 225 "erl_unify_gen.m"
{
#line 230 "erl_unify_gen.m"
  {
#line 230 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__Pattern_19;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__SucceedCase_20;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__FailCase_21;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_30_30;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_31_31;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_32_32;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_35_35;
#line 230 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_36_36;
#line 233 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__Pattern0_18;
#line 233 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25;

#line 231 "erl_unify_gen.m"
    {
#line 231 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(erl_backend__erl_unify_gen__ConsId_11, erl_backend__erl_unify_gen__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_unify_gen__Pattern0_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25);
    }
#line 233 "erl_unify_gen.m"
    if (erl_backend__erl_unify_gen__succeeded)
#line 232 "erl_unify_gen.m"
      {
#line 232 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25_25;
#line 232 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__Pattern_19 = erl_backend__erl_unify_gen__Pattern0_18;
#line 232 "erl_unify_gen.m"
      }
#line 233 "erl_unify_gen.m"
    else
#line 234 "erl_unify_gen.m"
      {
#line 234 "erl_unify_gen.m"
        {
#line 234 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_semidet_deconstruct\'/9", (MR_String) "undeconstructable object");
#line 234 "erl_unify_gen.m"
          return;
        }
#line 234 "erl_unify_gen.m"
      }
#line 242 "erl_unify_gen.m"
    {
#line 242 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_30_30 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_10);
    }
#line 243 "erl_unify_gen.m"
    {
#line 243 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__SucceedCase_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__SucceedCase_20, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Pattern_19));
#line 243 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__SucceedCase_20, 1) = ((MR_Box) (erl_backend__erl_unify_gen__SuccessExpr_15));
#line 243 "erl_unify_gen.m"
    }
#line 244 "erl_unify_gen.m"
    {
#line 244 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_36_36 = erl_backend__elds__elds_fail_0_f_0();
    }
#line 244 "erl_unify_gen.m"
    {
#line 244 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 244 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__V_35_35, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_36_36));
#line 244 "erl_unify_gen.m"
    }
#line 244 "erl_unify_gen.m"
    {
#line 244 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__FailCase_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FailCase_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FailCase_21, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_35_35));
#line 244 "erl_unify_gen.m"
    }
#line 242 "erl_unify_gen.m"
    {
#line 242 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_unify_gen__FailCase_21));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "erl_unify_gen.m"
    }
#line 242 "erl_unify_gen.m"
    {
#line 242 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_31_31, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SucceedCase_20));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_32_32));
#line 242 "erl_unify_gen.m"
    }
#line 242 "erl_unify_gen.m"
    {
#line 242 "erl_unify_gen.m"
      MR_Word base;
#line 242 "erl_unify_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 242 "erl_unify_gen.m"
      *erl_backend__erl_unify_gen__Statement_16 = base;
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_30_30));
#line 242 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__V_31_31));
#line 242 "erl_unify_gen.m"
    }
#line 230 "erl_unify_gen.m"
  }
#line 225 "erl_unify_gen.m"
}

#line 216 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_9,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_10,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_11,
#line 216 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_14,
#line 216 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17,
#line 216 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18)
#line 216 "erl_unify_gen.m"
{
#line 221 "erl_unify_gen.m"
  {
#line 221 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 221 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__LHS_16;
#line 221 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_21_21;

#line 222 "erl_unify_gen.m"
    {
#line 222 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(erl_backend__erl_unify_gen__ConsId_10, erl_backend__erl_unify_gen__Args_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_unify_gen__LHS_16, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_17, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_18);
    }
#line 223 "erl_unify_gen.m"
    {
#line 223 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_21_21 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_9);
    }
#line 223 "erl_unify_gen.m"
    {
#line 223 "erl_unify_gen.m"
      MR_Word base;
#line 223 "erl_unify_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 223 "erl_unify_gen.m"
      *erl_backend__erl_unify_gen__Statement_14 = base;
#line 223 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 223 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__LHS_16));
#line 223 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__V_21_21));
#line 223 "erl_unify_gen.m"
    }
#line 221 "erl_unify_gen.m"
  }
#line 216 "erl_unify_gen.m"
}

#line 193 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_2,
#line 193 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_3,
#line 193 "erl_unify_gen.m"
  MR_Box * erl_backend__erl_unify_gen__wrapper_arg_4)
#line 193 "erl_unify_gen.m"
{
#line 193 "erl_unify_gen.m"
  {
#line 193 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 193 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 193 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

#line 193 "erl_unify_gen.m"
    {
#line 193 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__assign_free_var_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_2), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_3), &erl_backend__erl_unify_gen__conv0_HeadVar__5_5);
    }
#line 193 "erl_unify_gen.m"
    if (erl_backend__erl_unify_gen__succeeded)
#line 193 "erl_unify_gen.m"
      {
#line 193 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
#line 193 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 193 "erl_unify_gen.m"
      }
#line 193 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 193 "erl_unify_gen.m"
  }
#line 193 "erl_unify_gen.m"
}

#line 180 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_10,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_11,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_12,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ArgTypes_13,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__UniModes_14,
#line 180 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_16,
#line 180 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24,
#line 180 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25)
#line 180 "erl_unify_gen.m"
{
#line 185 "erl_unify_gen.m"
  {
#line 185 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__RHS_18;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__Construct_19;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__ModuleInfo_20;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__AssignFreeVars_21;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_26_26;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_28_28;
#line 185 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_29_29;

#line 186 "erl_unify_gen.m"
    {
#line 186 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_26_26 = erl_backend__elds__elds_false_0_f_0();
    }
#line 186 "erl_unify_gen.m"
    {
#line 186 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(erl_backend__erl_unify_gen__ConsId_11, erl_backend__erl_unify_gen__Args_12, erl_backend__erl_unify_gen__V_26_26, &erl_backend__erl_unify_gen__RHS_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25);
    }
#line 187 "erl_unify_gen.m"
    {
#line 187 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_28_28 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var_10);
    }
#line 187 "erl_unify_gen.m"
    {
#line 187 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__Construct_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 187 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_28_28));
#line 187 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Construct_19, 2) = ((MR_Box) (erl_backend__erl_unify_gen__RHS_18));
#line 187 "erl_unify_gen.m"
    }
#line 191 "erl_unify_gen.m"
    {
#line 191 "erl_unify_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_unify_gen__STATE_VARIABLE_Info_25, &erl_backend__erl_unify_gen__ModuleInfo_20);
    }
#line 193 "erl_unify_gen.m"
    {
#line 193 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_29_29, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[1]));
#line 193 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_29_29, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1));
#line 193 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_29_29, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_20));
#line 193 "erl_unify_gen.m"
    }
#line 192 "erl_unify_gen.m"
    {
#line 192 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__AssignFreeVars_21 = mercury__list__filter_map_corresponding3_4_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__V_29_29, erl_backend__erl_unify_gen__Args_12, erl_backend__erl_unify_gen__ArgTypes_13, erl_backend__erl_unify_gen__UniModes_14);
    }
#line 197 "erl_unify_gen.m"
    if ((erl_backend__erl_unify_gen__AssignFreeVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "erl_unify_gen.m"
      *erl_backend__erl_unify_gen__Statement_16 = erl_backend__erl_unify_gen__Construct_19;
#line 197 "erl_unify_gen.m"
    else
#line 198 "erl_unify_gen.m"
      {
#line 198 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_30_30;

#line 199 "erl_unify_gen.m"
        {
#line 199 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_30_30, 0) = ((MR_Box) (erl_backend__erl_unify_gen__AssignFreeVars_21));
#line 199 "erl_unify_gen.m"
        }
#line 199 "erl_unify_gen.m"
        {
#line 199 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_unify_gen__V_30_30, erl_backend__erl_unify_gen__Construct_19);
        }
#line 198 "erl_unify_gen.m"
      }
#line 185 "erl_unify_gen.m"
  }
#line 180 "erl_unify_gen.m"
}

#line 113 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
#line 113 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg)
#line 113 "erl_unify_gen.m"
{
#line 113 "erl_unify_gen.m"
  {
#line 113 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 113 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

#line 113 "erl_unify_gen.m"
    {
#line 113 "erl_unify_gen.m"
      return erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__113__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
#line 113 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 113 "erl_unify_gen.m"
  }
#line 113 "erl_unify_gen.m"
}

#line 144 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
#line 144 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg)
#line 144 "erl_unify_gen.m"
{
#line 144 "erl_unify_gen.m"
  {
#line 144 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 144 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

#line 144 "erl_unify_gen.m"
    {
#line 144 "erl_unify_gen.m"
      return erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__144__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
#line 144 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 144 "erl_unify_gen.m"
  }
#line 144 "erl_unify_gen.m"
}

#line 139 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
#line 139 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg)
#line 139 "erl_unify_gen.m"
{
#line 139 "erl_unify_gen.m"
  {
#line 139 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 139 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;

#line 139 "erl_unify_gen.m"
    {
#line 139 "erl_unify_gen.m"
      return erl_backend__erl_unify_gen__succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__139__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))));
    }
#line 139 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 139 "erl_unify_gen.m"
  }
#line 139 "erl_unify_gen.m"
}

#line 49 "erl_unify_gen.m"
void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__1_1,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__MaybeSuccessExpr_4,
#line 49 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_5,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6,
#line 49 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7)
#line 49 "erl_unify_gen.m"
{
#line 97 "erl_unify_gen.m"
  {
#line 97 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 97 "erl_unify_gen.m"
    if (((MR_tag((MR_Word) erl_backend__erl_unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 97 "erl_unify_gen.m"
      {
#line 97 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TargetVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__SourceVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 97 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
#line 97 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarType_17;
#line 97 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__IsDummy_18;

#line 99 "erl_unify_gen.m"
        {
#line 99 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, &erl_backend__erl_unify_gen__ModuleInfo_16);
        }
#line 100 "erl_unify_gen.m"
        {
#line 100 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__TargetVar_14, &erl_backend__erl_unify_gen__VarType_17);
        }
#line 101 "erl_unify_gen.m"
        {
#line 101 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__IsDummy_18 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_16, erl_backend__erl_unify_gen__VarType_17);
        }
#line 105 "erl_unify_gen.m"
        if ((erl_backend__erl_unify_gen__IsDummy_18 == (MR_Integer) 0))
#line 104 "erl_unify_gen.m"
          {
#line 104 "erl_unify_gen.m"
            *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
          }
#line 105 "erl_unify_gen.m"
        else
#line 106 "erl_unify_gen.m"
          {
#line 106 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__Assign_19;
#line 106 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_22_22;
#line 106 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_23_23;

#line 107 "erl_unify_gen.m"
            {
#line 107 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_22_22 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__TargetVar_14);
            }
#line 107 "erl_unify_gen.m"
            {
#line 107 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_23_23 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__SourceVar_15);
            }
#line 107 "erl_unify_gen.m"
            {
#line 107 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__Assign_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 107 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 107 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_22_22));
#line 107 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Assign_19, 2) = ((MR_Box) (erl_backend__erl_unify_gen__V_23_23));
#line 107 "erl_unify_gen.m"
            }
#line 108 "erl_unify_gen.m"
            {
#line 108 "erl_unify_gen.m"
              *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Assign_19, erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 106 "erl_unify_gen.m"
          }
#line 97 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6;
#line 97 "erl_unify_gen.m"
      }
#line 97 "erl_unify_gen.m"
    else
#line 97 "erl_unify_gen.m"
    if (((MR_tag((MR_Word) erl_backend__erl_unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 136 "erl_unify_gen.m"
      {
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ConsId_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Args_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ArgModes_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__SubInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_71;
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarType_72;
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__IsDummy_73;
#line 136 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_78_78;
#line 137 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen___HowToConstruct_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 137 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen___CellIsUnique_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 5)));

#line 139 "erl_unify_gen.m"
        {
#line 139 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 139 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_78_78, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
#line 139 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_78_78, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1));
#line 139 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 139 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_78_78, 3) = ((MR_Box) (erl_backend__erl_unify_gen__HeadVar__2_2));
#line 139 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_78_78, 4) = ((MR_Box) ((MR_Integer) 0));
#line 139 "erl_unify_gen.m"
        }
#line 139 "erl_unify_gen.m"
        {
#line 139 "erl_unify_gen.m"
          mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__V_78_78, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "construct not det");
        }
#line 142 "erl_unify_gen.m"
        if ((erl_backend__erl_unify_gen__SubInfo_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "erl_unify_gen.m"
          {
#line 141 "erl_unify_gen.m"
          }
#line 142 "erl_unify_gen.m"
        else
#line 143 "erl_unify_gen.m"
          {
#line 143 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__SubInfo_68, (MR_Integer) 1)));
#line 143 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_83_83;
#line 143 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen___MaybeTakeAddr_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__SubInfo_68, (MR_Integer) 0)));

#line 144 "erl_unify_gen.m"
            {
#line 144 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 144 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_83_83, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[2]));
#line 144 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_83_83, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2));
#line 144 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 144 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_83_83, 3) = ((MR_Box) (erl_backend__erl_unify_gen__MaybeSizeProfInfo_70));
#line 144 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_83_83, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "erl_unify_gen.m"
            }
#line 144 "erl_unify_gen.m"
            {
#line 144 "erl_unify_gen.m"
              mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__V_83_83, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "term size profiling not yet supported");
            }
#line 143 "erl_unify_gen.m"
          }
#line 147 "erl_unify_gen.m"
        {
#line 147 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, &erl_backend__erl_unify_gen__ModuleInfo_71);
        }
#line 148 "erl_unify_gen.m"
        {
#line 148 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__Var_62, &erl_backend__erl_unify_gen__VarType_72);
        }
#line 149 "erl_unify_gen.m"
        {
#line 149 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__IsDummy_73 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_71, erl_backend__erl_unify_gen__VarType_72);
        }
#line 153 "erl_unify_gen.m"
        if ((erl_backend__erl_unify_gen__IsDummy_73 == (MR_Integer) 0))
#line 151 "erl_unify_gen.m"
          {
#line 152 "erl_unify_gen.m"
            {
#line 152 "erl_unify_gen.m"
              *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 151 "erl_unify_gen.m"
            *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6;
#line 151 "erl_unify_gen.m"
          }
#line 153 "erl_unify_gen.m"
        else
#line 154 "erl_unify_gen.m"
          {
#line 154 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__ArgTypes_74;
#line 154 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__Construct_75;

#line 155 "erl_unify_gen.m"
            {
#line 155 "erl_unify_gen.m"
              erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__Args_64, &erl_backend__erl_unify_gen__ArgTypes_74);
            }
#line 156 "erl_unify_gen.m"
            {
#line 156 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(erl_backend__erl_unify_gen__Var_62, erl_backend__erl_unify_gen__ConsId_63, erl_backend__erl_unify_gen__Args_64, erl_backend__erl_unify_gen__ArgTypes_74, erl_backend__erl_unify_gen__ArgModes_65, &erl_backend__erl_unify_gen__Construct_75, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7);
            }
#line 158 "erl_unify_gen.m"
            {
#line 158 "erl_unify_gen.m"
              *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Construct_75, erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 154 "erl_unify_gen.m"
          }
#line 136 "erl_unify_gen.m"
      }
#line 97 "erl_unify_gen.m"
    else
#line 97 "erl_unify_gen.m"
    if (((MR_tag((MR_Word) erl_backend__erl_unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 161 "erl_unify_gen.m"
      {
#line 161 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ConsId_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Args_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__CanFail_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 162 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ArgModes_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 162 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen___CanCGC_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 5)));

#line 168 "erl_unify_gen.m"
        if ((erl_backend__erl_unify_gen__CanFail_99 == (MR_Integer) 0))
#line 164 "erl_unify_gen.m"
          {
#line 164 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__SuccessExpr_101;

#line 165 "erl_unify_gen.m"
            {
#line 165 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__SuccessExpr_101 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 166 "erl_unify_gen.m"
            {
#line 166 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(erl_backend__erl_unify_gen__Var_95, erl_backend__erl_unify_gen__ConsId_96, erl_backend__erl_unify_gen__Args_97, erl_backend__erl_unify_gen__SuccessExpr_101, erl_backend__erl_unify_gen__Statement_5, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7);
#line 166 "erl_unify_gen.m"
              return;
            }
#line 164 "erl_unify_gen.m"
          }
#line 168 "erl_unify_gen.m"
        else
#line 169 "erl_unify_gen.m"
          {
#line 169 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__Statement0_102;

#line 170 "erl_unify_gen.m"
            {
#line 170 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(erl_backend__erl_unify_gen__Var_95, erl_backend__erl_unify_gen__ConsId_96, erl_backend__erl_unify_gen__Args_97, &erl_backend__erl_unify_gen__Statement0_102, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7);
            }
#line 172 "erl_unify_gen.m"
            {
#line 172 "erl_unify_gen.m"
              *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_unify_gen__Statement0_102, erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 169 "erl_unify_gen.m"
          }
#line 161 "erl_unify_gen.m"
      }
#line 97 "erl_unify_gen.m"
    else
#line 97 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 174 "erl_unify_gen.m"
      {
#line 176 "erl_unify_gen.m"
        {
#line 176 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "complicated unify");
#line 176 "erl_unify_gen.m"
          return;
        }
#line 174 "erl_unify_gen.m"
      }
#line 97 "erl_unify_gen.m"
    else
#line 111 "erl_unify_gen.m"
      {
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Var1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Var2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_32;
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarType_33;
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__IsDummy_34;
#line 111 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_40_40;

#line 113 "erl_unify_gen.m"
        {
#line 113 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 113 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_40_40, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
#line 113 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_40_40, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3));
#line 113 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 113 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_40_40, 3) = ((MR_Box) (erl_backend__erl_unify_gen__HeadVar__2_2));
#line 113 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_40_40, 4) = ((MR_Box) ((MR_Integer) 1));
#line 113 "erl_unify_gen.m"
        }
#line 113 "erl_unify_gen.m"
        {
#line 113 "erl_unify_gen.m"
          mercury__require__expect_4_p_0(erl_backend__erl_unify_gen__V_40_40, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "simple_test not semidet");
        }
#line 115 "erl_unify_gen.m"
        {
#line 115 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, &erl_backend__erl_unify_gen__ModuleInfo_32);
        }
#line 116 "erl_unify_gen.m"
        {
#line 116 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__Var1_30, &erl_backend__erl_unify_gen__VarType_33);
        }
#line 117 "erl_unify_gen.m"
        {
#line 117 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__IsDummy_34 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_32, erl_backend__erl_unify_gen__VarType_33);
        }
#line 121 "erl_unify_gen.m"
        if ((erl_backend__erl_unify_gen__IsDummy_34 == (MR_Integer) 0))
#line 120 "erl_unify_gen.m"
          {
#line 120 "erl_unify_gen.m"
            *erl_backend__erl_unify_gen__Statement_5 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
          }
#line 121 "erl_unify_gen.m"
        else
#line 122 "erl_unify_gen.m"
          {
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__Test_35;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__TrueCase_36;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__FalseCase_37;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_45_45;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_46_46;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_49_49;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_50_50;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_51_51;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_52_52;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_53_53;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_54_54;
#line 122 "erl_unify_gen.m"
            MR_Word erl_backend__erl_unify_gen__V_55_55;

#line 131 "erl_unify_gen.m"
            {
#line 131 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_49_49 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var1_30);
            }
#line 131 "erl_unify_gen.m"
            {
#line 131 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_50_50 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__Var2_31);
            }
#line 130 "erl_unify_gen.m"
            {
#line 130 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__Test_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 130 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 130 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_35, 1) = ((MR_Box) ((MR_Integer) 15));
#line 130 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_35, 2) = ((MR_Box) (erl_backend__erl_unify_gen__V_49_49));
#line 130 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__Test_35, 3) = ((MR_Box) (erl_backend__erl_unify_gen__V_50_50));
#line 130 "erl_unify_gen.m"
            }
#line 132 "erl_unify_gen.m"
            {
#line 132 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_51_51 = erl_backend__elds__elds_true_0_f_0();
            }
#line 132 "erl_unify_gen.m"
            {
#line 132 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_52_52 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_unify_gen__MaybeSuccessExpr_4);
            }
#line 132 "erl_unify_gen.m"
            {
#line 132 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__TrueCase_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TrueCase_36, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_51_51));
#line 132 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TrueCase_36, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_52_52));
#line 132 "erl_unify_gen.m"
            }
#line 133 "erl_unify_gen.m"
            {
#line 133 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_53_53 = erl_backend__elds__elds_false_0_f_0();
            }
#line 133 "erl_unify_gen.m"
            {
#line 133 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_55_55 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 133 "erl_unify_gen.m"
            {
#line 133 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__V_54_54, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_55_55));
#line 133 "erl_unify_gen.m"
            }
#line 133 "erl_unify_gen.m"
            {
#line 133 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__FalseCase_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FalseCase_37, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_53_53));
#line 133 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__FalseCase_37, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_54_54));
#line 133 "erl_unify_gen.m"
            }
#line 129 "erl_unify_gen.m"
            {
#line 129 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_46_46, 0) = ((MR_Box) (erl_backend__erl_unify_gen__FalseCase_37));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "erl_unify_gen.m"
            }
#line 129 "erl_unify_gen.m"
            {
#line 129 "erl_unify_gen.m"
              erl_backend__erl_unify_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_45_45, 0) = ((MR_Box) (erl_backend__erl_unify_gen__TrueCase_36));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_46_46));
#line 129 "erl_unify_gen.m"
            }
#line 129 "erl_unify_gen.m"
            {
#line 129 "erl_unify_gen.m"
              MR_Word base;
#line 129 "erl_unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 129 "erl_unify_gen.m"
              *erl_backend__erl_unify_gen__Statement_5 = base;
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Test_35));
#line 129 "erl_unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_unify_gen__V_45_45));
#line 129 "erl_unify_gen.m"
            }
#line 122 "erl_unify_gen.m"
          }
#line 111 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6;
#line 111 "erl_unify_gen.m"
      }
#line 97 "erl_unify_gen.m"
  }
#line 49 "erl_unify_gen.m"
}

#line 113 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__113__1_2_p_0(
#line 113 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 113 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_44)
#line 113 "erl_unify_gen.m"
{
#line 113 "erl_unify_gen.m"
  {
#line 113 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__HeadVar__2_2 == erl_backend__erl_unify_gen__HeadVar__2_44);

#line 113 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 113 "erl_unify_gen.m"
  }
#line 113 "erl_unify_gen.m"
}

#line 144 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__144__1_2_p_0(
#line 144 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__MaybeSizeProfInfo_70,
#line 144 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_87)
#line 144 "erl_unify_gen.m"
{
#line 144 "erl_unify_gen.m"
  {
#line 144 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 144 "erl_unify_gen.m"
    {
#line 144 "erl_unify_gen.m"
      return erl_backend__erl_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[0], ((MR_Box) (erl_backend__erl_unify_gen__MaybeSizeProfInfo_70)), ((MR_Box) (erl_backend__erl_unify_gen__HeadVar__2_87)));
    }
#line 144 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 144 "erl_unify_gen.m"
  }
#line 144 "erl_unify_gen.m"
}

#line 139 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__139__1_2_p_0(
#line 139 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 139 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_82)
#line 139 "erl_unify_gen.m"
{
#line 139 "erl_unify_gen.m"
  {
#line 139 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__HeadVar__2_2 == erl_backend__erl_unify_gen__HeadVar__2_82);

#line 139 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 139 "erl_unify_gen.m"
  }
#line 139 "erl_unify_gen.m"
}

#line 393 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
#line 393 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 393 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
#line 393 "erl_unify_gen.m"
{
#line 393 "erl_unify_gen.m"
  {
#line 393 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
#line 393 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 393 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__2_2;

#line 393 "erl_unify_gen.m"
    {
#line 393 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
#line 393 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__2_2));
#line 393 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__wrapper_arg_2;
#line 393 "erl_unify_gen.m"
  }
#line 393 "erl_unify_gen.m"
}

#line 343 "erl_unify_gen.m"
static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_6,
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__CurriedArgs_7,
#line 343 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__FunExpr_8,
#line 343 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34,
#line 343 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35)
#line 343 "erl_unify_gen.m"
{
#line 346 "erl_unify_gen.m"
  {
#line 346 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__TypeInfo_54_54;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__ModuleInfo_10;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__PredProcId_11;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__PredInfo_12;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__ProcInfo_13;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CalleeTypes_14;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__ArgModes_15;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CodeModel_16;
#line 346 "erl_unify_gen.m"
    MR_Integer erl_backend__erl_unify_gen__NumExtraVars_17;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__AllExtraVars_18;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CurriedAndExtraArgs_19;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CallInputVars_20;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CallOutputVars_21;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__OutputVarsInclDummy_23;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__InputExtraVars_24;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__ClosureInputArgs_26;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__SuccessExpr0_27;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__DummyOutputVars_29;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__SuccessExpr_31;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__CallTarget_32;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__DoCall_33;
#line 346 "erl_unify_gen.m"
    MR_Integer erl_backend__erl_unify_gen__V_36_36;
#line 346 "erl_unify_gen.m"
    MR_Integer erl_backend__erl_unify_gen__V_37_37;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_49_49;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_50_50;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_51_51;
#line 346 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_52_52;
#line 369 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen___InputVarsInclDummy_22;

#line 347 "erl_unify_gen.m"
    {
#line 347 "erl_unify_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_unify_gen__ModuleInfo_10);
    }
#line 348 "erl_unify_gen.m"
    {
#line 348 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__PredProcId_11 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(erl_backend__erl_unify_gen__ShroudedPredProcId_6);
    }
#line 349 "erl_unify_gen.m"
    {
#line 349 "erl_unify_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(erl_backend__erl_unify_gen__ModuleInfo_10, erl_backend__erl_unify_gen__PredProcId_11, &erl_backend__erl_unify_gen__PredInfo_12, &erl_backend__erl_unify_gen__ProcInfo_13);
    }
#line 350 "erl_unify_gen.m"
    {
#line 350 "erl_unify_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_unify_gen__PredInfo_12, &erl_backend__erl_unify_gen__CalleeTypes_14);
    }
#line 351 "erl_unify_gen.m"
    {
#line 351 "erl_unify_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_unify_gen__ProcInfo_13, &erl_backend__erl_unify_gen__ArgModes_15);
    }
#line 352 "erl_unify_gen.m"
    {
#line 352 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(erl_backend__erl_unify_gen__ProcInfo_13);
    }
#line 355 "erl_unify_gen.m"
    {
#line 355 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_36_36 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_unify_gen__CalleeTypes_14);
    }
#line 1692 "erl_backend.erl_unify_gen.c"
    erl_backend__erl_unify_gen__TypeInfo_54_54 = (MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1];
#line 355 "erl_unify_gen.m"
    {
#line 355 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_37_37 = mercury__list__length_1_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__CurriedArgs_7);
    }
#line 355 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__NumExtraVars_17 = (erl_backend__erl_unify_gen__V_36_36 - erl_backend__erl_unify_gen__V_37_37);
#line 356 "erl_unify_gen.m"
    {
#line 356 "erl_unify_gen.m"
      erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(erl_backend__erl_unify_gen__NumExtraVars_17, &erl_backend__erl_unify_gen__AllExtraVars_18, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_34, &erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38);
    }
#line 364 "erl_unify_gen.m"
    {
#line 364 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__CurriedAndExtraArgs_19 = mercury__list__f_43_43_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__CurriedArgs_7, erl_backend__erl_unify_gen__AllExtraVars_18);
    }
#line 366 "erl_unify_gen.m"
    {
#line 366 "erl_unify_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__ModuleInfo_10, (MR_Integer) 0, erl_backend__erl_unify_gen__CurriedAndExtraArgs_19, erl_backend__erl_unify_gen__CalleeTypes_14, erl_backend__erl_unify_gen__ArgModes_15, &erl_backend__erl_unify_gen__CallInputVars_20, &erl_backend__erl_unify_gen__CallOutputVars_21);
    }
#line 369 "erl_unify_gen.m"
    {
#line 369 "erl_unify_gen.m"
      erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__ModuleInfo_10, (MR_Integer) 1, erl_backend__erl_unify_gen__CurriedAndExtraArgs_19, erl_backend__erl_unify_gen__CalleeTypes_14, erl_backend__erl_unify_gen__ArgModes_15, &erl_backend__erl_unify_gen___InputVarsInclDummy_22, &erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
#line 371 "erl_unify_gen.m"
    {
#line 371 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__InputExtraVars_24 = mercury__list__delete_elems_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__AllExtraVars_18, erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
#line 373 "erl_unify_gen.m"
    {
#line 373 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_unify_gen__OutputVarsInclDummy_23);
    }
#line 378 "erl_unify_gen.m"
    if ((erl_backend__erl_unify_gen__CodeModel_16 == (MR_Integer) 0))
#line 375 "erl_unify_gen.m"
      {
#line 376 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__ClosureInputArgs_26 = erl_backend__erl_unify_gen__InputExtraVars_24;
#line 377 "erl_unify_gen.m"
        {
#line 377 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__SuccessExpr0_27 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25);
        }
#line 375 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
#line 375 "erl_unify_gen.m"
      }
#line 378 "erl_unify_gen.m"
    else
#line 378 "erl_unify_gen.m"
    if ((erl_backend__erl_unify_gen__CodeModel_16 == (MR_Integer) 2))
#line 383 "erl_unify_gen.m"
      {
#line 383 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__SucceedVar_28;
#line 383 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_43_43;
#line 383 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_45_45;
#line 383 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_46_46;

#line 386 "erl_unify_gen.m"
        {
#line 386 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Succeed", &erl_backend__erl_unify_gen__SucceedVar_28, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35);
        }
#line 387 "erl_unify_gen.m"
        {
#line 387 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_43_43, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SucceedVar_28));
#line 387 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "erl_unify_gen.m"
        }
#line 387 "erl_unify_gen.m"
        {
#line 387 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__ClosureInputArgs_26 = mercury__list__f_43_43_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__InputExtraVars_24, erl_backend__erl_unify_gen__V_43_43);
        }
#line 388 "erl_unify_gen.m"
        {
#line 388 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_46_46 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_unify_gen__SucceedVar_28);
        }
#line 388 "erl_unify_gen.m"
        {
#line 388 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_45_45, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_46_46));
#line 388 "erl_unify_gen.m"
        }
#line 388 "erl_unify_gen.m"
        {
#line 388 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 388 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_45_45));
#line 388 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__SuccessExpr0_27, 2) = ((MR_Box) (erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25));
#line 388 "erl_unify_gen.m"
        }
#line 383 "erl_unify_gen.m"
      }
#line 378 "erl_unify_gen.m"
    else
#line 379 "erl_unify_gen.m"
      {
#line 379 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_47_47;

#line 380 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__ClosureInputArgs_26 = erl_backend__erl_unify_gen__InputExtraVars_24;
#line 381 "erl_unify_gen.m"
        {
#line 381 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 381 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_47_47, 1) = ((MR_Box) (erl_backend__erl_unify_gen__OutputVarsInclDummyExprs_25));
#line 381 "erl_unify_gen.m"
        }
#line 381 "erl_unify_gen.m"
        {
#line 381 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 381 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__SuccessExpr0_27, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_47_47));
#line 381 "erl_unify_gen.m"
        }
#line 379 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_35 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_38_38;
#line 379 "erl_unify_gen.m"
      }
#line 392 "erl_unify_gen.m"
    {
#line 392 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__DummyOutputVars_29 = mercury__list__delete_elems_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, erl_backend__erl_unify_gen__OutputVarsInclDummy_23, erl_backend__erl_unify_gen__CallOutputVars_21);
    }
#line 393 "erl_unify_gen.m"
    {
#line 393 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30 = mercury__list__map_2_f_0(erl_backend__erl_unify_gen__TypeInfo_54_54, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_unify_gen_scalar_common_5[0], erl_backend__erl_unify_gen__DummyOutputVars_29);
    }
#line 394 "erl_unify_gen.m"
    {
#line 394 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_49_49, 0) = ((MR_Box) (erl_backend__erl_unify_gen__MaterialiseDummyOutputs_30));
#line 394 "erl_unify_gen.m"
    }
#line 394 "erl_unify_gen.m"
    {
#line 394 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__SuccessExpr_31 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_unify_gen__V_49_49, erl_backend__erl_unify_gen__SuccessExpr0_27);
    }
#line 398 "erl_unify_gen.m"
    {
#line 398 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__CallTarget_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__CallTarget_32, 0) = ((MR_Box) (erl_backend__erl_unify_gen__PredProcId_11));
#line 398 "erl_unify_gen.m"
    }
#line 400 "erl_unify_gen.m"
    {
#line 400 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_unify_gen__SuccessExpr_31));
#line 400 "erl_unify_gen.m"
    }
#line 399 "erl_unify_gen.m"
    {
#line 399 "erl_unify_gen.m"
      erl_backend__erl_call_gen__erl_make_call_6_p_0(erl_backend__erl_unify_gen__CodeModel_16, erl_backend__erl_unify_gen__CallTarget_32, erl_backend__erl_unify_gen__CallInputVars_20, erl_backend__erl_unify_gen__CallOutputVars_21, erl_backend__erl_unify_gen__V_50_50, &erl_backend__erl_unify_gen__DoCall_33);
    }
#line 402 "erl_unify_gen.m"
    {
#line 402 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_52_52 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_unify_gen__ClosureInputArgs_26);
    }
#line 402 "erl_unify_gen.m"
    {
#line 402 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_52_52));
#line 402 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_51_51, 1) = ((MR_Box) (erl_backend__erl_unify_gen__DoCall_33));
#line 402 "erl_unify_gen.m"
    }
#line 402 "erl_unify_gen.m"
    *erl_backend__erl_unify_gen__FunExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_unify_gen__V_51_51);
#line 346 "erl_unify_gen.m"
  }
#line 343 "erl_unify_gen.m"
}

#line 202 "erl_unify_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ModuleInfo_6,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Var_7,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ArgType_8,
#line 202 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__UniMode_9,
#line 202 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__HeadVar__5_5)
#line 202 "erl_unify_gen.m"
{
#line 205 "erl_unify_gen.m"
  {
#line 205 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;
#line 205 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__RI_11;
#line 205 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__RF_13;
#line 205 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_14_14;
#line 205 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_15_15;
#line 206 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen___LI_10;
#line 206 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen___LF_12;
#line 208 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_16_16;
#line 208 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_18_18;
#line 208 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__V_19_19;

#line 205 "erl_unify_gen.m"
    {
#line 205 "erl_unify_gen.m"
      *erl_backend__erl_unify_gen__HeadVar__5_5 = erl_backend__elds__var_eq_false_1_f_0(erl_backend__erl_unify_gen__Var_7);
    }
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__UniMode_9, (MR_Integer) 0)));
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__UniMode_9, (MR_Integer) 1)));
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen___LI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_14_14, (MR_Integer) 0)));
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__RI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_14_14, (MR_Integer) 1)));
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen___LF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_15_15, (MR_Integer) 0)));
#line 206 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__RF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_15_15, (MR_Integer) 1)));
#line 208 "erl_unify_gen.m"
    {
#line 208 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_16_16, 0) = ((MR_Box) (erl_backend__erl_unify_gen__RI_11));
#line 208 "erl_unify_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_16_16, 1) = ((MR_Box) (erl_backend__erl_unify_gen__RF_13));
#line 208 "erl_unify_gen.m"
    }
#line 208 "erl_unify_gen.m"
    {
#line 208 "erl_unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(erl_backend__erl_unify_gen__ModuleInfo_6, erl_backend__erl_unify_gen__V_16_16, erl_backend__erl_unify_gen__ArgType_8, &erl_backend__erl_unify_gen__V_19_19);
    }
#line 208 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__succeeded = ((MR_Integer) 0 == erl_backend__erl_unify_gen__V_19_19);
#line 208 "erl_unify_gen.m"
    if (erl_backend__erl_unify_gen__succeeded)
#line 208 "erl_unify_gen.m"
      {
#line 209 "erl_unify_gen.m"
        {
#line 209 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_18_18 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_unify_gen__ModuleInfo_6, erl_backend__erl_unify_gen__ArgType_8);
        }
#line 209 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = (erl_backend__erl_unify_gen__V_18_18 == (MR_Integer) 1);
#line 208 "erl_unify_gen.m"
      }
#line 207 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__succeeded = !(erl_backend__erl_unify_gen__succeeded);
#line 205 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 205 "erl_unify_gen.m"
  }
#line 202 "erl_unify_gen.m"
}

#line 72 "erl_unify_gen.m"
void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(
#line 72 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
#line 72 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_8,
#line 72 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
#line 72 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Expr_10,
#line 72 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44,
#line 72 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45)
#line 72 "erl_unify_gen.m"
{
#line 291 "erl_unify_gen.m"
  {
#line 291 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 1)))) || ((erl_backend__erl_unify_gen__ConsId_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 321 "erl_unify_gen.m"
      {
#line 321 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_58_58;
#line 321 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_59_59;

#line 324 "erl_unify_gen.m"
        {
#line 324 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_59_59 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_unify_gen__Args_8);
        }
#line 324 "erl_unify_gen.m"
        {
#line 324 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 324 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_58_58, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_59_59));
#line 324 "erl_unify_gen.m"
        }
#line 324 "erl_unify_gen.m"
        {
#line 324 "erl_unify_gen.m"
          MR_Word base;
#line 324 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 324 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Expr_10 = base;
#line 324 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_58_58));
#line 324 "erl_unify_gen.m"
        }
#line 321 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44;
#line 321 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 307 "erl_unify_gen.m"
      {
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__InstanceModule_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ClassName_29;
#line 307 "erl_unify_gen.m"
        MR_String erl_backend__erl_unify_gen__InstanceStr_31 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 4)));
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ClassModuleName_33;
#line 307 "erl_unify_gen.m"
        MR_String erl_backend__erl_unify_gen__ClassNameStr_34;
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TCName_35;
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
#line 307 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen__Arity_70;
#line 307 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__RttiId_71;
#line 306 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen___Instance_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));
#line 310 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ClassModuleName0_32;

#line 307 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__ClassName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_60_60, (MR_Integer) 0)));
#line 307 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__Arity_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_60_60, (MR_Integer) 1)));
#line 308 "erl_unify_gen.m"
        {
#line 308 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(erl_backend__erl_unify_gen__ClassName_29, &erl_backend__erl_unify_gen__ClassModuleName0_32);
        }
#line 310 "erl_unify_gen.m"
        if (erl_backend__erl_unify_gen__succeeded)
#line 309 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__ClassModuleName_33 = erl_backend__erl_unify_gen__ClassModuleName0_32;
#line 310 "erl_unify_gen.m"
        else
#line 311 "erl_unify_gen.m"
          {
#line 311 "erl_unify_gen.m"
            {
#line 311 "erl_unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "class has no module name");
#line 311 "erl_unify_gen.m"
              return;
            }
#line 311 "erl_unify_gen.m"
          }
#line 313 "erl_unify_gen.m"
        {
#line 313 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__ClassNameStr_34 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__erl_unify_gen__ClassName_29);
        }
#line 314 "erl_unify_gen.m"
        {
#line 314 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__TCName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_35, 0) = ((MR_Box) (erl_backend__erl_unify_gen__ClassModuleName_33));
#line 314 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_35, 1) = ((MR_Box) (erl_backend__erl_unify_gen__ClassNameStr_34));
#line 314 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__TCName_35, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Arity_70));
#line 314 "erl_unify_gen.m"
        }
#line 315 "erl_unify_gen.m"
        {
#line 315 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__RttiId_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 315 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_71, 0) = ((MR_Box) (erl_backend__erl_unify_gen__TCName_35));
#line 315 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_71, 1) = ((MR_Box) (erl_backend__erl_unify_gen__InstanceModule_28));
#line 315 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__RttiId_71, 2) = ((MR_Box) (erl_backend__erl_unify_gen__InstanceStr_31));
#line 315 "erl_unify_gen.m"
        }
#line 317 "erl_unify_gen.m"
        {
#line 317 "erl_unify_gen.m"
          MR_Word base;
#line 317 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Expr_10 = base;
#line 317 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 317 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__RttiId_71));
#line 317 "erl_unify_gen.m"
        }
#line 307 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44;
#line 307 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 298 "erl_unify_gen.m"
      {
#line 298 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ShroudedPredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 299 "erl_unify_gen.m"
        {
#line 299 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(erl_backend__erl_unify_gen__ShroudedPredProcId_22, erl_backend__erl_unify_gen__Args_8, erl_backend__erl_unify_gen__Expr_10, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45);
#line 299 "erl_unify_gen.m"
          return;
        }
#line 298 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 332 "erl_unify_gen.m"
      {
#line 333 "erl_unify_gen.m"
        {
#line 333 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "ground_term_const");
#line 333 "erl_unify_gen.m"
          return;
        }
#line 332 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 295 "erl_unify_gen.m"
      {
#line 296 "erl_unify_gen.m"
        {
#line 296 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "impl_defined_const");
#line 296 "erl_unify_gen.m"
          return;
        }
#line 295 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 301 "erl_unify_gen.m"
      {
#line 301 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
#line 301 "erl_unify_gen.m"
        MR_String erl_backend__erl_unify_gen__TypeCtor_24 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
#line 301 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));
#line 301 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__RttiTypeCtor_26;
#line 301 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__RttiId_27;

#line 302 "erl_unify_gen.m"
        {
#line 302 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__RttiTypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 302 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_26, 0) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleName_23));
#line 302 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_26, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TypeCtor_24));
#line 302 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiTypeCtor_26, 2) = ((MR_Box) (erl_backend__erl_unify_gen__Arity_25));
#line 302 "erl_unify_gen.m"
        }
#line 303 "erl_unify_gen.m"
        {
#line 303 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 303 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__RttiId_27, 0) = ((MR_Box) (erl_backend__erl_unify_gen__RttiTypeCtor_26));
#line 303 "erl_unify_gen.m"
        }
#line 304 "erl_unify_gen.m"
        {
#line 304 "erl_unify_gen.m"
          MR_Word base;
#line 304 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Expr_10 = base;
#line 304 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 304 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__RttiId_27));
#line 304 "erl_unify_gen.m"
        }
#line 301 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44;
#line 301 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 326 "erl_unify_gen.m"
      {
#line 327 "erl_unify_gen.m"
        {
#line 327 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "type_info_const");
#line 327 "erl_unify_gen.m"
          return;
        }
#line 326 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 329 "erl_unify_gen.m"
      {
#line 330 "erl_unify_gen.m"
        {
#line 330 "erl_unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "typeclass_info_const");
#line 330 "erl_unify_gen.m"
          return;
        }
#line 329 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
    if (((((((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 2))))))
#line 338 "erl_unify_gen.m"
      {
#line 339 "erl_unify_gen.m"
        {
#line 339 "erl_unify_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "tabling and deep profiling not supported on Erlang backend");
#line 339 "erl_unify_gen.m"
          return;
        }
#line 338 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
    else
#line 291 "erl_unify_gen.m"
      {
#line 291 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Term_20;

#line 292 "erl_unify_gen.m"
        {
#line 292 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(erl_backend__erl_unify_gen__ConsId_7, erl_backend__erl_unify_gen__Args_8, erl_backend__erl_unify_gen__DummyVarReplacement_9, &erl_backend__erl_unify_gen__Term_20, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_44, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_45);
        }
#line 293 "erl_unify_gen.m"
        {
#line 293 "erl_unify_gen.m"
          MR_Word base;
#line 293 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Expr_10 = base;
#line 293 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Term_20));
#line 293 "erl_unify_gen.m"
        }
#line 291 "erl_unify_gen.m"
      }
#line 291 "erl_unify_gen.m"
  }
#line 72 "erl_unify_gen.m"
}

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
#line 266 "erl_unify_gen.m"
{
#line 266 "erl_unify_gen.m"
  {
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 266 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv1_HeadVar__5_5;

#line 266 "erl_unify_gen.m"
    {
#line 266 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
#line 266 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv1_HeadVar__5_5));
#line 266 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
  }
#line 266 "erl_unify_gen.m"
}

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
#line 266 "erl_unify_gen.m"
{
#line 266 "erl_unify_gen.m"
  {
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 266 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

#line 266 "erl_unify_gen.m"
    {
#line 266 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
#line 266 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
#line 266 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
  }
#line 266 "erl_unify_gen.m"
}

#line 60 "erl_unify_gen.m"
void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(
#line 60 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
#line 60 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_8,
#line 60 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
#line 60 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Term_10,
#line 60 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23,
#line 60 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_24)
#line 60 "erl_unify_gen.m"
{
#line 248 "erl_unify_gen.m"
  {
#line 248 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 276 "erl_unify_gen.m"
      {
#line 276 "erl_unify_gen.m"
        MR_Char erl_backend__erl_unify_gen__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 277 "erl_unify_gen.m"
        {
#line 277 "erl_unify_gen.m"
          MR_Word base;
#line 277 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 277 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (erl_backend__erl_unify_gen__Char_21));
#line 277 "erl_unify_gen.m"
        }
#line 276 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 255 "erl_unify_gen.m"
      {
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Functor_15;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarTypes_17;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TermArgs_18;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_26_26;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_27_27;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_28_28;
#line 251 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
#line 251 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen___TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));

#line 258 "erl_unify_gen.m"
        {
#line 258 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_26_26, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Name_12));
#line 258 "erl_unify_gen.m"
        }
#line 258 "erl_unify_gen.m"
        {
#line 258 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Functor_15, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_26_26));
#line 258 "erl_unify_gen.m"
        }
#line 259 "erl_unify_gen.m"
        {
#line 259 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__ModuleInfo_16);
        }
#line 260 "erl_unify_gen.m"
        {
#line 260 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__VarTypes_17);
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_16));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_17));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
#line 266 "erl_unify_gen.m"
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__TermArgs_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__V_27_27, erl_backend__erl_unify_gen__Args_8);
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_28_28, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Functor_15));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_28_28, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_18));
#line 268 "erl_unify_gen.m"
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          MR_Word base;
#line 268 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_28_28));
#line 268 "erl_unify_gen.m"
        }
#line 255 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 273 "erl_unify_gen.m"
      {
#line 273 "erl_unify_gen.m"
        MR_Float erl_backend__erl_unify_gen__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 274 "erl_unify_gen.m"
        {
#line 274 "erl_unify_gen.m"
          MR_Word base;
#line 274 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 274 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 274 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(erl_backend__erl_unify_gen__Float_20);
#line 274 "erl_unify_gen.m"
        }
#line 273 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 270 "erl_unify_gen.m"
      {
#line 270 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 271 "erl_unify_gen.m"
        {
#line 271 "erl_unify_gen.m"
          MR_Word base;
#line 271 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 271 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Int_19));
#line 271 "erl_unify_gen.m"
        }
#line 270 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 279 "erl_unify_gen.m"
      {
#line 279 "erl_unify_gen.m"
        MR_String erl_backend__erl_unify_gen__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 280 "erl_unify_gen.m"
        {
#line 280 "erl_unify_gen.m"
          MR_Word base;
#line 280 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 280 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__String_22));
#line 280 "erl_unify_gen.m"
        }
#line 279 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 255 "erl_unify_gen.m"
      {
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_39;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarTypes_40;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TermArgs_41;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_43_43;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_44_44;

#line 259 "erl_unify_gen.m"
        {
#line 259 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__ModuleInfo_39);
        }
#line 260 "erl_unify_gen.m"
        {
#line 260 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__VarTypes_40);
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_39));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_40));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
#line 266 "erl_unify_gen.m"
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__TermArgs_41 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__V_43_43, erl_backend__erl_unify_gen__Args_8);
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_44_44, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_41));
#line 268 "erl_unify_gen.m"
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          MR_Word base;
#line 268 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_44_44));
#line 268 "erl_unify_gen.m"
        }
#line 255 "erl_unify_gen.m"
      }
#line 248 "erl_unify_gen.m"
    *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_24 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23;
#line 248 "erl_unify_gen.m"
  }
#line 60 "erl_unify_gen.m"
}

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
#line 266 "erl_unify_gen.m"
{
#line 266 "erl_unify_gen.m"
  {
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 266 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv1_HeadVar__5_5;

#line 266 "erl_unify_gen.m"
    {
#line 266 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
#line 266 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv1_HeadVar__5_5));
#line 266 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
  }
#line 266 "erl_unify_gen.m"
}

#line 266 "erl_unify_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__closure_arg,
#line 266 "erl_unify_gen.m"
  MR_Box erl_backend__erl_unify_gen__wrapper_arg_1)
#line 266 "erl_unify_gen.m"
{
#line 266 "erl_unify_gen.m"
  {
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
    MR_Box erl_backend__erl_unify_gen__closure = erl_backend__erl_unify_gen__closure_arg;
#line 266 "erl_unify_gen.m"
    MR_Word erl_backend__erl_unify_gen__conv0_HeadVar__5_5;

#line 266 "erl_unify_gen.m"
    {
#line 266 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__erl_unify_gen__wrapper_arg_1));
    }
#line 266 "erl_unify_gen.m"
    erl_backend__erl_unify_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_unify_gen__conv0_HeadVar__5_5));
#line 266 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__wrapper_arg_2;
#line 266 "erl_unify_gen.m"
  }
#line 266 "erl_unify_gen.m"
}

#line 59 "erl_unify_gen.m"
MR_bool MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(
#line 59 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__ConsId_7,
#line 59 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__Args_8,
#line 59 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__DummyVarReplacement_9,
#line 59 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Term_10,
#line 59 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23,
#line 59 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_24)
#line 59 "erl_unify_gen.m"
{
#line 248 "erl_unify_gen.m"
  {
#line 248 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 276 "erl_unify_gen.m"
      {
#line 276 "erl_unify_gen.m"
        MR_Char erl_backend__erl_unify_gen__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 277 "erl_unify_gen.m"
        {
#line 277 "erl_unify_gen.m"
          MR_Word base;
#line 277 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 277 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (erl_backend__erl_unify_gen__Char_21));
#line 277 "erl_unify_gen.m"
        }
#line 276 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 276 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 255 "erl_unify_gen.m"
      {
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__Functor_15;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_16;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarTypes_17;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TermArgs_18;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_26_26;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_27_27;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_28_28;
#line 251 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 2)));
#line 251 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen___TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 3)));

#line 258 "erl_unify_gen.m"
        {
#line 258 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__V_26_26, 1) = ((MR_Box) (erl_backend__erl_unify_gen__Name_12));
#line 258 "erl_unify_gen.m"
        }
#line 258 "erl_unify_gen.m"
        {
#line 258 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 258 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), erl_backend__erl_unify_gen__Functor_15, 0) = ((MR_Box) (erl_backend__erl_unify_gen__V_26_26));
#line 258 "erl_unify_gen.m"
        }
#line 259 "erl_unify_gen.m"
        {
#line 259 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__ModuleInfo_16);
        }
#line 260 "erl_unify_gen.m"
        {
#line 260 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__VarTypes_17);
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_16));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_17));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_27_27, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
#line 266 "erl_unify_gen.m"
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__TermArgs_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__V_27_27, erl_backend__erl_unify_gen__Args_8);
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_28_28, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Functor_15));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_28_28, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_18));
#line 268 "erl_unify_gen.m"
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          MR_Word base;
#line 268 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_28_28));
#line 268 "erl_unify_gen.m"
        }
#line 255 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 255 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 273 "erl_unify_gen.m"
      {
#line 273 "erl_unify_gen.m"
        MR_Float erl_backend__erl_unify_gen__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 274 "erl_unify_gen.m"
        {
#line 274 "erl_unify_gen.m"
          MR_Word base;
#line 274 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 274 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 274 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(erl_backend__erl_unify_gen__Float_20);
#line 274 "erl_unify_gen.m"
        }
#line 273 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 273 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 270 "erl_unify_gen.m"
      {
#line 270 "erl_unify_gen.m"
        MR_Integer erl_backend__erl_unify_gen__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 271 "erl_unify_gen.m"
        {
#line 271 "erl_unify_gen.m"
          MR_Word base;
#line 271 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 271 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_unify_gen__Int_19));
#line 271 "erl_unify_gen.m"
        }
#line 270 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 270 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 279 "erl_unify_gen.m"
      {
#line 279 "erl_unify_gen.m"
        MR_String erl_backend__erl_unify_gen__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 1)));

#line 280 "erl_unify_gen.m"
        {
#line 280 "erl_unify_gen.m"
          MR_Word base;
#line 280 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 280 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__String_22));
#line 280 "erl_unify_gen.m"
        }
#line 279 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 279 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_unify_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_unify_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 255 "erl_unify_gen.m"
      {
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__ModuleInfo_39;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__VarTypes_40;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__TermArgs_41;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_43_43;
#line 255 "erl_unify_gen.m"
        MR_Word erl_backend__erl_unify_gen__V_44_44;

#line 259 "erl_unify_gen.m"
        {
#line 259 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__ModuleInfo_39);
        }
#line 260 "erl_unify_gen.m"
        {
#line 260 "erl_unify_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23, &erl_backend__erl_unify_gen__VarTypes_40);
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 3) = ((MR_Box) (erl_backend__erl_unify_gen__ModuleInfo_39));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 4) = ((MR_Box) (erl_backend__erl_unify_gen__VarTypes_40));
#line 266 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_unify_gen__V_43_43, 5) = ((MR_Box) (erl_backend__erl_unify_gen__DummyVarReplacement_9));
#line 266 "erl_unify_gen.m"
        }
#line 266 "erl_unify_gen.m"
        {
#line 266 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__TermArgs_41 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_unify_gen_scalar_common_1[1], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_unify_gen__V_43_43, erl_backend__erl_unify_gen__Args_8);
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          erl_backend__erl_unify_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_unify_gen__V_44_44, 1) = ((MR_Box) (erl_backend__erl_unify_gen__TermArgs_41));
#line 268 "erl_unify_gen.m"
        }
#line 268 "erl_unify_gen.m"
        {
#line 268 "erl_unify_gen.m"
          MR_Word base;
#line 268 "erl_unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "erl_unify_gen.m"
          *erl_backend__erl_unify_gen__Term_10 = base;
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 268 "erl_unify_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_unify_gen__V_44_44));
#line 268 "erl_unify_gen.m"
        }
#line 255 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 255 "erl_unify_gen.m"
      }
#line 269 "erl_unify_gen.m"
    else
#line 269 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__succeeded = MR_FALSE;
#line 248 "erl_unify_gen.m"
    if (erl_backend__erl_unify_gen__succeeded)
#line 248 "erl_unify_gen.m"
      {
#line 248 "erl_unify_gen.m"
        *erl_backend__erl_unify_gen__STATE_VARIABLE_Info_24 = erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_23;
#line 248 "erl_unify_gen.m"
        erl_backend__erl_unify_gen__succeeded = MR_TRUE;
#line 248 "erl_unify_gen.m"
      }
#line 248 "erl_unify_gen.m"
    return erl_backend__erl_unify_gen__succeeded;
#line 248 "erl_unify_gen.m"
  }
#line 59 "erl_unify_gen.m"
}

#line 49 "erl_unify_gen.m"
void MR_CALL 
erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__1_1,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__2_2,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__HeadVar__3_3,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__MaybeSuccessExpr_4,
#line 49 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__Statement_5,
#line 49 "erl_unify_gen.m"
  MR_Word erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6,
#line 49 "erl_unify_gen.m"
  MR_Word * erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7)
#line 49 "erl_unify_gen.m"
{
#line 97 "erl_unify_gen.m"
  {
#line 97 "erl_unify_gen.m"
    MR_bool erl_backend__erl_unify_gen__succeeded;

#line 97 "erl_unify_gen.m"
    {
#line 97 "erl_unify_gen.m"
      erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(erl_backend__erl_unify_gen__HeadVar__1_1, erl_backend__erl_unify_gen__HeadVar__2_2, erl_backend__erl_unify_gen__MaybeSuccessExpr_4, erl_backend__erl_unify_gen__Statement_5, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_0_6, erl_backend__erl_unify_gen__STATE_VARIABLE_Info_7);
#line 97 "erl_unify_gen.m"
      return;
    }
#line 97 "erl_unify_gen.m"
  }
#line 49 "erl_unify_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.erl_unify_gen. */
