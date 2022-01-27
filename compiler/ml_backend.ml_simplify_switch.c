/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module ml_backend.ml_simplify_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_simplify_switch__init
ENDINIT
*/

#include "ml_backend.ml_simplify_switch.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.mlds.mih"
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




#line 148 "ml_backend.ml_simplify_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 151 "ml_backend.ml_simplify_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 154 "ml_backend.ml_simplify_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
#line 157 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 159 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2);

#line 162 "ml_backend.ml_simplify_switch.c"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
#line 165 "ml_backend.ml_simplify_switch.c"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 167 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 169 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3);

#line 277 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_14,
#line 277 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
#line 277 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);

#line 394 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
#line 394 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3);

#line 394 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2);

#line 494 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
#line 494 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 494 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2);

#line 459 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_2,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4);

#line 437 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
#line 437 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
#line 437 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
#line 437 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
#line 437 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9);

#line 419 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
#line 419 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
#line 419 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
#line 419 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
#line 419 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
#line 419 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11);

#line 396 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
#line 396 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
#line 396 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
#line 396 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
#line 396 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);

#line 376 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 376 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3);

#line 348 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 348 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);

#line 249 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
#line 249 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 249 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
#line 249 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
#line 249 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
#line 249 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);

#line 247 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 247 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 247 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 241 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
#line 241 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Case_6,
#line 241 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
#line 241 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
#line 241 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
#line 241 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15);

#line 238 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 198 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Range_8,
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_10,
#line 198 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
#line 198 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
#line 198 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
#line 198 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14);

#line 238 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 179 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
#line 179 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
#line 179 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4);

#line 120 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
#line 120 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3);


static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[2][8];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[1][7];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[4][1];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[6][2];




static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "case of dense switch"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "branch to end of dense switch"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "switch (using dense jump table)"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "End of dense switch"))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_4[0])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_4[1])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_4[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_4[3])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 562 "ml_backend.ml_simplify_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 571 "ml_backend.ml_simplify_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 580 "ml_backend.ml_simplify_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001)),
  (MR_String) "ml_backend.ml_simplify_switch",
  (MR_String) "case_labels_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 601 "ml_backend.ml_simplify_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
#line 604 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 606 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2)
#line 608 "ml_backend.ml_simplify_switch.c"
{
#line 610 "ml_backend.ml_simplify_switch.c"
  {
#line 612 "ml_backend.ml_simplify_switch.c"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 615 "ml_backend.ml_simplify_switch.c"
    {
#line 617 "ml_backend.ml_simplify_switch.c"
      ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2));
    }
#line 620 "ml_backend.ml_simplify_switch.c"
    return ml_backend__ml_simplify_switch__succeeded;
#line 622 "ml_backend.ml_simplify_switch.c"
  }
#line 624 "ml_backend.ml_simplify_switch.c"
}

#line 627 "ml_backend.ml_simplify_switch.c"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
#line 630 "ml_backend.ml_simplify_switch.c"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 632 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 634 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3)
#line 636 "ml_backend.ml_simplify_switch.c"
{
#line 638 "ml_backend.ml_simplify_switch.c"
  {
#line 640 "ml_backend.ml_simplify_switch.c"
    MR_Word ml_backend__ml_simplify_switch__conv0_HeadVar__1_1;

#line 643 "ml_backend.ml_simplify_switch.c"
    {
#line 645 "ml_backend.ml_simplify_switch.c"
      ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(&ml_backend__ml_simplify_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_3));
    }
#line 648 "ml_backend.ml_simplify_switch.c"
    *ml_backend__ml_simplify_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_HeadVar__1_1));
#line 650 "ml_backend.ml_simplify_switch.c"
  }
#line 652 "ml_backend.ml_simplify_switch.c"
}

#line 277 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_14,
#line 277 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
#line 277 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
#line 277 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
#line 277 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45)
#line 277 "ml_simplify_switch.m"
{
#line 284 "ml_simplify_switch.m"
  {
#line 284 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__FirstVal_15 == (MR_Integer) 0);
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Index_24;
#line 284 "ml_simplify_switch.m"
    MR_String ml_backend__ml_simplify_switch__EndLabel_25;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap0_26;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_27;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CasesCode_29;
#line 284 "ml_simplify_switch.m"
    MR_String ml_backend__ml_simplify_switch__DefaultLabel_30;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_31;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DefaultLabelStatement_32;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DefaultStatements_33;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__StartComment_35;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DoJump_36;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__EndLabelStatement_37;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__EndComment_38;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_52_52;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_60_60;
#line 284 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_61_61;

#line 289 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 288 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__Index_24 = ml_backend__ml_simplify_switch__Rval_19;
#line 289 "ml_simplify_switch.m"
    else
#line 290 "ml_simplify_switch.m"
      {
#line 290 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_47_47;
#line 290 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_48_48;

#line 290 "ml_simplify_switch.m"
        {
#line 290 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_48_48, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstVal_15));
#line 290 "ml_simplify_switch.m"
        }
#line 290 "ml_simplify_switch.m"
        {
#line 290 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_48_48));
#line 290 "ml_simplify_switch.m"
        }
#line 290 "ml_simplify_switch.m"
        {
#line 290 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Index_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Rval_19));
#line 290 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_47_47));
#line 290 "ml_simplify_switch.m"
        }
#line 290 "ml_simplify_switch.m"
      }
#line 294 "ml_simplify_switch.m"
    {
#line 294 "ml_simplify_switch.m"
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49);
    }
#line 295 "ml_simplify_switch.m"
    {
#line 295 "ml_simplify_switch.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &ml_backend__ml_simplify_switch__CaseLabelsMap0_26);
    }
#line 296 "ml_simplify_switch.m"
    {
#line 296 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_13, ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__CaseLabelsMap0_26, &ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__Decls_21, &ml_backend__ml_simplify_switch__CasesCode_29, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50);
    }
#line 298 "ml_simplify_switch.m"
    {
#line 298 "ml_simplify_switch.m"
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__DefaultLabel_30, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);
    }
#line 299 "ml_simplify_switch.m"
    {
#line 299 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__CaseLabels_31 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__FirstVal_15, ml_backend__ml_simplify_switch__LastVal_16, ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__DefaultLabel_30);
    }
#line 301 "ml_simplify_switch.m"
    {
#line 301 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabel_30));
#line 301 "ml_simplify_switch.m"
    }
#line 301 "ml_simplify_switch.m"
    {
#line 301 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__DefaultLabelStatement_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_52_52));
#line 301 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 301 "ml_simplify_switch.m"
    }
#line 308 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__Default_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 309 "ml_simplify_switch.m"
      {
#line 310 "ml_simplify_switch.m"
        {
#line 310 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 310 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "ml_simplify_switch.m"
        }
#line 309 "ml_simplify_switch.m"
      }
#line 308 "ml_simplify_switch.m"
    else
