/*
** Automatically generated from `polymorphism_type_info.m'
** by the Mercury compiler,
** version rotd-2022-04-18
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


// :- module check_hlds.polymorphism_type_info.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_type_info__init
ENDINIT
*/

#include "check_hlds.polymorphism_type_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_info__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_0[1];

static const MR_DuFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_1[1];

static const MR_DuFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_1;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_1[1];

static const MR_DuPtagLayout check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_ptag_ordered_int_or_var_0[2];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_name_ordered_int_or_var_0[2];

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_int_or_var_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_info_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_info_kind_0[2];

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_info_kind_0[2];

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_raw__303__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_raw__295__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_raw_10_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_raw_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word TypeArgs_13,
  MR_Word TypeCtorIsVarArity_14,
  MR_Word Context_15,
  MR_Word * Var_16,
  MR_Word * MCA_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeArgs_12,
  MR_Word TypeCtorIsVarArity_13,
  MR_Word Context_14,
  MR_Word * TypeInfoVarMCA_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(
  MR_Word ConsId_4,
  MR_Word TypeCtorInfoVar_5,
  MR_Word * TypeCtorInfoGoal_6);

static void MR_CALL 
check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word TypeInfoLocn_9,
  MR_Word Context_10,
  MR_Word * Var_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____int_or_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____int_or_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_info_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_info_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_4[1][4];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[3])),
    ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "TypeInfoIndex"))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2])))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_type_info__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_info__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_info__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_0 = {
  (MR_String) "iov_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_1 = {
  (MR_String) "iov_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__field_types_int_or_var_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_0[1] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_0
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_1[1] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_1
};

