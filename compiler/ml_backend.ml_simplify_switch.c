/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module ml_backend.ml_simplify_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_simplify_switch__init
ENDINIT
*/

#include "ml_backend.ml_simplify_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.mlds.mih"
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




#line 155 "ml_backend.ml_simplify_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 158 "ml_backend.ml_simplify_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 161 "ml_backend.ml_simplify_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
#line 164 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 166 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2);

#line 169 "ml_backend.ml_simplify_switch.c"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
#line 172 "ml_backend.ml_simplify_switch.c"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 174 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 176 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3);

#line 278 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_14,
#line 278 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
#line 278 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);

#line 395 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
#line 395 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3);

#line 395 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2);

#line 495 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
#line 495 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 495 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2);

#line 460 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_2,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4);

#line 438 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
#line 438 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
#line 438 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
#line 438 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
#line 438 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9);

#line 420 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
#line 420 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
#line 420 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
#line 420 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
#line 420 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
#line 420 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11);

#line 397 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
#line 397 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
#line 397 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
#line 397 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
#line 397 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);

#line 377 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 377 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3);

#line 349 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 349 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);

#line 251 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
#line 251 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 251 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
#line 251 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
#line 251 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
#line 251 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);

#line 249 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 249 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 249 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 243 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
#line 243 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Case_6,
#line 243 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
#line 243 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
#line 243 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
#line 243 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15);

#line 240 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 200 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Range_8,
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_10,
#line 200 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
#line 200 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
#line 200 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
#line 200 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14);

#line 240 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

#line 181 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
#line 181 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
#line 181 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4);

#line 122 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
#line 122 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3);


static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[2][8];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[4][1];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_6[6][2];


#line 159 "ml_simplify_switch.m"
/* sealed */ struct ml_backend__ml_simplify_switch__vector_common_type_2_0_s {
#line 159 "ml_simplify_switch.m"
  const MR_Word ml_backend__ml_simplify_switch__vector_common_type_2_0__vct_2_f_0;
#line 159 "ml_simplify_switch.m"
};

static /* final */ const struct ml_backend__ml_simplify_switch__vector_common_type_2_0_s ml_backend__ml_simplify_switch_vector_common_2[4];



static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[2][8] = {
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

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[1][7] = {
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

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[4][1] = {
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

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_6[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[0])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[1])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[3])))
  },
};


static /* final */ const struct ml_backend__ml_simplify_switch__vector_common_type_2_0_s ml_backend__ml_simplify_switch_vector_common_2[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 577 "ml_backend.ml_simplify_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 586 "ml_backend.ml_simplify_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 595 "ml_backend.ml_simplify_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001)),
  (MR_String) "ml_backend.ml_simplify_switch",
  (MR_String) "case_labels_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 612 "ml_backend.ml_simplify_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
#line 615 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 617 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2)
#line 619 "ml_backend.ml_simplify_switch.c"
{
#line 621 "ml_backend.ml_simplify_switch.c"
  {
#line 623 "ml_backend.ml_simplify_switch.c"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 626 "ml_backend.ml_simplify_switch.c"
    {
#line 628 "ml_backend.ml_simplify_switch.c"
      ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2));
    }
#line 631 "ml_backend.ml_simplify_switch.c"
    return ml_backend__ml_simplify_switch__succeeded;
#line 633 "ml_backend.ml_simplify_switch.c"
  }
#line 635 "ml_backend.ml_simplify_switch.c"
}

#line 638 "ml_backend.ml_simplify_switch.c"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
#line 641 "ml_backend.ml_simplify_switch.c"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 643 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 645 "ml_backend.ml_simplify_switch.c"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3)
#line 647 "ml_backend.ml_simplify_switch.c"
{
#line 649 "ml_backend.ml_simplify_switch.c"
  {
#line 651 "ml_backend.ml_simplify_switch.c"
    MR_Word ml_backend__ml_simplify_switch__conv0_HeadVar__1_1;

#line 654 "ml_backend.ml_simplify_switch.c"
    {
#line 656 "ml_backend.ml_simplify_switch.c"
      ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(&ml_backend__ml_simplify_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_3));
    }
#line 659 "ml_backend.ml_simplify_switch.c"
    *ml_backend__ml_simplify_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_HeadVar__1_1));
#line 661 "ml_backend.ml_simplify_switch.c"
  }
#line 663 "ml_backend.ml_simplify_switch.c"
}

#line 278 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_14,
#line 278 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
#line 278 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
#line 278 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
#line 278 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45)
#line 278 "ml_simplify_switch.m"
{
#line 285 "ml_simplify_switch.m"
  {
#line 285 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__FirstVal_15 == (MR_Integer) 0);
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Index_24;
#line 285 "ml_simplify_switch.m"
    MR_String ml_backend__ml_simplify_switch__EndLabel_25;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap0_26;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_27;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CasesCode_29;
#line 285 "ml_simplify_switch.m"
    MR_String ml_backend__ml_simplify_switch__DefaultLabel_30;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_31;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DefaultLabelStatement_32;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DefaultStatements_33;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__StartComment_35;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__DoJump_36;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__EndLabelStatement_37;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__EndComment_38;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_52_52;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_60_60;
#line 285 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_61_61;

#line 288 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 289 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__Index_24 = ml_backend__ml_simplify_switch__Rval_19;
#line 288 "ml_simplify_switch.m"
    else
#line 291 "ml_simplify_switch.m"
      {
#line 291 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_47_47;
#line 291 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_48_48;

#line 291 "ml_simplify_switch.m"
        {
#line 291 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_48_48, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstVal_15));
#line 291 "ml_simplify_switch.m"
        }
#line 291 "ml_simplify_switch.m"
        {
#line 291 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_48_48));
#line 291 "ml_simplify_switch.m"
        }
#line 291 "ml_simplify_switch.m"
        {
#line 291 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Index_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Rval_19));
#line 291 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_47_47));
#line 291 "ml_simplify_switch.m"
        }
#line 291 "ml_simplify_switch.m"
      }
#line 295 "ml_simplify_switch.m"
    {
#line 295 "ml_simplify_switch.m"
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49);
    }
#line 296 "ml_simplify_switch.m"
    {
#line 296 "ml_simplify_switch.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &ml_backend__ml_simplify_switch__CaseLabelsMap0_26);
    }
#line 297 "ml_simplify_switch.m"
    {
#line 297 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_13, ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__CaseLabelsMap0_26, &ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__Decls_21, &ml_backend__ml_simplify_switch__CasesCode_29, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50);
    }
#line 299 "ml_simplify_switch.m"
    {
#line 299 "ml_simplify_switch.m"
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__DefaultLabel_30, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);
    }
#line 300 "ml_simplify_switch.m"
    {
#line 300 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__CaseLabels_31 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__FirstVal_15, ml_backend__ml_simplify_switch__LastVal_16, ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__DefaultLabel_30);
    }
#line 302 "ml_simplify_switch.m"
    {
#line 302 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabel_30));
#line 302 "ml_simplify_switch.m"
    }
#line 302 "ml_simplify_switch.m"
    {
#line 302 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__DefaultLabelStatement_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_52_52));
#line 302 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 302 "ml_simplify_switch.m"
    }
#line 309 "ml_simplify_switch.m"
#line 309 "ml_simplify_switch.m"
    switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_14)) {
#line 309 "ml_simplify_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 309 "ml_simplify_switch.m"
      case (MR_Integer) 0:
#line 309 "ml_simplify_switch.m"
#line 309 "ml_simplify_switch.m"
        switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_14)) {
#line 309 "ml_simplify_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 309 "ml_simplify_switch.m"
          case (MR_Integer) 0:
#line 305 "ml_simplify_switch.m"
            {
#line 308 "ml_simplify_switch.m"
              {
#line 308 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 308 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "ml_simplify_switch.m"
              }
#line 305 "ml_simplify_switch.m"
            }
#line 309 "ml_simplify_switch.m"
            break;
#line 309 "ml_simplify_switch.m"
          case (MR_Integer) 1:
#line 310 "ml_simplify_switch.m"
            {
#line 311 "ml_simplify_switch.m"
              {
#line 311 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 311 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "ml_simplify_switch.m"
              }
#line 310 "ml_simplify_switch.m"
            }
#line 309 "ml_simplify_switch.m"
            break;
#line 309 "ml_simplify_switch.m"
        }
