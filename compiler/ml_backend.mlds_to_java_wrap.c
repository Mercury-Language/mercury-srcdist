/*
** Automatically generated from `mlds_to_java_wrap.m'
** by the Mercury compiler,
** version rotd-2023-10-13
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


// :- module ml_backend.mlds_to_java_wrap.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_wrap__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_wrap.mih"


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
#include "enum.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_wrap__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_0[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_1[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_1;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_1[1];

static const MR_DuPtagLayout ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_ptag_ordered_call_method_inputs_0[2];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_name_ordered_call_method_inputs_0[2];

static const MR_Integer ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__functor_number_map_call_method_inputs_0[2];

static MR_Word MR_CALL 
ml_backend__mlds_to_java_wrap__IntroducedFrom__func__generate_call_method__187__1_2_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58);

static void MR_CALL 
ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_nth_arg_3_p_0(
  MR_Word Type_4,
  MR_Word MethodArgVariable_5,
  MR_Word * CallArg_6);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0(
  MR_Word InputArgs_4,
  MR_Word CodeAddr_5,
  MR_Word * Stmt_6);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_args_from_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArrayVar_2,
  MR_Integer Counter_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__create_generic_arg_3_p_0(
  MR_Integer I_4,
  MR_Word * ArgName_5,
  MR_Word * Arg_6);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__add_to_address_map_4_p_0(
  MR_String ClassName_5,
  MR_Word CodeAddrs_6,
  MR_Word STATE_VARIABLE_AddrOfMap_0_14,
  MR_Word * STATE_VARIABLE_AddrOfMap_15);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__add_to_address_map_2_5_p_0(
  MR_String FlippedClassName_1,
  MR_Word HeadVar__2_2,
  MR_Integer I_3,
  MR_Word STATE_VARIABLE_AddrOfMap_0_4,
  MR_Word * STATE_VARIABLE_AddrOfMap_5);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0(
  MR_Integer Arity_4,
  MR_Word CodeAddrs_5,
  MR_Word * MethodDefn_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_1[12][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_2[8][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_3[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_5[4][6];




static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 72U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_2[6]))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_2[8][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_3[1]))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "<constructor>")) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U)) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)))) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[6]))) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   7 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_3[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[1])))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_5[3])),
    ((MR_Box) (ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "call")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_wrap_scalar_common_5[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__type_ctor_info_call_method_inputs_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_wrap__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_0[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds_to_java_wrap__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) };

static const MR_DuFunctorDesc ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_0 = {
  (MR_String) "cmi_separate",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_1[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) };

static const MR_DuFunctorDesc ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_1 = {
  (MR_String) "cmi_array",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__field_types_call_method_inputs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_0[1] = { &ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_0 };

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_1[1] = { &ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_1 };

static const MR_DuPtagLayout ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_ptag_ordered_call_method_inputs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_stag_ordered_call_method_inputs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_name_ordered_call_method_inputs_0[2] = {
  &ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_1,
  &ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_functor_desc_call_method_inputs_0_0
};

static const MR_Integer ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__functor_number_map_call_method_inputs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__type_ctor_info_call_method_inputs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_java_wrap",
  (MR_String) "call_method_inputs",
  { ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_name_ordered_call_method_inputs_0 },
  { ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__du_ptag_ordered_call_method_inputs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__functor_number_map_call_method_inputs_0,

};

static MR_Word MR_CALL 
ml_backend__mlds_to_java_wrap__IntroducedFrom__func__generate_call_method__187__1_2_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58)
{
  MR_Word LambdaHeadVar__3_59;
  MR_Word MatchCond_24;
  MR_Word Var_60;
  MR_Word Var_61;

  {
    Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_61, 0) = ((MR_Box) (LambdaHeadVar__1_57));
  }
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
  }
  {
    MatchCond_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MatchCond_24, 0) = ((MR_Box) (Var_60));
  }
  {
    LambdaHeadVar__3_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__3_59, 0) = ((MR_Box) (MatchCond_24));
    MR_hl_field(0, LambdaHeadVar__3_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LambdaHeadVar__3_59, 2) = ((MR_Box) (LambdaHeadVar__2_58));
  }
  return LambdaHeadVar__3_59;
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      ml_backend__mlds____Compare____mlds_local_var_name_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_java_wrap_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&ml_backend__mlds_to_java_wrap_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_nth_arg_3_p_0(
  MR_Word Type_4,
  MR_Word MethodArgVariable_5,
  MR_Word * CallArg_6)
{
  MR_Word Rval_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_8, 1) = ((MR_Box) (MethodArgVariable_5));
    MR_hl_field(3, Var_8, 2) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  {
    Rval_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Rval_7, 0) = ((MR_Box) (Var_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *CallArg_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Type_4));
    MR_hl_field(3, base, 2) = ((MR_Box) (Rval_7));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_CallArg_6;

  ml_backend__mlds_to_java_wrap__generate_call_method_nth_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_CallArg_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_CallArg_6));
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0(
  MR_Word InputArgs_4,
  MR_Word CodeAddr_5,
  MR_Word * Stmt_6)
{
  MR_Word OrigFuncSignature_8 = ((MR_Word) ((MR_hl_field(0, CodeAddr_5, (MR_Integer) 1))));
  MR_Word OrigArgTypes_9 = ((MR_Word) ((MR_hl_field(0, OrigFuncSignature_8, (MR_Integer) 0))));
  MR_Word OrigRetTypes_10 = ((MR_Word) ((MR_hl_field(0, OrigFuncSignature_8, (MR_Integer) 1))));
  MR_Word CallArgs_12;
  MR_Word ReturnVarName_14;
  MR_Word ReturnVarType_15;
  MR_Word ReturnLval_20;
  MR_Word Context_21;
  MR_Word ReturnVarDefn_23;
  MR_Word CallRval_24;
  MR_Word CallRetLvals_25;
  MR_Word CallStmt_28;
  MR_Word ReturnRval_29;
  MR_Word ReturnStmt_30;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;

  if (((MR_tag((MR_Word) InputArgs_4)) == (MR_Integer) 1))
  {
    MR_Word ArrayVarName_13 = ((MR_Word) ((MR_hl_field(1, InputArgs_4, (MR_Integer) 0))));

    ml_backend__mlds_to_java_wrap__generate_call_method_args_from_array_5_p_0(OrigArgTypes_9, ArrayVarName_13, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &CallArgs_12);
  }
  else
  {
    MR_Word ArgNames_11 = ((MR_Word) ((MR_hl_field(0, InputArgs_4, (MR_Integer) 0))));

    mercury__list__map_corresponding_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds_to_java_wrap_scalar_common_3[5]), OrigArgTypes_9, ArgNames_11, &CallArgs_12);
  }
  ReturnVarName_14 = (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[10]));
  if ((OrigRetTypes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnVarType_15 = (MR_Word) ((MR_Unsigned) 20U);
  else
  {
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, OrigRetTypes_10, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, OrigRetTypes_10, (MR_Integer) 0))));

    if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnVarType_15 = Var_58;
    else
      ReturnVarType_15 = (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[7]));
  }
  {
    ReturnLval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReturnLval_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ReturnLval_20, 1) = ((MR_Box) (ReturnVarName_14));
    MR_hl_field(3, ReturnLval_20, 2) = ((MR_Box) (ReturnVarType_15));
  }
  Context_21 = mercury__term_context__dummy_context_0_f_0();
  {
    ReturnVarDefn_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReturnVarDefn_23, 0) = ((MR_Box) (ReturnVarName_14));
    MR_hl_field(0, ReturnVarDefn_23, 1) = ((MR_Box) (Context_21));
    MR_hl_field(0, ReturnVarDefn_23, 2) = ((MR_Box) (ReturnVarType_15));
    MR_hl_field(0, ReturnVarDefn_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ReturnVarDefn_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_39 = (MR_Word) (MR_mkword(1, (MR_Word) (CodeAddr_5)));
  {
    CallRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallRval_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, CallRval_24, 1) = ((MR_Box) (Var_39));
  }
  if ((OrigRetTypes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    CallRetLvals_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      CallRetLvals_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallRetLvals_25, 0) = ((MR_Box) (ReturnLval_20));
      MR_hl_field(1, CallRetLvals_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  {
    CallStmt_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, CallStmt_28, 1) = ((MR_Box) (OrigFuncSignature_8));
    MR_hl_field(3, CallStmt_28, 2) = ((MR_Box) (CallRval_24));
    MR_hl_field(3, CallStmt_28, 3) = ((MR_Box) (CallArgs_12));
    MR_hl_field(3, CallStmt_28, 4) = ((MR_Box) (CallRetLvals_25));
    MR_hl_field(3, CallStmt_28, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(3, CallStmt_28, 6) = ((MR_Box) (Context_21));
  }
  {
    Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_42, 0) = ((MR_Box) (ReturnLval_20));
  }
  {
    ReturnRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReturnRval_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ReturnRval_29, 1) = ((MR_Box) (ReturnVarType_15));
    MR_hl_field(3, ReturnRval_29, 2) = ((MR_Box) (Var_42));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (ReturnRval_29));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ReturnStmt_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReturnStmt_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ReturnStmt_30, 1) = ((MR_Box) (Var_43));
    MR_hl_field(3, ReturnStmt_30, 2) = ((MR_Box) (Context_21));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (ReturnVarDefn_23));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (ReturnStmt_30));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (CallStmt_28));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Stmt_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_21));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_args_from_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArrayVar_2,
  MR_Integer Counter_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Args_5 = HeadVar__4_4;
    else
    {
      MR_Word Type_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArrayRval_15;
      MR_Word IndexRval_16;
      MR_Word Rval_18;
      MR_Word UnBoxedRval_19;
      MR_Word Args1_20;
      MR_Word Var_21;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Integer Var_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Counter_3;
      MR_Word next_value_of_HeadVar__4_4;

      {
        Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_21, 1) = ((MR_Box) (ArrayVar_2));
        MR_hl_field(3, Var_21, 2) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[1])));
      }
      {
        ArrayRval_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, ArrayRval_15, 0) = ((MR_Box) (Var_21));
      }
      {
        Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_24, 0) = ((MR_Box) (Counter_3));
      }
      {
        IndexRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IndexRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, IndexRval_16, 1) = ((MR_Box) (Var_24));
      }
      {
        Rval_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Rval_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Rval_18, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[11])));
        MR_hl_field(3, Rval_18, 2) = ((MR_Box) (ArrayRval_15));
        MR_hl_field(3, Rval_18, 3) = ((MR_Box) (IndexRval_16));
      }
      {
        UnBoxedRval_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, UnBoxedRval_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, UnBoxedRval_19, 1) = ((MR_Box) (Type_9));
        MR_hl_field(3, UnBoxedRval_19, 2) = ((MR_Box) (Rval_18));
      }
      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (UnBoxedRval_19));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Args1_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), HeadVar__4_4, Var_27);
      Var_29 = (MR_Integer) ((MR_Unsigned) Counter_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_10;
      next_value_of_Counter_3 = Var_29;
      next_value_of_HeadVar__4_4 = Args1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Counter_3 = next_value_of_Counter_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__create_generic_arg_3_p_0(
  MR_Integer I_4,
  MR_Word * ArgName_5,
  MR_Word * Arg_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_7, 1) = ((MR_Box) (I_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *ArgName_5 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Arg_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (*ArgName_5));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_addr_wrapper_class_5_p_0(
  MR_Word MLDS_ModuleName_6,
  MR_Word HeadVar__2_2,
  MR_Word * ClassDefn_9,
  MR_Word STATE_VARIABLE_AddrOfMap_0_48,
  MR_Word * STATE_VARIABLE_AddrOfMap_49)
{
  MR_bool succeeded;
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word CodeAddrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String ClassName_11;
  MR_Word FieldVarDefns_13;
  MR_Word CtorDefns_14;
  MR_Word MethodDefn_38;
  MR_String InterfaceName_39;
  MR_Word InterfaceModuleName_40;
  MR_Word InterfaceId_43;
  MR_Word ClassImplements_44;
  MR_Word ClassContext_46;
  MR_String Var_51;
  MR_Word Var_84;
  MR_Word Var_91;

  Var_51 = mercury__string__from_int_1_f_0(Arity_7);
  ClassName_11 = mercury__string__f_43_43_2_f_0((MR_String) "addrOf", Var_51);
  if ((CodeAddrs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_wrap.generate_addr_wrapper_class\'/5", (MR_String) "no addresses");
      return;
    }
  else
  {
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, CodeAddrs_8, (MR_Integer) 1))));

    if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      FieldVarDefns_13 = (MR_Word) ((MR_Unsigned) 0U);
      CtorDefns_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Context_18;
      MR_Word IntType_19;
      MR_Word FieldVarDefn_22;
      MR_Word QualClassName_23;
      MR_Word ClassType_24;
      MR_Word FieldName_25;
      MR_Word FieldId_26;
      MR_Word FieldLval_27;
      MR_Word CtorStmt_32;
      MR_Word EnvVarNames_36;
      MR_Word CtorDefn_37;
      MR_Word Var_65;
      MR_Word Var_70;
      MR_Word Var_74;
      MR_Word Var_79;

      Context_18 = mercury__term_context__dummy_context_0_f_0();
      IntType_19 = (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[1]));
      {
        FieldVarDefn_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FieldVarDefn_22, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[3])));
        MR_hl_field(0, FieldVarDefn_22, 1) = ((MR_Box) (Context_18));
        MR_hl_field(0, FieldVarDefn_22, 2) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_2[0]));
        MR_hl_field(0, FieldVarDefn_22, 3) = ((MR_Box) (IntType_19));
        MR_hl_field(0, FieldVarDefn_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, FieldVarDefn_22, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FieldVarDefns_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FieldVarDefns_13, 0) = ((MR_Box) (FieldVarDefn_22));
        MR_hl_field(1, FieldVarDefns_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        QualClassName_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, QualClassName_23, 0) = ((MR_Box) (MLDS_ModuleName_6));
        MR_hl_field(0, QualClassName_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, QualClassName_23, 2) = ((MR_Box) (ClassName_11));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (QualClassName_23));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      ClassType_24 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_65)));
      {
        FieldName_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FieldName_25, 0) = ((MR_Box) (MLDS_ModuleName_6));
        MR_hl_field(0, FieldName_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, FieldName_25, 2) = ((MR_Box) ((MR_Unsigned) 8U));
      }
      {
        FieldId_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FieldId_26, 0) = ((MR_Box) (FieldName_25));
        MR_hl_field(1, FieldId_26, 1) = ((MR_Box) (ClassType_24));
      }
      {
        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_70, 1) = ((MR_Box) (ClassType_24));
      }
      {
        FieldLval_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FieldLval_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, FieldLval_27, 1) = ((MR_Box) (Var_70));
        MR_hl_field(0, FieldLval_27, 2) = ((MR_Box) (ClassType_24));
        MR_hl_field(0, FieldLval_27, 3) = ((MR_Box) (FieldId_26));
        MR_hl_field(0, FieldLval_27, 4) = ((MR_Box) (IntType_19));
      }
      {
        Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_74, 0) = ((MR_Box) (FieldLval_27));
        MR_hl_field(2, Var_74, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__mlds_to_java_wrap_scalar_common_2[1])));
      }
      {
        CtorStmt_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CtorStmt_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, CtorStmt_32, 1) = ((MR_Box) (Var_74));
        MR_hl_field(3, CtorStmt_32, 2) = ((MR_Box) (Context_18));
      }
      EnvVarNames_36 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (CtorStmt_32));
      }
      {
        CtorDefn_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CtorDefn_37, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_2[2])));
        MR_hl_field(0, CtorDefn_37, 1) = ((MR_Box) (Context_18));
        MR_hl_field(0, CtorDefn_37, 2) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_2[3]));
        MR_hl_field(0, CtorDefn_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, CtorDefn_37, 4) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_1[5]));
        MR_hl_field(0, CtorDefn_37, 5) = ((MR_Box) (Var_79));
        MR_hl_field(0, CtorDefn_37, 6) = ((MR_Box) (EnvVarNames_36));
        MR_hl_field(0, CtorDefn_37, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        CtorDefns_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CtorDefns_14, 0) = ((MR_Box) (CtorDefn_37));
        MR_hl_field(1, CtorDefns_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0(Arity_7, CodeAddrs_8, &MethodDefn_38);
  succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_7);
  if (succeeded)
  {
    MR_String Var_83;

    Var_83 = mercury__string__from_int_1_f_0(Arity_7);
    InterfaceName_39 = mercury__string__f_43_43_2_f_0((MR_String) "MethodPtr", Var_83);
  }
  else
    InterfaceName_39 = (MR_String) "MethodPtrN";
  Var_84 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
  InterfaceModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_84);
  {
    InterfaceId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InterfaceId_43, 0) = ((MR_Box) (InterfaceModuleName_40));
    MR_hl_field(0, InterfaceId_43, 1) = ((MR_Box) (InterfaceName_39));
  }
  {
    ClassImplements_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClassImplements_44, 0) = ((MR_Box) (InterfaceId_43));
    MR_hl_field(1, ClassImplements_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ClassContext_46 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (MethodDefn_38));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *ClassDefn_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (ClassContext_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_2[4]));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClassImplements_44));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 8) = ((MR_Box) (FieldVarDefns_13));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 11) = ((MR_Box) (CtorDefns_14));
  }
  ml_backend__mlds_to_java_wrap__add_to_address_map_4_p_0(ClassName_11, CodeAddrs_8, STATE_VARIABLE_AddrOfMap_0_48, STATE_VARIABLE_AddrOfMap_49);
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__add_to_address_map_4_p_0(
  MR_String ClassName_5,
  MR_Word CodeAddrs_6,
  MR_Word STATE_VARIABLE_AddrOfMap_0_14,
  MR_Word * STATE_VARIABLE_AddrOfMap_15)
{
  MR_String FlippedClassName_8;

  FlippedClassName_8 = parse_tree__java_names__flip_initial_case_1_f_0(ClassName_5);
  if ((CodeAddrs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_wrap.add_to_address_map\'/4", (MR_String) "no addresses");
      return;
    }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, CodeAddrs_6, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, CodeAddrs_6, (MR_Integer) 0))));

    if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Wrapper_10;

      {
        Wrapper_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Wrapper_10, 0) = ((MR_Box) (FlippedClassName_8));
        MR_hl_field(0, Wrapper_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0), ((MR_Box) (Var_26)), ((MR_Box) (Wrapper_10)), STATE_VARIABLE_AddrOfMap_0_14, STATE_VARIABLE_AddrOfMap_15);
    }
    else
    {
      MR_Word Wrapper_35;
      MR_Word STATE_VARIABLE_AddrOfMap_20_39;

      {
        Wrapper_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Wrapper_35, 0) = ((MR_Box) (FlippedClassName_8));
        MR_hl_field(0, Wrapper_35, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_2[7])));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0), ((MR_Box) (Var_26)), ((MR_Box) (Wrapper_35)), STATE_VARIABLE_AddrOfMap_0_14, &STATE_VARIABLE_AddrOfMap_20_39);
      ml_backend__mlds_to_java_wrap__add_to_address_map_2_5_p_0(FlippedClassName_8, Var_25, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), STATE_VARIABLE_AddrOfMap_20_39, STATE_VARIABLE_AddrOfMap_15);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__add_to_address_map_2_5_p_0(
  MR_String FlippedClassName_1,
  MR_Word HeadVar__2_2,
  MR_Integer I_3,
  MR_Word STATE_VARIABLE_AddrOfMap_0_4,
  MR_Word * STATE_VARIABLE_AddrOfMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AddrOfMap_5 = STATE_VARIABLE_AddrOfMap_0_4;
    else
    {
      MR_Word CodeAddr_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CodeAddrs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Wrapper_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_AddrOfMap_20_20;
      MR_Integer Var_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_I_3;
      MR_Word next_value_of_STATE_VARIABLE_AddrOfMap_0_4;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (I_3));
      }
      {
        Wrapper_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Wrapper_16, 0) = ((MR_Box) (FlippedClassName_1));
        MR_hl_field(0, Wrapper_16, 1) = ((MR_Box) (Var_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0), ((MR_Box) (CodeAddr_12)), ((MR_Box) (Wrapper_16)), STATE_VARIABLE_AddrOfMap_0_4, &STATE_VARIABLE_AddrOfMap_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) I_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CodeAddrs_13;
      next_value_of_I_3 = Var_21;
      next_value_of_STATE_VARIABLE_AddrOfMap_0_4 = STATE_VARIABLE_AddrOfMap_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      I_3 = next_value_of_I_3;
      STATE_VARIABLE_AddrOfMap_0_4 = next_value_of_STATE_VARIABLE_AddrOfMap_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__3_59;

  conv3_LambdaHeadVar__3_59 = ml_backend__mlds_to_java_wrap__IntroducedFrom__func__generate_call_method__187__1_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_59));
  return wrapper_arg_3;
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Stmt_6;

  ml_backend__mlds_to_java_wrap__generate_call_statement_for_addr_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Stmt_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Stmt_6));
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ArgName_5;
  MR_Word conv0_Arg_6;

  ml_backend__mlds_to_java_wrap__create_generic_arg_3_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_ArgName_5, &conv0_Arg_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_ArgName_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_Arg_6));
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0(
  MR_Integer Arity_4,
  MR_Word CodeAddrs_5,
  MR_Word * MethodDefn_6)
{
  MR_bool succeeded;
  MR_Word MethodArgs_8;
  MR_Word InputArgs_9;
  MR_Word CodeAddrStmts_13;
  MR_Word Context_14;
  MR_Word Stmt_15;
  MR_Word PredId_30;
  MR_Integer ProcId_31;
  MR_Word ProcLabel_33;
  MR_Word FuncLabel_34;
  MR_Word PlainFuncName_35;
  MR_Word MethodName_36;
  MR_Word MethodParams_40;
  MR_Word MethodEnvVarNames_42;
  MR_Word Var_50;
  MR_Word Var_78;

  succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_4);
  if (succeeded)
  {
    MR_Word ArgNames_7;
    MR_Word Var_44;

    Var_44 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Arity_4);
    mercury__list__map2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_wrap_scalar_common_3[3]), Var_44, &ArgNames_7, &MethodArgs_8);
    {
      InputArgs_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InputArgs_9, 0) = ((MR_Box) (ArgNames_7));
    }
  }
  else
  {
    MethodArgs_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_1[8]));
    InputArgs_9 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_2[5]));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_5[1]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_java_wrap__generate_call_method_3_p_0_2));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (InputArgs_9));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_50, CodeAddrs_5, &CodeAddrStmts_13);
  Context_14 = mercury__term_context__dummy_context_0_f_0();
  if ((CodeAddrStmts_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_wrap.generate_call_method\'/3", (MR_String) "no statements");
      return;
    }
  else
  {
    MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, CodeAddrStmts_13, (MR_Integer) 1))));
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, CodeAddrStmts_13, (MR_Integer) 0))));

    if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
      Stmt_15 = Var_96;
    else
    {
      MR_Integer MaxCase_19;
      MR_Word Cases_25;
      MR_Word SwitchRange_29;
      MR_Integer Var_55;
      MR_Word Var_63;

      Var_55 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), CodeAddrs_5);
      MaxCase_19 = (MR_Integer) ((MR_Unsigned) Var_55 - (MR_Unsigned) 1);
      Var_63 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, MaxCase_19);
      Cases_25 = mercury__list__map_corresponding_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds_to_java_wrap_scalar_common_3[4]), Var_63, CodeAddrStmts_13);
      {
        SwitchRange_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SwitchRange_29, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, SwitchRange_29, 1) = ((MR_Box) (MaxCase_19));
      }
      {
        Stmt_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Stmt_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Stmt_15, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_java_wrap_scalar_common_1[1])));
        MR_hl_field(3, Stmt_15, 2) = ((MR_Box) (MR_mkword(2, &ml_backend__mlds_to_java_wrap_scalar_common_2[1])));
        MR_hl_field(3, Stmt_15, 3) = ((MR_Box) (SwitchRange_29));
        MR_hl_field(3, Stmt_15, 4) = ((MR_Box) (Cases_25));
        MR_hl_field(3, Stmt_15, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Stmt_15, 6) = ((MR_Box) (Context_14));
      }
    }
  }
  PredId_30 = hlds__hlds_pred__initial_pred_id_0_f_0();
  ProcId_31 = hlds__hlds_pred__initial_proc_id_0_f_0();
  {
    ProcLabel_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_33, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_4[0])));
    MR_hl_field(0, ProcLabel_33, 1) = ((MR_Box) (ProcId_31));
  }
  {
    FuncLabel_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_34, 0) = ((MR_Box) (ProcLabel_33));
    MR_hl_field(0, FuncLabel_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    PlainFuncName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PlainFuncName_35, 0) = ((MR_Box) (FuncLabel_34));
    MR_hl_field(0, PlainFuncName_35, 1) = ((MR_Box) (PredId_30));
  }
  MethodName_36 = (MR_Word) ((MR_Word) (PlainFuncName_35));
  {
    MethodParams_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MethodParams_40, 0) = ((MR_Box) (MethodArgs_8));
    MR_hl_field(0, MethodParams_40, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_wrap_scalar_common_1[9])));
  }
  MethodEnvVarNames_42 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Stmt_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *MethodDefn_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MethodName_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (&ml_backend__mlds_to_java_wrap_scalar_common_2[3]));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) (MethodParams_40));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 6) = ((MR_Box) (MethodEnvVarNames_42));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_java_wrap____Unify____call_method_inputs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_java_wrap____Compare____call_method_inputs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_java_wrap__init(void)
{
}

void mercury__ml_backend__mlds_to_java_wrap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_java_wrap__ml_backend__mlds_to_java_wrap__type_ctor_info_call_method_inputs_0);
}

void mercury__ml_backend__mlds_to_java_wrap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_wrap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_wrap.