static const MR_DuPtagLayout check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_ptag_ordered_int_or_var_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_stag_ordered_int_or_var_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_name_ordered_int_or_var_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_functor_desc_int_or_var_0_1
};

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_int_or_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_int_or_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_type_info____Unify____int_or_var_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_info____Compare____int_or_var_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_info",
  (MR_String) "int_or_var",
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_name_ordered_int_or_var_0 },
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__du_ptag_ordered_int_or_var_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_int_or_var_0,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_0 = {
  (MR_String) "type_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_1 = {
  (MR_String) "type_ctor_info",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_info_kind_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_info_kind_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_1,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_0
};

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_info_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_type_info_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_type_info____Unify____type_info_kind_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_info____Compare____type_info_kind_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_info",
  (MR_String) "type_info_kind",
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_info_kind_0 },
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_info_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_info_kind_0,

};

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_raw__303__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[2]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_raw__295__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[2]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_info_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_info_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info____Compare____int_or_var_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_16 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____int_or_var_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info__new_type_info_var_raw_vt_7_p_0(
  MR_Word Type_8,
  MR_Word Kind_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_VarTable_0_14,
  MR_Word * STATE_VARIABLE_VarTable_15,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_16,
  MR_Word * STATE_VARIABLE_RttiVarMaps_17)
{
  switch (Kind_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo_", Type_8, (MR_Integer) 1, Var_10, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
        *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo_", Type_8, (MR_Integer) 1, Var_10, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
        hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*Var_10, Type_8, STATE_VARIABLE_RttiVarMaps_0_16, STATE_VARIABLE_RttiVarMaps_17);
      }
      break;
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_vt_9_p_0(
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word * TypeCtorInfoVar_12,
  MR_Word * ConsId_13,
  MR_Word * TypeCtorInfoGoal_14,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_19,
  MR_Word * STATE_VARIABLE_RttiVarMaps_20)
{
  MR_Word TypeInfoRHS_25;
  MR_Word Unification_26;
  MR_Word Unify_30;
  MR_Word NonLocals_31;
  MR_Word InstmapDelta_32;
  MR_Word GoalInfo_33;

  *ConsId_13 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_11);
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo_", Type_10, (MR_Integer) 1, TypeCtorInfoVar_12, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18);
  *STATE_VARIABLE_RttiVarMaps_20 = STATE_VARIABLE_RttiVarMaps_0_19;
  {
    TypeInfoRHS_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_25, 0) = ((MR_Box) (*ConsId_13));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_26, 0) = ((MR_Box) (*TypeCtorInfoVar_12));
    MR_hl_field(MR_mktag(0), Unification_26, 1) = ((MR_Box) (*ConsId_13));
    MR_hl_field(MR_mktag(0), Unification_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_26, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_26, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_30, 0) = ((MR_Box) (*TypeCtorInfoVar_12));
    MR_hl_field(MR_mktag(1), Unify_30, 1) = ((MR_Box) (TypeInfoRHS_25));
    MR_hl_field(MR_mktag(1), Unify_30, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_30, 3) = ((MR_Box) (Unification_26));
    MR_hl_field(MR_mktag(1), Unify_30, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  NonLocals_31 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_12);
  InstmapDelta_32 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_12);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_31, InstmapDelta_32, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeCtorInfoGoal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_30));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_33));
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_11_p_0(
  MR_Word Type_12,
  MR_Word TypeCtor_13,
  MR_Word * TypeCtorInfoVar_14,
  MR_Word * ConsId_15,
  MR_Word * TypeCtorInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  check_hlds__polymorphism_type_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_11_p_0(TypeCtor_13, TypeCtorInfoVar_14, ConsId_15, TypeCtorInfoGoal_16, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
}

void MR_CALL 
check_hlds__polymorphism_type_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_11_p_0(
  MR_Word TypeCtor_13,
  MR_Word * TypeCtorInfoVar_14,
  MR_Word * ConsId_15,
  MR_Word * TypeCtorInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  MR_Word TypeInfoRHS_30;
  MR_Word Unification_31;
  MR_Word Unify_35;
  MR_Word NonLocals_36;
  MR_Word InstmapDelta_37;
  MR_Word GoalInfo_38;
  MR_Integer VarNum_68;
  MR_String VarNumStr_69;
  MR_String Name_71;
  MR_Word STATE_VARIABLE_VarSet_26_72;
  MR_Word Var_75;

  *ConsId_15 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_13);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorInfoVar_14, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_72);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, &VarNum_68);
  mercury__string__int_to_string_2_p_0(VarNum_68, &VarNumStr_69);
  *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
  Name_71 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_69);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, Name_71, STATE_VARIABLE_VarSet_26_72, STATE_VARIABLE_VarSet_21);
  Var_75 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(*TypeCtorInfoVar_14, Var_75, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
  {
    TypeInfoRHS_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_30, 0) = ((MR_Box) (*ConsId_15));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_31, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
    MR_hl_field(MR_mktag(0), Unification_31, 1) = ((MR_Box) (*ConsId_15));
    MR_hl_field(MR_mktag(0), Unification_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_31, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_31, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_35, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
    MR_hl_field(MR_mktag(1), Unify_35, 1) = ((MR_Box) (TypeInfoRHS_30));
    MR_hl_field(MR_mktag(1), Unify_35, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_35, 3) = ((MR_Box) (Unification_31));
    MR_hl_field(MR_mktag(1), Unify_35, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  NonLocals_36 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14);
  InstmapDelta_37 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_14);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_36, InstmapDelta_37, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeCtorInfoGoal_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_35));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_type_info_var_vt_9_p_0(
  MR_Word Type_10,
  MR_Word ArgVars_11,
  MR_Word MaybePreferredVar_12,
  MR_Word * TypeInfoVar_13,
  MR_Word * TypeInfoGoal_14,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_19,
  MR_Word * STATE_VARIABLE_RttiVarMaps_20)
{
  MR_Word TypeCtor_31;
  MR_Word Cell_32;
  MR_Word ConsId_33;
  MR_Word TypeInfoRHS_34;
  MR_Integer NumArgVars_37;
  MR_Word ArgModes_38;
  MR_Word Unification_39;
  MR_Word Unify_42;
  MR_Word NonLocals_43;
  MR_Word ArgInsts_44;
  MR_Word InstConsId_45;
  MR_Word InstResults_46;
  MR_Word TypeInfoVarInst_47;
  MR_Word InstMapDelta_48;
  MR_Word GoalInfo_49;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;

  if ((MaybePreferredVar_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo_", Type_10, (MR_Integer) 1, TypeInfoVar_13, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_13, Type_10, STATE_VARIABLE_RttiVarMaps_0_19, STATE_VARIABLE_RttiVarMaps_20);
  }
  else
  {
    *TypeInfoVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePreferredVar_12, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTable_18 = STATE_VARIABLE_VarTable_0_17;
    *STATE_VARIABLE_RttiVarMaps_20 = STATE_VARIABLE_RttiVarMaps_0_19;
  }
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_31);
  {
    Cell_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_32, 0) = ((MR_Box) (TypeCtor_31));
  }
  ConsId_33 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_32);
  {
    TypeInfoRHS_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_34, 0) = ((MR_Box) (ConsId_33));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_34, 2) = ((MR_Box) (ArgVars_11));
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgVars_11, &NumArgVars_37);
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_37, ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0])), &ArgModes_38);
  {
    Unification_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_39, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(0), Unification_39, 1) = ((MR_Box) (ConsId_33));
    MR_hl_field(MR_mktag(0), Unification_39, 2) = ((MR_Box) (ArgVars_11));
    MR_hl_field(MR_mktag(0), Unification_39, 3) = ((MR_Box) (ArgModes_38));
    MR_hl_field(MR_mktag(0), Unification_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Unification_39, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_42, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(1), Unify_42, 1) = ((MR_Box) (TypeInfoRHS_34));
    MR_hl_field(MR_mktag(1), Unify_42, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_42, 3) = ((MR_Box) (Unification_39));
    MR_hl_field(MR_mktag(1), Unify_42, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (ArgVars_11));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_43);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_37, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))), &ArgInsts_44);
  InstConsId_45 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_32, NumArgVars_37);
  Var_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
  }
  {
    InstResults_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), InstResults_46, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(1), InstResults_46, 1) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(1), InstResults_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (InstConsId_45));
    MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ArgInsts_44));
  }
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeInfoVarInst_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_47, 2) = ((MR_Box) (InstResults_46));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_47, 3) = ((MR_Box) (Var_73));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (TypeInfoVarInst_47));
  }
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_48 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_76);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_43, InstMapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_49);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeInfoGoal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_42));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_49));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_raw_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_raw__303__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_raw_10_p_0(
  MR_Word Types_11,
  MR_Word Context_12,
  MR_Word * Vars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_PredInfo_0_23,
  MR_Word * STATE_VARIABLE_PredInfo_24,
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26)
{
  MR_bool succeeded;
  MR_Word PolyInfo0_18;
  MR_Word PolyInfo_19;
  MR_Word PolySpecs_20;
  MR_Word Var_30;
  MR_Word VarsMCAs_41;

  check_hlds__polymorphism_info__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_ProcInfo_0_25, &PolyInfo0_18);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(Types_11, Context_12, &VarsMCAs_41, ExtraGoals_14, PolyInfo0_18, &PolyInfo_19);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), VarsMCAs_41, Vars_13);
  check_hlds__polymorphism_info__poly_info_extract_7_p_0(PolyInfo_19, &PolySpecs_20, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_PredInfo_24, STATE_VARIABLE_ProcInfo_0_25, STATE_VARIABLE_ProcInfo_26, STATE_VARIABLE_ModuleInfo_22);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_raw_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PolySpecs_20));
    MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140check_hlds.polymorphism_type_info.polymorphism_make_type_info_vars_raw\'/10", (MR_String) "errors while making type_info vars");
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_raw_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_raw__295__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_raw_10_p_0(
  MR_Word Type_11,
  MR_Word Context_12,
  MR_Word * Var_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_PredInfo_0_23,
  MR_Word * STATE_VARIABLE_PredInfo_24,
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26)
{
  MR_bool succeeded;
  MR_Word PolyInfo0_18;
  MR_Word PolyInfo_19;
  MR_Word PolySpecs_20;
  MR_Word Var_30;

  check_hlds__polymorphism_info__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_ProcInfo_0_25, &PolyInfo0_18);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_6_p_0(Type_11, Context_12, Var_13, ExtraGoals_14, PolyInfo0_18, &PolyInfo_19);
  check_hlds__polymorphism_info__poly_info_extract_7_p_0(PolyInfo_19, &PolySpecs_20, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_PredInfo_24, STATE_VARIABLE_ProcInfo_0_25, STATE_VARIABLE_ProcInfo_26, STATE_VARIABLE_ModuleInfo_22);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_raw_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PolySpecs_20));
    MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140check_hlds.polymorphism_type_info.polymorphism_make_type_info_var_raw\'/10", (MR_String) "errors while making type_info var");
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_6_p_0(
  MR_Word Types_7,
  MR_Word Context_8,
  MR_Word * Vars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word VarsMCAs_12;

  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(Types_7, Context_8, &VarsMCAs_12, ExtraGoals_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), VarsMCAs_12, Vars_9);
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * Var_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word VarMCA_12;
  MR_Word TypeCtor_23;
  MR_Word TypeArgs_24;

  succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_7, &TypeCtor_23, &TypeArgs_24);
  if (succeeded)
  {
    MR_Word TypeInfoVarMap0_64;
    MR_Word OldTypeInfoVarMCA_66;
    MR_Word TypeInfo_38_82;
    MR_Word TypeInfo_39_83;
    MR_Word TypeCtorVarMap0_65;
    MR_Box conv0_TypeCtorVarMap0_65;
    MR_Box conv1_OldTypeInfoVarMCA_66;

    check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_14, &TypeInfoVarMap0_64);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap0_64, ((MR_Box) (TypeCtor_23)), &conv0_TypeCtorVarMap0_65);
    if (succeeded)
    {
      TypeCtorVarMap0_65 = ((MR_Word) (conv0_TypeCtorVarMap0_65));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_38_82 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]);
      TypeInfo_39_83 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_38_82, TypeInfo_39_83, TypeCtorVarMap0_65, ((MR_Box) (TypeArgs_24)), &conv1_OldTypeInfoVarMCA_66);
      if (succeeded)
      {
        OldTypeInfoVarMCA_66 = ((MR_Word) (conv1_OldTypeInfoVarMCA_66));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_67;
      MR_Integer Var_74;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_14, &NumReuses_67);
      Var_74 = (MR_Integer) ((MR_Unsigned) NumReuses_67 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_74, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
      VarMCA_12 = OldTypeInfoVarMCA_66;
      *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfoVar_68;
      MR_Word TypeInfoConstArg_69;
      MR_Word TypeInfoVarMap1_70;
      MR_Word TypeInfoVarMap_73;
      MR_Word STATE_VARIABLE_Info_33_77;
      MR_Word TypeCtorVarMap1_71;
      MR_Box conv2_TypeCtorVarMap1_71;

      check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(Type_7, TypeCtor_23, TypeArgs_24, (MR_Integer) 1, Context_8, &TypeInfoVar_68, &TypeInfoConstArg_69, ExtraGoals_10, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_33_77);
      {
        VarMCA_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarMCA_12, 0) = ((MR_Box) (TypeInfoVar_68));
        MR_hl_field(MR_mktag(0), VarMCA_12, 1) = ((MR_Box) (TypeInfoConstArg_69));
      }
      check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_77, &TypeInfoVarMap1_70);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_70, ((MR_Box) (TypeCtor_23)), &conv2_TypeCtorVarMap1_71);
      if (succeeded)
      {
        TypeCtorVarMap1_71 = ((MR_Word) (conv2_TypeCtorVarMap1_71));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorVarMap_72;

        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_24)), ((MR_Box) (VarMCA_12)), TypeCtorVarMap1_71, &TypeCtorVarMap_72);
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_23)), ((MR_Box) (TypeCtorVarMap_72)), TypeInfoVarMap1_70, &TypeInfoVarMap_73);
      }
      else
      {
        MR_Word TypeCtorVarMap_79;

        TypeCtorVarMap_79 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_24)), ((MR_Box) (VarMCA_12)));
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_23)), ((MR_Box) (TypeCtorVarMap_79)), TypeInfoVarMap1_70, &TypeInfoVarMap_73);
      }
      check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_73, STATE_VARIABLE_Info_33_77, STATE_VARIABLE_Info_15);
    }
  }
  else
    switch (MR_tag((MR_Word) Type_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeVar_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0))));
          MR_Word TypeInfoLocn_43;
          MR_Word Var_44;
          MR_Word STATE_VARIABLE_Info_38_47;

          check_hlds__polymorphism_type_info__get_type_info_locn_4_p_0(TypeVar_41, &TypeInfoLocn_43, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_38_47);
          check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(TypeVar_41, TypeInfoLocn_43, Context_8, &Var_44, ExtraGoals_10, STATE_VARIABLE_Info_38_47, STATE_VARIABLE_Info_15);
          {
            VarMCA_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), VarMCA_12, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), VarMCA_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_52;
          MR_Word TypeArgs_53;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_52, &TypeArgs_53);
          check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_7, TypeCtor_52, TypeArgs_53, (MR_Integer) 0, Context_8, &VarMCA_12, ExtraGoals_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeCtor_52;
          MR_Word TypeArgs_53;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_52, &TypeArgs_53);
          check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_7, TypeCtor_52, TypeArgs_53, (MR_Integer) 0, Context_8, &VarMCA_12, ExtraGoals_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
        }
        break;
    }
  *Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMCA_12, (MR_Integer) 0))));
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word TypeArgs_13,
  MR_Word TypeCtorIsVarArity_14,
  MR_Word Context_15,
  MR_Word * Var_16,
  MR_Word * MCA_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86)
{
  MR_bool succeeded;
  MR_Word InitialVarMapsSnapshot_20;
  MR_Word ArgTypeInfoVarsMCAs_21;
  MR_Word ArgTypeInfoGoals_22;
  MR_Word VarSet0_23;
  MR_Word VarTypes0_24;
  MR_Word RttiVarMaps0_25;
  MR_Word TypeCtorConsId_26;
  MR_Word TypeCtorConsIdConstArg_27;
  MR_Word ConstStructVarMap0_28;
  MR_Word TypeCtorVar_31;
  MR_Word TypeCtorGoals_32;
  MR_Word VarSet1_33;
  MR_Word VarTypes1_34;
  MR_Word RttiVarMaps1_35;
  MR_Word PassArity_38;
  MR_Word STATE_VARIABLE_Info_88_88;
  MR_Word STATE_VARIABLE_Info_89_89;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_Info_92_92;
  MR_Word STATE_VARIABLE_Info_97_97;
  MR_Word OldTypeCtorVar_29;
  MR_Box conv0_OldTypeCtorVar_29;

  check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "polymorphism_construct_type_info", &InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_0_85, &STATE_VARIABLE_Info_88_88);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_13, Context_15, &ArgTypeInfoVarsMCAs_21, &ArgTypeInfoGoals_22, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_89_89);
  check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_89_89, &VarSet0_23);
  check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_89_89, &VarTypes0_24);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_89_89, &RttiVarMaps0_25);
  TypeCtorConsId_26 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_12);
  Var_90 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  {
    TypeCtorConsIdConstArg_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_27, 0) = ((MR_Box) (TypeCtorConsId_26));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_27, 1) = ((MR_Box) (Var_90));
  }
  check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_89_89, &ConstStructVarMap0_28);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ConstStructVarMap0_28, ((MR_Box) (TypeCtorConsIdConstArg_27)), &conv0_OldTypeCtorVar_29);
  if (succeeded)
  {
    OldTypeCtorVar_29 = ((MR_Word) (conv0_OldTypeCtorVar_29));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_30;
    MR_Integer Var_91;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_89_89, &NumReuses_30);
    Var_91 = (MR_Integer) ((MR_Unsigned) NumReuses_30 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_91, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_92_92);
    TypeCtorVar_31 = OldTypeCtorVar_29;
    TypeCtorGoals_32 = (MR_Word) ((MR_Unsigned) 0U);
    VarSet1_33 = VarSet0_23;
    VarTypes1_34 = VarTypes0_24;
    RttiVarMaps1_35 = RttiVarMaps0_25;
  }
  else
  {
    MR_Word TypeCtorGoal_36;
    MR_Word ConstStructVarMap1_37;
    MR_Integer VarNum_212;
    MR_String VarNumStr_213;
    MR_String Name_215;
    MR_Word STATE_VARIABLE_VarSet_26_216;
    MR_Word Var_219;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &TypeCtorVar_31, VarSet0_23, &STATE_VARIABLE_VarSet_26_216);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_31, &VarNum_212);
    mercury__string__int_to_string_2_p_0(VarNum_212, &VarNumStr_213);
    RttiVarMaps1_35 = RttiVarMaps0_25;
    Name_215 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_213);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_31, Name_215, STATE_VARIABLE_VarSet_26_216, &VarSet1_33);
    Var_219 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(TypeCtorVar_31, Var_219, VarTypes0_24, &VarTypes1_34);
    check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(TypeCtorConsId_26, TypeCtorVar_31, &TypeCtorGoal_36);
    {
      TypeCtorGoals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_32, 0) = ((MR_Box) (TypeCtorGoal_36));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ((MR_Box) (TypeCtorConsIdConstArg_27)), ((MR_Box) (TypeCtorVar_31)), ConstStructVarMap0_28, &ConstStructVarMap1_37);
    check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap1_37, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_92_92);
  }
  check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet1_33, VarTypes1_34, RttiVarMaps1_35, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_97_97);
  switch (TypeCtorIsVarArity_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PassArity_38 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_39;
        MR_Word Globals_40;
        MR_Word Target_41;

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_97_97, &ModuleInfo_39);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_39, &Globals_40);
        libs__globals__get_target_2_p_0(Globals_40, &Target_41);
        switch (Target_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            PassArity_38 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            PassArity_38 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  succeeded = (PassArity_38 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ArgTypeInfoVarsMCAs_21 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word TypeInfoType_42;
    MR_Word TypeCtorConstArg_43;
    MR_Word VarTypes_44;
    MR_Word Var_98;

    TypeInfoType_42 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    *Var_16 = TypeCtorVar_31;
    Var_98 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_43, 0) = ((MR_Box) (TypeCtorConsId_26));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_43, 1) = ((MR_Box) (Var_98));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_43));
    }
    *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_32);
    parse_tree__vartypes__update_var_type_4_p_0(TypeCtorVar_31, TypeInfoType_42, VarTypes1_34, &VarTypes_44);
    check_hlds__polymorphism_info__poly_info_set_varset_types_4_p_0(VarSet1_33, VarTypes_44, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_86);
  }
  else
  {
    MR_Word Cell_45;
    MR_Word ConsId_46;
    MR_Word ConstStructDb0_47;
    MR_Word Enabled_48;
    MR_Word ArgTypeInfoConstArgs_49;

    {
      Cell_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Cell_45, 0) = ((MR_Box) (TypeCtor_12));
    }
    ConsId_46 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_45);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_97_97, &ConstStructDb0_47);
    hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_47, &Enabled_48);
    succeeded = (Enabled_48 == (MR_Integer) 0);
    if (succeeded)
      succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgTypeInfoVarsMCAs_21, &ArgTypeInfoConstArgs_49);
    if (succeeded)
    {
      MR_Word TypeCtorInst_50;
      MR_Word ArgTypeInfoInsts_51;
      MR_Word StructConstArgs_56;
      MR_Word StructArgInsts_57;
      MR_Word StructType_58;
      MR_Integer NumArgs_59;
      MR_Word InstConsId_60;
      MR_Word StructInst_61;
      MR_Word DefinedWhere_62;
      MR_Word ConstStruct_63;
      MR_Integer ConstNum_64;
      MR_Word ConstStructDb_65;
      MR_Word Unification_66;
      MR_Word TypeInfoRHS_70;
      MR_Word Unify_71;
      MR_Word NonLocals_72;
      MR_Word VarInst_73;
      MR_Word InstMapDelta_74;
      MR_Word GoalInfo_75;
      MR_Word TypeInfoGoal_76;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_107;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_123;
      MR_Word STATE_VARIABLE_Info_124_124;
      MR_Word STATE_VARIABLE_Info_126_126;
      MR_Word Var_129;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word TypeCtorConstArg_172;

      Var_100 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      {
        TypeCtorConstArg_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_172, 0) = ((MR_Box) (TypeCtorConsId_26));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_172, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (TypeCtorConsId_26));
        MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeCtorInst_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeCtorInst_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TypeCtorInst_50, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_50, 3) = ((MR_Box) (Var_103));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (ConstStructDb0_47));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_107, ArgTypeInfoConstArgs_49, &ArgTypeInfoInsts_51);
      switch (PassArity_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              StructConstArgs_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_56, 0) = ((MR_Box) (TypeCtorConstArg_172));
              MR_hl_field(MR_mktag(1), StructConstArgs_56, 1) = ((MR_Box) (ArgTypeInfoConstArgs_49));
            }
            {
              StructArgInsts_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_57, 0) = ((MR_Box) (TypeCtorInst_50));
              MR_hl_field(MR_mktag(1), StructArgInsts_57, 1) = ((MR_Box) (ArgTypeInfoInsts_51));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ActualArity_52;
            MR_Word ArityConsId_53;
            MR_Word ArityConstArg_54;
            MR_Word ArityInst_55;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_116;
            MR_Word Var_117;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ArgTypeInfoVarsMCAs_21, &ActualArity_52);
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (ActualArity_52));
            }
            {
              ArityConsId_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityConsId_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ArityConsId_53, 1) = ((MR_Box) (Var_108));
            }
            Var_109 = parse_tree__builtin_lib_types__int_type_0_f_0();
            {
              ArityConstArg_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArityConstArg_54, 0) = ((MR_Box) (ArityConsId_53));
              MR_hl_field(MR_mktag(1), ArityConstArg_54, 1) = ((MR_Box) (Var_109));
            }
            {
              Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (ArityConsId_53));
              MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArityInst_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityInst_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), ArityInst_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ArityInst_55, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ArityInst_55, 3) = ((MR_Box) (Var_112));
            }
            {
              Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ArityConstArg_54));
              MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (ArgTypeInfoConstArgs_49));
            }
            {
              StructConstArgs_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_56, 0) = ((MR_Box) (TypeCtorConstArg_172));
              MR_hl_field(MR_mktag(1), StructConstArgs_56, 1) = ((MR_Box) (Var_116));
            }
            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ArityInst_55));
              MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (ArgTypeInfoInsts_51));
            }
            {
              StructArgInsts_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_57, 0) = ((MR_Box) (TypeCtorInst_50));
              MR_hl_field(MR_mktag(1), StructArgInsts_57, 1) = ((MR_Box) (Var_117));
            }
          }
          break;
      }
      StructType_58 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      mercury__list__length_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), StructConstArgs_56, &NumArgs_59);
      InstConsId_60 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_45, NumArgs_59);
      {
        Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (InstConsId_60));
        MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (StructArgInsts_57));
      }
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_61, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_61, 3) = ((MR_Box) (Var_120));
      }
      check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_97_97, &DefinedWhere_62);
      {
        ConstStruct_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_63, 0) = ((MR_Box) (ConsId_46));
        MR_hl_field(MR_mktag(0), ConstStruct_63, 1) = ((MR_Box) (StructConstArgs_56));
        MR_hl_field(MR_mktag(0), ConstStruct_63, 2) = ((MR_Box) (StructType_58));
        MR_hl_field(MR_mktag(0), ConstStruct_63, 3) = ((MR_Box) (StructInst_61));
        MR_hl_field(MR_mktag(0), ConstStruct_63, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_62));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_63, &ConstNum_64, ConstStructDb0_47, &ConstStructDb_65);
      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (ConstNum_64));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MCA_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_123));
      }
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_65, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_124_124);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "maybe_init_second_cell", InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_124_124, &STATE_VARIABLE_Info_126_126);
      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_11, (MR_Integer) 0, Var_16, STATE_VARIABLE_Info_126_126, STATE_VARIABLE_Info_86);
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ConstNum_64));
      }
      {
        Unification_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_66, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(0), Unification_66, 1) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), Unification_66, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_66, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_info_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Unification_66, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_66, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfoRHS_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_70, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_70, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_70, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_71, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(1), Unify_71, 1) = ((MR_Box) (TypeInfoRHS_70));
        MR_hl_field(MR_mktag(1), Unify_71, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
        MR_hl_field(MR_mktag(1), Unify_71, 3) = ((MR_Box) (Unification_66));
        MR_hl_field(MR_mktag(1), Unify_71, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
      }
      NonLocals_72 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_16);
      {
        Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (InstConsId_60));
        MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        VarInst_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), VarInst_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), VarInst_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), VarInst_73, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), VarInst_73, 3) = ((MR_Box) (Var_148));
      }
      {
        Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (VarInst_73));
      }
      {
        Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_74 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_152);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_72, InstMapDelta_74, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_75);
      {
        TypeInfoGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfoGoal_76, 0) = ((MR_Box) (Unify_71));
        MR_hl_field(MR_mktag(0), TypeInfoGoal_76, 1) = ((MR_Box) (GoalInfo_75));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ExtraGoals_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfoGoal_76));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ArgTypeInfoVars_77;
      MR_Word VarSet_83;
      MR_Word RttiVarMaps_84;
      MR_Word STATE_VARIABLE_Info_163_163;
      MR_Word VarTypes_178;

      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), ArgTypeInfoVarsMCAs_21, &ArgTypeInfoVars_77);
      switch (PassArity_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_158;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word TypeInfoGoal_175;

            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (TypeCtorVar_31));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (ArgTypeInfoVars_77));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_11_p_0(Type_11, Var_158, (MR_Word) ((MR_Unsigned) 0U), Var_16, &TypeInfoGoal_175, VarSet1_33, &VarSet_83, VarTypes1_34, &VarTypes_178, RttiVarMaps1_35, &RttiVarMaps_84);
            {
              Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (TypeInfoGoal_175));
              MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_161);
            *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_32, Var_160);
            STATE_VARIABLE_Info_163_163 = STATE_VARIABLE_Info_97_97;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArityVar_78;
            MR_Word ArityGoals_79;
            MR_Word VarSet2_80;
            MR_Word VarTypes2_81;
            MR_Word RttiVarMaps2_82;
            MR_Word Var_164;
            MR_Word Var_166;
            MR_Word Var_167;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Integer ActualArity_173;
            MR_Word TypeInfoGoal_174;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgTypeInfoVars_77, &ActualArity_173);
            check_hlds__polymorphism_info__get_poly_const_5_p_0(ActualArity_173, &ArityVar_78, &ArityGoals_79, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_163_163);
            check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_163_163, &VarSet2_80);
            check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_163_163, &VarTypes2_81);
            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_163_163, &RttiVarMaps2_82);
            {
              Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (ArityVar_78));
              MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (ArgTypeInfoVars_77));
            }
            {
              Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (TypeCtorVar_31));
              MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_166));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_11_p_0(Type_11, Var_164, (MR_Word) ((MR_Unsigned) 0U), Var_16, &TypeInfoGoal_174, VarSet2_80, &VarSet_83, VarTypes2_81, &VarTypes_178, RttiVarMaps2_82, &RttiVarMaps_84);
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (TypeInfoGoal_174));
              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_169);
            Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArityGoals_79, Var_168);
            *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_32, Var_167);
          }
          break;
      }
      check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_83, VarTypes_178, RttiVarMaps_84, STATE_VARIABLE_Info_163_163, STATE_VARIABLE_Info_86);
      *MCA_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeArgs_12,
  MR_Word TypeCtorIsVarArity_13,
  MR_Word Context_14,
  MR_Word * TypeInfoVarMCA_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word TypeInfoVarMap0_18;
  MR_Word OldTypeInfoVarMCA_20;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_39_39;
  MR_Word TypeCtorVarMap0_19;
  MR_Box conv0_TypeCtorVarMap0_19;
  MR_Box conv1_OldTypeInfoVarMCA_20;

  check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &TypeInfoVarMap0_18);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap0_18, ((MR_Box) (TypeCtor_11)), &conv0_TypeCtorVarMap0_19);
  if (succeeded)
  {
    TypeCtorVarMap0_19 = ((MR_Word) (conv0_TypeCtorVarMap0_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_38_38 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]);
    TypeInfo_39_39 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]);
    succeeded = mercury__map__search_3_p_0(TypeInfo_38_38, TypeInfo_39_39, TypeCtorVarMap0_19, ((MR_Box) (TypeArgs_12)), &conv1_OldTypeInfoVarMCA_20);
    if (succeeded)
    {
      OldTypeInfoVarMCA_20 = ((MR_Word) (conv1_OldTypeInfoVarMCA_20));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Integer NumReuses_21;
    MR_Integer Var_30;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_28, &NumReuses_21);
    Var_30 = (MR_Integer) ((MR_Unsigned) NumReuses_21 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_30, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    *TypeInfoVarMCA_15 = OldTypeInfoVarMCA_20;
    *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TypeInfoVar_22;
    MR_Word TypeInfoConstArg_23;
    MR_Word TypeInfoVarMap1_24;
    MR_Word TypeInfoVarMap_27;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word TypeCtorVarMap1_25;
    MR_Box conv2_TypeCtorVarMap1_25;

    check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(Type_10, TypeCtor_11, TypeArgs_12, TypeCtorIsVarArity_13, Context_14, &TypeInfoVar_22, &TypeInfoConstArg_23, ExtraGoals_16, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_33_33);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoVarMCA_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_23));
    }
    check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_33, &TypeInfoVarMap1_24);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_24, ((MR_Box) (TypeCtor_11)), &conv2_TypeCtorVarMap1_25);
    if (succeeded)
    {
      TypeCtorVarMap1_25 = ((MR_Word) (conv2_TypeCtorVarMap1_25));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorVarMap_26;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_12)), ((MR_Box) (*TypeInfoVarMCA_15)), TypeCtorVarMap1_25, &TypeCtorVarMap_26);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorVarMap_26)), TypeInfoVarMap1_24, &TypeInfoVarMap_27);
    }
    else
    {
      MR_Word TypeCtorVarMap_35;

      TypeCtorVarMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_12)), ((MR_Box) (*TypeInfoVarMCA_15)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorVarMap_35)), TypeInfoVarMap1_24, &TypeInfoVarMap_27);
    }
    check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_27, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_29);
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadVarMCA_17;
    MR_Word HeadGoals_18;
    MR_Word TailVarsMCAs_19;
    MR_Word TailGoals_20;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word TypeCtor_33;
    MR_Word TypeArgs_34;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_11, &TypeCtor_33, &TypeArgs_34);
    if (succeeded)
      check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_33, TypeArgs_34, (MR_Integer) 1, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
    else
      switch (MR_tag((MR_Word) Type_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_11, (MR_Integer) 0))));
            MR_Word TypeInfoLocn_53;
            MR_Word Var_54;
            MR_Word STATE_VARIABLE_Info_38_57;

            check_hlds__polymorphism_type_info__get_type_info_locn_4_p_0(TypeVar_51, &TypeInfoLocn_53, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_38_57);
            check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(TypeVar_51, TypeInfoLocn_53, Context_2, &Var_54, &HeadGoals_18, STATE_VARIABLE_Info_38_57, &STATE_VARIABLE_Info_23_23);
            {
              HeadVarMCA_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TypeCtor_62;
            MR_Word TypeArgs_63;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_62, &TypeArgs_63);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_62, TypeArgs_63, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCtor_62;
            MR_Word TypeArgs_63;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_62, &TypeArgs_63);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_62, TypeArgs_63, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
          }
          break;
      }
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(Types_12, Context_2, &TailVarsMCAs_19, &TailGoals_20, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarMCA_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsMCAs_19));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_18, TailGoals_20);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(
  MR_Word ConsId_4,
  MR_Word TypeCtorInfoVar_5,
  MR_Word * TypeCtorInfoGoal_6)
{
  MR_Word TypeInfoRHS_7;
  MR_Word Unification_8;
  MR_Word Unify_12;
  MR_Word NonLocals_13;
  MR_Word InstmapDelta_14;
  MR_Word GoalInfo_15;

  {
    TypeInfoRHS_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_7, 0) = ((MR_Box) (ConsId_4));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_8, 0) = ((MR_Box) (TypeCtorInfoVar_5));
    MR_hl_field(MR_mktag(0), Unification_8, 1) = ((MR_Box) (ConsId_4));
    MR_hl_field(MR_mktag(0), Unification_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_8, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_8, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_8, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_8, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_12, 0) = ((MR_Box) (TypeCtorInfoVar_5));
    MR_hl_field(MR_mktag(1), Unify_12, 1) = ((MR_Box) (TypeInfoRHS_7));
    MR_hl_field(MR_mktag(1), Unify_12, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_12, 3) = ((MR_Box) (Unification_8));
    MR_hl_field(MR_mktag(1), Unify_12, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  NonLocals_13 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorInfoVar_5);
  InstmapDelta_14 = hlds__instmap__instmap_delta_bind_var_1_f_0(TypeCtorInfoVar_5);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_13, InstmapDelta_14, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeCtorInfoGoal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_15));
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(
  MR_Word Type_6,
  MR_Word Kind_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word VarSet0_10;
  MR_Word VarTypes0_11;
  MR_Word RttiVarMaps0_12;
  MR_Word VarSet_13;
  MR_Word VarTypes_14;
  MR_Word RttiVarMaps_15;

  check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_16, &VarSet0_10);
  check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_16, &VarTypes0_11);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_16, &RttiVarMaps0_12);
  check_hlds__polymorphism_type_info__new_type_info_var_raw_9_p_0(Type_6, Kind_7, Var_8, VarSet0_10, &VarSet_13, VarTypes0_11, &VarTypes_14, RttiVarMaps0_12, &RttiVarMaps_15);
  check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_13, VarTypes_14, RttiVarMaps_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