#line 309 "ml_simplify_switch.m"
        break;
#line 309 "ml_simplify_switch.m"
      case (MR_Integer) 1:
#line 313 "ml_simplify_switch.m"
        {
#line 313 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__DefaultCase_34 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_14), (MR_Integer) 1);
#line 313 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_53_53;

#line 314 "ml_simplify_switch.m"
          {
#line 314 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultCase_34));
#line 314 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "ml_simplify_switch.m"
          }
#line 314 "ml_simplify_switch.m"
          {
#line 314 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
#line 314 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_53_53));
#line 314 "ml_simplify_switch.m"
          }
#line 313 "ml_simplify_switch.m"
        }
#line 309 "ml_simplify_switch.m"
        break;
#line 309 "ml_simplify_switch.m"
    }
#line 317 "ml_simplify_switch.m"
    {
#line 317 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__StartComment_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[4])));
#line 317 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 317 "ml_simplify_switch.m"
    }
#line 320 "ml_simplify_switch.m"
    {
#line 320 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels_31));
#line 320 "ml_simplify_switch.m"
    }
#line 320 "ml_simplify_switch.m"
    {
#line 320 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__DoJump_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_60_60));
#line 320 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 320 "ml_simplify_switch.m"
    }
#line 321 "ml_simplify_switch.m"
    {
#line 321 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabel_25));
#line 321 "ml_simplify_switch.m"
    }
#line 321 "ml_simplify_switch.m"
    {
#line 321 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__EndLabelStatement_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_61_61));
#line 321 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 321 "ml_simplify_switch.m"
    }
#line 322 "ml_simplify_switch.m"
    {
#line 322 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__EndComment_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[5])));
#line 322 "ml_simplify_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 322 "ml_simplify_switch.m"
    }
#line 340 "ml_simplify_switch.m"
#line 340 "ml_simplify_switch.m"
    switch (ml_backend__ml_simplify_switch__NeedRangeCheck_17) {
#line 340 "ml_simplify_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 340 "ml_simplify_switch.m"
      case (MR_Integer) 0:
#line 341 "ml_simplify_switch.m"
        {
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_87_87 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_65_65;
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_66_66;
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_67_67;
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_68_68;
#line 341 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_69_69;

#line 343 "ml_simplify_switch.m"
          {
#line 343 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
#line 343 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
#line 343 "ml_simplify_switch.m"
          }
#line 343 "ml_simplify_switch.m"
          {
#line 343 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
#line 343 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_66_66));
#line 343 "ml_simplify_switch.m"
          }
#line 345 "ml_simplify_switch.m"
          {
#line 345 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
#line 345 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "ml_simplify_switch.m"
          }
#line 345 "ml_simplify_switch.m"
          {
#line 345 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
#line 345 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
#line 345 "ml_simplify_switch.m"
          }
#line 344 "ml_simplify_switch.m"
          {
#line 344 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_67_67 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__DefaultStatements_33, ml_backend__ml_simplify_switch__V_68_68);
          }
#line 343 "ml_simplify_switch.m"
          {
#line 343 "ml_simplify_switch.m"
            *ml_backend__ml_simplify_switch__Statements_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__V_65_65, ml_backend__ml_simplify_switch__V_67_67);
          }
#line 341 "ml_simplify_switch.m"
        }
#line 340 "ml_simplify_switch.m"
        break;
#line 340 "ml_simplify_switch.m"
      case (MR_Integer) 1:
#line 328 "ml_simplify_switch.m"
        {
#line 328 "ml_simplify_switch.m"
          MR_Integer ml_backend__ml_simplify_switch__Difference_39 = (ml_backend__ml_simplify_switch__LastVal_16 - ml_backend__ml_simplify_switch__FirstVal_15);
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__InRange_40;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__Else_41;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__SwitchBody_42;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__DoSwitch_43;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_72_72;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_73_73;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_74_74;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_75_75;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_77_77;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_79_79;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_80_80;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_81_81;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_82_82;
#line 328 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_83_83;

#line 332 "ml_simplify_switch.m"
          {
#line 332 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Difference_39));
#line 332 "ml_simplify_switch.m"
          }
#line 332 "ml_simplify_switch.m"
          {
#line 332 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 332 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
#line 332 "ml_simplify_switch.m"
          }
#line 330 "ml_simplify_switch.m"
          {
#line 330 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__InRange_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 330 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 330 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 330 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
#line 330 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
#line 330 "ml_simplify_switch.m"
          }
#line 333 "ml_simplify_switch.m"
          {
#line 333 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultStatements_33));
#line 333 "ml_simplify_switch.m"
          }
#line 333 "ml_simplify_switch.m"
          {
#line 333 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_75_75));
#line 333 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 333 "ml_simplify_switch.m"
          }
#line 333 "ml_simplify_switch.m"
          {
#line 333 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Else_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Else_41, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_74_74));
#line 333 "ml_simplify_switch.m"
          }
#line 335 "ml_simplify_switch.m"
          {
#line 335 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
#line 335 "ml_simplify_switch.m"
          }
#line 335 "ml_simplify_switch.m"
          {
#line 335 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_79_79));
#line 335 "ml_simplify_switch.m"
          }
#line 335 "ml_simplify_switch.m"
          {
#line 335 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__SwitchBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_77_77));
#line 335 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 335 "ml_simplify_switch.m"
          }
#line 337 "ml_simplify_switch.m"
          {
#line 337 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 337 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__InRange_40));
#line 337 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchBody_42));
#line 337 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Else_41));
#line 337 "ml_simplify_switch.m"
          }
#line 337 "ml_simplify_switch.m"
          {
#line 337 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__DoSwitch_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_80_80));
#line 337 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
#line 337 "ml_simplify_switch.m"
          }
#line 339 "ml_simplify_switch.m"
          {
#line 339 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "ml_simplify_switch.m"
          }
#line 339 "ml_simplify_switch.m"
          {
#line 339 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_83_83));
#line 339 "ml_simplify_switch.m"
          }
#line 339 "ml_simplify_switch.m"
          {
#line 339 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoSwitch_43));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_82_82));
#line 339 "ml_simplify_switch.m"
          }
#line 339 "ml_simplify_switch.m"
          {
#line 339 "ml_simplify_switch.m"
            MR_Word base;
#line 339 "ml_simplify_switch.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_simplify_switch.m"
            *ml_backend__ml_simplify_switch__Statements_22 = base;
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
#line 339 "ml_simplify_switch.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_81_81));
#line 339 "ml_simplify_switch.m"
          }
#line 328 "ml_simplify_switch.m"
        }
#line 340 "ml_simplify_switch.m"
        break;
#line 340 "ml_simplify_switch.m"
    }
#line 285 "ml_simplify_switch.m"
  }
#line 278 "ml_simplify_switch.m"
}

#line 395 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
#line 395 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3)
#line 395 "ml_simplify_switch.m"
{
#line 395 "ml_simplify_switch.m"
  {
#line 395 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 395 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;
#line 395 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_5 = ml_backend__ml_simplify_switch__HeadVar__3_3;

#line 395 "ml_simplify_switch.m"
    {
#line 395 "ml_simplify_switch.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_5)));
    }
#line 395 "ml_simplify_switch.m"
  }
#line 395 "ml_simplify_switch.m"
}

#line 395 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 395 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2)
#line 395 "ml_simplify_switch.m"
{
#line 395 "ml_simplify_switch.m"
  {
#line 395 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 395 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_3 = ml_backend__ml_simplify_switch__HeadVar__1_1;
#line 395 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;

#line 395 "ml_simplify_switch.m"
    {
#line 395 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_4)));
    }
#line 395 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__succeeded;
#line 395 "ml_simplify_switch.m"
  }
#line 395 "ml_simplify_switch.m"
}

