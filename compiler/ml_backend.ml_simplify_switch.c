/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
  MR_Word ml_backend__ml_simplify_switch__Default_14,
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__Default_2,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
  MR_Word ml_backend__ml_simplify_switch__Case_6,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15);

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
  MR_Word ml_backend__ml_simplify_switch__Range_8,
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
  MR_Word ml_backend__ml_simplify_switch__Default_10,
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14);

static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3);


static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[2][8];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[4][1];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_6[6][2];


/* sealed */ struct ml_backend__ml_simplify_switch__vector_common_type_2_0_s {
  const MR_Word ml_backend__ml_simplify_switch__vector_common_type_2_0__vct_2_f_0;
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



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;

    {
      ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2));
    }
    return ml_backend__ml_simplify_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_simplify_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(&ml_backend__ml_simplify_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_3));
    }
    *ml_backend__ml_simplify_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(
  MR_Word ml_backend__ml_simplify_switch__Cases_13,
  MR_Word ml_backend__ml_simplify_switch__Default_14,
  MR_Integer ml_backend__ml_simplify_switch__FirstVal_15,
  MR_Integer ml_backend__ml_simplify_switch__LastVal_16,
  MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_17,
  MR_Word ml_backend__ml_simplify_switch__Rval_19,
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_20,
  MR_Word * ml_backend__ml_simplify_switch__Decls_21,
  MR_Word * ml_backend__ml_simplify_switch__Statements_22,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__FirstVal_15 == (MR_Integer) 0);
    MR_Word ml_backend__ml_simplify_switch__Index_24;
    MR_String ml_backend__ml_simplify_switch__EndLabel_25;
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap0_26;
    MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_27;
    MR_Word ml_backend__ml_simplify_switch__CasesCode_29;
    MR_String ml_backend__ml_simplify_switch__DefaultLabel_30;
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_31;
    MR_Word ml_backend__ml_simplify_switch__DefaultLabelStatement_32;
    MR_Word ml_backend__ml_simplify_switch__DefaultStatements_33;
    MR_Word ml_backend__ml_simplify_switch__StartComment_35;
    MR_Word ml_backend__ml_simplify_switch__DoJump_36;
    MR_Word ml_backend__ml_simplify_switch__EndLabelStatement_37;
    MR_Word ml_backend__ml_simplify_switch__EndComment_38;
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49;
    MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50;
    MR_Word ml_backend__ml_simplify_switch__V_52_52;
    MR_Word ml_backend__ml_simplify_switch__V_60_60;
    MR_Word ml_backend__ml_simplify_switch__V_61_61;

    if (ml_backend__ml_simplify_switch__succeeded)
      ml_backend__ml_simplify_switch__Index_24 = ml_backend__ml_simplify_switch__Rval_19;
    else
      {
        MR_Word ml_backend__ml_simplify_switch__V_47_47;
        MR_Word ml_backend__ml_simplify_switch__V_48_48;

        {
          ml_backend__ml_simplify_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_48_48, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstVal_15));
        }
        {
          ml_backend__ml_simplify_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_48_48));
        }
        {
          ml_backend__ml_simplify_switch__Index_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Rval_19));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Index_24, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_47_47));
        }
      }
    {
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_44, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &ml_backend__ml_simplify_switch__CaseLabelsMap0_26);
    }
    {
      ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_13, ml_backend__ml_simplify_switch__EndLabel_25, ml_backend__ml_simplify_switch__CaseLabelsMap0_26, &ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__Decls_21, &ml_backend__ml_simplify_switch__CasesCode_29, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_49_49, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50);
    }
    {
      ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__DefaultLabel_30, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_50_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_45);
    }
    {
      ml_backend__ml_simplify_switch__CaseLabels_31 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__FirstVal_15, ml_backend__ml_simplify_switch__LastVal_16, ml_backend__ml_simplify_switch__CaseLabelsMap_27, ml_backend__ml_simplify_switch__DefaultLabel_30);
    }
    {
      ml_backend__ml_simplify_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabel_30));
    }
    {
      ml_backend__ml_simplify_switch__DefaultLabelStatement_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DefaultLabelStatement_32, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
    }
    switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
                MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_simplify_switch__DefaultCase_34 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_14), (MR_Integer) 1);
          MR_Word ml_backend__ml_simplify_switch__V_53_53;

          {
            ml_backend__ml_simplify_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultCase_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_simplify_switch__DefaultStatements_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultLabelStatement_32));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__DefaultStatements_33, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_53_53));
          }
        }
        break;
    }
    {
      ml_backend__ml_simplify_switch__StartComment_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[4])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__StartComment_35, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_simplify_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_60_60, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels_31));
    }
    {
      ml_backend__ml_simplify_switch__DoJump_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoJump_36, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_simplify_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabel_25));
    }
    {
      ml_backend__ml_simplify_switch__EndLabelStatement_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndLabelStatement_37, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_simplify_switch__EndComment_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[5])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__EndComment_38, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
    }
    switch (ml_backend__ml_simplify_switch__NeedRangeCheck_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_87_87 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          MR_Word ml_backend__ml_simplify_switch__V_65_65;
          MR_Word ml_backend__ml_simplify_switch__V_66_66;
          MR_Word ml_backend__ml_simplify_switch__V_67_67;
          MR_Word ml_backend__ml_simplify_switch__V_68_68;
          MR_Word ml_backend__ml_simplify_switch__V_69_69;

          {
            ml_backend__ml_simplify_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
          }
          {
            ml_backend__ml_simplify_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_65_65, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_66_66));
          }
          {
            ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
          }
          {
            ml_backend__ml_simplify_switch__V_67_67 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__DefaultStatements_33, ml_backend__ml_simplify_switch__V_68_68);
          }
          {
            *ml_backend__ml_simplify_switch__Statements_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_87_87, ml_backend__ml_simplify_switch__V_65_65, ml_backend__ml_simplify_switch__V_67_67);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__ml_simplify_switch__Difference_39 = (ml_backend__ml_simplify_switch__LastVal_16 - ml_backend__ml_simplify_switch__FirstVal_15);
          MR_Word ml_backend__ml_simplify_switch__InRange_40;
          MR_Word ml_backend__ml_simplify_switch__Else_41;
          MR_Word ml_backend__ml_simplify_switch__SwitchBody_42;
          MR_Word ml_backend__ml_simplify_switch__DoSwitch_43;
          MR_Word ml_backend__ml_simplify_switch__V_72_72;
          MR_Word ml_backend__ml_simplify_switch__V_73_73;
          MR_Word ml_backend__ml_simplify_switch__V_74_74;
          MR_Word ml_backend__ml_simplify_switch__V_75_75;
          MR_Word ml_backend__ml_simplify_switch__V_77_77;
          MR_Word ml_backend__ml_simplify_switch__V_79_79;
          MR_Word ml_backend__ml_simplify_switch__V_80_80;
          MR_Word ml_backend__ml_simplify_switch__V_81_81;
          MR_Word ml_backend__ml_simplify_switch__V_82_82;
          MR_Word ml_backend__ml_simplify_switch__V_83_83;

          {
            ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Difference_39));
          }
          {
            ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
          }
          {
            ml_backend__ml_simplify_switch__InRange_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Index_24));
            MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__InRange_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
          }
          {
            ml_backend__ml_simplify_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__DefaultStatements_33));
          }
          {
            ml_backend__ml_simplify_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_75_75));
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
          }
          {
            ml_backend__ml_simplify_switch__Else_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Else_41, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_74_74));
          }
          {
            ml_backend__ml_simplify_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoJump_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_79_79, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CasesCode_29));
          }
          {
            ml_backend__ml_simplify_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_79_79));
          }
          {
            ml_backend__ml_simplify_switch__SwitchBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_77_77));
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SwitchBody_42, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
          }
          {
            ml_backend__ml_simplify_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__InRange_40));
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchBody_42));
            MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_80_80, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__Else_41));
          }
          {
            ml_backend__ml_simplify_switch__DoSwitch_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_80_80));
            MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__DoSwitch_43, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_20));
          }
          {
            ml_backend__ml_simplify_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndComment_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_simplify_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__EndLabelStatement_37));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_83_83));
          }
          {
            ml_backend__ml_simplify_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__DoSwitch_43));
            MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_82_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_simplify_switch__Statements_22 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__StartComment_35));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_81_81));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_5 = ml_backend__ml_simplify_switch__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar1_3 = ml_backend__ml_simplify_switch__HeadVar__1_1;
    MR_Word ml_backend__ml_simplify_switch__Cast_HeadVar2_4 = ml_backend__ml_simplify_switch__HeadVar__2_2;

    {
      ml_backend__ml_simplify_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_simplify_switch__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_simplify_switch__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__SwitchRval_2)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3;

    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[3]);
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));

        if ((ml_backend__ml_simplify_switch__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_simplify_switch__MinRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
              MR_Word ml_backend__ml_simplify_switch__MaxRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_simplify_switch__V_27_27;
              MR_Word ml_backend__ml_simplify_switch__V_29_29;

              {
                ml_backend__ml_simplify_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_27_27, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_23));
              }
              {
                ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_29_29, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_24));
              }
              {
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_27_27));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
              }
            }
          else
            {
              MR_Word ml_backend__ml_simplify_switch__CaseRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

              {
                ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_20));
                MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
              }
            }
        else
          {
            MR_Word ml_backend__ml_simplify_switch__V_15_15;
            MR_Word ml_backend__ml_simplify_switch__V_16_16;

            if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_19_19)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word ml_backend__ml_simplify_switch__MinRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));
                MR_Word ml_backend__ml_simplify_switch__MaxRval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 1)));
                MR_Word ml_backend__ml_simplify_switch__V_38_38;
                MR_Word ml_backend__ml_simplify_switch__V_40_40;

                {
                  ml_backend__ml_simplify_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_38_38, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MinRval_34));
                }
                {
                  ml_backend__ml_simplify_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_40_40, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__MaxRval_35));
                }
                {
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_38_38));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_40_40));
                }
              }
            else
              {
                MR_Word ml_backend__ml_simplify_switch__CaseRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_19_19, (MR_Integer) 0)));

                {
                  ml_backend__ml_simplify_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseRval_31));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_15_15, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__SwitchRval_2));
                }
              }
            {
              ml_backend__ml_simplify_switch__V_16_16 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__V_18_18, ml_backend__ml_simplify_switch__SwitchRval_2);
            }
            {
              ml_backend__ml_simplify_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_15_15));
              MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__V_16_16));
            }
          }
      }
    return ml_backend__ml_simplify_switch__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_simplify_switch__Default_2,
  MR_Word ml_backend__ml_simplify_switch__HeadVar__3_3,
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_4)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__Statement_5;

    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_simplify_switch__Default_2), (MR_Integer) 1);
          break;
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_simplify_switch__FirstMatchCond_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__LaterMatchConds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));

        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_simplify_switch__succeeded)
          ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_simplify_switch__succeeded)
          ml_backend__ml_simplify_switch__Statement_5 = ml_backend__ml_simplify_switch__CaseStatement_24;
        else
          {
            MR_Word ml_backend__ml_simplify_switch__AllMatchConds_25;
            MR_Word ml_backend__ml_simplify_switch__CaseMatchedRval_26;
            MR_Word ml_backend__ml_simplify_switch__RestStatement_27;
            MR_Word ml_backend__ml_simplify_switch__IfStmt_28;
            MR_Word ml_backend__ml_simplify_switch__V_29_29;

            {
              ml_backend__ml_simplify_switch__AllMatchConds_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__FirstMatchCond_22));
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__AllMatchConds_25, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__LaterMatchConds_23));
            }
            {
              ml_backend__ml_simplify_switch__CaseMatchedRval_26 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(ml_backend__ml_simplify_switch__AllMatchConds_25, ml_backend__ml_simplify_switch__HeadVar__3_3);
            }
            {
              ml_backend__ml_simplify_switch__RestStatement_27 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__Default_2, ml_backend__ml_simplify_switch__HeadVar__3_3, ml_backend__ml_simplify_switch__MLDS_Context_4);
            }
            {
              ml_backend__ml_simplify_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_29_29, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__RestStatement_27));
            }
            {
              ml_backend__ml_simplify_switch__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseMatchedRval_26));
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_24));
              MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_simplify_switch__V_29_29));
            }
            {
              ml_backend__ml_simplify_switch__Statement_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__IfStmt_28));
              MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Statement_5, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_4));
            }
          }
      }
    return ml_backend__ml_simplify_switch__Statement_5;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
  MR_Integer ml_backend__ml_simplify_switch__ThisVal_6,
  MR_Integer ml_backend__ml_simplify_switch__LastVal_7,
  MR_Word ml_backend__ml_simplify_switch__CaseLabelsMap_8,
  MR_String ml_backend__ml_simplify_switch__DefaultLabel_9)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__ThisVal_6 > ml_backend__ml_simplify_switch__LastVal_7);
    MR_Word ml_backend__ml_simplify_switch__CaseLabels_10;

    if (ml_backend__ml_simplify_switch__succeeded)
      ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String ml_backend__ml_simplify_switch__CaseLabel_12;
        MR_Word ml_backend__ml_simplify_switch__CaseLabels1_13;
        MR_Integer ml_backend__ml_simplify_switch__V_14_14;
        MR_String ml_backend__ml_simplify_switch__CaseLabel0_11;
        MR_Box ml_backend__ml_simplify_switch__conv0_CaseLabel0_11;

        {
          ml_backend__ml_simplify_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__ThisVal_6, &ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
        }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__CaseLabel0_11 = ((MR_String) ml_backend__ml_simplify_switch__conv0_CaseLabel0_11);
            ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__CaseLabel0_11;
        else
          ml_backend__ml_simplify_switch__CaseLabel_12 = ml_backend__ml_simplify_switch__DefaultLabel_9;
        ml_backend__ml_simplify_switch__V_14_14 = (ml_backend__ml_simplify_switch__ThisVal_6 + (MR_Integer) 1);
        {
          ml_backend__ml_simplify_switch__CaseLabels1_13 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(ml_backend__ml_simplify_switch__V_14_14, ml_backend__ml_simplify_switch__LastVal_7, ml_backend__ml_simplify_switch__CaseLabelsMap_8, ml_backend__ml_simplify_switch__DefaultLabel_9);
        }
        {
          ml_backend__ml_simplify_switch__CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabel_12));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseLabels_10, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseLabels1_13));
        }
      }
    return ml_backend__ml_simplify_switch__CaseLabels_10;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer ml_backend__ml_simplify_switch__Min_6,
  MR_Integer ml_backend__ml_simplify_switch__Max_7,
  MR_String ml_backend__ml_simplify_switch__ThisLabel_8,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Min_6 > ml_backend__ml_simplify_switch__Max_7);

        if (ml_backend__ml_simplify_switch__succeeded)
          *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_11 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10;
        else
          {
            MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;
            MR_Integer ml_backend__ml_simplify_switch__V_13_13;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Min_6, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_8)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12);
            }
            ml_backend__ml_simplify_switch__V_13_13 = (ml_backend__ml_simplify_switch__Min_6 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ml_backend__ml_simplify_switch__Min__tmp_copy_6 = ml_backend__ml_simplify_switch__V_13_13;
              MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_12_12;

              ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_10 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0__tmp_copy_10;
              ml_backend__ml_simplify_switch__Min_6 = ml_backend__ml_simplify_switch__Min__tmp_copy_6;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_String ml_backend__ml_simplify_switch__ThisLabel_5,
  MR_Word ml_backend__ml_simplify_switch__Cond_6,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;

    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cond_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_simplify_switch__MinRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__MaxRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_simplify_switch__Min_12;
        MR_Integer ml_backend__ml_simplify_switch__Max_13;
        MR_Word ml_backend__ml_simplify_switch__V_16_16;
        MR_Word ml_backend__ml_simplify_switch__V_17_17;

        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_10, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_16_16)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                ml_backend__ml_simplify_switch__Min_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_16_16, (MR_Integer) 0)));
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_11, (MR_Integer) 1)));
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_17_17)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_simplify_switch__succeeded)
                      ml_backend__ml_simplify_switch__Max_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_17_17, (MR_Integer) 0)));
                  }
              }
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(ml_backend__ml_simplify_switch__Min_12, ml_backend__ml_simplify_switch__Max_13, ml_backend__ml_simplify_switch__ThisLabel_5, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
              return;
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Cond_6, (MR_Integer) 0)));
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
        MR_Word ml_backend__ml_simplify_switch__V_22_22;

        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_8, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_22_22)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_simplify_switch__succeeded)
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_22_22, (MR_Integer) 0)));
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_simplify_switch__Val_9, ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_5)), ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_14, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_15);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
    MR_Word ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15;

    {
      ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15);
    }
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_CaseLabelsMap_15));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_8_p_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_String ml_backend__ml_simplify_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_simplify_switch__HeadVar__6_6,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;

    if ((ml_backend__ml_simplify_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_simplify_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_simplify_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7;
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4 = ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_simplify_switch__CaseStatements_24;
        MR_Word ml_backend__ml_simplify_switch__CasesDecls_25;
        MR_Word ml_backend__ml_simplify_switch__CasesStatements_26;
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31;
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32;
        MR_Word ml_backend__ml_simplify_switch__FirstCond_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__LaterConds_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 1)));
        MR_Word ml_backend__ml_simplify_switch__CaseStatement_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_16, (MR_Integer) 2)));
        MR_String ml_backend__ml_simplify_switch__ThisLabel_50;
        MR_Word ml_backend__ml_simplify_switch__MLDS_Context_52;
        MR_Word ml_backend__ml_simplify_switch__LabelComment_53;
        MR_Word ml_backend__ml_simplify_switch__LabelCode_54;
        MR_Word ml_backend__ml_simplify_switch__JumpComment_55;
        MR_Word ml_backend__ml_simplify_switch__JumpCode_56;
        MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58;
        MR_Word ml_backend__ml_simplify_switch__V_59_59;
        MR_Word ml_backend__ml_simplify_switch__V_64_64;
        MR_Word ml_backend__ml_simplify_switch__V_68_68;
        MR_Word ml_backend__ml_simplify_switch__V_69_69;
        MR_Word ml_backend__ml_simplify_switch__V_70_70;
        MR_Word ml_backend__ml_simplify_switch__V_71_71;
        MR_Word ml_backend__ml_simplify_switch__V_72_72;
        MR_Word ml_backend__ml_simplify_switch__V_73_73;
        MR_Box ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31;
        MR_Word ml_backend__ml_simplify_switch__V_51_51;

        {
          ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32);
        }
        {
          ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(ml_backend__ml_simplify_switch__ThisLabel_50, ml_backend__ml_simplify_switch__FirstCond_47, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_0_3, &ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58);
        }
        {
          ml_backend__ml_simplify_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__generate_cases_8_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__V_59_59, 3) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ml_backend__ml_simplify_switch__V_59_59, ml_backend__ml_simplify_switch__LaterConds_48, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_30_58)), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
        }
        ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31 = ((MR_Word) ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_CaseLabelsMap_31_31);
        ml_backend__ml_simplify_switch__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 0)));
        ml_backend__ml_simplify_switch__MLDS_Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__CaseStatement_49, (MR_Integer) 1)));
        {
          ml_backend__ml_simplify_switch__LabelComment_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[0])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelComment_53, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
        }
        {
          ml_backend__ml_simplify_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_64_64, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__ThisLabel_50));
        }
        {
          ml_backend__ml_simplify_switch__LabelCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_64_64));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__LabelCode_54, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
        }
        {
          ml_backend__ml_simplify_switch__JumpComment_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_6[1])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpComment_55, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
        }
        {
          ml_backend__ml_simplify_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__HeadVar__2_2));
        }
        {
          ml_backend__ml_simplify_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_69_69));
        }
        {
          ml_backend__ml_simplify_switch__JumpCode_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__V_68_68));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__JumpCode_56, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_52));
        }
        {
          ml_backend__ml_simplify_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpCode_56));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_simplify_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__JumpComment_55));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_73_73));
        }
        {
          ml_backend__ml_simplify_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__CaseStatement_49));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_71_71, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_72_72));
        }
        {
          ml_backend__ml_simplify_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelCode_54));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__V_70_70, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_71_71));
        }
        {
          ml_backend__ml_simplify_switch__CaseStatements_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__LabelComment_53));
          MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CaseStatements_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__V_70_70));
        }
        {
          ml_backend__ml_simplify_switch__generate_cases_8_p_0(ml_backend__ml_simplify_switch__Cases_17, ml_backend__ml_simplify_switch__HeadVar__2_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_31_31, ml_backend__ml_simplify_switch__STATE_VARIABLE_CaseLabelsMap_4, &ml_backend__ml_simplify_switch__CasesDecls_25, &ml_backend__ml_simplify_switch__CasesStatements_26, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_32_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_8);
        }
        {
          *ml_backend__ml_simplify_switch__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_simplify_switch__CasesDecls_25);
        }
        {
          *ml_backend__ml_simplify_switch__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_simplify_switch__CaseStatements_24, ml_backend__ml_simplify_switch__CasesStatements_26);
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
  MR_Word ml_backend__ml_simplify_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;

    if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_simplify_switch__MinRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_simplify_switch__MaxRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_simplify_switch__RvalMin_24;
        MR_Integer ml_backend__ml_simplify_switch__RvalMax_25;
        MR_Word ml_backend__ml_simplify_switch__V_30_30;
        MR_Word ml_backend__ml_simplify_switch__V_31_31;

        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MinRval_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MinRval_20, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_30_30)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                ml_backend__ml_simplify_switch__RvalMin_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_30_30, (MR_Integer) 0)));
                ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__MaxRval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__MaxRval_21, (MR_Integer) 1)));
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_31_31)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_simplify_switch__succeeded)
                      ml_backend__ml_simplify_switch__RvalMax_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_31_31, (MR_Integer) 0)));
                  }
              }
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            {
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__RvalMin_24, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
            {
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__RvalMax_25, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
              return;
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ml_backend__ml_simplify_switch__Val_9;
        MR_Word ml_backend__ml_simplify_switch__V_14_14;

        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Rval_6, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__V_14_14)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_simplify_switch__succeeded)
              ml_backend__ml_simplify_switch__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__V_14_14, (MR_Integer) 0)));
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            {
              mercury__int__min_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_2, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_3);
            }
            {
              mercury__int__max_3_p_0(ml_backend__ml_simplify_switch__Val_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_4, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_5);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_simplify_switch", (MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3;
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5;

    {
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5);
    }
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_3));
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_5));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
  MR_Word ml_backend__ml_simplify_switch__Case_6,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13,
  MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14,
  MR_Integer * ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_27_27;
    MR_Word ml_backend__ml_simplify_switch__FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_simplify_switch__LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16;
    MR_Integer ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17;
    MR_Word ml_backend__ml_simplify_switch___CaseStatement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Case_6, (MR_Integer) 2)));
    MR_Box ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13;
    MR_Box ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15;

    {
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(ml_backend__ml_simplify_switch__FirstCond_9, ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_0_12, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16, ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_0_14, &ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17);
    }
    ml_backend__ml_simplify_switch__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, ml_backend__ml_simplify_switch__TypeCtorInfo_27_27, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[3], ml_backend__ml_simplify_switch__LaterConds_10, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_16_16)), &ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13, ((MR_Box) (ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_17_17)), &ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
    }
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Min_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_STATE_VARIABLE_Min_13);
    *ml_backend__ml_simplify_switch__STATE_VARIABLE_Max_15 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_STATE_VARIABLE_Max_15);
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

    {
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
  MR_Word ml_backend__ml_simplify_switch__Range_8,
  MR_Word ml_backend__ml_simplify_switch__Cases_9,
  MR_Word ml_backend__ml_simplify_switch__Default_10,
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_11,
  MR_Integer * ml_backend__ml_simplify_switch__FirstVal_12,
  MR_Integer * ml_backend__ml_simplify_switch__LastVal_13,
  MR_Word * ml_backend__ml_simplify_switch__NeedRangeCheck_14)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Integer ml_backend__ml_simplify_switch__Min_15;
    MR_Integer ml_backend__ml_simplify_switch__Max_16;
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_25_25;
    MR_Integer ml_backend__ml_simplify_switch__TypeRange_17;
    MR_Integer ml_backend__ml_simplify_switch__NumCases_18;
    MR_Integer ml_backend__ml_simplify_switch__NoDefaultDensity_19;
    MR_Integer ml_backend__ml_simplify_switch__V_23_23;
    MR_Integer ml_backend__ml_simplify_switch__V_24_24;

    ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
    if (ml_backend__ml_simplify_switch__succeeded)
      {
        ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Range_8)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__Min_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 0)));
            ml_backend__ml_simplify_switch__Max_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Range_8, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__V_23_23 = (ml_backend__ml_simplify_switch__Max_16 - ml_backend__ml_simplify_switch__Min_15);
            ml_backend__ml_simplify_switch__V_24_24 = (MR_Integer) 1;
            ml_backend__ml_simplify_switch__TypeRange_17 = (ml_backend__ml_simplify_switch__V_23_23 + ml_backend__ml_simplify_switch__V_24_24);
            ml_backend__ml_simplify_switch__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
            {
              ml_backend__ml_simplify_switch__NumCases_18 = mercury__list__length_1_f_0(ml_backend__ml_simplify_switch__TypeCtorInfo_25_25, ml_backend__ml_simplify_switch__Cases_9);
            }
            {
              ml_backend__ml_simplify_switch__NoDefaultDensity_19 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_18, ml_backend__ml_simplify_switch__TypeRange_17);
            }
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NoDefaultDensity_19 > ml_backend__ml_simplify_switch__ReqDensity_11);
          }
      }
    if (ml_backend__ml_simplify_switch__succeeded)
      {
        *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
        *ml_backend__ml_simplify_switch__FirstVal_12 = ml_backend__ml_simplify_switch__Min_15;
        *ml_backend__ml_simplify_switch__LastVal_13 = ml_backend__ml_simplify_switch__Max_16;
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_38;
        MR_Integer ml_backend__ml_simplify_switch__V_30_30;
        MR_Integer ml_backend__ml_simplify_switch__V_31_31;
        MR_Box ml_backend__ml_simplify_switch__conv3_FirstVal_12;
        MR_Box ml_backend__ml_simplify_switch__conv2_LastVal_13;

        switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Default_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_simplify_switch__Default_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_simplify_switch__NeedRangeCheck_14 = (MR_Integer) 1;
            break;
        }
        {
          ml_backend__ml_simplify_switch__V_30_30 = mercury__int__max_int_0_f_0();
        }
        {
          ml_backend__ml_simplify_switch__V_31_31 = mercury__int__min_int_0_f_0();
        }
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, ml_backend__ml_simplify_switch__TypeCtorInfo_16_38, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[2], ml_backend__ml_simplify_switch__Cases_9, ((MR_Box) (ml_backend__ml_simplify_switch__V_30_30)), &ml_backend__ml_simplify_switch__conv3_FirstVal_12, ((MR_Box) (ml_backend__ml_simplify_switch__V_31_31)), &ml_backend__ml_simplify_switch__conv2_LastVal_13);
        }
        *ml_backend__ml_simplify_switch__FirstVal_12 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstVal_12);
        *ml_backend__ml_simplify_switch__LastVal_13 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastVal_13);
      }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
  MR_Box ml_backend__ml_simplify_switch__closure_arg,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_3,
  MR_Box ml_backend__ml_simplify_switch__wrapper_arg_4,
  MR_Box * ml_backend__ml_simplify_switch__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_simplify_switch__closure = ml_backend__ml_simplify_switch__closure_arg;
    MR_Integer ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13;
    MR_Integer ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15;

    {
      ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) ml_backend__ml_simplify_switch__wrapper_arg_1), ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_2), &ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13, ((MR_Integer) ml_backend__ml_simplify_switch__wrapper_arg_4), &ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15);
    }
    *ml_backend__ml_simplify_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_simplify_switch__conv1_STATE_VARIABLE_Min_13));
    *ml_backend__ml_simplify_switch__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_simplify_switch__conv0_STATE_VARIABLE_Max_15));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
  MR_Word ml_backend__ml_simplify_switch__Cases_3,
  MR_Integer ml_backend__ml_simplify_switch__ReqDensity_4)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_15_25;
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_16_26;
    MR_Integer ml_backend__ml_simplify_switch__NumCases_5;
    MR_Integer ml_backend__ml_simplify_switch__FirstCaseVal_6;
    MR_Integer ml_backend__ml_simplify_switch__LastCaseVal_7;
    MR_Integer ml_backend__ml_simplify_switch__CasesRange_8;
    MR_Integer ml_backend__ml_simplify_switch__Density_9;
    MR_Integer ml_backend__ml_simplify_switch__V_11_11;
    MR_Integer ml_backend__ml_simplify_switch__V_12_12;
    MR_Word ml_backend__ml_simplify_switch__V_17_17;
    MR_Integer ml_backend__ml_simplify_switch__V_18_18;
    MR_Integer ml_backend__ml_simplify_switch__V_19_19;
    MR_Box ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6;
    MR_Box ml_backend__ml_simplify_switch__conv2_LastCaseVal_7;

    {
      ml_backend__ml_simplify_switch__NumCases_5 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_simplify_switch__Cases_3);
    }
    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_5 > (MR_Integer) 2);
    if (ml_backend__ml_simplify_switch__succeeded)
      {
        ml_backend__ml_simplify_switch__V_17_17 = (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[1];
        {
          ml_backend__ml_simplify_switch__V_18_18 = mercury__int__max_int_0_f_0();
        }
        {
          ml_backend__ml_simplify_switch__V_19_19 = mercury__int__min_int_0_f_0();
        }
        ml_backend__ml_simplify_switch__TypeCtorInfo_15_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
        ml_backend__ml_simplify_switch__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__foldl2_6_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_15_25, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__TypeCtorInfo_16_26, ml_backend__ml_simplify_switch__V_17_17, ml_backend__ml_simplify_switch__Cases_3, ((MR_Box) (ml_backend__ml_simplify_switch__V_18_18)), &ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6, ((MR_Box) (ml_backend__ml_simplify_switch__V_19_19)), &ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
        }
        ml_backend__ml_simplify_switch__FirstCaseVal_6 = ((MR_Integer) ml_backend__ml_simplify_switch__conv3_FirstCaseVal_6);
        ml_backend__ml_simplify_switch__LastCaseVal_7 = ((MR_Integer) ml_backend__ml_simplify_switch__conv2_LastCaseVal_7);
        ml_backend__ml_simplify_switch__V_11_11 = (ml_backend__ml_simplify_switch__LastCaseVal_7 - ml_backend__ml_simplify_switch__FirstCaseVal_6);
        ml_backend__ml_simplify_switch__V_12_12 = (MR_Integer) 1;
        ml_backend__ml_simplify_switch__CasesRange_8 = (ml_backend__ml_simplify_switch__V_11_11 + ml_backend__ml_simplify_switch__V_12_12);
        {
          ml_backend__ml_simplify_switch__Density_9 = backend_libs__switch_util__switch_density_2_f_0(ml_backend__ml_simplify_switch__NumCases_5, ml_backend__ml_simplify_switch__CasesRange_8);
        }
        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Density_9 > ml_backend__ml_simplify_switch__ReqDensity_4);
      }
    return ml_backend__ml_simplify_switch__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
  MR_Word ml_backend__ml_simplify_switch__MLDSType_3)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__IsIntegral_4;

    switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__MLDSType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_simplify_switch__MLDSType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_simplify_switch__CtorCat_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_simplify_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_simplify_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__MLDSType_3, (MR_Integer) 2)));

          switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__ml_simplify_switch__CtorCat_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 4:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_simplify_switch__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

                ml_backend__ml_simplify_switch__IsIntegral_4 = ((&ml_backend__ml_simplify_switch_vector_common_2[0 + ml_backend__ml_simplify_switch__V_30_30]))->ml_backend__ml_simplify_switch__vector_common_type_2_0__vct_2_f_0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_simplify_switch__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)));

                switch (ml_backend__ml_simplify_switch__V_31_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_simplify_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__CtorCat_18, (MR_Integer) 1)));

                    switch (ml_backend__ml_simplify_switch__V_32_32) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        ml_backend__ml_simplify_switch__IsIntegral_4 = (MR_Integer) 0;
        break;
    }
    return ml_backend__ml_simplify_switch__IsIntegral_4;
  }
}