#line 308 "ml_simplify_switch.m"
      if ((ml_backend__ml_simplify_switch__Default_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "ml_simplify_switch.m"
        {
#line 307 "ml_simplify_switch.m"
          {
#line 307 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 307 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "ml_simplify_switch.m"
          }
#line 304 "ml_simplify_switch.m"
        }
#line 308 "ml_simplify_switch.m"
      else
#line 312 "ml_simplify_switch.m"
        {
#line 312 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__DefaultCase_34 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_14), (MR_Integer) 1);
#line 312 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_53_53;

#line 313 "ml_simplify_switch.m"
          {
#line 313 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultCase_34));
#line 313 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "ml_simplify_switch.m"
          }
#line 313 "ml_simplify_switch.m"
          {
#line 313 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 313 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_53_53));
#line 313 "ml_simplify_switch.m"
          }
#line 312 "ml_simplify_switch.m"
        }
#line 316 "ml_simplify_switch.m"
    {
#line 316 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__StartComment_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_5[4])));
#line 316 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 316 "ml_simplify_switch.m"
    }
#line 319 "ml_simplify_switch.m"
    {
#line 319 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 319 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 319 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
#line 319 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels_31));
#line 319 "ml_simplify_switch.m"
    }
#line 319 "ml_simplify_switch.m"
    {
#line 319 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__DoJump_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_60_60));
#line 319 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 319 "ml_simplify_switch.m"
    }
#line 320 "ml_simplify_switch.m"
    {
#line 320 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabel_25));
#line 320 "ml_simplify_switch.m"
    }
#line 320 "ml_simplify_switch.m"
    {
#line 320 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__EndLabelStatement_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_61_61));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 320 "ml_simplify_switch.m"
    }
#line 321 "ml_simplify_switch.m"
    {
#line 321 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__EndComment_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_5[5])));
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 321 "ml_simplify_switch.m"
    }
#line 339 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__NeedRangeCheck_17 == (MR_Integer) 0))
#line 340 "ml_simplify_switch.m"
      {
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_87_87 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_65_65;
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_66_66;
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_67_67;
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_68_68;
#line 340 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_69_69;

#line 342 "ml_simplify_switch.m"
        {
#line 342 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
#line 342 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
#line 342 "ml_simplify_switch.m"
        }
#line 342 "ml_simplify_switch.m"
        {
#line 342 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
#line 342 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_66_66));
#line 342 "ml_simplify_switch.m"
        }
#line 344 "ml_simplify_switch.m"
        {
#line 344 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
#line 344 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "ml_simplify_switch.m"
        }
#line 344 "ml_simplify_switch.m"
        {
#line 344 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
#line 344 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
#line 344 "ml_simplify_switch.m"
        }
#line 343 "ml_simplify_switch.m"
        {
#line 343 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_67_67 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__DefaultStatements_33, ml_backend__ml_simplify_switch__V_68_68);
        }
#line 342 "ml_simplify_switch.m"
        {
#line 342 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__Statements_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__V_65_65, ml_backend__ml_simplify_switch__V_67_67);
        }
#line 340 "ml_simplify_switch.m"
      }
#line 339 "ml_simplify_switch.m"
    else
#line 327 "ml_simplify_switch.m"
      {
#line 327 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Difference_39 = (ml_backend__ml_simplify_switch__LastVal_16 - ml_backend__ml_simplify_switch__FirstVal_15);
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__InRange_40;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Else_41;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__SwitchBody_42;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__DoSwitch_43;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_72_72;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_73_73;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_74_74;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_75_75;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_77_77;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_79_79;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_80_80;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_81_81;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_82_82;
#line 327 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_83_83;

#line 331 "ml_simplify_switch.m"
        {
#line 331 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Difference_39));
#line 331 "ml_simplify_switch.m"
        }
#line 331 "ml_simplify_switch.m"
        {
#line 331 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 331 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
#line 331 "ml_simplify_switch.m"
        }
#line 329 "ml_simplify_switch.m"
        {
#line 329 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__InRange_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 329 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 329 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 329 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
#line 329 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
#line 329 "ml_simplify_switch.m"
        }
#line 332 "ml_simplify_switch.m"
        {
#line 332 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultStatements_33));
#line 332 "ml_simplify_switch.m"
        }
#line 332 "ml_simplify_switch.m"
        {
#line 332 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_75_75));
#line 332 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 332 "ml_simplify_switch.m"
        }
#line 332 "ml_simplify_switch.m"
        {
#line 332 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Else_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Else_41, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_74_74));
#line 332 "ml_simplify_switch.m"
        }
#line 334 "ml_simplify_switch.m"
        {
#line 334 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
#line 334 "ml_simplify_switch.m"
        }
#line 334 "ml_simplify_switch.m"
        {
#line 334 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_79_79));
#line 334 "ml_simplify_switch.m"
        }
#line 334 "ml_simplify_switch.m"
        {
#line 334 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__SwitchBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_77_77));
#line 334 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 334 "ml_simplify_switch.m"
        }
#line 336 "ml_simplify_switch.m"
        {
#line 336 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 336 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__InRange_40));
#line 336 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchBody_42));
#line 336 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Else_41));
#line 336 "ml_simplify_switch.m"
        }
#line 336 "ml_simplify_switch.m"
        {
#line 336 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__DoSwitch_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_80_80));
#line 336 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 336 "ml_simplify_switch.m"
        }
#line 338 "ml_simplify_switch.m"
        {
#line 338 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "ml_simplify_switch.m"
        }
#line 338 "ml_simplify_switch.m"
        {
#line 338 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_83_83));
#line 338 "ml_simplify_switch.m"
        }
#line 338 "ml_simplify_switch.m"
        {
#line 338 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoSwitch_43));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_82_82));
#line 338 "ml_simplify_switch.m"
        }
#line 338 "ml_simplify_switch.m"
        {
#line 338 "ml_simplify_switch.m"
          MR_Word base;
#line 338 "ml_simplify_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__Statements_22 = base;
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
#line 338 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_81_81));
#line 338 "ml_simplify_switch.m"
        }
#line 327 "ml_simplify_switch.m"
      }
#line 284 "ml_simplify_switch.m"
  }
#line 277 "ml_simplify_switch.m"
}

#line 394 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
#line 394 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3)
#line 394 "ml_simplify_switch.m"
{
#line 394 "ml_simplify_switch.m"
  {
#line 394 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 394 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;
#line 394 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_5 = ml_backend__ml_simplify_switch__HeadVar__3_3;

#line 394 "ml_simplify_switch.m"
    {
#line 394 "ml_simplify_switch.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_5)));
#line 394 "ml_simplify_switch.m"
      return;
    }
#line 394 "ml_simplify_switch.m"
  }
#line 394 "ml_simplify_switch.m"
}

#line 394 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 394 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2)
#line 394 "ml_simplify_switch.m"
{
#line 394 "ml_simplify_switch.m"
  {
#line 394 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 394 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_3 = ml_backend__ml_simplify_switch__HeadVar__1_1;
#line 394 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;

#line 394 "ml_simplify_switch.m"
    {
#line 394 "ml_simplify_switch.m"
      return ml_backend__ml_simplify_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_4)));
    }
#line 394 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__succeeded;
#line 394 "ml_simplify_switch.m"
  }
#line 394 "ml_simplify_switch.m"
}