#line 495 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
#line 495 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 495 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2)
#line 495 "ml_simplify_switch.m"
{
#line 498 "ml_simplify_switch.m"
  {
#line 498 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 498 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3;

#line 498 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "ml_simplify_switch.m"
      {
#line 498 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[3]);
#line 498 "ml_simplify_switch.m"
      }
#line 498 "ml_simplify_switch.m"
    else
#line 498 "ml_simplify_switch.m"
      {
#line 498 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 498 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));

#line 498 "ml_simplify_switch.m"
        if ((ml_backend__ml_simplify_switch__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "ml_simplify_switch.m"
          if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 513 "ml_simplify_switch.m"
            {
#line 513 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__MinRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
#line 513 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__MaxRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
#line 513 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_27_27;
#line 513 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_29_29;

#line 515 "ml_simplify_switch.m"
              {
#line 515 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 515 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_23));
#line 515 "ml_simplify_switch.m"
              }
#line 516 "ml_simplify_switch.m"
              {
#line 516 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 516 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 516 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_24));
#line 516 "ml_simplify_switch.m"
              }
#line 514 "ml_simplify_switch.m"
              {
#line 514 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_27_27));
#line 514 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
#line 514 "ml_simplify_switch.m"
              }
#line 513 "ml_simplify_switch.m"
            }
#line 511 "ml_simplify_switch.m"
          else
#line 511 "ml_simplify_switch.m"
            {
#line 511 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__CaseRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

#line 512 "ml_simplify_switch.m"
              {
#line 512 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 512 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 512 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_20));
#line 512 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 512 "ml_simplify_switch.m"
              }
#line 511 "ml_simplify_switch.m"
            }
#line 498 "ml_simplify_switch.m"
        else
#line 501 "ml_simplify_switch.m"
          {
#line 501 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_15_15;
#line 501 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_16_16;

#line 511 "ml_simplify_switch.m"
            if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 513 "ml_simplify_switch.m"
              {
#line 513 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__MinRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
#line 513 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__MaxRval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
#line 513 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_38_38;
#line 513 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_40_40;

#line 515 "ml_simplify_switch.m"
                {
#line 515 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 515 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_34));
#line 515 "ml_simplify_switch.m"
                }
#line 516 "ml_simplify_switch.m"
                {
#line 516 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 516 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 516 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_35));
#line 516 "ml_simplify_switch.m"
                }
#line 514 "ml_simplify_switch.m"
                {
#line 514 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_38_38));
#line 514 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_40_40));
#line 514 "ml_simplify_switch.m"
                }
#line 513 "ml_simplify_switch.m"
              }
#line 511 "ml_simplify_switch.m"
            else
#line 511 "ml_simplify_switch.m"
              {
#line 511 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__CaseRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

#line 512 "ml_simplify_switch.m"
                {
#line 512 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 512 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 512 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_31));
#line 512 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
#line 512 "ml_simplify_switch.m"
                }
#line 511 "ml_simplify_switch.m"
              }
#line 504 "ml_simplify_switch.m"
            {
#line 504 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_16_16 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__V_18_18, ml_backend__ml_simplify_switch__SwitchRval_2);
            }
#line 502 "ml_simplify_switch.m"
            {
#line 502 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 502 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 502 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_15_15));
#line 502 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_16_16));
#line 502 "ml_simplify_switch.m"
            }
#line 501 "ml_simplify_switch.m"
          }
#line 498 "ml_simplify_switch.m"
      }
#line 498 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__HeadVar__3_3;
#line 498 "ml_simplify_switch.m"
  }
#line 495 "ml_simplify_switch.m"
}

#line 460 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_2,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
#line 460 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4)
#line 460 "ml_simplify_switch.m"
{
#line 463 "ml_simplify_switch.m"
  {
#line 463 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 463 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Statement_5;

#line 463 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "ml_simplify_switch.m"
#line 467 "ml_simplify_switch.m"
      switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_2)) {
#line 467 "ml_simplify_switch.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 467 "ml_simplify_switch.m"
        case (MR_Integer) 0:
#line 467 "ml_simplify_switch.m"
#line 467 "ml_simplify_switch.m"
          switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_2)) {
#line 467 "ml_simplify_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 467 "ml_simplify_switch.m"
            case (MR_Integer) 0:
#line 468 "ml_simplify_switch.m"
              {
#line 469 "ml_simplify_switch.m"
                {
#line 469 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_6[2]));
#line 469 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 469 "ml_simplify_switch.m"
                }
#line 468 "ml_simplify_switch.m"
              }
#line 467 "ml_simplify_switch.m"
              break;
#line 467 "ml_simplify_switch.m"
            case (MR_Integer) 1:
#line 465 "ml_simplify_switch.m"
              {
#line 466 "ml_simplify_switch.m"
                {
#line 466 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_6[2]));
#line 466 "ml_simplify_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 466 "ml_simplify_switch.m"
                }
#line 465 "ml_simplify_switch.m"
              }
#line 467 "ml_simplify_switch.m"
              break;
#line 467 "ml_simplify_switch.m"
          }
#line 467 "ml_simplify_switch.m"
          break;
#line 467 "ml_simplify_switch.m"
        case (MR_Integer) 1:
#line 471 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_2), (MR_Integer) 1);
#line 467 "ml_simplify_switch.m"
          break;
#line 467 "ml_simplify_switch.m"
      }
#line 463 "ml_simplify_switch.m"
    else
#line 474 "ml_simplify_switch.m"
      {
#line 474 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__FirstMatchCond_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
#line 474 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LaterMatchConds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
#line 474 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));

#line 477 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 478 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 480 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Statement_5 = ml_backend__ml_simplify_switch__CaseStatement_24;
#line 476 "ml_simplify_switch.m"
        else
#line 482 "ml_simplify_switch.m"
          {
#line 482 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__AllMatchConds_25;
#line 482 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__CaseMatchedRval_26;
#line 482 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__RestStatement_27;
#line 482 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__IfStmt_28;
#line 482 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_29_29;

#line 482 "ml_simplify_switch.m"
            {
#line 482 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__AllMatchConds_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstMatchCond_22));
#line 482 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__LaterMatchConds_23));
#line 482 "ml_simplify_switch.m"
            }
#line 483 "ml_simplify_switch.m"
            {
#line 483 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__CaseMatchedRval_26 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__AllMatchConds_25, ml_backend__ml_simplify_switch__HeadVar__3_3);
            }
#line 484 "ml_simplify_switch.m"
            {
#line 484 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__RestStatement_27 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__Default_2, ml_backend__ml_simplify_switch__HeadVar__3_3, ml_backend__ml_simplify_switch__MLDS_Context_4);
            }
#line 487 "ml_simplify_switch.m"
            {
#line 487 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__RestStatement_27));
#line 487 "ml_simplify_switch.m"
            }
#line 486 "ml_simplify_switch.m"
            {
#line 486 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseMatchedRval_26));
#line 486 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_24));
#line 486 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
#line 486 "ml_simplify_switch.m"
            }
#line 488 "ml_simplify_switch.m"
            {
#line 488 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__IfStmt_28));
#line 488 "ml_simplify_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
#line 488 "ml_simplify_switch.m"
            }
#line 482 "ml_simplify_switch.m"
          }
#line 474 "ml_simplify_switch.m"
      }
#line 463 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__Statement_5;
#line 463 "ml_simplify_switch.m"
  }
#line 460 "ml_simplify_switch.m"
}

#line 438 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
#line 438 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
#line 438 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
#line 438 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
#line 438 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9)
#line 438 "ml_simplify_switch.m"
{
#line 442 "ml_simplify_switch.m"
  {
#line 442 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__ThisVal_6 > ml_backend__ml_simplify_switch__LastVal_7);
#line 442 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_10;

#line 442 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 443 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "ml_simplify_switch.m"
    else
#line 449 "ml_simplify_switch.m"
      {
#line 449 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__CaseLabel_12;
#line 449 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseLabels1_13;
#line 449 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_14_14;
#line 445 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__CaseLabel0_11;
#line 445 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv0_CaseLabel0_11;

#line 445 "ml_simplify_switch.m"
        {
#line 445 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__ThisVal_6, &ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
        }
#line 445 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 445 "ml_simplify_switch.m"
          {
#line 445 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__CaseLabel0_11 = ((MR_String) ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
#line 445 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 445 "ml_simplify_switch.m"
          }
#line 445 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 446 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__CaseLabel0_11;
#line 445 "ml_simplify_switch.m"
        else
#line 448 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__DefaultLabel_9;
#line 450 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_14_14 = (ml_backend__ml_simplify_switch__ThisVal_6 + (MR_Integer) 1);
#line 450 "ml_simplify_switch.m"
        {
#line 450 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabels1_13 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__V_14_14, ml_backend__ml_simplify_switch__LastVal_7, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__DefaultLabel_9);
        }
#line 452 "ml_simplify_switch.m"
        {
#line 452 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabel_12));
#line 452 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels1_13));
#line 452 "ml_simplify_switch.m"
        }
#line 449 "ml_simplify_switch.m"
      }
#line 442 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__CaseLabels_10;
#line 442 "ml_simplify_switch.m"
  }
#line 438 "ml_simplify_switch.m"
}