void MR_CALL 
ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(
  MR_Word ml_backend__ml_simplify_switch__Stmt0_6,
  MR_Word ml_backend__ml_simplify_switch__MLDS_Context_7,
  MR_Word * ml_backend__ml_simplify_switch__Statement_8,
  MR_Word ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32,
  MR_Word * ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33)
{
  {
    MR_bool ml_backend__ml_simplify_switch__succeeded;
    MR_Word ml_backend__ml_simplify_switch__Globals_10;
    MR_Word ml_backend__ml_simplify_switch__Rval_12;
    MR_Word ml_backend__ml_simplify_switch__Range_13;
    MR_Word ml_backend__ml_simplify_switch__Cases_14;
    MR_Word ml_backend__ml_simplify_switch__Default_15;
    MR_Integer ml_backend__ml_simplify_switch__ReqDensity_18;
    MR_Word ml_backend__ml_simplify_switch__TypeCtorInfo_67_67;
    MR_Word ml_backend__ml_simplify_switch__Type_11;
    MR_Integer ml_backend__ml_simplify_switch__NumCases_16;
    MR_Integer ml_backend__ml_simplify_switch__DenseSize_17;
    MR_Word ml_backend__ml_simplify_switch__V_35_35;
    MR_Word ml_backend__ml_simplify_switch__V_39_39;
    MR_Word ml_backend__ml_simplify_switch__V_40_40;
    MR_Word ml_backend__ml_simplify_switch__V_36_36;
    MR_Word ml_backend__ml_simplify_switch__V_37_37;
    MR_Word ml_backend__ml_simplify_switch__V_38_38;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, &ml_backend__ml_simplify_switch__Globals_10);
    }
    ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (ml_backend__ml_simplify_switch__succeeded)
      {
        ml_backend__ml_simplify_switch__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
        ml_backend__ml_simplify_switch__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
        ml_backend__ml_simplify_switch__Range_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
        ml_backend__ml_simplify_switch__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
        ml_backend__ml_simplify_switch__Default_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
        switch (MR_tag((MR_Word) ml_backend__ml_simplify_switch__Type_11)) {
          default:
            ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_simplify_switch__Type_11)) {
              default:
                ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 4:
                ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_simplify_switch__CtorCat_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_simplify_switch__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 0)));
              MR_Word ml_backend__ml_simplify_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__Type_11, (MR_Integer) 2)));

              if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ml_backend__ml_simplify_switch__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

                  switch (ml_backend__ml_simplify_switch__V_95_95) {
                    default:
                      ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      ml_backend__ml_simplify_switch__succeeded = MR_TRUE;
                      break;
                  }
                }
              else
              if (((MR_tag((MR_Word) ml_backend__ml_simplify_switch__CtorCat_83)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word ml_backend__ml_simplify_switch__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_simplify_switch__CtorCat_83, (MR_Integer) 0)));

                  ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_96_96 == (MR_Integer) 0);
                }
              else
                ml_backend__ml_simplify_switch__succeeded = MR_FALSE;
            }
            break;
        }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            {
              ml_backend__ml_simplify_switch__V_35_35 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
            }
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_35_35 == (MR_Integer) 1);
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                {
                  ml_backend__ml_simplify_switch__V_36_36 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_36_36 == (MR_Integer) 1);
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__V_37_37 = (MR_Integer) 317;
                    ml_backend__ml_simplify_switch__V_38_38 = (MR_Integer) 1;
                    {
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_37_37, ml_backend__ml_simplify_switch__V_38_38);
                    }
                  }
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__TypeCtorInfo_67_67 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
                    {
                      mercury__list__length_2_p_0(ml_backend__ml_simplify_switch__TypeCtorInfo_67_67, ml_backend__ml_simplify_switch__Cases_14, &ml_backend__ml_simplify_switch__NumCases_16);
                    }
                    ml_backend__ml_simplify_switch__V_39_39 = (MR_Integer) 430;
                    {
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_39_39, &ml_backend__ml_simplify_switch__DenseSize_17);
                    }
                    ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__NumCases_16 >= ml_backend__ml_simplify_switch__DenseSize_17);
                    if (ml_backend__ml_simplify_switch__succeeded)
                      {
                        ml_backend__ml_simplify_switch__V_40_40 = (MR_Integer) 428;
                        {
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_40_40, &ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
                        {
                          ml_backend__ml_simplify_switch__succeeded = ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__ReqDensity_18);
                        }
                      }
                  }
              }
          }
      }
    if (ml_backend__ml_simplify_switch__succeeded)
      {
        MR_Integer ml_backend__ml_simplify_switch__FirstVal_19;
        MR_Integer ml_backend__ml_simplify_switch__LastVal_20;
        MR_Word ml_backend__ml_simplify_switch__NeedRangeCheck_21;
        MR_Word ml_backend__ml_simplify_switch__Decls_22;
        MR_Word ml_backend__ml_simplify_switch__Statements_23;
        MR_Word ml_backend__ml_simplify_switch__Stmt_24;

        {
          ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(ml_backend__ml_simplify_switch__Range_13, ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__ReqDensity_18, &ml_backend__ml_simplify_switch__FirstVal_19, &ml_backend__ml_simplify_switch__LastVal_20, &ml_backend__ml_simplify_switch__NeedRangeCheck_21);
        }
        {
          ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_p_0(ml_backend__ml_simplify_switch__Cases_14, ml_backend__ml_simplify_switch__Default_15, ml_backend__ml_simplify_switch__FirstVal_19, ml_backend__ml_simplify_switch__LastVal_20, ml_backend__ml_simplify_switch__NeedRangeCheck_21, ml_backend__ml_simplify_switch__Rval_12, ml_backend__ml_simplify_switch__MLDS_Context_7, &ml_backend__ml_simplify_switch__Decls_22, &ml_backend__ml_simplify_switch__Statements_23, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33);
        }
        {
          ml_backend__ml_simplify_switch__Stmt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Decls_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__Statements_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_simplify_switch__Statement_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt_24));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
        }
      }
    else
      {
        MR_Word ml_backend__ml_simplify_switch__Rval_58;
        MR_Word ml_backend__ml_simplify_switch__Cases_59;
        MR_Word ml_backend__ml_simplify_switch__Default_60;
        MR_Word ml_backend__ml_simplify_switch__V_42_42;
        MR_Word ml_backend__ml_simplify_switch__Type_47;
        MR_Word ml_backend__ml_simplify_switch___Range_25;
        MR_Word ml_backend__ml_simplify_switch__V_43_43;
        MR_Word ml_backend__ml_simplify_switch__V_44_44;
        MR_Word ml_backend__ml_simplify_switch__V_45_45;

        ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            ml_backend__ml_simplify_switch__Type_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
            ml_backend__ml_simplify_switch__Rval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
            ml_backend__ml_simplify_switch___Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
            ml_backend__ml_simplify_switch__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
            ml_backend__ml_simplify_switch__Default_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
            {
              ml_backend__ml_simplify_switch__V_42_42 = ml_backend__ml_simplify_switch__is_integral_type_1_f_0(ml_backend__ml_simplify_switch__Type_47);
            }
            ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_42_42 == (MR_Integer) 1);
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                {
                  ml_backend__ml_simplify_switch__V_43_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_simplify_switch__Globals_10);
                }
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_43_43 == (MR_Integer) 1);
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__V_44_44 = (MR_Integer) 317;
                    ml_backend__ml_simplify_switch__V_45_45 = (MR_Integer) 1;
                    {
                      ml_backend__ml_simplify_switch__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_simplify_switch__Globals_10, ml_backend__ml_simplify_switch__V_44_44, ml_backend__ml_simplify_switch__V_45_45);
                    }
                  }
                ml_backend__ml_simplify_switch__succeeded = !(ml_backend__ml_simplify_switch__succeeded);
              }
          }
        if (ml_backend__ml_simplify_switch__succeeded)
          {
            *ml_backend__ml_simplify_switch__Statement_8 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(ml_backend__ml_simplify_switch__Cases_59, ml_backend__ml_simplify_switch__Default_60, ml_backend__ml_simplify_switch__Rval_58, ml_backend__ml_simplify_switch__MLDS_Context_7);
          }
        else
          {
            MR_Word ml_backend__ml_simplify_switch__SingleCase_28;
            MR_Word ml_backend__ml_simplify_switch__V_46_46;
            MR_Word ml_backend__ml_simplify_switch__Cases_49;
            MR_Word ml_backend__ml_simplify_switch__Default_50;
            MR_Word ml_backend__ml_simplify_switch___Type_26;
            MR_Word ml_backend__ml_simplify_switch___Rval_27;
            MR_Word ml_backend__ml_simplify_switch___Range_48;

            ml_backend__ml_simplify_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Stmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                ml_backend__ml_simplify_switch___Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 1)));
                ml_backend__ml_simplify_switch___Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 2)));
                ml_backend__ml_simplify_switch___Range_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 3)));
                ml_backend__ml_simplify_switch__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 4)));
                ml_backend__ml_simplify_switch__Default_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_simplify_switch__Stmt0_6, (MR_Integer) 5)));
                ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__Default_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ml_backend__ml_simplify_switch__succeeded)
                  {
                    ml_backend__ml_simplify_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_simplify_switch__Cases_49)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_simplify_switch__succeeded)
                      {
                        ml_backend__ml_simplify_switch__SingleCase_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 0)));
                        ml_backend__ml_simplify_switch__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_simplify_switch__Cases_49, (MR_Integer) 1)));
                        ml_backend__ml_simplify_switch__succeeded = (ml_backend__ml_simplify_switch__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
            if (ml_backend__ml_simplify_switch__succeeded)
              {
                MR_Word ml_backend__ml_simplify_switch___FirstCond_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 0)));
                MR_Word ml_backend__ml_simplify_switch___LaterConds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 1)));

                *ml_backend__ml_simplify_switch__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_simplify_switch__SingleCase_28, (MR_Integer) 2)));
              }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__ml_simplify_switch__Statement_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_simplify_switch__Stmt0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__MLDS_Context_7));
              }
          }
        *ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_33 = ml_backend__ml_simplify_switch__STATE_VARIABLE_Info_0_32;
      }
  }
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