void MR_CALL 
check_hlds__polymorphism_type_info__new_type_info_var_raw_9_p_0(
  MR_Word Type_10,
  MR_Word Kind_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  MR_Integer VarNum_16;
  MR_String VarNumStr_17;
  MR_String Prefix_18;
  MR_String Name_19;
  MR_Word STATE_VARIABLE_VarSet_26_26;
  MR_Word Var_29;

  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_26);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, &VarNum_16);
  mercury__string__int_to_string_2_p_0(VarNum_16, &VarNumStr_17);
  switch (Kind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Prefix_18 = (MR_String) "TypeCtorInfo_";
        *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
      }
      break;
    case (MR_Integer) 0:
      {
        Prefix_18 = (MR_String) "TypeInfo_";
        hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*Var_12, Type_10, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
      }
      break;
  }
  Name_19 = mercury__string__f_43_43_2_f_0(Prefix_18, VarNumStr_17);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, Name_19, STATE_VARIABLE_VarSet_26_26, STATE_VARIABLE_VarSet_21);
  Var_29 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(*Var_12, Var_29, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_type_info_var_11_p_0(
  MR_Word Type_12,
  MR_Word ArgVars_13,
  MR_Word MaybePreferredVar_14,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  MR_Word TypeCtor_37;
  MR_Word Cell_38;
  MR_Word ConsId_39;
  MR_Word TypeInfoRHS_40;
  MR_Integer NumArgVars_43;
  MR_Word ArgModes_44;
  MR_Word Unification_45;
  MR_Word Unify_48;
  MR_Word NonLocals_49;
  MR_Word ArgInsts_50;
  MR_Word InstConsId_51;
  MR_Word InstResults_52;
  MR_Word TypeInfoVarInst_53;
  MR_Word InstMapDelta_54;
  MR_Word GoalInfo_55;
  MR_Word Var_70;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word Var_83;

  if ((MaybePreferredVar_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer VarNum_104;
    MR_String VarNumStr_105;
    MR_String Name_107;
    MR_Word STATE_VARIABLE_VarSet_26_108;
    MR_Word Var_111;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_15, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_108);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_15, &VarNum_104);
    mercury__string__int_to_string_2_p_0(VarNum_104, &VarNumStr_105);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_15, Type_12, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
    Name_107 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_105);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_15, Name_107, STATE_VARIABLE_VarSet_26_108, STATE_VARIABLE_VarSet_21);
    Var_111 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(*TypeInfoVar_15, Var_111, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
  }
  else
  {
    *TypeInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePreferredVar_14, (MR_Integer) 0))));
    *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
    *STATE_VARIABLE_VarTypes_23 = STATE_VARIABLE_VarTypes_0_22;
    *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
  }
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_12, &TypeCtor_37);
  {
    Cell_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_38, 0) = ((MR_Box) (TypeCtor_37));
  }
  ConsId_39 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_38);
  {
    TypeInfoRHS_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_40, 0) = ((MR_Box) (ConsId_39));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_40, 2) = ((MR_Box) (ArgVars_13));
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgVars_13, &NumArgVars_43);
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_43, ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0])), &ArgModes_44);
  {
    Unification_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_45, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(0), Unification_45, 1) = ((MR_Box) (ConsId_39));
    MR_hl_field(MR_mktag(0), Unification_45, 2) = ((MR_Box) (ArgVars_13));
    MR_hl_field(MR_mktag(0), Unification_45, 3) = ((MR_Box) (ArgModes_44));
    MR_hl_field(MR_mktag(0), Unification_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_45, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Unification_45, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_48, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(1), Unify_48, 1) = ((MR_Box) (TypeInfoRHS_40));
    MR_hl_field(MR_mktag(1), Unify_48, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_48, 3) = ((MR_Box) (Unification_45));
    MR_hl_field(MR_mktag(1), Unify_48, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  {
    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (ArgVars_13));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70, &NonLocals_49);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_43, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))), &ArgInsts_50);
  InstConsId_51 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_38, NumArgVars_43);
  Var_74 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
  }
  {
    InstResults_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), InstResults_52, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(1), InstResults_52, 1) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(1), InstResults_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (InstConsId_51));
    MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ArgInsts_50));
  }
  {
    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeInfoVarInst_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_53, 2) = ((MR_Box) (InstResults_52));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_53, 3) = ((MR_Box) (Var_79));
  }
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (TypeInfoVarInst_53));
  }
  {
    Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_54 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_82);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_49, InstMapDelta_54, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_55);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeInfoGoal_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_48));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_55));
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word TypeInfoLocn_9,
  MR_Word Context_10,
  MR_Word * Var_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  if (((MR_tag((MR_Word) TypeInfoLocn_9)) == (MR_Integer) 0))
  {
    *Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_9, (MR_Integer) 0))));
    *ExtraGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_9, (MR_Integer) 0))));
    MR_Integer Index_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_9, (MR_Integer) 1))));

    check_hlds__polymorphism_type_info__polymorphism_extract_type_info_8_p_0(TypeVar_8, TypeClassInfoVar_15, Index_16, Context_10, ExtraGoals_12, Var_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_extract_type_info_8_p_0(
  MR_Word TypeVar_9,
  MR_Word TypeClassInfoVar_10,
  MR_Integer Index_11,
  MR_Word Context_12,
  MR_Word * Goals_13,
  MR_Word * TypeInfoVar_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_Word IndexVar_16;
  MR_Word IndexGoals_17;
  MR_Word VarSet0_18;
  MR_Word VarTypes0_19;
  MR_Word RttiVarMaps0_20;
  MR_Word ModuleInfo_21;
  MR_Word TVarKindMap_22;
  MR_Word Kind_23;
  MR_Word IndexIntOrVar_24;
  MR_Word ExtractGoals_25;
  MR_Word VarSet_26;
  MR_Word VarTypes_27;
  MR_Word RttiVarMaps_28;
  MR_Word STATE_VARIABLE_Info_31_31;

  check_hlds__polymorphism_info__get_poly_const_5_p_0(Index_11, &IndexVar_16, &IndexGoals_17, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
  check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_31_31, &VarSet0_18);
  check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_31_31, &VarTypes0_19);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_31_31, &RttiVarMaps0_20);
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_31_31, &ModuleInfo_21);
  check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_31_31, &TVarKindMap_22);
  parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_22, TypeVar_9, &Kind_23);
  {
    IndexIntOrVar_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), IndexIntOrVar_24, 0) = ((MR_Box) (IndexVar_16));
  }
  check_hlds__polymorphism_type_info__gen_extract_type_info_14_p_0(ModuleInfo_21, TypeVar_9, Kind_23, TypeClassInfoVar_10, IndexIntOrVar_24, Context_12, &ExtractGoals_25, TypeInfoVar_14, VarSet0_18, &VarSet_26, VarTypes0_19, &VarTypes_27, RttiVarMaps0_20, &RttiVarMaps_28);
  *Goals_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_17, ExtractGoals_25);
  check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_26, VarTypes_27, RttiVarMaps_28, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_30);
}