#line 420 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
#line 420 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
#line 420 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
#line 420 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
#line 420 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
#line 420 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11)
#line 420 "ml_simplify_switch.m"
{
#line 424 "ml_simplify_switch.m"
  while (MR_TRUE)
#line 424 "ml_simplify_switch.m"
    {
#line 424 "ml_simplify_switch.m"
      /* tailcall optimized into a loop */
#line 424 "ml_simplify_switch.m"
      {
#line 424 "ml_simplify_switch.m"
        MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Min_6 > ml_backend__ml_simplify_switch__Max_7);

#line 424 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 424 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10;
#line 424 "ml_simplify_switch.m"
        else
#line 427 "ml_simplify_switch.m"
          {
#line 427 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;
#line 427 "ml_simplify_switch.m"
            MR_Integer ml_backend__ml_simplify_switch__V_13_13;

#line 427 "ml_simplify_switch.m"
            {
#line 427 "ml_simplify_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Min_6, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_8)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12);
            }
#line 428 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_13_13 = (ml_backend__ml_simplify_switch__Min_6 + (MR_Integer) 1);
#line 428 "ml_simplify_switch.m"
            /* direct tailcall eliminated */
#line 428 "ml_simplify_switch.m"
            {
#line 428 "ml_simplify_switch.m"
              MR_Integer ml_backend__ml_simplify_switch__Min__tmp_copy_6 = ml_backend__ml_simplify_switch__V_13_13;
#line 428 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;

#line 428 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10;
#line 428 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Min_6 = ml_backend__ml_simplify_switch__Min__tmp_copy_6;
#line 428 "ml_simplify_switch.m"
            }
#line 428 "ml_simplify_switch.m"
            continue;
#line 427 "ml_simplify_switch.m"
          }
#line 424 "ml_simplify_switch.m"
      }
#line 424 "ml_simplify_switch.m"
      break;
#line 424 "ml_simplify_switch.m"
    }
#line 420 "ml_simplify_switch.m"
}

#line 397 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
#line 397 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
#line 397 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
#line 397 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
#line 397 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15)
#line 397 "ml_simplify_switch.m"
{
#line 402 "ml_simplify_switch.m"
  {
#line 402 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 402 "ml_simplify_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cond_6)) == (MR_mktag((MR_Integer) 1))))
#line 409 "ml_simplify_switch.m"
      {
#line 409 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MinRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
#line 409 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MaxRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 1)));
#line 410 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Min_12;
#line 410 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Max_13;
#line 411 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_16_16;
#line 411 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_17_17;

#line 411 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 411 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 411 "ml_simplify_switch.m"
          {
#line 411 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 1)));
#line 411 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_16_16)) == (MR_mktag((MR_Integer) 2)));
#line 411 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 411 "ml_simplify_switch.m"
              {
#line 411 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Min_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_16_16, (MR_Integer) 0)));
#line 412 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 412 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 412 "ml_simplify_switch.m"
                  {
#line 412 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 1)));
#line 412 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_17_17)) == (MR_mktag((MR_Integer) 2)));
#line 412 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 412 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__Max_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_17_17, (MR_Integer) 0)));
#line 412 "ml_simplify_switch.m"
                  }
#line 411 "ml_simplify_switch.m"
              }
#line 411 "ml_simplify_switch.m"
          }
#line 410 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 414 "ml_simplify_switch.m"
          {
#line 414 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(ml_backend__ml_simplify_switch__Min_12, ml_backend__ml_simplify_switch__Max_13, ml_backend__ml_simplify_switch__ThisLabel_5, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
          }
#line 410 "ml_simplify_switch.m"
        else
#line 416 "ml_simplify_switch.m"
          {
#line 416 "ml_simplify_switch.m"
            {
#line 416 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
#line 416 "ml_simplify_switch.m"
              return;
            }
#line 416 "ml_simplify_switch.m"
          }
#line 409 "ml_simplify_switch.m"
      }
#line 402 "ml_simplify_switch.m"
    else
#line 402 "ml_simplify_switch.m"
      {
#line 402 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
#line 403 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
#line 403 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_22_22;

#line 403 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 403 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 403 "ml_simplify_switch.m"
          {
#line 403 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 1)));
#line 403 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 403 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 403 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_22_22, (MR_Integer) 0)));
#line 403 "ml_simplify_switch.m"
          }
#line 403 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 404 "ml_simplify_switch.m"
          {
#line 404 "ml_simplify_switch.m"
            {
#line 404 "ml_simplify_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Val_9, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_5)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
            }
#line 404 "ml_simplify_switch.m"
          }
#line 403 "ml_simplify_switch.m"
        else
#line 406 "ml_simplify_switch.m"
          {
#line 406 "ml_simplify_switch.m"
            {
#line 406 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
#line 406 "ml_simplify_switch.m"
              return;
            }
#line 406 "ml_simplify_switch.m"
          }
#line 402 "ml_simplify_switch.m"
      }
#line 402 "ml_simplify_switch.m"
  }
#line 397 "ml_simplify_switch.m"
}

#line 377 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 377 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 377 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3)
#line 377 "ml_simplify_switch.m"
{
#line 377 "ml_simplify_switch.m"
  {
#line 377 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 377 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15;

#line 377 "ml_simplify_switch.m"
    {
#line 377 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15);
    }
#line 377 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15));
#line 377 "ml_simplify_switch.m"
  }
#line 377 "ml_simplify_switch.m"
}

#line 349 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 349 "ml_simplify_switch.m"
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
#line 349 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
#line 349 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8)
#line 349 "ml_simplify_switch.m"
{
#line 354 "ml_simplify_switch.m"
  {
#line 354 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 354 "ml_simplify_switch.m"
    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "ml_simplify_switch.m"
      {
#line 354 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7;
#line 354 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3;
#line 354 "ml_simplify_switch.m"
      }
#line 354 "ml_simplify_switch.m"
    else
#line 356 "ml_simplify_switch.m"
      {
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatements_24;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CasesDecls_25;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CasesStatements_26;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__FirstCond_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LaterConds_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));
#line 356 "ml_simplify_switch.m"
        MR_String ml_backend__ml_simplify_switch__ThisLabel_50;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MLDS_Context_52;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LabelComment_53;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__LabelCode_54;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__JumpComment_55;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__JumpCode_56;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_59_59;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_64_64;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_68_68;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_69_69;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_70_70;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_71_71;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_72_72;
#line 356 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_73_73;
#line 377 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31;
#line 378 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_51_51;

#line 375 "ml_simplify_switch.m"
        {
#line 375 "ml_simplify_switch.m"
          ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32);
        }
#line 376 "ml_simplify_switch.m"
        {
#line 376 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__FirstCond_47, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58);
        }
#line 377 "ml_simplify_switch.m"
        {
#line 377 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[0]));
#line 377 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__generate_cases_8_p_0_1));
#line 377 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 377 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
#line 377 "ml_simplify_switch.m"
        }
#line 377 "ml_simplify_switch.m"
        {
#line 377 "ml_simplify_switch.m"
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__V_59_59, ml_backend__ml_simplify_switch__LaterConds_48, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58)), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
        }
#line 377 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31 = ((MR_Word) ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
#line 378 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 0)));
#line 378 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__MLDS_Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 1)));
#line 379 "ml_simplify_switch.m"
        {
#line 379 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__LabelComment_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[0])));
#line 379 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 379 "ml_simplify_switch.m"
        }
#line 381 "ml_simplify_switch.m"
        {
#line 381 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
#line 381 "ml_simplify_switch.m"
        }
#line 381 "ml_simplify_switch.m"
        {
#line 381 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__LabelCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_64_64));
#line 381 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 381 "ml_simplify_switch.m"
        }
#line 382 "ml_simplify_switch.m"
        {
#line 382 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__JumpComment_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[1])));
#line 382 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 382 "ml_simplify_switch.m"
        }