#line 494 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
#line 494 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 494 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2)
#line 494 "ml_simplify_switch.m"
{
#line 497 "ml_simplify_switch.m"
  {
#line 497 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 497 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3;

#line 497 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "ml_simplify_switch.m"
      {
#line 497 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_5[3]);
#line 497 "ml_simplify_switch.m"
      }
#line 497 "ml_simplify_switch.m"
    else
#line 497 "ml_simplify_switch.m"
      {
#line 497 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 497 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));

#line 497 "ml_simplify_switch.m"
        if ((ml_backend__ml_simplify_switch__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "ml_simplify_switch.m"
          if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 512 "ml_simplify_switch.m"
            {
#line 512 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__MinRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
#line 512 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__MaxRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
#line 512 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_27_27;
#line 512 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_29_29;

#line 514 "ml_simplify_switch.m"
              {
#line 514 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_23));
#line 514 "ml_simplify_switch.m"
              }
#line 515 "ml_simplify_switch.m"
              {
#line 515 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_24));
#line 515 "ml_simplify_switch.m"
              }
#line 513 "ml_simplify_switch.m"
              {
#line 513 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 513 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_27_27));
#line 513 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
#line 513 "ml_simplify_switch.m"
              }
#line 512 "ml_simplify_switch.m"
            }
#line 510 "ml_simplify_switch.m"
          else
#line 510 "ml_simplify_switch.m"
            {
#line 510 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__CaseRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

#line 511 "ml_simplify_switch.m"
              {
#line 511 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 511 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 511 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_20));
#line 511 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 511 "ml_simplify_switch.m"
              }
#line 510 "ml_simplify_switch.m"
            }
#line 497 "ml_simplify_switch.m"
        else
#line 500 "ml_simplify_switch.m"
          {
#line 500 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_15_15;
#line 500 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_16_16;

#line 510 "ml_simplify_switch.m"
            if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 512 "ml_simplify_switch.m"
              {
#line 512 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__MinRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
#line 512 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__MaxRval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
#line 512 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_38_38;
#line 512 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_40_40;

#line 514 "ml_simplify_switch.m"
                {
#line 514 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_34));
#line 514 "ml_simplify_switch.m"
                }
#line 515 "ml_simplify_switch.m"
                {
#line 515 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_35));
#line 515 "ml_simplify_switch.m"
                }
#line 513 "ml_simplify_switch.m"
                {
#line 513 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 513 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_38_38));
#line 513 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_40_40));
#line 513 "ml_simplify_switch.m"
                }
#line 512 "ml_simplify_switch.m"
              }
#line 510 "ml_simplify_switch.m"
            else
#line 510 "ml_simplify_switch.m"
              {
#line 510 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__CaseRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

#line 511 "ml_simplify_switch.m"
                {
#line 511 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 511 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 511 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_31));
#line 511 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 511 "ml_simplify_switch.m"
                }
#line 510 "ml_simplify_switch.m"
              }
#line 503 "ml_simplify_switch.m"
            {
#line 503 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_16_16 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__V_18_18, ml_backend__ml_simplify_switch__SwitchRval_2);
            }
#line 501 "ml_simplify_switch.m"
            {
#line 501 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 501 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 501 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 501 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_15_15));
#line 501 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_16_16));
#line 501 "ml_simplify_switch.m"
            }
#line 500 "ml_simplify_switch.m"
          }
#line 497 "ml_simplify_switch.m"
      }
#line 497 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__HeadVar__3_3;
#line 497 "ml_simplify_switch.m"
  }
#line 494 "ml_simplify_switch.m"
}

#line 459 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_2,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
#line 459 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4)
#line 459 "ml_simplify_switch.m"
{
#line 462 "ml_simplify_switch.m"
  {
#line 462 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 462 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Statement_5;

#line 462 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "ml_simplify_switch.m"
      if ((ml_backend__ml_simplify_switch__Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 464 "ml_simplify_switch.m"
        {
#line 465 "ml_simplify_switch.m"
          {
#line 465 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_5[2]));
#line 465 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 465 "ml_simplify_switch.m"
          }
#line 464 "ml_simplify_switch.m"
        }
#line 466 "ml_simplify_switch.m"
      else
#line 466 "ml_simplify_switch.m"
        if ((ml_backend__ml_simplify_switch__Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "ml_simplify_switch.m"
          {
#line 468 "ml_simplify_switch.m"
            {
#line 468 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_5[2]));
#line 468 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 468 "ml_simplify_switch.m"
            }
#line 467 "ml_simplify_switch.m"
          }
#line 466 "ml_simplify_switch.m"
        else
#line 470 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_2), (MR_Integer) 1);
#line 462 "ml_simplify_switch.m"
    else
#line 473 "ml_simplify_switch.m"
      {
#line 473 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__FirstMatchCond_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
#line 473 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LaterMatchConds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
#line 473 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));

#line 476 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 477 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 479 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Statement_5 = ml_backend__ml_simplify_switch__CaseStatement_24;
#line 480 "ml_simplify_switch.m"
        else
#line 481 "ml_simplify_switch.m"
          {
#line 481 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__AllMatchConds_25;
#line 481 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__CaseMatchedRval_26;
#line 481 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__RestStatement_27;
#line 481 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__IfStmt_28;
#line 481 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_29_29;

#line 481 "ml_simplify_switch.m"
            {
#line 481 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__AllMatchConds_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstMatchCond_22));
#line 481 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__LaterMatchConds_23));
#line 481 "ml_simplify_switch.m"
            }
#line 482 "ml_simplify_switch.m"
            {
#line 482 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__CaseMatchedRval_26 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__AllMatchConds_25, ml_backend__ml_simplify_switch__HeadVar__3_3);
            }
#line 483 "ml_simplify_switch.m"
            {
#line 483 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__RestStatement_27 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__Default_2, ml_backend__ml_simplify_switch__HeadVar__3_3, ml_backend__ml_simplify_switch__MLDS_Context_4);
            }
#line 486 "ml_simplify_switch.m"
            {
#line 486 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__RestStatement_27));
#line 486 "ml_simplify_switch.m"
            }
#line 485 "ml_simplify_switch.m"
            {
#line 485 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseMatchedRval_26));
#line 485 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_24));
#line 485 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
#line 485 "ml_simplify_switch.m"
            }
#line 487 "ml_simplify_switch.m"
            {
#line 487 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__IfStmt_28));
#line 487 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 487 "ml_simplify_switch.m"
            }
#line 481 "ml_simplify_switch.m"
          }
#line 473 "ml_simplify_switch.m"
      }
#line 462 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__Statement_5;
#line 462 "ml_simplify_switch.m"
  }
#line 459 "ml_simplify_switch.m"
}

#line 437 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
#line 437 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
#line 437 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
#line 437 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
#line 437 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9)
#line 437 "ml_simplify_switch.m"
{
#line 443 "ml_simplify_switch.m"
  {
#line 443 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__ThisVal_6 > ml_backend__ml_simplify_switch__LastVal_7);
#line 443 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_10;

#line 443 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 442 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "ml_simplify_switch.m"
    else
#line 448 "ml_simplify_switch.m"
      {
#line 448 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__CaseLabel_12;
#line 448 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseLabels1_13;
#line 448 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_14_14;
#line 446 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__CaseLabel0_11;
#line 444 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv0_CaseLabel0_11;

#line 444 "ml_simplify_switch.m"
        {
#line 444 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__ThisVal_6, &ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
        }
#line 444 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 444 "ml_simplify_switch.m"
          {
#line 444 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__CaseLabel0_11 = ((MR_String) ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
#line 444 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 444 "ml_simplify_switch.m"
          }
#line 446 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 445 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__CaseLabel0_11;
#line 446 "ml_simplify_switch.m"
        else
#line 447 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__DefaultLabel_9;
#line 449 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_14_14 = (ml_backend__ml_simplify_switch__ThisVal_6 + (MR_Integer) 1);
#line 449 "ml_simplify_switch.m"
        {
#line 449 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabels1_13 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__V_14_14, ml_backend__ml_simplify_switch__LastVal_7, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__DefaultLabel_9);
        }
#line 451 "ml_simplify_switch.m"
        {
#line 451 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabel_12));
#line 451 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels1_13));
#line 451 "ml_simplify_switch.m"
        }
#line 448 "ml_simplify_switch.m"
      }
#line 443 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__CaseLabels_10;
#line 443 "ml_simplify_switch.m"
  }
#line 437 "ml_simplify_switch.m"
}

#line 419 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
#line 419 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
#line 419 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
#line 419 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
#line 419 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
#line 419 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11)
#line 419 "ml_simplify_switch.m"
{
#line 425 "ml_simplify_switch.m"
  while (MR_TRUE)
#line 425 "ml_simplify_switch.m"
    {
#line 425 "ml_simplify_switch.m"
      /* tailcall optimized into a loop */
#line 425 "ml_simplify_switch.m"
      {
#line 425 "ml_simplify_switch.m"
        MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Min_6 > ml_backend__ml_simplify_switch__Max_7);

#line 425 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 423 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10;
#line 425 "ml_simplify_switch.m"
        else
#line 426 "ml_simplify_switch.m"
          {
#line 426 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;
#line 426 "ml_simplify_switch.m"
            MR_Integer ml_backend__ml_simplify_switch__V_13_13;

#line 426 "ml_simplify_switch.m"
            {
#line 426 "ml_simplify_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Min_6, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_8)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12);
            }
#line 427 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_13_13 = (ml_backend__ml_simplify_switch__Min_6 + (MR_Integer) 1);
#line 427 "ml_simplify_switch.m"
            /* direct tailcall eliminated */
#line 427 "ml_simplify_switch.m"
            {
#line 427 "ml_simplify_switch.m"
              MR_Integer ml_backend__ml_simplify_switch__Min__tmp_copy_6 = ml_backend__ml_simplify_switch__V_13_13;
#line 427 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;

#line 427 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10;
#line 427 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Min_6 = ml_backend__ml_simplify_switch__Min__tmp_copy_6;
#line 427 "ml_simplify_switch.m"
            }
#line 427 "ml_simplify_switch.m"
            continue;
#line 426 "ml_simplify_switch.m"
          }
#line 425 "ml_simplify_switch.m"
      }
#line 425 "ml_simplify_switch.m"
      break;
#line 425 "ml_simplify_switch.m"
    }
#line 419 "ml_simplify_switch.m"
}

#line 396 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
#line 396 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
#line 396 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
#line 396 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
#line 396 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15)
#line 396 "ml_simplify_switch.m"
{
#line 401 "ml_simplify_switch.m"
  {
#line 401 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 401 "ml_simplify_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cond_6)) == (MR_mktag((MR_Integer) 1))))
#line 408 "ml_simplify_switch.m"
      {
#line 408 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MinRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
#line 408 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MaxRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 1)));
#line 414 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Min_12;
#line 414 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Max_13;
#line 410 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_16_16;
#line 410 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_17_17;

#line 410 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 410 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 410 "ml_simplify_switch.m"
          {
#line 410 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 1)));
#line 410 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_16_16)) == (MR_mktag((MR_Integer) 2)));
#line 410 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 410 "ml_simplify_switch.m"
              {
#line 410 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Min_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_16_16, (MR_Integer) 0)));
#line 411 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 411 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 411 "ml_simplify_switch.m"
                  {
#line 411 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 1)));
#line 411 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_17_17)) == (MR_mktag((MR_Integer) 2)));
#line 411 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 411 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__Max_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_17_17, (MR_Integer) 0)));
#line 411 "ml_simplify_switch.m"
                  }
#line 410 "ml_simplify_switch.m"
              }
#line 410 "ml_simplify_switch.m"
          }
#line 414 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 413 "ml_simplify_switch.m"
          {
#line 413 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(ml_backend__ml_simplify_switch__Min_12, ml_backend__ml_simplify_switch__Max_13, ml_backend__ml_simplify_switch__ThisLabel_5, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
#line 413 "ml_simplify_switch.m"
            return;
          }
#line 414 "ml_simplify_switch.m"
        else
#line 415 "ml_simplify_switch.m"
          {
#line 415 "ml_simplify_switch.m"
            {
#line 415 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
#line 415 "ml_simplify_switch.m"
              return;
            }
#line 415 "ml_simplify_switch.m"
          }
#line 408 "ml_simplify_switch.m"
      }
#line 401 "ml_simplify_switch.m"
    else
#line 401 "ml_simplify_switch.m"
      {
#line 401 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
#line 404 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
#line 402 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_22_22;

#line 402 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 402 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 402 "ml_simplify_switch.m"
          {
#line 402 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 1)));
#line 402 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 402 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 402 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_22_22, (MR_Integer) 0)));
#line 402 "ml_simplify_switch.m"
          }
#line 404 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 403 "ml_simplify_switch.m"
          {
#line 403 "ml_simplify_switch.m"
            {
#line 403 "ml_simplify_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Val_9, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_5)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
#line 403 "ml_simplify_switch.m"
              return;
            }
#line 403 "ml_simplify_switch.m"
          }
#line 404 "ml_simplify_switch.m"
        else
#line 405 "ml_simplify_switch.m"
          {
#line 405 "ml_simplify_switch.m"
            {
#line 405 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
#line 405 "ml_simplify_switch.m"
              return;
            }
#line 405 "ml_simplify_switch.m"
          }
#line 401 "ml_simplify_switch.m"
      }
#line 401 "ml_simplify_switch.m"
  }
#line 396 "ml_simplify_switch.m"
}

#line 376 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 376 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 376 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3)
#line 376 "ml_simplify_switch.m"
{
#line 376 "ml_simplify_switch.m"
  {
#line 376 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 376 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15;

#line 376 "ml_simplify_switch.m"
    {
#line 376 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15);
    }
#line 376 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15));
#line 376 "ml_simplify_switch.m"
  }
#line 376 "ml_simplify_switch.m"
}

#line 348 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 348 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
#line 348 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
#line 348 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8)
#line 348 "ml_simplify_switch.m"
{
#line 353 "ml_simplify_switch.m"
  {
#line 353 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 353 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "ml_simplify_switch.m"
      {
#line 353 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7;
#line 353 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3;
#line 353 "ml_simplify_switch.m"
      }
#line 353 "ml_simplify_switch.m"
    else
#line 355 "ml_simplify_switch.m"
      {
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatements_24;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CasesDecls_25;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CasesStatements_26;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__FirstCond_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LaterConds_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));
#line 355 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__ThisLabel_50;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MLDS_Context_52;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LabelComment_53;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LabelCode_54;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__JumpComment_55;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__JumpCode_56;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_59_59;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_64_64;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_68_68;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_69_69;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_70_70;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_71_71;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_72_72;
#line 355 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_73_73;
#line 376 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31;
#line 377 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_51_51;

#line 374 "ml_simplify_switch.m"
        {
#line 374 "ml_simplify_switch.m"
          ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32);
        }
#line 375 "ml_simplify_switch.m"
        {
#line 375 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__FirstCond_47, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58);
        }
#line 376 "ml_simplify_switch.m"
        {
#line 376 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_3[0]));
#line 376 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__generate_cases_8_p_0_1));
#line 376 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
#line 376 "ml_simplify_switch.m"
        }
#line 376 "ml_simplify_switch.m"
        {
#line 376 "ml_simplify_switch.m"
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__V_59_59, ml_backend__ml_simplify_switch__LaterConds_48, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58)), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
        }
#line 376 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31 = ((MR_Word) ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
#line 377 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 0)));
#line 377 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__MLDS_Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 1)));
#line 378 "ml_simplify_switch.m"
        {
#line 378 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__LabelComment_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 378 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_5[0])));
#line 378 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 378 "ml_simplify_switch.m"
        }
#line 380 "ml_simplify_switch.m"
        {
#line 380 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
#line 380 "ml_simplify_switch.m"
        }
#line 380 "ml_simplify_switch.m"
        {
#line 380 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__LabelCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_64_64));
#line 380 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 380 "ml_simplify_switch.m"
        }
#line 381 "ml_simplify_switch.m"
        {
#line 381 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__JumpComment_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_5[1])));
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 381 "ml_simplify_switch.m"
        }
#line 384 "ml_simplify_switch.m"
        {
#line 384 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__HeadVar__2_2));
#line 384 "ml_simplify_switch.m"
        }
#line 384 "ml_simplify_switch.m"
        {
#line 384 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
#line 384 "ml_simplify_switch.m"
        }
#line 384 "ml_simplify_switch.m"
        {
#line 384 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__JumpCode_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_68_68));
#line 384 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 384 "ml_simplify_switch.m"
        }
#line 387 "ml_simplify_switch.m"
        {
#line 387 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpCode_56));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "ml_simplify_switch.m"
        }
#line 387 "ml_simplify_switch.m"
        {
#line 387 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpComment_55));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
#line 387 "ml_simplify_switch.m"
        }
#line 386 "ml_simplify_switch.m"
        {
#line 386 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_49));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
#line 386 "ml_simplify_switch.m"
        }
#line 386 "ml_simplify_switch.m"
        {
#line 386 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelCode_54));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_71_71));
#line 386 "ml_simplify_switch.m"
        }
#line 386 "ml_simplify_switch.m"
        {
#line 386 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseStatements_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelComment_53));
#line 386 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_70_70));
#line 386 "ml_simplify_switch.m"
        }
#line 358 "ml_simplify_switch.m"
        {
#line 358 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__HeadVar__2_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4, &ml_backend__ml_simplify_switch__CasesDecls_25, &ml_backend__ml_simplify_switch__CasesStatements_26, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);
        }
#line 360 "ml_simplify_switch.m"
        {
#line 360 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_simplify_switch__CasesDecls_25);
        }
#line 361 "ml_simplify_switch.m"
        {
#line 361 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_simplify_switch__CaseStatements_24, ml_backend__ml_simplify_switch__CasesStatements_26);
        }
#line 355 "ml_simplify_switch.m"
      }
#line 353 "ml_simplify_switch.m"
  }
#line 348 "ml_simplify_switch.m"
}

