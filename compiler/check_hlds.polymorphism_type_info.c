/*
** Automatically generated from `polymorphism_type_info.m'
** by the Mercury compiler,
** version rotd-2022-06-19
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

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_maybe_need_arity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_maybe_need_arity_0[2];

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_maybe_need_arity_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_ctor_is_var_arity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_ctor_is_var_arity_0[2];

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_ctor_is_var_arity_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_info_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_info_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_info_kind_0[2];

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_info_kind_0[2];

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__347__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__339__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0_1(
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
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

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
check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0(
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeCtorIsVarArity_17,
  MR_Word TypeCtorVar_18,
  MR_Word TypeCtorConsId_19,
  MR_Word TypeCtorGoals_20,
  MR_Word ArgTypeInfoVarsMCAs_21,
  MR_Word ArgTypeInfoGoals_22,
  MR_Word InitialVarMapsSnapshot_23,
  MR_Word * TypeInfoVar_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

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
check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0_10001(
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


static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_4[1][4];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__polymorphism_type_info_scalar_common_1[6][2] = {
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
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_3[1]))),
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "type_info_cell"))
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

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_0 = {
  (MR_String) "do_not_need_arity",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_1 = {
  (MR_String) "need_arity_in_second_ti_cell",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_maybe_need_arity_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_maybe_need_arity_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_maybe_need_arity_0_1
};

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_maybe_need_arity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_maybe_need_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_info",
  (MR_String) "maybe_need_arity",
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_maybe_need_arity_0 },
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_maybe_need_arity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_maybe_need_arity_0,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_0 = {
  (MR_String) "tc_is_not_var_arity",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_1 = {
  (MR_String) "tc_is_var_arity",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_ctor_is_var_arity_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_ctor_is_var_arity_0[2] = {
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_0,
  &check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_functor_desc_type_ctor_is_var_arity_0_1
};

static const MR_Integer check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_ctor_is_var_arity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_type_ctor_is_var_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_info",
  (MR_String) "type_ctor_is_var_arity",
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_name_ordered_type_ctor_is_var_arity_0 },
  { check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__enum_ordinal_ordered_type_ctor_is_var_arity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__functor_number_map_type_ctor_is_var_arity_0,

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
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__347__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[2]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__339__1_2_p_0(
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0(
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

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0(
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

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
check_hlds__polymorphism_type_info__poly_get_type_info_locn_raw_7_p_0(
  MR_Word TVarKindMap_8,
  MR_Word TypeVar_9,
  MR_Word * TypeInfoLocn_10,
  MR_Word STATE_VARIABLE_VarTable_0_14,
  MR_Word * STATE_VARIABLE_VarTable_15,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_16,
  MR_Word * STATE_VARIABLE_RttiVarMaps_17)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_13;

  succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_16, TypeVar_9, &TypeInfoLocn0_13);
  if (succeeded)
  {
    *TypeInfoLocn_10 = TypeInfoLocn0_13;
    *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
    *STATE_VARIABLE_VarTable_15 = STATE_VARIABLE_VarTable_0_14;
  }
  else
  {
    MR_Word Kind_27;
    MR_Word Type_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_RttiVarMaps_22_32;
    MR_Word Var_43;

    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_8, TypeVar_9, &Kind_27);
    {
      Type_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_28, 0) = ((MR_Box) (TypeVar_9));
      MR_hl_field(MR_mktag(0), Type_28, 1) = ((MR_Box) (Kind_27));
    }
    Var_43 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo", Var_43, (MR_Integer) 1, &Var_29, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_29, Type_28, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_22_32);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoLocn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
    }
    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TypeVar_9, *TypeInfoLocn_10, STATE_VARIABLE_RttiVarMaps_22_32, STATE_VARIABLE_RttiVarMaps_17);
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_9_p_0(
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
  check_hlds__polymorphism_type_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_9_p_0(TypeCtor_11, TypeCtorInfoVar_12, ConsId_13, TypeCtorInfoGoal_14, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18, STATE_VARIABLE_RttiVarMaps_0_19, STATE_VARIABLE_RttiVarMaps_20);
}

void MR_CALL 
check_hlds__polymorphism_type_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_9_p_0(
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
  MR_Word Var_65;

  *ConsId_13 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_11);
  Var_65 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo", Var_65, (MR_Integer) 1, TypeCtorInfoVar_12, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18);
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

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__347__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(
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
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PolySpecs_20));
    MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140check_hlds.polymorphism_type_info.polymorphism_make_type_info_vars_mi\'/10", (MR_String) "errors while making type_info vars");
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__339__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(
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
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PolySpecs_20));
    MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140check_hlds.polymorphism_type_info.polymorphism_make_type_info_var_mi\'/10", (MR_String) "errors while making type_info var");
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
          MR_Word STATE_VARIABLE_Info_40_49;

          check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(TypeVar_41, &TypeInfoLocn_43, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_40_49);
          check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(TypeVar_41, TypeInfoLocn_43, Context_8, &Var_44, ExtraGoals_10, STATE_VARIABLE_Info_40_49, STATE_VARIABLE_Info_15);
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
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded;
  MR_Word InitialVarMapsSnapshot_20;
  MR_Word ArgTypeInfoVarsMCAs_21;
  MR_Word ArgTypeInfoGoals_22;
  MR_Word TypeCtorConsId_23;
  MR_Word TypeCtorConsIdConstArg_24;
  MR_Word ConstStructVarMap0_25;
  MR_Word TypeCtorVar_28;
  MR_Word TypeCtorGoals_29;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word STATE_VARIABLE_Info_40_40;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word NeedTypeCtorArity_96;
  MR_Word OldTypeCtorVar_26;
  MR_Box conv0_OldTypeCtorVar_26;

  check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "polymorphism_construct_type_info", &InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_39_39);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_13, Context_15, &ArgTypeInfoVarsMCAs_21, &ArgTypeInfoGoals_22, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
  TypeCtorConsId_23 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_12);
  Var_41 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  {
    TypeCtorConsIdConstArg_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_24, 0) = ((MR_Box) (TypeCtorConsId_23));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_24, 1) = ((MR_Box) (Var_41));
  }
  check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_40_40, &ConstStructVarMap0_25);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ConstStructVarMap0_25, ((MR_Box) (TypeCtorConsIdConstArg_24)), &conv0_OldTypeCtorVar_26);
  if (succeeded)
  {
    OldTypeCtorVar_26 = ((MR_Word) (conv0_OldTypeCtorVar_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_27;
    MR_Integer Var_42;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_40_40, &NumReuses_27);
    Var_42 = (MR_Integer) ((MR_Unsigned) NumReuses_27 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_42, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_43_43);
    TypeCtorVar_28 = OldTypeCtorVar_26;
    TypeCtorGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word VarTable0_30;
    MR_Word RttiVarMaps0_31;
    MR_Word VarTable1_32;
    MR_Word RttiVarMaps1_33;
    MR_Word TypeCtorGoal_34;
    MR_Word ConstStructVarMap1_35;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word TypeInfoRHS_55;
    MR_Word Unification_56;
    MR_Word Unify_60;
    MR_Word NonLocals_61;
    MR_Word InstmapDelta_62;
    MR_Word GoalInfo_63;

    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_40_40, &VarTable0_30);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_40_40, &RttiVarMaps0_31);
    check_hlds__polymorphism_type_info__new_type_info_var_vt_7_p_0(Type_11, (MR_Integer) 1, &TypeCtorVar_28, VarTable0_30, &VarTable1_32, RttiVarMaps0_31, &RttiVarMaps1_33);
    {
      TypeInfoRHS_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_55, 0) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_55, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_56, 0) = ((MR_Box) (TypeCtorVar_28));
      MR_hl_field(MR_mktag(0), Unification_56, 1) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(0), Unification_56, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_56, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_56, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_56, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_60, 0) = ((MR_Box) (TypeCtorVar_28));
      MR_hl_field(MR_mktag(1), Unify_60, 1) = ((MR_Box) (TypeInfoRHS_55));
      MR_hl_field(MR_mktag(1), Unify_60, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(1), Unify_60, 3) = ((MR_Box) (Unification_56));
      MR_hl_field(MR_mktag(1), Unify_60, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
    }
    NonLocals_61 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_28);
    InstmapDelta_62 = hlds__instmap__instmap_delta_bind_var_1_f_0(TypeCtorVar_28);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_61, InstmapDelta_62, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_63);
    {
      TypeCtorGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorGoal_34, 0) = ((MR_Box) (Unify_60));
      MR_hl_field(MR_mktag(0), TypeCtorGoal_34, 1) = ((MR_Box) (GoalInfo_63));
    }
    {
      TypeCtorGoals_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_29, 0) = ((MR_Box) (TypeCtorGoal_34));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ((MR_Box) (TypeCtorConsIdConstArg_24)), ((MR_Box) (TypeCtorVar_28)), ConstStructVarMap0_25, &ConstStructVarMap1_35);
    check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap1_35, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_47_47);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable1_32, RttiVarMaps1_33, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_43_43);
  }
  switch (TypeCtorIsVarArity_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NeedTypeCtorArity_96 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_97;
        MR_Word Globals_98;
        MR_Word Target_99;

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_43_43, &ModuleInfo_97);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_97, &Globals_98);
        libs__globals__get_target_2_p_0(Globals_98, &Target_99);
        switch (Target_99) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            NeedTypeCtorArity_96 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            NeedTypeCtorArity_96 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  succeeded = (NeedTypeCtorArity_96 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ArgTypeInfoVarsMCAs_21 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word TypeInfoType_100;
    MR_Word TypeCtorConstArg_101;

    TypeInfoType_100 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_101, 0) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_101, 1) = ((MR_Box) (TypeInfoType_100));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_101));
    }
    *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_29);
    *Var_16 = TypeCtorVar_28;
    *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_43_43;
  }
  else
  {
    MR_Word Cell_118;
    MR_Word ConsId_119;
    MR_Word ConstStructDb0_120;
    MR_Word Enabled_121;
    MR_Word ArgTypeInfoConstArgs_122;

    {
      Cell_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Cell_118, 0) = ((MR_Box) (TypeCtor_12));
    }
    ConsId_119 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_118);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_43_43, &ConstStructDb0_120);
    hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_120, &Enabled_121);
    succeeded = (Enabled_121 == (MR_Integer) 0);
    if (succeeded)
      succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgTypeInfoVarsMCAs_21, &ArgTypeInfoConstArgs_122);
    if (succeeded)
    {
      MR_Word TypeCtorConstArg_123;
      MR_Word TypeCtorInst_124;
      MR_Word ArgTypeInfoInsts_125;
      MR_Word StructConstArgs_130;
      MR_Word StructArgInsts_131;
      MR_Word StructType_132;
      MR_Integer NumArgs_133;
      MR_Word InstConsId_134;
      MR_Word StructInst_135;
      MR_Word DefinedWhere_136;
      MR_Word ConstStruct_137;
      MR_Integer ConstNum_138;
      MR_Word ConstStructDb_139;
      MR_Word Unification_140;
      MR_Word TypeInfoRHS_144;
      MR_Word Unify_145;
      MR_Word NonLocals_146;
      MR_Word TypeInfoVarInst_147;
      MR_Word InstMapDelta_148;
      MR_Word GoalInfo_149;
      MR_Word TypeInfoGoal_150;
      MR_Word Var_157;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_164;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_180;
      MR_Word STATE_VARIABLE_Info_93_181;
      MR_Word STATE_VARIABLE_Info_95_183;
      MR_Word Var_186;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_Word Var_210;
      MR_Word Var_211;

      Var_157 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      {
        TypeCtorConstArg_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_123, 0) = ((MR_Box) (TypeCtorConsId_23));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_123, 1) = ((MR_Box) (Var_157));
      }
      {
        Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (TypeCtorConsId_23));
        MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeCtorInst_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeCtorInst_124, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_124, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TypeCtorInst_124, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_124, 3) = ((MR_Box) (Var_160));
      }
      {
        Var_164 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_164, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_164, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_164, 3) = ((MR_Box) (ConstStructDb0_120));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_164, ArgTypeInfoConstArgs_122, &ArgTypeInfoInsts_125);
      switch (NeedTypeCtorArity_96) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              StructConstArgs_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_130, 0) = ((MR_Box) (TypeCtorConstArg_123));
              MR_hl_field(MR_mktag(1), StructConstArgs_130, 1) = ((MR_Box) (ArgTypeInfoConstArgs_122));
            }
            {
              StructArgInsts_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_131, 0) = ((MR_Box) (TypeCtorInst_124));
              MR_hl_field(MR_mktag(1), StructArgInsts_131, 1) = ((MR_Box) (ArgTypeInfoInsts_125));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ActualArity_126;
            MR_Word ArityConsId_127;
            MR_Word ArityConstArg_128;
            MR_Word ArityInst_129;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_173;
            MR_Word Var_174;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ArgTypeInfoVarsMCAs_21, &ActualArity_126);
            {
              Var_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (ActualArity_126));
            }
            {
              ArityConsId_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityConsId_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ArityConsId_127, 1) = ((MR_Box) (Var_165));
            }
            Var_166 = parse_tree__builtin_lib_types__int_type_0_f_0();
            {
              ArityConstArg_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArityConstArg_128, 0) = ((MR_Box) (ArityConsId_127));
              MR_hl_field(MR_mktag(1), ArityConstArg_128, 1) = ((MR_Box) (Var_166));
            }
            {
              Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (ArityConsId_127));
              MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArityInst_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityInst_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), ArityInst_129, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ArityInst_129, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ArityInst_129, 3) = ((MR_Box) (Var_169));
            }
            {
              Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (ArityConstArg_128));
              MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (ArgTypeInfoConstArgs_122));
            }
            {
              StructConstArgs_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_130, 0) = ((MR_Box) (TypeCtorConstArg_123));
              MR_hl_field(MR_mktag(1), StructConstArgs_130, 1) = ((MR_Box) (Var_173));
            }
            {
              Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (ArityInst_129));
              MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (ArgTypeInfoInsts_125));
            }
            {
              StructArgInsts_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_131, 0) = ((MR_Box) (TypeCtorInst_124));
              MR_hl_field(MR_mktag(1), StructArgInsts_131, 1) = ((MR_Box) (Var_174));
            }
          }
          break;
      }
      StructType_132 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      mercury__list__length_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), StructConstArgs_130, &NumArgs_133);
      InstConsId_134 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_118, NumArgs_133);
      {
        Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_178, 0) = ((MR_Box) (InstConsId_134));
        MR_hl_field(MR_mktag(0), Var_178, 1) = ((MR_Box) (StructArgInsts_131));
      }
      {
        Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
        MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_135, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_135, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_135, 3) = ((MR_Box) (Var_177));
      }
      check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_43_43, &DefinedWhere_136);
      {
        ConstStruct_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_137, 0) = ((MR_Box) (ConsId_119));
        MR_hl_field(MR_mktag(0), ConstStruct_137, 1) = ((MR_Box) (StructConstArgs_130));
        MR_hl_field(MR_mktag(0), ConstStruct_137, 2) = ((MR_Box) (StructType_132));
        MR_hl_field(MR_mktag(0), ConstStruct_137, 3) = ((MR_Box) (StructInst_135));
        MR_hl_field(MR_mktag(0), ConstStruct_137, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_136));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_137, &ConstNum_138, ConstStructDb0_120, &ConstStructDb_139);
      {
        Var_180 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (ConstNum_138));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MCA_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_180));
      }
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_139, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_93_181);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "maybe_init_second_cell", InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_93_181, &STATE_VARIABLE_Info_95_183);
      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_11, (MR_Integer) 0, Var_16, STATE_VARIABLE_Info_95_183, STATE_VARIABLE_Info_37);
      {
        Var_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_186, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_186, 1) = ((MR_Box) (ConstNum_138));
      }
      {
        Unification_140 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_140, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(0), Unification_140, 1) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), Unification_140, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_140, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_140, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_info_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), Unification_140, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_140, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfoRHS_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_144, 0) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_144, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_144, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_145, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(1), Unify_145, 1) = ((MR_Box) (TypeInfoRHS_144));
        MR_hl_field(MR_mktag(1), Unify_145, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
        MR_hl_field(MR_mktag(1), Unify_145, 3) = ((MR_Box) (Unification_140));
        MR_hl_field(MR_mktag(1), Unify_145, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[5]));
      }
      NonLocals_146 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_16);
      {
        Var_207 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (InstConsId_134));
        MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Var_207));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfoVarInst_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_147, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_147, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_147, 3) = ((MR_Box) (Var_206));
      }
      {
        Var_211 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_211, 0) = ((MR_Box) (*Var_16));
        MR_hl_field(MR_mktag(0), Var_211, 1) = ((MR_Box) (TypeInfoVarInst_147));
      }
      {
        Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (Var_211));
        MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_148 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_210);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_146, InstMapDelta_148, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_149);
      {
        TypeInfoGoal_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfoGoal_150, 0) = ((MR_Box) (Unify_145));
        MR_hl_field(MR_mktag(0), TypeInfoGoal_150, 1) = ((MR_Box) (GoalInfo_149));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ExtraGoals_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfoGoal_150));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ArgTypeInfoVars_151;
      MR_Word RttiVarMaps_155;
      MR_Word STATE_VARIABLE_Info_129_217;
      MR_Word STATE_VARIABLE_Info_130_218;

      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_11, (MR_Integer) 0, Var_16, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_129_217);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), ArgTypeInfoVarsMCAs_21, &ArgTypeInfoVars_151);
      switch (NeedTypeCtorArity_96) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RttiVarMaps0_156;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word TypeInfoGoal_232;

            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_129_217, &RttiVarMaps0_156);
            {
              Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (TypeCtorVar_28));
              MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (ArgTypeInfoVars_151));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(Type_11, Var_225, *Var_16, &TypeInfoGoal_232, RttiVarMaps0_156, &RttiVarMaps_155);
            {
              Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (TypeInfoGoal_232));
              MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_226 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_227);
            *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_29, Var_226);
            STATE_VARIABLE_Info_130_218 = STATE_VARIABLE_Info_129_217;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArityVar_152;
            MR_Word ArityGoals_153;
            MR_Word RttiVarMaps1_154;
            MR_Word Var_219;
            MR_Word Var_220;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Integer ActualArity_230;
            MR_Word TypeInfoGoal_231;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgTypeInfoVars_151, &ActualArity_230);
            check_hlds__polymorphism_info__get_poly_const_5_p_0(ActualArity_230, &ArityVar_152, &ArityGoals_153, STATE_VARIABLE_Info_129_217, &STATE_VARIABLE_Info_130_218);
            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_130_218, &RttiVarMaps1_154);
            {
              Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ArityVar_152));
              MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (ArgTypeInfoVars_151));
            }
            {
              Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (TypeCtorVar_28));
              MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_220));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(Type_11, Var_219, *Var_16, &TypeInfoGoal_231, RttiVarMaps1_154, &RttiVarMaps_155);
            {
              Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (TypeInfoGoal_231));
              MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_223);
            Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArityGoals_153, Var_222);
            *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_29, Var_221);
          }
          break;
      }
      check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_155, STATE_VARIABLE_Info_130_218, STATE_VARIABLE_Info_37);
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
    MR_Word InitialVarMapsSnapshot_61;
    MR_Word ArgTypeInfoVarsMCAs_62;
    MR_Word ArgTypeInfoGoals_63;
    MR_Word TypeCtorConsId_64;
    MR_Word TypeCtorConsIdConstArg_65;
    MR_Word ConstStructVarMap0_66;
    MR_Word TypeCtorVar_69;
    MR_Word TypeCtorGoals_70;
    MR_Word STATE_VARIABLE_Info_39_78;
    MR_Word STATE_VARIABLE_Info_40_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_Info_43_82;
    MR_Word OldTypeCtorVar_67;
    MR_Box conv2_OldTypeCtorVar_67;
    MR_Word TypeCtorVarMap1_25;
    MR_Box conv3_TypeCtorVarMap1_25;

    check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "polymorphism_construct_type_info", &InitialVarMapsSnapshot_61, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_39_78);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_12, Context_14, &ArgTypeInfoVarsMCAs_62, &ArgTypeInfoGoals_63, STATE_VARIABLE_Info_39_78, &STATE_VARIABLE_Info_40_79);
    TypeCtorConsId_64 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_11);
    Var_80 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConsIdConstArg_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_65, 0) = ((MR_Box) (TypeCtorConsId_64));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_65, 1) = ((MR_Box) (Var_80));
    }
    check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_40_79, &ConstStructVarMap0_66);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ConstStructVarMap0_66, ((MR_Box) (TypeCtorConsIdConstArg_65)), &conv2_OldTypeCtorVar_67);
    if (succeeded)
    {
      OldTypeCtorVar_67 = ((MR_Word) (conv2_OldTypeCtorVar_67));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_68;
      MR_Integer Var_81;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_40_79, &NumReuses_68);
      Var_81 = (MR_Integer) ((MR_Unsigned) NumReuses_68 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_81, STATE_VARIABLE_Info_40_79, &STATE_VARIABLE_Info_43_82);
      TypeCtorVar_69 = OldTypeCtorVar_67;
      TypeCtorGoals_70 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word VarTable0_71;
      MR_Word VarTable1_73;
      MR_Word RttiVarMaps1_74;
      MR_Word TypeCtorGoal_75;
      MR_Word ConstStructVarMap1_76;
      MR_Word STATE_VARIABLE_Info_47_86;
      MR_Word Var_105;

      check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_40_79, &VarTable0_71);
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_40_79, &RttiVarMaps1_74);
      Var_105 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo", Var_105, (MR_Integer) 1, &TypeCtorVar_69, VarTable0_71, &VarTable1_73);
      check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(TypeCtorConsId_64, TypeCtorVar_69, &TypeCtorGoal_75);
      {
        TypeCtorGoals_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_70, 0) = ((MR_Box) (TypeCtorGoal_75));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ((MR_Box) (TypeCtorConsIdConstArg_65)), ((MR_Box) (TypeCtorVar_69)), ConstStructVarMap0_66, &ConstStructVarMap1_76);
      check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap1_76, STATE_VARIABLE_Info_40_79, &STATE_VARIABLE_Info_47_86);
      check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable1_73, RttiVarMaps1_74, STATE_VARIABLE_Info_47_86, &STATE_VARIABLE_Info_43_82);
    }
    check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0(Type_10, TypeCtor_11, TypeCtorIsVarArity_13, TypeCtorVar_69, TypeCtorConsId_64, TypeCtorGoals_70, ArgTypeInfoVarsMCAs_62, ArgTypeInfoGoals_63, InitialVarMapsSnapshot_61, &TypeInfoVar_22, &TypeInfoConstArg_23, ExtraGoals_16, STATE_VARIABLE_Info_43_82, &STATE_VARIABLE_Info_33_33);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoVarMCA_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_23));
    }
    check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_33, &TypeInfoVarMap1_24);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_24, ((MR_Box) (TypeCtor_11)), &conv3_TypeCtorVarMap1_25);
    if (succeeded)
    {
      TypeCtorVarMap1_25 = ((MR_Word) (conv3_TypeCtorVarMap1_25));
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
    MR_Word TypeCtor_32;
    MR_Word TypeArgs_33;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_11, &TypeCtor_32, &TypeArgs_33);
    if (succeeded)
      check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_32, TypeArgs_33, (MR_Integer) 1, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
    else
      switch (MR_tag((MR_Word) Type_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_11, (MR_Integer) 0))));
            MR_Word TypeInfoLocn_52;
            MR_Word Var_53;
            MR_Word STATE_VARIABLE_Info_40_58;

            check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(TypeVar_50, &TypeInfoLocn_52, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_40_58);
            check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(TypeVar_50, TypeInfoLocn_52, Context_2, &Var_53, &HeadGoals_18, STATE_VARIABLE_Info_40_58, &STATE_VARIABLE_Info_23_23);
            {
              HeadVarMCA_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TypeCtor_61;
            MR_Word TypeArgs_62;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_61, &TypeArgs_62);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_61, TypeArgs_62, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCtor_61;
            MR_Word TypeArgs_62;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_61, &TypeArgs_62);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_61, TypeArgs_62, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
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

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0(
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeCtorIsVarArity_17,
  MR_Word TypeCtorVar_18,
  MR_Word TypeCtorConsId_19,
  MR_Word TypeCtorGoals_20,
  MR_Word ArgTypeInfoVarsMCAs_21,
  MR_Word ArgTypeInfoGoals_22,
  MR_Word InitialVarMapsSnapshot_23,
  MR_Word * TypeInfoVar_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word NeedTypeCtorArity_28;

  switch (TypeCtorIsVarArity_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NeedTypeCtorArity_28 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_29;
        MR_Word Globals_30;
        MR_Word Target_31;

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_29);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_30);
        libs__globals__get_target_2_p_0(Globals_30, &Target_31);
        switch (Target_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            NeedTypeCtorArity_28 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            NeedTypeCtorArity_28 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  succeeded = (NeedTypeCtorArity_28 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ArgTypeInfoVarsMCAs_21 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word TypeInfoType_32;
    MR_Word TypeCtorConstArg_33;

    TypeInfoType_32 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_33, 0) = ((MR_Box) (TypeCtorConsId_19));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_33, 1) = ((MR_Box) (TypeInfoType_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_33));
    }
    *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_20);
    *TypeInfoVar_24 = TypeCtorVar_18;
    *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
  }
  else
  {
    MR_Word Cell_52;
    MR_Word ConsId_53;
    MR_Word ConstStructDb0_54;
    MR_Word Enabled_55;
    MR_Word ArgTypeInfoConstArgs_56;

    {
      Cell_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Cell_52, 0) = ((MR_Box) (TypeCtor_16));
    }
    ConsId_53 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_52);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_34, &ConstStructDb0_54);
    hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_54, &Enabled_55);
    succeeded = (Enabled_55 == (MR_Integer) 0);
    if (succeeded)
      succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgTypeInfoVarsMCAs_21, &ArgTypeInfoConstArgs_56);
    if (succeeded)
    {
      MR_Word TypeCtorConstArg_57;
      MR_Word TypeCtorInst_58;
      MR_Word ArgTypeInfoInsts_59;
      MR_Word StructConstArgs_64;
      MR_Word StructArgInsts_65;
      MR_Word StructType_66;
      MR_Integer NumArgs_67;
      MR_Word InstConsId_68;
      MR_Word StructInst_69;
      MR_Word DefinedWhere_70;
      MR_Word ConstStruct_71;
      MR_Integer ConstNum_72;
      MR_Word ConstStructDb_73;
      MR_Word Unification_74;
      MR_Word TypeInfoRHS_78;
      MR_Word Unify_79;
      MR_Word NonLocals_80;
      MR_Word TypeInfoVarInst_81;
      MR_Word InstMapDelta_82;
      MR_Word GoalInfo_83;
      MR_Word TypeInfoGoal_84;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_98;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word STATE_VARIABLE_Info_93_115;
      MR_Word STATE_VARIABLE_Info_95_117;
      MR_Word Var_120;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_144;
      MR_Word Var_145;

      Var_91 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      {
        TypeCtorConstArg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_57, 0) = ((MR_Box) (TypeCtorConsId_19));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_57, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (TypeCtorConsId_19));
        MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeCtorInst_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeCtorInst_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_58, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TypeCtorInst_58, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TypeCtorInst_58, 3) = ((MR_Box) (Var_94));
      }
      {
        Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (ConstStructDb0_54));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_98, ArgTypeInfoConstArgs_56, &ArgTypeInfoInsts_59);
      switch (NeedTypeCtorArity_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              StructConstArgs_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_64, 0) = ((MR_Box) (TypeCtorConstArg_57));
              MR_hl_field(MR_mktag(1), StructConstArgs_64, 1) = ((MR_Box) (ArgTypeInfoConstArgs_56));
            }
            {
              StructArgInsts_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_65, 0) = ((MR_Box) (TypeCtorInst_58));
              MR_hl_field(MR_mktag(1), StructArgInsts_65, 1) = ((MR_Box) (ArgTypeInfoInsts_59));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ActualArity_60;
            MR_Word ArityConsId_61;
            MR_Word ArityConstArg_62;
            MR_Word ArityInst_63;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_107;
            MR_Word Var_108;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ArgTypeInfoVarsMCAs_21, &ActualArity_60);
            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (ActualArity_60));
            }
            {
              ArityConsId_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityConsId_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ArityConsId_61, 1) = ((MR_Box) (Var_99));
            }
            Var_100 = parse_tree__builtin_lib_types__int_type_0_f_0();
            {
              ArityConstArg_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArityConstArg_62, 0) = ((MR_Box) (ArityConsId_61));
              MR_hl_field(MR_mktag(1), ArityConstArg_62, 1) = ((MR_Box) (Var_100));
            }
            {
              Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (ArityConsId_61));
              MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArityInst_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArityInst_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), ArityInst_63, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ArityInst_63, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ArityInst_63, 3) = ((MR_Box) (Var_103));
            }
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (ArityConstArg_62));
              MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (ArgTypeInfoConstArgs_56));
            }
            {
              StructConstArgs_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructConstArgs_64, 0) = ((MR_Box) (TypeCtorConstArg_57));
              MR_hl_field(MR_mktag(1), StructConstArgs_64, 1) = ((MR_Box) (Var_107));
            }
            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ArityInst_63));
              MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (ArgTypeInfoInsts_59));
            }
            {
              StructArgInsts_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StructArgInsts_65, 0) = ((MR_Box) (TypeCtorInst_58));
              MR_hl_field(MR_mktag(1), StructArgInsts_65, 1) = ((MR_Box) (Var_108));
            }
          }
          break;
      }
      StructType_66 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      mercury__list__length_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), StructConstArgs_64, &NumArgs_67);
      InstConsId_68 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_52, NumArgs_67);
      {
        Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (InstConsId_68));
        MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (StructArgInsts_65));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_69, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_69, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_69, 3) = ((MR_Box) (Var_111));
      }
      check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_0_34, &DefinedWhere_70);
      {
        ConstStruct_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_71, 0) = ((MR_Box) (ConsId_53));
        MR_hl_field(MR_mktag(0), ConstStruct_71, 1) = ((MR_Box) (StructConstArgs_64));
        MR_hl_field(MR_mktag(0), ConstStruct_71, 2) = ((MR_Box) (StructType_66));
        MR_hl_field(MR_mktag(0), ConstStruct_71, 3) = ((MR_Box) (StructInst_69));
        MR_hl_field(MR_mktag(0), ConstStruct_71, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_70));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_71, &ConstNum_72, ConstStructDb0_54, &ConstStructDb_73);
      {
        Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (ConstNum_72));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MCA_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_114));
      }
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_73, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_93_115);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "maybe_init_second_cell", InitialVarMapsSnapshot_23, STATE_VARIABLE_Info_93_115, &STATE_VARIABLE_Info_95_117);
      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_15, (MR_Integer) 0, TypeInfoVar_24, STATE_VARIABLE_Info_95_117, STATE_VARIABLE_Info_35);
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (ConstNum_72));
      }
      {
        Unification_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_74, 0) = ((MR_Box) (*TypeInfoVar_24));
        MR_hl_field(MR_mktag(0), Unification_74, 1) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), Unification_74, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_74, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_info_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), Unification_74, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_74, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfoRHS_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_78, 0) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeInfoRHS_78, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_79, 0) = ((MR_Box) (*TypeInfoVar_24));
        MR_hl_field(MR_mktag(1), Unify_79, 1) = ((MR_Box) (TypeInfoRHS_78));
        MR_hl_field(MR_mktag(1), Unify_79, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
        MR_hl_field(MR_mktag(1), Unify_79, 3) = ((MR_Box) (Unification_74));
        MR_hl_field(MR_mktag(1), Unify_79, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[5]));
      }
      NonLocals_80 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_24);
      {
        Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (InstConsId_68));
        MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfoVarInst_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_81, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_81, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TypeInfoVarInst_81, 3) = ((MR_Box) (Var_140));
      }
      {
        Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (*TypeInfoVar_24));
        MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (TypeInfoVarInst_81));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_82 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_144);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_80, InstMapDelta_82, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_83);
      {
        TypeInfoGoal_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfoGoal_84, 0) = ((MR_Box) (Unify_79));
        MR_hl_field(MR_mktag(0), TypeInfoGoal_84, 1) = ((MR_Box) (GoalInfo_83));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ExtraGoals_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfoGoal_84));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ArgTypeInfoVars_85;
      MR_Word RttiVarMaps_89;
      MR_Word STATE_VARIABLE_Info_129_151;
      MR_Word STATE_VARIABLE_Info_130_152;

      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_15, (MR_Integer) 0, TypeInfoVar_24, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_129_151);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), ArgTypeInfoVarsMCAs_21, &ArgTypeInfoVars_85);
      switch (NeedTypeCtorArity_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RttiVarMaps0_90;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word TypeInfoGoal_166;

            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_129_151, &RttiVarMaps0_90);
            {
              Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (TypeCtorVar_18));
              MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (ArgTypeInfoVars_85));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(Type_15, Var_159, *TypeInfoVar_24, &TypeInfoGoal_166, RttiVarMaps0_90, &RttiVarMaps_89);
            {
              Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (TypeInfoGoal_166));
              MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_161);
            *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_20, Var_160);
            STATE_VARIABLE_Info_130_152 = STATE_VARIABLE_Info_129_151;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArityVar_86;
            MR_Word ArityGoals_87;
            MR_Word RttiVarMaps1_88;
            MR_Word Var_153;
            MR_Word Var_154;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Integer ActualArity_164;
            MR_Word TypeInfoGoal_165;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgTypeInfoVars_85, &ActualArity_164);
            check_hlds__polymorphism_info__get_poly_const_5_p_0(ActualArity_164, &ArityVar_86, &ArityGoals_87, STATE_VARIABLE_Info_129_151, &STATE_VARIABLE_Info_130_152);
            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_130_152, &RttiVarMaps1_88);
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (ArityVar_86));
              MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (ArgTypeInfoVars_85));
            }
            {
              Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (TypeCtorVar_18));
              MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_154));
            }
            check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(Type_15, Var_153, *TypeInfoVar_24, &TypeInfoGoal_165, RttiVarMaps1_88, &RttiVarMaps_89);
            {
              Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (TypeInfoGoal_165));
              MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_157);
            Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArityGoals_87, Var_156);
            *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_20, Var_155);
          }
          break;
      }
      check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_89, STATE_VARIABLE_Info_130_152, STATE_VARIABLE_Info_35);
      *MCA_25 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(
  MR_Word Type_6,
  MR_Word Kind_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word VarTable0_10;
  MR_Word RttiVarMaps0_11;
  MR_Word VarTable_12;
  MR_Word RttiVarMaps_13;

  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_14, &VarTable0_10);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_14, &RttiVarMaps0_11);
  check_hlds__polymorphism_type_info__new_type_info_var_vt_7_p_0(Type_6, Kind_7, Var_8, VarTable0_10, &VarTable_12, RttiVarMaps0_11, &RttiVarMaps_13);
  check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_12, RttiVarMaps_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

void MR_CALL 
check_hlds__polymorphism_type_info__new_type_info_var_vt_7_p_0(
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
        MR_Word Var_22;

        Var_22 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo", Var_22, (MR_Integer) 1, Var_10, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
        *STATE_VARIABLE_RttiVarMaps_17 = STATE_VARIABLE_RttiVarMaps_0_16;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_18;

        Var_18 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo", Var_18, (MR_Integer) 1, Var_10, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
        hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*Var_10, Type_8, STATE_VARIABLE_RttiVarMaps_0_16, STATE_VARIABLE_RttiVarMaps_17);
      }
      break;
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word ArgVars_8,
  MR_Word TypeInfoVar_9,
  MR_Word * TypeInfoGoal_10,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_31,
  MR_Word * STATE_VARIABLE_RttiVarMaps_32)
{
  MR_Word TypeCtor_12;
  MR_Word Cell_13;
  MR_Word ConsId_14;
  MR_Word TypeInfoRHS_15;
  MR_Integer NumArgVars_18;
  MR_Word ArgModes_19;
  MR_Word Unification_20;
  MR_Word Unify_23;
  MR_Word NonLocals_24;
  MR_Word ArgInsts_25;
  MR_Word InstConsId_26;
  MR_Word InstResults_27;
  MR_Word TypeInfoVarInst_28;
  MR_Word InstMapDelta_29;
  MR_Word GoalInfo_30;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_12);
  {
    Cell_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_13, 0) = ((MR_Box) (TypeCtor_12));
  }
  ConsId_14 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_13);
  {
    TypeInfoRHS_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_15, 0) = ((MR_Box) (ConsId_14));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_15, 2) = ((MR_Box) (ArgVars_8));
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgVars_8, &NumArgVars_18);
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_18, ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0])), &ArgModes_19);
  {
    Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_20, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(MR_mktag(0), Unification_20, 1) = ((MR_Box) (ConsId_14));
    MR_hl_field(MR_mktag(0), Unification_20, 2) = ((MR_Box) (ArgVars_8));
    MR_hl_field(MR_mktag(0), Unification_20, 3) = ((MR_Box) (ArgModes_19));
    MR_hl_field(MR_mktag(0), Unification_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_23, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(MR_mktag(1), Unify_23, 1) = ((MR_Box) (TypeInfoRHS_15));
    MR_hl_field(MR_mktag(1), Unify_23, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_23, 3) = ((MR_Box) (Unification_20));
    MR_hl_field(MR_mktag(1), Unify_23, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (ArgVars_8));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_47, &NonLocals_24);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_18, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))), &ArgInsts_25);
  InstConsId_26 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_13, NumArgVars_18);
  Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
  }
  {
    InstResults_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), InstResults_27, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(1), InstResults_27, 1) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(1), InstResults_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (InstConsId_26));
    MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ArgInsts_25));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeInfoVarInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_28, 2) = ((MR_Box) (InstResults_27));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_28, 3) = ((MR_Box) (Var_56));
  }
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (TypeInfoVarInst_28));
  }
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_29 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_59);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_24, InstMapDelta_29, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_30);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeInfoGoal_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
  }
  *STATE_VARIABLE_RttiVarMaps_32 = STATE_VARIABLE_RttiVarMaps_0_31;
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
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word IndexVar_16;
  MR_Word IndexGoals_17;
  MR_Word VarTable0_18;
  MR_Word RttiVarMaps0_19;
  MR_Word ModuleInfo_20;
  MR_Word TVarKindMap_21;
  MR_Word Kind_22;
  MR_Word IndexIntOrVar_23;
  MR_Word ExtractGoals_24;
  MR_Word VarTable_25;
  MR_Word RttiVarMaps_26;
  MR_Word STATE_VARIABLE_Info_29_29;

  check_hlds__polymorphism_info__get_poly_const_5_p_0(Index_11, &IndexVar_16, &IndexGoals_17, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_29_29);
  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_29_29, &VarTable0_18);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_29_29, &RttiVarMaps0_19);
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_29_29, &ModuleInfo_20);
  check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_29_29, &TVarKindMap_21);
  parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_21, TypeVar_9, &Kind_22);
  {
    IndexIntOrVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), IndexIntOrVar_23, 0) = ((MR_Box) (IndexVar_16));
  }
  check_hlds__polymorphism_type_info__gen_extract_type_info_12_p_0(ModuleInfo_20, TypeVar_9, Kind_22, TypeClassInfoVar_10, IndexIntOrVar_23, Context_12, &ExtractGoals_24, TypeInfoVar_14, VarTable0_18, &VarTable_25, RttiVarMaps0_19, &RttiVarMaps_26);
  *Goals_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_17, ExtractGoals_24);
  check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_25, RttiVarMaps_26, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_28);
}

void MR_CALL 
check_hlds__polymorphism_type_info__gen_extract_type_info_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word TypeVar_14,
  MR_Word Kind_15,
  MR_Word TypeClassInfoVar_16,
  MR_Word IndexIntOrVar_17,
  MR_Word Context_18,
  MR_Word * Goals_19,
  MR_Word * TypeInfoVar_20,
  MR_Word STATE_VARIABLE_VarTable_0_29,
  MR_Word * STATE_VARIABLE_VarTable_30,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_31,
  MR_Word * STATE_VARIABLE_RttiVarMaps_32)
{
  MR_Word IndexVar_25;
  MR_Word IndexGoals_26;
  MR_Word Type_27;
  MR_Word CallGoal_28;
  MR_Word STATE_VARIABLE_VarTable_34_34;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_65;

  if (((MR_tag((MR_Word) IndexIntOrVar_17)) == (MR_Integer) 0))
  {
    MR_Integer Index_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IndexIntOrVar_17, (MR_Integer) 0))));
    MR_Word IndexGoal_24;

    hlds__make_goal__make_int_const_construction_alloc_6_p_0(Index_23, (MR_String) "TypeInfoIndex", &IndexGoal_24, &IndexVar_25, STATE_VARIABLE_VarTable_0_29, &STATE_VARIABLE_VarTable_34_34);
    {
      IndexGoals_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IndexGoals_26, 0) = ((MR_Box) (IndexGoal_24));
      MR_hl_field(MR_mktag(1), IndexGoals_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    IndexVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndexIntOrVar_17, (MR_Integer) 0))));
    IndexGoals_26 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_VarTable_34_34 = STATE_VARIABLE_VarTable_0_29;
  }
  {
    Type_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Type_27, 0) = ((MR_Box) (TypeVar_14));
    MR_hl_field(MR_mktag(0), Type_27, 1) = ((MR_Box) (Kind_15));
  }
  Var_65 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo", Var_65, (MR_Integer) 1, TypeInfoVar_20, STATE_VARIABLE_VarTable_34_34, STATE_VARIABLE_VarTable_30);
  hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_20, Type_27, STATE_VARIABLE_RttiVarMaps_0_31, STATE_VARIABLE_RttiVarMaps_32);
  Var_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (*TypeInfoVar_20));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (IndexVar_25));
    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (TypeClassInfoVar_16));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_49));
  }
  Var_44 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeInfoVar_20);
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_13, (MR_Integer) 0, Var_40, (MR_String) "type_info_from_typeclass_info", (MR_Word) ((MR_Unsigned) 0U), Var_43, Var_44, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_18, &CallGoal_28);
  {
    Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (CallGoal_28));
    MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_26, Var_52);
}

void MR_CALL 
check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(
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
    MR_Word VarTable0_26;
    MR_Word RttiVarMaps0_27;
    MR_Word VarTable_28;
    MR_Word RttiVarMaps_29;
    MR_Word Var_40;

    check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_0_16, &TVarKindMap_10);
    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_10, TypeVar_5, &Kind_11);
    {
      Type_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_12, 0) = ((MR_Box) (TypeVar_5));
      MR_hl_field(MR_mktag(0), Type_12, 1) = ((MR_Box) (Kind_11));
    }
    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_16, &VarTable0_26);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_16, &RttiVarMaps0_27);
    Var_40 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo", Var_40, (MR_Integer) 1, &Var_13, VarTable0_26, &VarTable_28);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_13, Type_12, RttiVarMaps0_27, &RttiVarMaps_29);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_28, RttiVarMaps_29, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
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
check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_maybe_need_arity_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_type_info__check_hlds__polymorphism_type_info__type_ctor_info_type_ctor_is_var_arity_0);
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