#line 385 "ml_simplify_switch.m"
        {
#line 385 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__HeadVar__2_2));
#line 385 "ml_simplify_switch.m"
        }
#line 385 "ml_simplify_switch.m"
        {
#line 385 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 385 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
#line 385 "ml_simplify_switch.m"
        }
#line 385 "ml_simplify_switch.m"
        {
#line 385 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__JumpCode_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_68_68));
#line 385 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
#line 385 "ml_simplify_switch.m"
        }
#line 388 "ml_simplify_switch.m"
        {
#line 388 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpCode_56));
#line 388 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "ml_simplify_switch.m"
        }
#line 388 "ml_simplify_switch.m"
        {
#line 388 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpComment_55));
#line 388 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
#line 388 "ml_simplify_switch.m"
        }
#line 387 "ml_simplify_switch.m"
        {
#line 387 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_49));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
#line 387 "ml_simplify_switch.m"
        }
#line 387 "ml_simplify_switch.m"
        {
#line 387 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelCode_54));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_71_71));
#line 387 "ml_simplify_switch.m"
        }
#line 387 "ml_simplify_switch.m"
        {
#line 387 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__CaseStatements_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelComment_53));
#line 387 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_70_70));
#line 387 "ml_simplify_switch.m"
        }
#line 359 "ml_simplify_switch.m"
        {
#line 359 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__HeadVar__2_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4, &ml_backend__ml_simplify_switch__CasesDecls_25, &ml_backend__ml_simplify_switch__CasesStatements_26, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);
        }
#line 361 "ml_simplify_switch.m"
        {
#line 361 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_simplify_switch__CasesDecls_25);
        }
#line 362 "ml_simplify_switch.m"
        {
#line 362 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_simplify_switch__CaseStatements_24, ml_backend__ml_simplify_switch__CasesStatements_26);
        }
#line 356 "ml_simplify_switch.m"
      }
#line 354 "ml_simplify_switch.m"
  }
#line 349 "ml_simplify_switch.m"
}

#line 251 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
#line 251 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
#line 251 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
#line 251 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
#line 251 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
#line 251 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5)
#line 251 "ml_simplify_switch.m"
{
#line 254 "ml_simplify_switch.m"
  {
#line 254 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;

#line 254 "ml_simplify_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 263 "ml_simplify_switch.m"
      {
#line 263 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MinRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__MaxRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__RvalMin_24;
#line 264 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__RvalMax_25;
#line 265 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_30_30;
#line 265 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_31_31;

#line 265 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 265 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 265 "ml_simplify_switch.m"
          {
#line 265 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 1)));
#line 265 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_30_30)) == (MR_mktag((MR_Integer) 2)));
#line 265 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 265 "ml_simplify_switch.m"
              {
#line 265 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__RvalMin_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_30_30, (MR_Integer) 0)));
#line 266 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 266 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 266 "ml_simplify_switch.m"
                  {
#line 266 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 1)));
#line 266 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_31_31)) == (MR_mktag((MR_Integer) 2)));
#line 266 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 266 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__RvalMax_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_31_31, (MR_Integer) 0)));
#line 266 "ml_simplify_switch.m"
                  }
#line 265 "ml_simplify_switch.m"
              }
#line 265 "ml_simplify_switch.m"
          }
#line 264 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 268 "ml_simplify_switch.m"
          {
#line 268 "ml_simplify_switch.m"
            {
#line 268 "ml_simplify_switch.m"
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__RvalMin_24, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
#line 269 "ml_simplify_switch.m"
            {
#line 269 "ml_simplify_switch.m"
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__RvalMax_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
            }
#line 268 "ml_simplify_switch.m"
          }
#line 264 "ml_simplify_switch.m"
        else
#line 271 "ml_simplify_switch.m"
          {
#line 271 "ml_simplify_switch.m"
            {
#line 271 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
#line 271 "ml_simplify_switch.m"
              return;
            }
#line 271 "ml_simplify_switch.m"
          }
#line 263 "ml_simplify_switch.m"
      }
#line 254 "ml_simplify_switch.m"
    else
#line 254 "ml_simplify_switch.m"
      {
#line 254 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
#line 256 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_14_14;

#line 256 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 256 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 256 "ml_simplify_switch.m"
          {
#line 256 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 1)));
#line 256 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 256 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 256 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_14_14, (MR_Integer) 0)));
#line 256 "ml_simplify_switch.m"
          }
#line 255 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 258 "ml_simplify_switch.m"
          {
#line 258 "ml_simplify_switch.m"
            {
#line 258 "ml_simplify_switch.m"
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
#line 259 "ml_simplify_switch.m"
            {
#line 259 "ml_simplify_switch.m"
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
            }
#line 258 "ml_simplify_switch.m"
          }
#line 255 "ml_simplify_switch.m"
        else
#line 261 "ml_simplify_switch.m"
          {
#line 261 "ml_simplify_switch.m"
            {
#line 261 "ml_simplify_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
#line 261 "ml_simplify_switch.m"
              return;
            }
#line 261 "ml_simplify_switch.m"
          }
#line 254 "ml_simplify_switch.m"
      }
#line 254 "ml_simplify_switch.m"
  }
#line 251 "ml_simplify_switch.m"
}

#line 249 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 249 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 249 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 249 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 249 "ml_simplify_switch.m"
{
#line 249 "ml_simplify_switch.m"
  {
#line 249 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 249 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3;
#line 249 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5;

#line 249 "ml_simplify_switch.m"
    {
#line 249 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5);
    }
#line 249 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3));
#line 249 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5));
#line 249 "ml_simplify_switch.m"
  }
#line 249 "ml_simplify_switch.m"
}

#line 243 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
#line 243 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Case_6,
#line 243 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
#line 243 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
#line 243 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
#line 243 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15)
#line 243 "ml_simplify_switch.m"
{
#line 246 "ml_simplify_switch.m"
  {
#line 246 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 246 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_27_27;
#line 246 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 0)));
#line 246 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 1)));
#line 246 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16;
#line 246 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17;
#line 247 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch___CaseStatement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 2)));
#line 249 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13;
#line 249 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15;

#line 248 "ml_simplify_switch.m"
    {
#line 248 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(ml_backend__ml_simplify_switch__FirstCond_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17);
    }
#line 2597 "ml_backend.ml_simplify_switch.c"
    ml_backend__ml_simplify_switch__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 249 "ml_simplify_switch.m"
    {
#line 249 "ml_simplify_switch.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[3], ml_backend__ml_simplify_switch__LaterConds_10, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16)), &ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17)), &ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
    }
#line 249 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13);
#line 249 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
#line 246 "ml_simplify_switch.m"
  }
#line 243 "ml_simplify_switch.m"
}

#line 240 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 240 "ml_simplify_switch.m"
{
#line 240 "ml_simplify_switch.m"
  {
#line 240 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 240 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
#line 240 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

#line 240 "ml_simplify_switch.m"
    {
#line 240 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
#line 240 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
#line 240 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
#line 240 "ml_simplify_switch.m"
  }
#line 240 "ml_simplify_switch.m"
}

#line 200 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Range_8,
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
#line 200 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Default_10,
#line 200 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
#line 200 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
#line 200 "ml_simplify_switch.m"
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
#line 200 "ml_simplify_switch.m"
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14)
#line 200 "ml_simplify_switch.m"
{
#line 206 "ml_simplify_switch.m"
  {
#line 206 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Min_15;
#line 206 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Max_16;
#line 207 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_25_25;
#line 207 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__TypeRange_17;
#line 207 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_18;
#line 207 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NoDefaultDensity_19;
#line 207 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_23_23;
#line 207 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_24_24;

#line 207 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 207 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 207 "ml_simplify_switch.m"
      {
#line 208 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Range_8)) == (MR_mktag((MR_Integer) 1)));
#line 208 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 208 "ml_simplify_switch.m"
          {
#line 208 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Min_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 0)));
#line 208 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Max_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 1)));
#line 209 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_23_23 = (ml_backend__ml_simplify_switch__Max_16 - ml_backend__ml_simplify_switch__Min_15);
#line 209 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__V_24_24 = (MR_Integer) 1;
#line 209 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__TypeRange_17 = (ml_backend__ml_simplify_switch__V_23_23 + ml_backend__ml_simplify_switch__V_24_24);
#line 2715 "ml_backend.ml_simplify_switch.c"
            ml_backend__ml_simplify_switch__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 210 "ml_simplify_switch.m"
            {
#line 210 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__NumCases_18 = mercury__list__length_1_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_25_25, ml_backend__ml_simplify_switch__Cases_9);
            }
#line 211 "ml_simplify_switch.m"
            {
#line 211 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__NoDefaultDensity_19 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_18, ml_backend__ml_simplify_switch__TypeRange_17);
            }
#line 212 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NoDefaultDensity_19 > ml_backend__ml_simplify_switch__ReqDensity_11);
#line 208 "ml_simplify_switch.m"
          }
#line 207 "ml_simplify_switch.m"
      }
#line 206 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 214 "ml_simplify_switch.m"
      {
#line 214 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
#line 215 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__FirstVal_12 = ml_backend__ml_simplify_switch__Min_15;
#line 216 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__LastVal_13 = ml_backend__ml_simplify_switch__Max_16;
#line 214 "ml_simplify_switch.m"
      }
#line 206 "ml_simplify_switch.m"
    else
#line 226 "ml_simplify_switch.m"
      {
#line 226 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_38;
#line 226 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_30_30;
#line 226 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__V_31_31;
#line 240 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv3_FirstVal_12;
#line 240 "ml_simplify_switch.m"
        MR_Box ml_backend__ml_simplify_switch__conv2_LastVal_13;

#line 221 "ml_simplify_switch.m"
#line 221 "ml_simplify_switch.m"
        switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_10)) {
#line 221 "ml_simplify_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 221 "ml_simplify_switch.m"
          case (MR_Integer) 0:
#line 221 "ml_simplify_switch.m"
#line 221 "ml_simplify_switch.m"
            switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_10)) {
#line 221 "ml_simplify_switch.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 221 "ml_simplify_switch.m"
              case (MR_Integer) 0:
#line 220 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
#line 221 "ml_simplify_switch.m"
                break;
#line 221 "ml_simplify_switch.m"
              case (MR_Integer) 1:
#line 225 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 1;
#line 221 "ml_simplify_switch.m"
                break;
#line 221 "ml_simplify_switch.m"
            }
#line 221 "ml_simplify_switch.m"
            break;
#line 221 "ml_simplify_switch.m"
          case (MR_Integer) 1:
#line 225 "ml_simplify_switch.m"
            *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 1;
#line 221 "ml_simplify_switch.m"
            break;
#line 221 "ml_simplify_switch.m"
        }
#line 241 "ml_simplify_switch.m"
        {
#line 241 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_30_30 = mercury__int__max_int_0_f_0();
        }
#line 241 "ml_simplify_switch.m"
        {
#line 241 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_31_31 = mercury__int__min_int_0_f_0();
        }
#line 2806 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 240 "ml_simplify_switch.m"
        {
#line 240 "ml_simplify_switch.m"
          mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[2], ml_backend__ml_simplify_switch__Cases_9, ((MR_Box) (ml_backend__ml_simplify_switch__V_30_30)), &ml_backend__ml_simplify_switch__conv3_FirstVal_12, ((MR_Box) (ml_backend__ml_simplify_switch__V_31_31)), &ml_backend__ml_simplify_switch__conv2_LastVal_13);
        }