void MR_CALL 
check_hlds__polymorphism_type_info__gen_extract_type_info_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word TypeVar_16,
  MR_Word Kind_17,
  MR_Word TypeClassInfoVar_18,
  MR_Word IndexIntOrVar_19,
  MR_Word Context_20,
  MR_Word * Goals_21,
  MR_Word * TypeInfoVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_VarTypes_0_34,
  MR_Word * STATE_VARIABLE_VarTypes_35,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_36,
  MR_Word * STATE_VARIABLE_RttiVarMaps_37)
{
  MR_Word IndexVar_28;
  MR_Word IndexGoals_29;
  MR_Word Type_30;
  MR_Word CallGoal_31;
  MR_Word STATE_VARIABLE_VarSet_39_39;
  MR_Word STATE_VARIABLE_VarTypes_40_40;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Integer VarNum_75;
  MR_String VarNumStr_76;
  MR_String Name_78;
  MR_Word STATE_VARIABLE_VarSet_26_79;
  MR_Word Var_82;

  if (((MR_tag((MR_Word) IndexIntOrVar_19)) == (MR_Integer) 0))
  {
    MR_Integer Index_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IndexIntOrVar_19, (MR_Integer) 0))));
    MR_Word IndexGoal_27;

    hlds__make_goal__make_int_const_construction_alloc_8_p_0(Index_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_type_info_scalar_common_3[0])), &IndexGoal_27, &IndexVar_28, STATE_VARIABLE_VarSet_0_32, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_VarTypes_0_34, &STATE_VARIABLE_VarTypes_40_40);
    {
      IndexGoals_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IndexGoals_29, 0) = ((MR_Box) (IndexGoal_27));
      MR_hl_field(MR_mktag(1), IndexGoals_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    IndexVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndexIntOrVar_19, (MR_Integer) 0))));
    IndexGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_VarSet_39_39 = STATE_VARIABLE_VarSet_0_32;
    STATE_VARIABLE_VarTypes_40_40 = STATE_VARIABLE_VarTypes_0_34;
  }
  {
    Type_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Type_30, 0) = ((MR_Box) (TypeVar_16));
    MR_hl_field(MR_mktag(0), Type_30, 1) = ((MR_Box) (Kind_17));
  }
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_22, STATE_VARIABLE_VarSet_39_39, &STATE_VARIABLE_VarSet_26_79);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, &VarNum_75);
  mercury__string__int_to_string_2_p_0(VarNum_75, &VarNumStr_76);
  hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_22, Type_30, STATE_VARIABLE_RttiVarMaps_0_36, STATE_VARIABLE_RttiVarMaps_37);
  Name_78 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_76);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, Name_78, STATE_VARIABLE_VarSet_26_79, STATE_VARIABLE_VarSet_33);
  Var_82 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(*TypeInfoVar_22, Var_82, STATE_VARIABLE_VarTypes_40_40, STATE_VARIABLE_VarTypes_35);
  Var_48 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (*TypeInfoVar_22));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IndexVar_28));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (TypeClassInfoVar_18));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_57));
  }
  Var_52 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeInfoVar_22);
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_15, (MR_Integer) 0, Var_48, (MR_String) "type_info_from_typeclass_info", (MR_Word) ((MR_Unsigned) 0U), Var_51, Var_52, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_20, &CallGoal_31);
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CallGoal_31));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_29, Var_60);
}