#line 249 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
#line 249 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 249 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
#line 249 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
#line 249 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
#line 249 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5)
#line 249 "ml_simplify_switch.m"
{
#line 252 "ml_simplify_switch.m"
  {
#line 252 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 252 "ml_simplify_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 262 "ml_simplify_switch.m"
      {
#line 262 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MinRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MaxRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__RvalMin_24;
#line 269 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__RvalMax_25;
#line 264 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_30_30;
#line 264 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_31_31;

#line 264 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 264 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 264 "ml_simplify_switch.m"
          {
#line 264 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 1)));
#line 264 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_30_30)) == (MR_mktag((MR_Integer) 2)));
#line 264 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 264 "ml_simplify_switch.m"
              {
#line 264 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__RvalMin_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_30_30, (MR_Integer) 0)));
#line 265 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 265 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 265 "ml_simplify_switch.m"
                  {
#line 265 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 1)));
#line 265 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_31_31)) == (MR_mktag((MR_Integer) 2)));
#line 265 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 265 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__RvalMax_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_31_31, (MR_Integer) 0)));
#line 265 "ml_simplify_switch.m"
                  }
#line 264 "ml_simplify_switch.m"
              }
#line 264 "ml_simplify_switch.m"
          }
#line 269 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 267 "ml_simplify_switch.m"
          {
#line 267 "ml_simplify_switch.m"
            {
#line 267 "ml_simplify_switch.m"
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__RvalMin_24, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
#line 268 "ml_simplify_switch.m"
            {
#line 268 "ml_simplify_switch.m"
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__RvalMax_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
#line 268 "ml_simplify_switch.m"
              return;
            }
#line 267 "ml_simplify_switch.m"
          }
#line 269 "ml_simplify_switch.m"
        else
#line 270 "ml_simplify_switch.m"
          {
#line 270 "ml_simplify_switch.m"
            {
#line 270 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
#line 270 "ml_simplify_switch.m"
              return;
            }
#line 270 "ml_simplify_switch.m"
          }
#line 262 "ml_simplify_switch.m"
      }
#line 252 "ml_simplify_switch.m"
    else
#line 252 "ml_simplify_switch.m"
      {
#line 252 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
#line 254 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_14_14;

#line 254 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 254 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 254 "ml_simplify_switch.m"
          {
#line 254 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 1)));
#line 254 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 254 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 254 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_14_14, (MR_Integer) 0)));
#line 254 "ml_simplify_switch.m"
          }
#line 258 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 256 "ml_simplify_switch.m"
          {
#line 256 "ml_simplify_switch.m"
            {
#line 256 "ml_simplify_switch.m"
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
#line 257 "ml_simplify_switch.m"
            {
#line 257 "ml_simplify_switch.m"
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
#line 257 "ml_simplify_switch.m"
              return;
            }
#line 256 "ml_simplify_switch.m"
          }
#line 258 "ml_simplify_switch.m"
        else
#line 259 "ml_simplify_switch.m"
          {
#line 259 "ml_simplify_switch.m"
            {
#line 259 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
#line 259 "ml_simplify_switch.m"
              return;
            }
#line 259 "ml_simplify_switch.m"
          }
#line 252 "ml_simplify_switch.m"
      }
#line 252 "ml_simplify_switch.m"
  }
#line 249 "ml_simplify_switch.m"
}

#line 247 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 247 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 247 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 247 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 247 "ml_simplify_switch.m"
{
#line 247 "ml_simplify_switch.m"
  {
#line 247 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 247 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3;
#line 247 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5;

#line 247 "ml_simplify_switch.m"
    {
#line 247 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5);
    }
#line 247 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3));
#line 247 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5));
#line 247 "ml_simplify_switch.m"
  }
#line 247 "ml_simplify_switch.m"
}

#line 241 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
#line 241 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Case_6,
#line 241 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
#line 241 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
#line 241 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
#line 241 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15)
#line 241 "ml_simplify_switch.m"
{
#line 244 "ml_simplify_switch.m"
  {
#line 244 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 244 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_27_27;
#line 244 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 0)));
#line 244 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 1)));
#line 244 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16;
#line 244 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17;
#line 245 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch___CaseStatement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 2)));
#line 247 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13;
#line 247 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15;

#line 246 "ml_simplify_switch.m"
    {
#line 246 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(ml_backend__ml_simplify_switch__FirstCond_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17);
    }
#line 2541 "ml_backend.ml_simplify_switch.c"
    ml_backend__ml_simplify_switch__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 247 "ml_simplify_switch.m"
    {
#line 247 "ml_simplify_switch.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[3], ml_backend__ml_simplify_switch__LaterConds_10, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16)), &ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17)), &ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
    }
#line 247 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13);
#line 247 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
#line 244 "ml_simplify_switch.m"
  }
#line 241 "ml_simplify_switch.m"
}

#line 238 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 238 "ml_simplify_switch.m"
{
#line 238 "ml_simplify_switch.m"
  {
#line 238 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 238 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
#line 238 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

#line 238 "ml_simplify_switch.m"
    {
#line 238 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
#line 238 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
#line 238 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
#line 238 "ml_simplify_switch.m"
  }
#line 238 "ml_simplify_switch.m"
}

#line 198 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Range_8,
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
#line 198 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_10,
#line 198 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
#line 198 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
#line 198 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
#line 198 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14)
#line 198 "ml_simplify_switch.m"
{
#line 215 "ml_simplify_switch.m"
  {
#line 215 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Min_15;
#line 215 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Max_16;
#line 205 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_25_25;
#line 205 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__TypeRange_17;
#line 205 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_18;
#line 205 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NoDefaultDensity_19;
#line 205 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_23_23;
#line 205 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_24_24;

#line 205 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 205 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 205 "ml_simplify_switch.m"
      {
#line 206 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Range_8)) == (MR_mktag((MR_Integer) 1)));
#line 206 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 206 "ml_simplify_switch.m"
          {
#line 206 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Min_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 0)));
#line 206 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Max_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 1)));
#line 207 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_23_23 = (ml_backend__ml_simplify_switch__Max_16 - ml_backend__ml_simplify_switch__Min_15);
#line 207 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_24_24 = (MR_Integer) 1;
#line 207 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__TypeRange_17 = (ml_backend__ml_simplify_switch__V_23_23 + ml_backend__ml_simplify_switch__V_24_24);
#line 2659 "ml_backend.ml_simplify_switch.c"
            ml_backend__ml_simplify_switch__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 208 "ml_simplify_switch.m"
            {
#line 208 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__NumCases_18 = mercury__list__length_1_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_25_25, ml_backend__ml_simplify_switch__Cases_9);
            }
#line 209 "ml_simplify_switch.m"
            {
#line 209 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__NoDefaultDensity_19 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_18, ml_backend__ml_simplify_switch__TypeRange_17);
            }
#line 210 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NoDefaultDensity_19 > ml_backend__ml_simplify_switch__ReqDensity_11);
#line 206 "ml_simplify_switch.m"
          }
#line 205 "ml_simplify_switch.m"
      }
#line 215 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 212 "ml_simplify_switch.m"
      {
#line 212 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
#line 213 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__FirstVal_12 = ml_backend__ml_simplify_switch__Min_15;
#line 214 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__LastVal_13 = ml_backend__ml_simplify_switch__Max_16;
#line 212 "ml_simplify_switch.m"
      }
#line 215 "ml_simplify_switch.m"
    else
#line 224 "ml_simplify_switch.m"
      {
#line 224 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_38;
#line 224 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_30_30;
#line 224 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_31_31;
#line 238 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv3_FirstVal_12;
#line 238 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv2_LastVal_13;

#line 219 "ml_simplify_switch.m"
        if ((ml_backend__ml_simplify_switch__Default_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
#line 219 "ml_simplify_switch.m"
        else
#line 223 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 1;
#line 239 "ml_simplify_switch.m"
        {
#line 239 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_30_30 = mercury__int__max_int_0_f_0();
        }
#line 239 "ml_simplify_switch.m"
        {
#line 239 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_31_31 = mercury__int__min_int_0_f_0();
        }
#line 2722 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 238 "ml_simplify_switch.m"
        {
#line 238 "ml_simplify_switch.m"
          mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[2], ml_backend__ml_simplify_switch__Cases_9, ((MR_Box) (ml_backend__ml_simplify_switch__V_30_30)), &ml_backend__ml_simplify_switch__conv3_FirstVal_12, ((MR_Box) (ml_backend__ml_simplify_switch__V_31_31)), &ml_backend__ml_simplify_switch__conv2_LastVal_13);
        }
#line 238 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__FirstVal_12 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstVal_12);
#line 238 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__LastVal_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastVal_13);
#line 224 "ml_simplify_switch.m"
      }
#line 215 "ml_simplify_switch.m"
  }
#line 198 "ml_simplify_switch.m"
}

#line 238 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 238 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 238 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 238 "ml_simplify_switch.m"
{
#line 238 "ml_simplify_switch.m"
  {
#line 238 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 238 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
#line 238 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

#line 238 "ml_simplify_switch.m"
    {
#line 238 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
#line 238 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
#line 238 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
#line 238 "ml_simplify_switch.m"
  }
#line 238 "ml_simplify_switch.m"
}

#line 179 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
#line 179 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
#line 179 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4)
#line 179 "ml_simplify_switch.m"
{
#line 181 "ml_simplify_switch.m"
  {
#line 181 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 181 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_15_25;
#line 181 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_26;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_5;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__FirstCaseVal_6;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__LastCaseVal_7;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__CasesRange_8;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Density_9;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_11_11;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_12_12;
#line 181 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_17_17;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_18_18;
#line 181 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_19_19;
#line 238 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6;
#line 238 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv2_LastCaseVal_7;

#line 183 "ml_simplify_switch.m"
    {
#line 183 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__NumCases_5 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__Cases_3);
    }
#line 184 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_5 > (MR_Integer) 2);
#line 181 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 181 "ml_simplify_switch.m"
      {
#line 238 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_17_17 = (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[1];
#line 239 "ml_simplify_switch.m"
        {
#line 239 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_18_18 = mercury__int__max_int_0_f_0();
        }
#line 239 "ml_simplify_switch.m"
        {
#line 239 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_19_19 = mercury__int__min_int_0_f_0();
        }
#line 2845 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_15_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 2847 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 238 "ml_simplify_switch.m"
        {
#line 238 "ml_simplify_switch.m"
          mercury__list__foldl2_6_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_15_25, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__V_17_17, ml_backend__ml_simplify_switch__Cases_3, ((MR_Box) (ml_backend__ml_simplify_switch__V_18_18)), &ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6, ((MR_Box) (ml_backend__ml_simplify_switch__V_19_19)), &ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
        }
#line 238 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__FirstCaseVal_6 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6);
#line 238 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__LastCaseVal_7 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
#line 188 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_11_11 = (ml_backend__ml_simplify_switch__LastCaseVal_7 - ml_backend__ml_simplify_switch__FirstCaseVal_6);
#line 188 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_12_12 = (MR_Integer) 1;
#line 188 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__CasesRange_8 = (ml_backend__ml_simplify_switch__V_11_11 + ml_backend__ml_simplify_switch__V_12_12);
#line 189 "ml_simplify_switch.m"
        {
#line 189 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Density_9 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_5, ml_backend__ml_simplify_switch__CasesRange_8);
        }
#line 190 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Density_9 > ml_backend__ml_simplify_switch__ReqDensity_4);
#line 181 "ml_simplify_switch.m"
      }
#line 181 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__succeeded;
#line 181 "ml_simplify_switch.m"
  }
#line 179 "ml_simplify_switch.m"
}

#line 120 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
#line 120 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3)
#line 120 "ml_simplify_switch.m"
{
#line 126 "ml_simplify_switch.m"
  {
#line 126 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 126 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__IsIntegral_4;

#line 126 "ml_simplify_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MLDSType_3)) == (MR_mktag((MR_Integer) 2))))
#line 150 "ml_simplify_switch.m"
      {
#line 150 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CtorCat_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 1)));
#line 150 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 0)));
#line 150 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 2)));

#line 157 "ml_simplify_switch.m"
        if ((ml_backend__ml_simplify_switch__CtorCat_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
        else
#line 157 "ml_simplify_switch.m"
          if ((ml_backend__ml_simplify_switch__CtorCat_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
          else
#line 157 "ml_simplify_switch.m"
            if ((ml_backend__ml_simplify_switch__CtorCat_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
            else
#line 157 "ml_simplify_switch.m"
              if ((ml_backend__ml_simplify_switch__CtorCat_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 169 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
              else
#line 157 "ml_simplify_switch.m"
                if ((ml_backend__ml_simplify_switch__CtorCat_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 169 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                else
#line 157 "ml_simplify_switch.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_18)) == (MR_mktag((MR_Integer) 1))))
#line 157 "ml_simplify_switch.m"
                    {
#line 157 "ml_simplify_switch.m"
                      MR_Word ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

#line 157 "ml_simplify_switch.m"
                      if ((ml_backend__ml_simplify_switch__V_30_30 == (MR_Integer) 2))
#line 156 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 157 "ml_simplify_switch.m"
                      else
#line 157 "ml_simplify_switch.m"
                        if ((ml_backend__ml_simplify_switch__V_30_30 == (MR_Integer) 1))
#line 170 "ml_simplify_switch.m"
                          ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                        else
#line 157 "ml_simplify_switch.m"
                          if ((ml_backend__ml_simplify_switch__V_30_30 == (MR_Integer) 0))
#line 156 "ml_simplify_switch.m"
                            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 157 "ml_simplify_switch.m"
                          else
#line 170 "ml_simplify_switch.m"
                            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                    }
#line 157 "ml_simplify_switch.m"
                  else
#line 157 "ml_simplify_switch.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_18)) == (MR_mktag((MR_Integer) 2))))
#line 157 "ml_simplify_switch.m"
                      {
#line 157 "ml_simplify_switch.m"
                        MR_Word ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

#line 157 "ml_simplify_switch.m"
                        if ((ml_backend__ml_simplify_switch__V_31_31 == (MR_Integer) 1))
#line 175 "ml_simplify_switch.m"
                          ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                        else
#line 156 "ml_simplify_switch.m"
                          ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 157 "ml_simplify_switch.m"
                      }
#line 157 "ml_simplify_switch.m"
                    else
#line 157 "ml_simplify_switch.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 170 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                      else
#line 157 "ml_simplify_switch.m"
                        {
#line 157 "ml_simplify_switch.m"
                          MR_Word ml_backend__ml_simplify_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 1)));

#line 157 "ml_simplify_switch.m"
                          if ((ml_backend__ml_simplify_switch__V_32_32 == (MR_Integer) 0))
#line 170 "ml_simplify_switch.m"
                            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                          else
#line 157 "ml_simplify_switch.m"
                            if ((ml_backend__ml_simplify_switch__V_32_32 == (MR_Integer) 2))
#line 170 "ml_simplify_switch.m"
                              ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                            else
#line 170 "ml_simplify_switch.m"
                              ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 157 "ml_simplify_switch.m"
                        }
#line 150 "ml_simplify_switch.m"
      }
#line 126 "ml_simplify_switch.m"
    else
#line 126 "ml_simplify_switch.m"
      if ((((ml_backend__ml_simplify_switch__MLDSType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))) || ((ml_backend__ml_simplify_switch__MLDSType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 126 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 126 "ml_simplify_switch.m"
      else
#line 147 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 126 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__IsIntegral_4;
#line 126 "ml_simplify_switch.m"
  }
#line 120 "ml_simplify_switch.m"
}

#line 31 "ml_simplify_switch.m"
void MR_CALL 
ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(
#line 31 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Stmt0_6,
#line 31 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_7,
#line 31 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Statement_8,
#line 31 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32,
#line 31 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33)
#line 31 "ml_simplify_switch.m"
{
#line 57 "ml_simplify_switch.m"
  {
#line 57 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 57 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Globals_10;
#line 92 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Rval_12;
#line 92 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Range_13;
#line 92 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cases_14;
#line 92 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Default_15;
#line 92 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__ReqDensity_18;
#line 64 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_67_67;
#line 64 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Type_11;
#line 64 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_16;
#line 64 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__DenseSize_17;
#line 64 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_35_35;
#line 64 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_39_39;
#line 64 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_40_40;
#line 71 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_36_36;
#line 71 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_37_37;
#line 71 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_38_38;

#line 58 "ml_simplify_switch.m"
    {
#line 58 "ml_simplify_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, &ml_backend__ml_simplify_switch__Globals_10);
    }
#line 64 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 64 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 64 "ml_simplify_switch.m"
      {
#line 64 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 64 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 64 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Range_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 64 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 64 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Default_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 126 "ml_simplify_switch.m"
        if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Type_11)) == (MR_mktag((MR_Integer) 2))))
#line 150 "ml_simplify_switch.m"
          {
#line 150 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__CtorCat_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 1)));
#line 150 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 0)));
#line 150 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 2)));

#line 157 "ml_simplify_switch.m"
            if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 1))))
#line 157 "ml_simplify_switch.m"
              {
#line 157 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

#line 157 "ml_simplify_switch.m"
                if ((ml_backend__ml_simplify_switch__V_95_95 == (MR_Integer) 2))
#line 156 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 157 "ml_simplify_switch.m"
                else
#line 157 "ml_simplify_switch.m"
                  if ((ml_backend__ml_simplify_switch__V_95_95 == (MR_Integer) 0))
#line 156 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 157 "ml_simplify_switch.m"
                  else
#line 157 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 157 "ml_simplify_switch.m"
              }
#line 157 "ml_simplify_switch.m"
            else
#line 157 "ml_simplify_switch.m"
              if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 2))))
#line 157 "ml_simplify_switch.m"
                {
#line 157 "ml_simplify_switch.m"
                  MR_Word ml_backend__ml_simplify_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

#line 3147 "ml_backend.ml_simplify_switch.c"
                  ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_96_96 == (MR_Integer) 0);
#line 157 "ml_simplify_switch.m"
                }
#line 157 "ml_simplify_switch.m"
              else
#line 157 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 150 "ml_simplify_switch.m"
          }
#line 126 "ml_simplify_switch.m"
        else
#line 126 "ml_simplify_switch.m"
          if ((((ml_backend__ml_simplify_switch__Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))) || ((ml_backend__ml_simplify_switch__Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 126 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 126 "ml_simplify_switch.m"
          else
#line 126 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 64 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 64 "ml_simplify_switch.m"
          {
#line 69 "ml_simplify_switch.m"
            {
#line 69 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_35_35 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
            }
#line 69 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_35_35 == (MR_Integer) 1);
#line 64 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 64 "ml_simplify_switch.m"
              {
#line 71 "ml_simplify_switch.m"
                {
#line 71 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_36_36 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
#line 71 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_36_36 == (MR_Integer) 1);
#line 71 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 71 "ml_simplify_switch.m"
                  {
#line 72 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_37_37 = (MR_Integer) 318;
#line 72 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_38_38 = (MR_Integer) 1;
#line 72 "ml_simplify_switch.m"
                    {
#line 72 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_37_37, ml_backend__ml_simplify_switch__V_38_38);
                    }
#line 71 "ml_simplify_switch.m"
                  }
#line 70 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 64 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 64 "ml_simplify_switch.m"
                  {
#line 3210 "ml_backend.ml_simplify_switch.c"
                    ml_backend__ml_simplify_switch__TypeCtorInfo_67_67 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 76 "ml_simplify_switch.m"
                    {
#line 76 "ml_simplify_switch.m"
                      mercury__list__length_2_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_67_67, ml_backend__ml_simplify_switch__Cases_14, &ml_backend__ml_simplify_switch__NumCases_16);
                    }
#line 77 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_39_39 = (MR_Integer) 431;
#line 77 "ml_simplify_switch.m"
                    {
#line 77 "ml_simplify_switch.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_39_39, &ml_backend__ml_simplify_switch__DenseSize_17);
                    }
#line 78 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_16 >= ml_backend__ml_simplify_switch__DenseSize_17);
#line 64 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 64 "ml_simplify_switch.m"
                      {
#line 81 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__V_40_40 = (MR_Integer) 429;
#line 81 "ml_simplify_switch.m"
                        {
#line 81 "ml_simplify_switch.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_40_40, &ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
#line 83 "ml_simplify_switch.m"
                        {
#line 83 "ml_simplify_switch.m"
                          ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
#line 64 "ml_simplify_switch.m"
                      }
#line 64 "ml_simplify_switch.m"
                  }
#line 64 "ml_simplify_switch.m"
              }
#line 64 "ml_simplify_switch.m"
          }
#line 64 "ml_simplify_switch.m"
      }
#line 92 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 86 "ml_simplify_switch.m"
      {
#line 86 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__FirstVal_19;
#line 86 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__LastVal_20;
#line 86 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_21;
#line 86 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Decls_22;
#line 86 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Statements_23;
#line 86 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Stmt_24;

#line 85 "ml_simplify_switch.m"
        {
#line 85 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(ml_backend__ml_simplify_switch__Range_13, ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__ReqDensity_18, &ml_backend__ml_simplify_switch__FirstVal_19, &ml_backend__ml_simplify_switch__LastVal_20, &ml_backend__ml_simplify_switch__NeedRangeCheck_21);
        }
#line 87 "ml_simplify_switch.m"
        {
#line 87 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__FirstVal_19, ml_backend__ml_simplify_switch__LastVal_20, ml_backend__ml_simplify_switch__NeedRangeCheck_21, ml_backend__ml_simplify_switch__Rval_12, ml_backend__ml_simplify_switch__MLDS_Context_7, &ml_backend__ml_simplify_switch__Decls_22, &ml_backend__ml_simplify_switch__Statements_23, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33);
        }
#line 90 "ml_simplify_switch.m"
        {
#line 90 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Stmt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 90 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Decls_22));
#line 90 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Statements_23));
#line 90 "ml_simplify_switch.m"
        }
#line 91 "ml_simplify_switch.m"
        {
#line 91 "ml_simplify_switch.m"
          MR_Word base;
#line 91 "ml_simplify_switch.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 91 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__Statement_8 = base;
#line 91 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt_24));
#line 91 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
#line 91 "ml_simplify_switch.m"
        }
#line 86 "ml_simplify_switch.m"
      }
#line 92 "ml_simplify_switch.m"
    else
#line 105 "ml_simplify_switch.m"
      {
#line 105 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_58;
#line 105 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_59;
#line 105 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Default_60;
#line 96 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_42_42;
#line 96 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Type_47;
#line 96 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch___Range_25;
#line 99 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_43_43;
#line 99 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_44_44;
#line 99 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_45_45;

#line 96 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 96 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 96 "ml_simplify_switch.m"
          {
#line 96 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Type_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 96 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Rval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 96 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch___Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 96 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 96 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Default_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 97 "ml_simplify_switch.m"
            {
#line 97 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_42_42 = ml_backend__ml_simplify_switch__is_integral_type_1_f_0(ml_backend__ml_simplify_switch__Type_47);
            }
#line 97 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_42_42 == (MR_Integer) 1);
#line 96 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 96 "ml_simplify_switch.m"
              {
#line 99 "ml_simplify_switch.m"
                {
#line 99 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_43_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
#line 99 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_43_43 == (MR_Integer) 1);
#line 99 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 99 "ml_simplify_switch.m"
                  {
#line 100 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_44_44 = (MR_Integer) 318;
#line 100 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_45_45 = (MR_Integer) 1;
#line 100 "ml_simplify_switch.m"
                    {
#line 100 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_44_44, ml_backend__ml_simplify_switch__V_45_45);
                    }
#line 99 "ml_simplify_switch.m"
                  }
#line 98 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 96 "ml_simplify_switch.m"
              }
#line 96 "ml_simplify_switch.m"
          }
#line 105 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 103 "ml_simplify_switch.m"
          {
#line 103 "ml_simplify_switch.m"
            *ml_backend__ml_simplify_switch__Statement_8 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_59, ml_backend__ml_simplify_switch__Default_60, ml_backend__ml_simplify_switch__Rval_58, ml_backend__ml_simplify_switch__MLDS_Context_7);
          }
#line 105 "ml_simplify_switch.m"
        else
#line 115 "ml_simplify_switch.m"
          {
#line 115 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__SingleCase_28;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_46_46;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__Cases_49;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__Default_50;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Type_26;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Rval_27;
#line 109 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Range_48;

#line 109 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 109 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 109 "ml_simplify_switch.m"
              {
#line 109 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 109 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 109 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Range_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 109 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 109 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Default_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 109 "ml_simplify_switch.m"
                  {
#line 110 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cases_49)) == (MR_mktag((MR_Integer) 1)));
#line 110 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 110 "ml_simplify_switch.m"
                      {
#line 110 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__SingleCase_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 0)));
#line 110 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 1)));
#line 110 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "ml_simplify_switch.m"
                      }
#line 109 "ml_simplify_switch.m"
                  }
#line 109 "ml_simplify_switch.m"
              }
#line 115 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 113 "ml_simplify_switch.m"
              {
#line 113 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch___FirstCond_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 0)));
#line 113 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch___LaterConds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 1)));

#line 113 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 2)));
#line 113 "ml_simplify_switch.m"
              }
#line 115 "ml_simplify_switch.m"
            else
#line 117 "ml_simplify_switch.m"
              {
#line 117 "ml_simplify_switch.m"
                MR_Word base;
#line 117 "ml_simplify_switch.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__Statement_8 = base;
#line 117 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt0_6));
#line 117 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
#line 117 "ml_simplify_switch.m"
              }
#line 115 "ml_simplify_switch.m"
          }
#line 117 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32;
#line 105 "ml_simplify_switch.m"
      }
#line 57 "ml_simplify_switch.m"
  }
#line 31 "ml_simplify_switch.m"
}

void mercury__ml_backend__ml_simplify_switch__init(void)
{
}

void mercury__ml_backend__ml_simplify_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0);
}

void mercury__ml_backend__ml_simplify_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_simplify_switch. */