#line 240 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__FirstVal_12 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstVal_12);
#line 240 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__LastVal_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastVal_13);
#line 226 "ml_simplify_switch.m"
      }
#line 206 "ml_simplify_switch.m"
  }
#line 200 "ml_simplify_switch.m"
}

#line 240 "ml_simplify_switch.m"
static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
#line 240 "ml_simplify_switch.m"
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
#line 240 "ml_simplify_switch.m"
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
#line 240 "ml_simplify_switch.m"
{
#line 240 "ml_simplify_switch.m"
  {
#line 240 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
#line 240 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
#line 240 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

#line 240 "ml_simplify_switch.m"
    {
#line 240 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
#line 240 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
#line 240 "ml_simplify_switch.m"
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
#line 240 "ml_simplify_switch.m"
  }
#line 240 "ml_simplify_switch.m"
}

#line 181 "ml_simplify_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
#line 181 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
#line 181 "ml_simplify_switch.m"
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4)
#line 181 "ml_simplify_switch.m"
{
#line 183 "ml_simplify_switch.m"
  {
#line 183 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 183 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_15_25;
#line 183 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_26;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_5;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__FirstCaseVal_6;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__LastCaseVal_7;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__CasesRange_8;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__Density_9;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_11_11;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_12_12;
#line 183 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_17_17;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_18_18;
#line 183 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__V_19_19;
#line 240 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6;
#line 240 "ml_simplify_switch.m"
    MR_Box ml_backend__ml_simplify_switch__conv2_LastCaseVal_7;

#line 185 "ml_simplify_switch.m"
    {
#line 185 "ml_simplify_switch.m"
      ml_backend__ml_simplify_switch__NumCases_5 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__Cases_3);
    }
#line 186 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_5 > (MR_Integer) 2);
#line 183 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 183 "ml_simplify_switch.m"
      {
#line 240 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_17_17 = (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[1];
#line 241 "ml_simplify_switch.m"
        {
#line 241 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_18_18 = mercury__int__max_int_0_f_0();
        }
#line 241 "ml_simplify_switch.m"
        {
#line 241 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__V_19_19 = mercury__int__min_int_0_f_0();
        }
#line 2929 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_15_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 2931 "ml_backend.ml_simplify_switch.c"
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 240 "ml_simplify_switch.m"
        {
#line 240 "ml_simplify_switch.m"
          mercury__list__foldl2_6_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_15_25, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__V_17_17, ml_backend__ml_simplify_switch__Cases_3, ((MR_Box) (ml_backend__ml_simplify_switch__V_18_18)), &ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6, ((MR_Box) (ml_backend__ml_simplify_switch__V_19_19)), &ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
        }
#line 240 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__FirstCaseVal_6 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6);
#line 240 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__LastCaseVal_7 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
#line 190 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_11_11 = (ml_backend__ml_simplify_switch__LastCaseVal_7 - ml_backend__ml_simplify_switch__FirstCaseVal_6);
#line 190 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__V_12_12 = (MR_Integer) 1;
#line 190 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__CasesRange_8 = (ml_backend__ml_simplify_switch__V_11_11 + ml_backend__ml_simplify_switch__V_12_12);
#line 191 "ml_simplify_switch.m"
        {
#line 191 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Density_9 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_5, ml_backend__ml_simplify_switch__CasesRange_8);
        }
#line 192 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Density_9 > ml_backend__ml_simplify_switch__ReqDensity_4);
#line 183 "ml_simplify_switch.m"
      }
#line 183 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__succeeded;
#line 183 "ml_simplify_switch.m"
  }
#line 181 "ml_simplify_switch.m"
}

#line 122 "ml_simplify_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
#line 122 "ml_simplify_switch.m"
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3)
#line 122 "ml_simplify_switch.m"
{
#line 128 "ml_simplify_switch.m"
  {
#line 128 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 128 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__IsIntegral_4;

#line 128 "ml_simplify_switch.m"
#line 128 "ml_simplify_switch.m"
    switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__MLDSType_3)) {
#line 128 "ml_simplify_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 128 "ml_simplify_switch.m"
      case (MR_Integer) 0:
#line 128 "ml_simplify_switch.m"
#line 128 "ml_simplify_switch.m"
        switch (MR_unmkbody(ml_backend__ml_simplify_switch__MLDSType_3)) {
#line 128 "ml_simplify_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 0:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 1:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 3:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 5:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 6:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 7:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 8:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 9:
#line 149 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 128 "ml_simplify_switch.m"
            break;
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 2:
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 4:
#line 128 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 128 "ml_simplify_switch.m"
            break;
#line 128 "ml_simplify_switch.m"
        }
#line 128 "ml_simplify_switch.m"
        break;
#line 128 "ml_simplify_switch.m"
      case (MR_Integer) 1:
#line 149 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 128 "ml_simplify_switch.m"
        break;
#line 128 "ml_simplify_switch.m"
      case (MR_Integer) 2:
#line 152 "ml_simplify_switch.m"
        {
#line 152 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__CtorCat_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 1)));
#line 152 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 0)));
#line 152 "ml_simplify_switch.m"
          MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 2)));