void MR_CALL 
check_hlds__polymorphism_type_info__get_type_info_locn_4_p_0(
  MR_Word TypeVar_5,
  MR_Word * TypeInfoLocn_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocnPrime_9;
  MR_Word RttiVarMaps0_8;

  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_16, &RttiVarMaps0_8);
  succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps0_8, TypeVar_5, &TypeInfoLocnPrime_9);
  if (succeeded)
  {
    *TypeInfoLocn_6 = TypeInfoLocnPrime_9;
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
  else
  {
    MR_Word TVarKindMap_10;
    MR_Word Kind_11;
    MR_Word Type_12;
    MR_Word Var_13;
    MR_Word RttiVarMaps1_14;
    MR_Word RttiVarMaps_15;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word VarSet0_26;
    MR_Word VarTypes0_27;
    MR_Word RttiVarMaps0_28;
    MR_Word VarSet_29;
    MR_Word VarTypes_30;
    MR_Word RttiVarMaps_31;
    MR_Integer VarNum_44;
    MR_String VarNumStr_45;
    MR_String Name_47;
    MR_Word STATE_VARIABLE_VarSet_26_48;
    MR_Word Var_51;

    check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_0_16, &TVarKindMap_10);
    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_10, TypeVar_5, &Kind_11);
    {
      Type_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_12, 0) = ((MR_Box) (TypeVar_5));
      MR_hl_field(MR_mktag(0), Type_12, 1) = ((MR_Box) (Kind_11));
    }
    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_16, &VarSet0_26);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_16, &VarTypes0_27);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_16, &RttiVarMaps0_28);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_13, VarSet0_26, &STATE_VARIABLE_VarSet_26_48);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, &VarNum_44);
    mercury__string__int_to_string_2_p_0(VarNum_44, &VarNumStr_45);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_13, Type_12, RttiVarMaps0_28, &RttiVarMaps_31);
    Name_47 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_45);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, Name_47, STATE_VARIABLE_VarSet_26_48, &VarSet_29);
    Var_51 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(Var_13, Var_51, VarTypes0_27, &VarTypes_30);
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_29, VarTypes_30, RttiVarMaps_31, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoLocn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
    }
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_19_19, &RttiVarMaps1_14);
    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TypeVar_5, *TypeInfoLocn_6, RttiVarMaps1_14, &RttiVarMaps_15);
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_17);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____int_or_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_info____Unify____int_or_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____int_or_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_info____Compare____int_or_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_info_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_info____Unify____type_info_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_info_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_info____Compare____type_info_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__polymorphism_type_info__init(void)
{
}

void mercury__check_hlds__polymorphism_type_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_int_or_var_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_type_info_kind_0);
}

void mercury__check_hlds__polymorphism_type_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_type_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_type_info.