#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
          switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_18)) {
#line 159 "ml_simplify_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 159 "ml_simplify_switch.m"
            case (MR_Integer) 0:
#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
              switch (MR_unmkbody(ml_backend__ml_simplify_switch__CtorCat_18)) {
#line 159 "ml_simplify_switch.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 0:
#line 171 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 1:
#line 171 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 2:
#line 171 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 3:
#line 171 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 4:
#line 171 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
              }
#line 159 "ml_simplify_switch.m"
              break;
#line 159 "ml_simplify_switch.m"
            case (MR_Integer) 1:
#line 159 "ml_simplify_switch.m"
              {
#line 159 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

#line 159 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__IsIntegral_4 = ((&ml_backend__ml_simplify_switch_vector_common_2[0 + ml_backend__ml_simplify_switch__V_30_30]))->ml_backend__ml_simplify_switch__vector_common_type_2_0__vct_2_f_0;
#line 159 "ml_simplify_switch.m"
              }
#line 159 "ml_simplify_switch.m"
              break;
#line 159 "ml_simplify_switch.m"
            case (MR_Integer) 2:
#line 159 "ml_simplify_switch.m"
              {
#line 159 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
                switch (ml_backend__ml_simplify_switch__V_31_31) {
#line 159 "ml_simplify_switch.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 159 "ml_simplify_switch.m"
                  case (MR_Integer) 1:
#line 177 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                    break;
#line 159 "ml_simplify_switch.m"
                  case (MR_Integer) 0:
#line 158 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
#line 159 "ml_simplify_switch.m"
                    break;
#line 159 "ml_simplify_switch.m"
                }
#line 159 "ml_simplify_switch.m"
              }
#line 159 "ml_simplify_switch.m"
              break;
#line 159 "ml_simplify_switch.m"
            case (MR_Integer) 3:
#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)))) {
#line 159 "ml_simplify_switch.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 0:
#line 172 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
                case (MR_Integer) 1:
#line 159 "ml_simplify_switch.m"
                  {
#line 159 "ml_simplify_switch.m"
                    MR_Word ml_backend__ml_simplify_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 1)));

#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
                    switch (ml_backend__ml_simplify_switch__V_32_32) {
#line 159 "ml_simplify_switch.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 159 "ml_simplify_switch.m"
                      case (MR_Integer) 0:
#line 172 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                        break;
#line 159 "ml_simplify_switch.m"
                      case (MR_Integer) 2:
#line 172 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                        break;
#line 159 "ml_simplify_switch.m"
                      case (MR_Integer) 1:
#line 172 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 159 "ml_simplify_switch.m"
                        break;
#line 159 "ml_simplify_switch.m"
                    }
#line 159 "ml_simplify_switch.m"
                  }
#line 159 "ml_simplify_switch.m"
                  break;
#line 159 "ml_simplify_switch.m"
              }
#line 159 "ml_simplify_switch.m"
              break;
#line 159 "ml_simplify_switch.m"
          }
#line 152 "ml_simplify_switch.m"
        }
#line 128 "ml_simplify_switch.m"
        break;
#line 128 "ml_simplify_switch.m"
      case (MR_Integer) 3:
#line 149 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
#line 128 "ml_simplify_switch.m"
        break;
#line 128 "ml_simplify_switch.m"
    }
#line 128 "ml_simplify_switch.m"
    return ml_backend__ml_simplify_switch__IsIntegral_4;
#line 128 "ml_simplify_switch.m"
  }
#line 122 "ml_simplify_switch.m"
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
#line 59 "ml_simplify_switch.m"
  {
#line 59 "ml_simplify_switch.m"
    MR_bool ml_backend__ml_simplify_switch__succeeded;
#line 59 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Globals_10;
#line 61 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Rval_12;
#line 61 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Range_13;
#line 61 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Cases_14;
#line 61 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Default_15;
#line 61 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__ReqDensity_18;
#line 66 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_67_67;
#line 66 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__Type_11;
#line 66 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__NumCases_16;
#line 66 "ml_simplify_switch.m"
    MR_Integer ml_backend__ml_simplify_switch__DenseSize_17;
#line 66 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_35_35;
#line 66 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_39_39;
#line 66 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_40_40;
#line 73 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_36_36;
#line 73 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_37_37;
#line 73 "ml_simplify_switch.m"
    MR_Word ml_backend__ml_simplify_switch__V_38_38;

#line 60 "ml_simplify_switch.m"
    {
#line 60 "ml_simplify_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, &ml_backend__ml_simplify_switch__Globals_10);
    }
#line 66 "ml_simplify_switch.m"
    ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 66 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 66 "ml_simplify_switch.m"
      {
#line 66 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 66 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 66 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Range_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 66 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 66 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__Default_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 128 "ml_simplify_switch.m"
#line 128 "ml_simplify_switch.m"
        switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Type_11)) {
#line 128 "ml_simplify_switch.m"
          default:
#line 128 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 128 "ml_simplify_switch.m"
            break;
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 0:
#line 128 "ml_simplify_switch.m"
#line 128 "ml_simplify_switch.m"
            switch (MR_unmkbody(ml_backend__ml_simplify_switch__Type_11)) {
#line 128 "ml_simplify_switch.m"
              default:
#line 128 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 128 "ml_simplify_switch.m"
                break;
#line 128 "ml_simplify_switch.m"
              case (MR_Integer) 2:
#line 128 "ml_simplify_switch.m"
              case (MR_Integer) 4:
#line 128 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 128 "ml_simplify_switch.m"
                break;
#line 128 "ml_simplify_switch.m"
            }
#line 128 "ml_simplify_switch.m"
            break;
#line 128 "ml_simplify_switch.m"
          case (MR_Integer) 2:
#line 152 "ml_simplify_switch.m"
            {
#line 152 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__CtorCat_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 1)));
#line 152 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 0)));
#line 152 "ml_simplify_switch.m"
              MR_Word ml_backend__ml_simplify_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 2)));

#line 159 "ml_simplify_switch.m"
              if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 1))))
#line 159 "ml_simplify_switch.m"
                {
#line 159 "ml_simplify_switch.m"
                  MR_Word ml_backend__ml_simplify_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

#line 159 "ml_simplify_switch.m"
#line 159 "ml_simplify_switch.m"
                  switch (ml_backend__ml_simplify_switch__V_95_95) {
#line 159 "ml_simplify_switch.m"
                    default:
#line 159 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 159 "ml_simplify_switch.m"
                      break;
#line 159 "ml_simplify_switch.m"
                    case (MR_Integer) 2:
#line 158 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 159 "ml_simplify_switch.m"
                      break;
#line 159 "ml_simplify_switch.m"
                    case (MR_Integer) 0:
#line 158 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
#line 159 "ml_simplify_switch.m"
                      break;
#line 159 "ml_simplify_switch.m"
                  }
#line 159 "ml_simplify_switch.m"
                }
#line 159 "ml_simplify_switch.m"
              else
#line 159 "ml_simplify_switch.m"
              if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 2))))
#line 159 "ml_simplify_switch.m"
                {
#line 159 "ml_simplify_switch.m"
                  MR_Word ml_backend__ml_simplify_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

#line 3359 "ml_backend.ml_simplify_switch.c"
                  ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_96_96 == (MR_Integer) 0);
#line 159 "ml_simplify_switch.m"
                }
#line 159 "ml_simplify_switch.m"
              else
#line 159 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
#line 152 "ml_simplify_switch.m"
            }
#line 128 "ml_simplify_switch.m"
            break;
#line 128 "ml_simplify_switch.m"
        }
#line 66 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 66 "ml_simplify_switch.m"
          {
#line 71 "ml_simplify_switch.m"
            {
#line 71 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_35_35 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
            }
#line 71 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_35_35 == (MR_Integer) 1);
#line 66 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 66 "ml_simplify_switch.m"
              {
#line 73 "ml_simplify_switch.m"
                {
#line 73 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_36_36 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
#line 73 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_36_36 == (MR_Integer) 1);
#line 73 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 73 "ml_simplify_switch.m"
                  {
#line 74 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_37_37 = (MR_Integer) 316;
#line 74 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_38_38 = (MR_Integer) 1;
#line 74 "ml_simplify_switch.m"
                    {
#line 74 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_37_37, ml_backend__ml_simplify_switch__V_38_38);
                    }
#line 73 "ml_simplify_switch.m"
                  }
#line 72 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 66 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 66 "ml_simplify_switch.m"
                  {
#line 3416 "ml_backend.ml_simplify_switch.c"
                    ml_backend__ml_simplify_switch__TypeCtorInfo_67_67 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 78 "ml_simplify_switch.m"
                    {
#line 78 "ml_simplify_switch.m"
                      mercury__list__length_2_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_67_67, ml_backend__ml_simplify_switch__Cases_14, &ml_backend__ml_simplify_switch__NumCases_16);
                    }
#line 79 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_39_39 = (MR_Integer) 429;
#line 79 "ml_simplify_switch.m"
                    {
#line 79 "ml_simplify_switch.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_39_39, &ml_backend__ml_simplify_switch__DenseSize_17);
                    }
#line 80 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_16 >= ml_backend__ml_simplify_switch__DenseSize_17);
#line 66 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 66 "ml_simplify_switch.m"
                      {
#line 83 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__V_40_40 = (MR_Integer) 427;
#line 83 "ml_simplify_switch.m"
                        {
#line 83 "ml_simplify_switch.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_40_40, &ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
#line 85 "ml_simplify_switch.m"
                        {
#line 85 "ml_simplify_switch.m"
                          ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
#line 66 "ml_simplify_switch.m"
                      }
#line 66 "ml_simplify_switch.m"
                  }
#line 66 "ml_simplify_switch.m"
              }
#line 66 "ml_simplify_switch.m"
          }
#line 66 "ml_simplify_switch.m"
      }
#line 61 "ml_simplify_switch.m"
    if (ml_backend__ml_simplify_switch__succeeded)
#line 88 "ml_simplify_switch.m"
      {
#line 88 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__FirstVal_19;
#line 88 "ml_simplify_switch.m"
        MR_Integer ml_backend__ml_simplify_switch__LastVal_20;
#line 88 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_21;
#line 88 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Decls_22;
#line 88 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Statements_23;
#line 88 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Stmt_24;

#line 87 "ml_simplify_switch.m"
        {
#line 87 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(ml_backend__ml_simplify_switch__Range_13, ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__ReqDensity_18, &ml_backend__ml_simplify_switch__FirstVal_19, &ml_backend__ml_simplify_switch__LastVal_20, &ml_backend__ml_simplify_switch__NeedRangeCheck_21);
        }
#line 89 "ml_simplify_switch.m"
        {
#line 89 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__FirstVal_19, ml_backend__ml_simplify_switch__LastVal_20, ml_backend__ml_simplify_switch__NeedRangeCheck_21, ml_backend__ml_simplify_switch__Rval_12, ml_backend__ml_simplify_switch__MLDS_Context_7, &ml_backend__ml_simplify_switch__Decls_22, &ml_backend__ml_simplify_switch__Statements_23, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33);
        }
#line 92 "ml_simplify_switch.m"
        {
#line 92 "ml_simplify_switch.m"
          ml_backend__ml_simplify_switch__Stmt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 92 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Decls_22));
#line 92 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Statements_23));
#line 92 "ml_simplify_switch.m"
        }
#line 93 "ml_simplify_switch.m"
        {
#line 93 "ml_simplify_switch.m"
          MR_Word base;
#line 93 "ml_simplify_switch.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ml_simplify_switch.m"
          *ml_backend__ml_simplify_switch__Statement_8 = base;
#line 93 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt_24));
#line 93 "ml_simplify_switch.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
#line 93 "ml_simplify_switch.m"
        }
#line 88 "ml_simplify_switch.m"
      }
#line 61 "ml_simplify_switch.m"
    else
#line 94 "ml_simplify_switch.m"
      {
#line 94 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Rval_58;
#line 94 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Cases_59;
#line 94 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Default_60;
#line 98 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_42_42;
#line 98 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__Type_47;
#line 98 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch___Range_25;
#line 101 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_43_43;
#line 101 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_44_44;
#line 101 "ml_simplify_switch.m"
        MR_Word ml_backend__ml_simplify_switch__V_45_45;

#line 98 "ml_simplify_switch.m"
        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 98 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 98 "ml_simplify_switch.m"
          {
#line 98 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Type_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 98 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Rval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 98 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch___Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 98 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 98 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__Default_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 99 "ml_simplify_switch.m"
            {
#line 99 "ml_simplify_switch.m"
              ml_backend__ml_simplify_switch__V_42_42 = ml_backend__ml_simplify_switch__is_integral_type_1_f_0(ml_backend__ml_simplify_switch__Type_47);
            }
#line 99 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_42_42 == (MR_Integer) 1);
#line 98 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 98 "ml_simplify_switch.m"
              {
#line 101 "ml_simplify_switch.m"
                {
#line 101 "ml_simplify_switch.m"
                  ml_backend__ml_simplify_switch__V_43_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
#line 101 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_43_43 == (MR_Integer) 1);
#line 101 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 101 "ml_simplify_switch.m"
                  {
#line 102 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_44_44 = (MR_Integer) 316;
#line 102 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__V_45_45 = (MR_Integer) 1;
#line 102 "ml_simplify_switch.m"
                    {
#line 102 "ml_simplify_switch.m"
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_44_44, ml_backend__ml_simplify_switch__V_45_45);
                    }
#line 101 "ml_simplify_switch.m"
                  }
#line 100 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
#line 98 "ml_simplify_switch.m"
              }
#line 98 "ml_simplify_switch.m"
          }
#line 94 "ml_simplify_switch.m"
        if (ml_backend__ml_simplify_switch__succeeded)
#line 105 "ml_simplify_switch.m"
          {
#line 105 "ml_simplify_switch.m"
            *ml_backend__ml_simplify_switch__Statement_8 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_59, ml_backend__ml_simplify_switch__Default_60, ml_backend__ml_simplify_switch__Rval_58, ml_backend__ml_simplify_switch__MLDS_Context_7);
          }
#line 94 "ml_simplify_switch.m"
        else
#line 107 "ml_simplify_switch.m"
          {
#line 107 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__SingleCase_28;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__V_46_46;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__Cases_49;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch__Default_50;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Type_26;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Rval_27;
#line 111 "ml_simplify_switch.m"
            MR_Word ml_backend__ml_simplify_switch___Range_48;

#line 111 "ml_simplify_switch.m"
            ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 111 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 111 "ml_simplify_switch.m"
              {
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch___Range_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
#line 111 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__Default_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
#line 113 "ml_simplify_switch.m"
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "ml_simplify_switch.m"
                if (ml_backend__ml_simplify_switch__succeeded)
#line 111 "ml_simplify_switch.m"
                  {
#line 112 "ml_simplify_switch.m"
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cases_49)) == (MR_mktag((MR_Integer) 1)));
#line 112 "ml_simplify_switch.m"
                    if (ml_backend__ml_simplify_switch__succeeded)
#line 112 "ml_simplify_switch.m"
                      {
#line 112 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__SingleCase_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 0)));
#line 112 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 1)));
#line 112 "ml_simplify_switch.m"
                        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "ml_simplify_switch.m"
                      }
#line 111 "ml_simplify_switch.m"
                  }
#line 111 "ml_simplify_switch.m"
              }
#line 107 "ml_simplify_switch.m"
            if (ml_backend__ml_simplify_switch__succeeded)
#line 115 "ml_simplify_switch.m"
              {
#line 115 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch___FirstCond_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 0)));
#line 115 "ml_simplify_switch.m"
                MR_Word ml_backend__ml_simplify_switch___LaterConds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 1)));

#line 115 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 2)));
#line 115 "ml_simplify_switch.m"
              }
#line 107 "ml_simplify_switch.m"
            else
#line 119 "ml_simplify_switch.m"
              {
#line 119 "ml_simplify_switch.m"
                MR_Word base;
#line 119 "ml_simplify_switch.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "ml_simplify_switch.m"
                *ml_backend__ml_simplify_switch__Statement_8 = base;
#line 119 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt0_6));
#line 119 "ml_simplify_switch.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
#line 119 "ml_simplify_switch.m"
              }
#line 107 "ml_simplify_switch.m"
          }
#line 94 "ml_simplify_switch.m"
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32;
#line 94 "ml_simplify_switch.m"
      }
#line 59 "ml_simplify_switch.m"
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
